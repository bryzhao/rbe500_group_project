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

# Globals / tunable gains for PI controller
Kp1 = 5.0
Ki1 = 0

Kp2 = 5.0
Ki2 = 0

Kp3 = 5.0
Ki3 = 0

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

        self.e1_integral = 0.0
        self.e2_integral = 0.0
        self.e3_integral = 0.0

        self.get_logger().info(f"Initializing {self.get_name()} node...")

    def _compute_jacobian_from_joint_positions(self, joint_angles) -> list:
        """Derived SCARA 3DOF Jacobian. Implement here."""
        # Parse out joint angles and velocities
        joint_angles = msg.position
        #Took this from the joint_effort_controllers node
        q1 = self._q1_reference - joint_angles[0]
        q2 = self._q2_reference - joint_angles[1]
        q3 = self._q3_reference - joint_angles[2]

        q = np.array([q1, q2, q3])

        #Jacobian of Joint 1
        J1 = np.array([-((l2*np.sin(q1)*np.cos(q2))+(l2*np.cos(q1)*np.sin(q2))+(l1*np.sin(q1))), \
                       (l2*np.cos(q1)*np.cos(q2))-(l2*np.sin(q1)*np.cos(q2))+(l1*np.cos(q1)), \
                        0, 0, 0, 1])

        #Jacobian of Joint 2
        J2 = np.array([-(l2*np.sin(q1)*np.cos(q2)+l2*np.cos(q1)*np.sin(q2)+l1*np.sin(q1)-l1*np.sin(q1)), \
                       (l2*np.cos(q1)*np.cos(q2)-l2*np.sin(q1)*np.cos(q2)+l1*np.cos(q1)-l1*np.cos(q1)), \
                        0, 0, 0, 1])

        #Jacobian of Joint 3
        J3 = np. array ([0, 0, 0, 0, 0, 1])

        #Merging joint jacobians into 1 matrix
        J = np.vstack((J1, J2, J3)).T

        twist = np.dot(J,q)



        
        #Add FK matrices T_end_effector = A1 * A2 * A3 to use vectors required for jacobian
        """jacobian = np.array([[r_11, r_12, r_13],
                      [r_21, r_22, r_23],
                      [r_31, r_32, r_33],
                      [r_41, r_42, r_43],
                      [r_51, r_52, r_53],
                      [r_61, r_62, r_63]])"""

        #jacobian = computed_above
        raise NotImplementedError

    def compute_joint_velocities_from_cart_velocity(self, cartesian_velocities) -> list:
        """Implement Pseudoinverse Jacobian."""
        #computed_joint_velocities = np.linalg.pinv(self.jacobian) @ cartesian_velocities
        """need to add angular velocity component to cartesian_velocities. matrix is only 3x1 needs to be 6x1
        #would like some help here on how to find angular velocites per joint"""
        raise NotImplementedError

    def _joint_vel_serv_callback(self, request: JointVelocityInput.Request, response):
        """If we receive a joint velocity service request, set our reference values directly.Used for testing controller performance (transient response)"""
        self.get_logger().info(f"Request received: {request}.")

        self._q1_dot_reference = request.input_q1_dot
        self._q2_dot_reference = request.input_q2_dot
        q = np.array([q1, q2, q3])
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
        jacobian = self._compute_jacobian_from_joint_positions(joint_angles)

        #Took this from the joint_effort_controllers node
        q1 = self._q1_reference - joint_angles[0]
        q2 = self._q2_reference - joint_angles[1]
        q3 = self._q3_reference - joint_angles[2]


        joint_velocities = msg.velocity
        e1 = self._q1_dot_reference - joint_velocities[0]
        e2 = self._q2_dot_reference - joint_velocities[1]
        e3 = self._q3_dot_reference - joint_velocities[2]

        dt = 0.01  # 100 [Hz] for cycle time in simulation

        #sums error every time step, Might enable integral windup
        self.e1_integral += e1 * dt
        self.e2_integral += e2 * dt
        self.e3_integral += e3 * dt

        #With leaky integrator: lowers integral at a constant rate to prevent integral windup
        """
        leak_constant = 0.08
        self.e1_integral = self.e1_integral * leak_constant + e1 * dt
        self.e2_integral = self.e2_integral * leak_constant + e2 * dt
        self.e3_integral = self.e3_integral * leak_constant + e3 * dt
        """

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
