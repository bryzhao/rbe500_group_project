#!/usr/bin/env python3

"""
Group Assignment 2
RBE500 - Fall 2023

Note: use a command like this to test our effort controller (by suppling reference joint positions):
 > ros2 topic pub /forward_effort_controller/commands std_msgs/msg/Float64MultiArray "{data: [10.0, 10.0, 20.5]}"


Service calls:
 > ros2 service call /joint_vel_input_service rrbot_gazebo/srv/JointVelocityInput "{input_q1_dot: 1.0, input_q2_dot: 2.0,
                                                                                input_q3_dot: 3.0}"

 > ros2 service call /cart_vel_input_service rrbot_gazebo/srv/CartesianVelocityInput "{input_x_dot: 1.0,
                                                                                    input_y_dot: 0.0,
                                                                                    input_z_dot: 0.0}"
"""
import math
import time

import numpy as np
import rclpy
from numpy import ndarray
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState

from rrbot_gazebo.srv import CartesianVelocityInput, JointVelocityInput

# Globals / tunable gains for PI controller

Kp1 = 40
Ki1 = 0.01

Kp2 = 15.0
Ki2 = 0.01

Kp3 = 7.0
Ki3 = 0.01

l1 = 1  # Length of link1
l2 = 1  # Length of link2
l3 = 1  # Length of link3

# Global variable to store the last time the flag was set
last_time_flag_set = 0

np.set_printoptions(precision=3, suppress=True)


def can_set_flag():
    global last_time_flag_set
    current_time = time.time()
    if current_time - last_time_flag_set > 10:
        last_time_flag_set = current_time
        return True
    else:
        return False


class JointVelocityController(Node):
    """
    Simple joint velocity controller for controlling our SCARA robot in Gazebo.
    """

    def __init__(self):
        super().__init__('joint_velocity_control_node')

        # Gazebo publishes to a JointState message, so we'll have our callback listen to this topic
        self._joint_state_subscription = self.create_subscription(
            msg_type=JointState, topic='/joint_states', callback=self.gazebo_listener_callback, qos_profile=10)
        self._cartesian_velocity_input_service = self.create_service(srv_type=CartesianVelocityInput,
                                                                     callback=self._cart_vel_serv_callback,
                                                                     srv_name="cart_vel_input_service")
        self._joint_velocity_input_service = self.create_service(srv_type=JointVelocityInput,
                                                                 callback=self._joint_vel_serv_callback,
                                                                 srv_name="joint_vel_input_service")
        self._forward_effort_publisher = self.create_publisher(msg_type=Float64MultiArray,
                                                               topic='/forward_effort_controller/commands',
                                                               qos_profile=10)

        self._q1_dot_reference = 0.0
        self._q2_dot_reference = 0.0
        self._q3_dot_reference = 0.0

        self.cart_velocities = np.array([0, 0, 0])

        # Store our last measured joint velocities, so we can estimate joint accelerations later
        self._last_q1_dot = 0.0
        self._last_q2_dot = 0.0
        self._last_q3_dot = 0.0

        self.e1_integral = 0.0
        self.e2_integral = 0.0
        self.e3_integral = 0.0

        self.get_logger().info(f"Initializing {self.get_name()} node...")

    def _compute_jacobian_from_joint_positions(self, joint_angles: list) -> ndarray:
        """Derived SCARA 3DOF Jacobian. Implement here."""

        q1 = joint_angles[0]
        q2 = joint_angles[1]
        q3 = joint_angles[2]

        # Jacobian of Joint 1
        J1 = np.array([-((l2 * np.sin(q1) * np.cos(q2)) + (l2 * np.cos(q1) * np.sin(q2)) + (l1 * np.sin(q1))),
                       (l2 * np.cos(q1) * np.cos(q2)) - (l2 * np.sin(q1) * np.cos(q2)) + (l1 * np.cos(q1)), 0, 0, 0, 1])

        # Jacobian of Joint 2
        J2 = np.array(
            [-(l2 * np.sin(q1) * np.cos(q2) + l2 * np.cos(q1) * np.sin(q2) + l1 * np.sin(q1) - l1 * np.sin(q1)),
             (l2 * np.cos(q1) * np.cos(q2) - l2 * np.sin(q1) * np.cos(q2) + l1 * np.cos(q1) - l1 * np.cos(q1)),
             0, 0, 0, 1])

        # Jacobian of Joint 3
        J3 = np.array([0, 0, q3, 0, 0, 1])

        # Merging joint jacobians into 1 matrix
        jacobian = np.vstack((J1, J2, J3)).T

        self.jacobian = jacobian

        return jacobian

    def compute_joint_velocities_from_cart_velocity(self, cartesian_velocities) -> ndarray:
        """Implement Pseudoinverse Jacobian."""

        # Note that we compute and store the jacobian internally on every cycle.
        angular_velocities = [0, 0, 0]  # end effector has no angular vel since it's modeled as a point
        twist = np.concatenate([cartesian_velocities, angular_velocities])
        inv_jacobian = np.linalg.pinv(self.jacobian)
        joint_velocities = np.dot(inv_jacobian, twist)

        return joint_velocities

    def _joint_vel_serv_callback(self, request: JointVelocityInput.Request, response):
        """If we receive a joint velocity service request, set our reference values directly.
        Used for testing controller performance (transient response)"""
        self.get_logger().info(f"Request received: {request}.")

        self._q1_dot_reference = request.input_q1_dot
        self._q2_dot_reference = request.input_q2_dot
        self._q3_dot_reference = request.input_q3_dot

        response.status = True
        return response

    def _cart_vel_serv_callback(self, request: CartesianVelocityInput.Request, response):
        """If we receive a Cartesian service request, map the velocities through the Jacobian to get
        joint velocities, and then set our reference values."""

        self.get_logger().info(f"Request received: {request}.")

        self.cart_velocities = np.array([request.input_x_dot, request.input_y_dot,
                                         request.input_z_dot])
        q_dot_reference = self.compute_joint_velocities_from_cart_velocity(cartesian_velocities=self.cart_velocities)

        self._q1_dot_reference = q_dot_reference[0]
        self._q2_dot_reference = q_dot_reference[1]
        self._q3_dot_reference = q_dot_reference[2]

        # Return a successful status, if we've received the service call
        response.status = True
        return response

    @staticmethod
    def wrap_angle(angle):
        """Wrap the angle to the range [0, 2*pi)."""
        return angle % (2 * math.pi)

    def gazebo_listener_callback(self, msg: JointState) -> None:
        """
        This is the callback that is executed every time we receive a message of JointState on the
        joint_angles topic.
        :param msg: ROS2 message of type JointState
        :return: None
        """
        global last_time_flag_set

        # Retrieves a float array of q1, q2, q3
        if len(msg.position) != 3:
            print("[WARNING] Callback needs to accept 3 joint angles only.")

        # Parse out joint angles and velocities
        joint_angles = msg.position

        if can_set_flag():
            wrapped_angle = self.wrap_angle(joint_angles[1])
            if 0.15 >= wrapped_angle >= -0.15 or 3.0 >= wrapped_angle <= 3.14:
                print("SWAPPING DIRECTION OF EEF")
                self.cart_velocities[1] *= -1

        # Compute and then store jacobian internally
        self._compute_jacobian_from_joint_positions(joint_angles)

        # Update reference joint velocities
        q_dot_reference = self.compute_joint_velocities_from_cart_velocity(cartesian_velocities=self.cart_velocities)

        self._q1_dot_reference = q_dot_reference[0]
        self._q2_dot_reference = q_dot_reference[1]
        self._q3_dot_reference = q_dot_reference[2]

        joint_velocities = msg.velocity
        e1 = self._q1_dot_reference - joint_velocities[0]
        e2 = self._q2_dot_reference - joint_velocities[1]
        e3 = self._q3_dot_reference - joint_velocities[2]

        # dt = 0.01  # 100 [Hz] for cycle time in simulation

        # sums error every time step, Might enable integral windup
        self.e1_integral += e1 * 0.01
        self.e2_integral += e2 * 0.01
        self.e3_integral += e3 * 0.01

        if self.e1_integral >= 0.1:
            self.e1_integral = 0.1
        if self.e1_integral <= -0.1:
            self.e1_integral = -0.1

        if self.e2_integral > 0.1:
            self.e2_integral = 0.1
        if self.e2_integral <= -0.1:
            self.e2_integral = -0.1

        if self.e3_integral > 0.1:
            self.e3_integral = 0.1
        if self.e3_integral <= -0.1:
            self.e3_integral = -0.1

        # With leaky integrator: lowers integral at a constant rate to prevent integral windup
        # leak_constant = 0.6
        # self.e1_integral = self.e1_integral * (1 - leak_constant) + e1
        # self.e2_integral = self.e2_integral * (1 - leak_constant) + e2
        # self.e3_integral = self.e3_integral * (1 - leak_constant) + e3

        # View integral windup
        print("J1 Integral")
        print(self.e1_integral)
        print("J2 Integral")
        print(self.e2_integral)
        print("J3 Integral")
        print(self.e3_integral)

        # Compute control inputs, e.g. efforts to the actuators. We're only using a PI controller for now.
        u1 = Kp1 * e1 + Ki1 * self.e1_integral
        u2 = Kp2 * e2 + Ki2 * self.e2_integral
        u3 = Kp3 * e3 + Ki3 * self.e3_integral

        control_effort = Float64MultiArray()
        control_effort.data = [u1, u2, u3]

        self._forward_effort_publisher.publish(control_effort)


def main(args=None):
    rclpy.init(args=args)
    control_node = JointVelocityController()
    rclpy.spin(control_node)

    # Enable graceful shutdown.
    control_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
