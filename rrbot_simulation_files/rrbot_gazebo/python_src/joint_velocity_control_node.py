#!/usr/bin/env python3

"""
Group Assignment 2
RBE500 - Fall 2023

Note: use a command like this to test our effort controller (by suppling reference joint positions):
 > ros2 topic pub /forward_effort_controller/commands std_msgs/msg/Float64MultiArray "{data: [10.0, 10.0, 20.5]}"


Service calls:
 > ros2 service call /joint_input_service rrbot_gazebo/srv/JointVelocityInput "{input_q1_dot: 1.0, input_q2_dot: 2.0,
                                                                                input_q3_dot: 3.0}"

 > ros2 service call /joint_input_service rrbot_gazebo/srv/CartesianVelocityInput "{input_q1_dot: 1.0,
                                                                                    input_q2_dot: 2.0,
                                                                                    input_q3_dot: 3.0}"
"""

import numpy as np
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState

from rrbot_gazebo.srv import CartesianVelocityInput, JointVelocityInput

# Globals / tunable gains for PD controller
Kp1 = 15.0
Kd1 = 18.5

Kp2 = 20.0
Kd2 = 11.0

Kp3 = 50.0
Kd3 = 5.0

np.set_printoptions(precision=3, suppress=True)


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

        # Store our last measured joint velocities, so we can estimate joint accelerations later
        self._last_q1_dot = 0.0
        self._last_q2_dot = 0.0
        self._last_q3_dot = 0.0

        self.get_logger().info(f"Initializing {self.get_name()} node...")

    def _compute_jacobian_from_joint_positions(self, joint_positions) -> list:
        """Implement here."""
        raise NotImplementedError

    def compute_joint_velocities_from_cart_velocity(self, cartesian_velocities) -> list:
        """Implement here."""
        raise NotImplementedError

    def _joint_vel_serv_callback(self, request: JointVelocityInput.Request, response):
        """If we receive a joint velocity service request, set our reference values directly."""
        self.get_logger().info(f"Request received: {request}.")

        self._q1_dot_reference = request.input_q1_dot
        self._q2_dot_reference = request.input_q2_dot
        self._q3_dot_reference = request.input_q3_dot

        # Return a successful status, if we've received the service call
        response.status = True
        return response

    def _cart_vel_serv_callback(self, request: CartesianVelocityInput.Request, response):
        """If we receive a Cartesian service request, map the velocities through the Jacobian to get
        joint velocities, and then set our reference values."""

        self.get_logger().info(f"Request received: {request}.")

        cart_velocities: np.ndarray = np.array([request.input_x_dot, request.input_y_dot,
                                                request.input_z_dot])
        q_dot_reference = self.compute_joint_velocities_from_cart_velocity(cart_velocities)

        self._q1_dot_reference = q_dot_reference[0]
        self._q2_dot_reference = q_dot_reference[1]
        self._q3_dot_reference = q_dot_reference[2]

        # Return a successful status, if we've received the service call
        response.status = True
        return response

    def gazebo_listener_callback(self, msg: JointState) -> None:
        """
        This is the callback that is executed every time we receive a message of JointState on the
        joint_angles topic.
        :param msg: ROS2 message of type JointState
        :return: None
        """

        # Retrieves a float array of q1, q2, q3
        if len(msg.position) != 3:
            print("[WARNING] Callback needs to accept 3 joint angles only.")

        # Parse out joint angles and velocities
        joint_angles = msg.position
        J = self._compute_jacobian_from_joint_positions(joint_angles)

        joint_velocities = msg.velocity
        e1 = self._q1_dot_reference - joint_velocities[0]
        e2 = self._q2_dot_reference - joint_velocities[1]
        e3 = self._q3_dot_reference - joint_velocities[2]

        # Now, for our acceleration errors, our input reference velocity is 0, since we want the robot to stop at our
        # target velocity.
        dt = 0.01  # 100 [Hz] for cycle time in simulation
        input_joint_accel_reference = 0.0

        measured_q1_dot = (joint_velocities[0] - self._last_q1_dot) / dt
        measured_q2_dot = (joint_velocities[1] - self._last_q2_dot) / dt
        measured_q3_dot = (joint_velocities[2] - self._last_q3_dot) / dt

        e1_dot = input_joint_accel_reference - measured_q1_dot
        e2_dot = input_joint_accel_reference - measured_q2_dot
        e3_dot = input_joint_accel_reference - measured_q3_dot

        # Compute control inputs, e.g. efforts to the actuators. We're only using a PD controller for now.
        u1 = Kp1 * e1 + Kd1 * e1_dot
        u2 = Kp2 * e2 + Kd2 * e2_dot
        u3 = Kp3 * e3 + Kd3 * e3_dot

        control_effort = Float64MultiArray()
        control_effort.data = [u1, u2, u3]

        self._last_q1_dot = joint_velocities[0]
        self._last_q2_dot = joint_velocities[1]
        self._last_q3_dot = joint_velocities[2]

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
