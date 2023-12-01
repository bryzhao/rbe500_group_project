#!/usr/bin/env python3

"""
Group Assignment 2
RBE500 - Fall 2023

Note: use a command like this to test our effort controller (by supplying reference joint positions):
 > ros2 topic pub --once /position_inputs std_msgs/msg/Float64MultiArray "{data: [1.0, 1.0, 0.5]}"
"""

#importing necessary packages
import numpy as np
import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64MultiArray
from sensor_msgs.msg import JointState

# Globals / tunable gains
Kp1 = 15.0
Kp2 = 15.0
Kp3 = 15.0
Kd1 = 1.0
Kd2 = 1.0
Kd3 = 1.0

np.set_printoptions(precision=3, suppress=True)


class PDController(Node):
    """
    Simple PD effort controller for controlling our SCARA robot in Gazebo.
    """

    def __init__(self):
        super().__init__('joint_pd_control_node')

        # Gazebo publishes to a JointState message, so we'll have our callback listen to this topic
        self._joint_state_subscription = self.create_subscription(
            msg_type=JointState, topic='/joint_states', callback=self.listener_callback, qos_profile=10)

        self._position_input_subscription = self.create_subscription(
            msg_type=Float64MultiArray, topic='/position_inputs', callback=self.position_input_callback, qos_profile=10)

        self._forward_effort_publisher = self.create_publisher(msg_type=Float64MultiArray,
                                                               topic='/forward_effort_controller/commands',
                                                               qos_profile=10)

        self._q1_reference = 0.0
        self._q2_reference = 0.0
        self._q3_reference = 0.0

        self.get_logger().info(f"Initializing {self.get_name()} node...")

    def position_input_callback(self, msg: Float64MultiArray):
        """Takes in reference joint positions for the controller."""

        self.get_logger().info(f"Input reference positions: {msg.data}. Storing these internally...")

        self._q1_reference = msg.data[0]
        self._q2_reference = msg.data[1]
        self._q3_reference = msg.data[2]

    def listener_callback(self, msg: JointState) -> None:
        """
        This is the callback that is executed every time we receive a message of JointState on the
        joint_angles topic.
        :param msg: ROS2 message of type JointState
        :return: None
        """
        # Retrieves a float array of q1, q2, q3
        assert len(msg.position) == 3, "Needs to accept 3 joint angles only."

        # We receive the joint angles as a list of 3 floats, in degrees. And then we convert those joint angles to
        # radians for the forward kin method.
        joint_angles = msg.position
        joint_velocities = msg.velocity

        e1 = self._q1_reference - joint_angles[0]
        e2 = self._q2_reference - joint_angles[1]
        e3 = self._q3_reference - joint_angles[2]

        e1_dot = 0 - joint_velocities[0]
        e2_dot = 0 - joint_velocities[1]
        e3_dot = 0 - joint_velocities[2]

        # Compute control inputs, e.g. efforts to the actuators
        u1 = Kp1 * e1 + Kd1 * e1_dot
        u2 = Kp2 * e2 + Kd2 * e2_dot
        u3 = Kp3 * e3 + Kd3 * e3_dot

        control_effort = Float64MultiArray()
        control_effort.data = [u1, u2, u3]
        self._forward_effort_publisher.publish(control_effort)


def main(args=None):
    rclpy.init(args=args)
    control_node = PDController()
    rclpy.spin(control_node)

    # Enable graceful shutdown.
    control_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()