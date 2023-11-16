#!/usr/bin/env python3

"""
Bryan Zhao
Group Assignment 1
RBE500 - Fall 2023
"""

import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped

# Globals
L1 = 1  # link length [m]
L2 = 2  # link length [m]
L3 = 3  # link length [m]


class ComputeForwardKinematics(Node):
    """
    Computes the forward kinematics for a 3-DOF articulating robotic arm, with the transform derived via D-H parameters.
    """

    def __init__(self):
        super().__init__('forward_kinematics_node')

        # Gazebo publishes to a JointState message, so we'll have our callback listen to this topic
        self._joint_angle_subscription = self.create_subscription(
            msg_type=JointState, topic='/joint_states', callback=self.listener_callback, qos_profile=10)
        self._pose_publisher = self.create_publisher(msg_type=PoseStamped, topic='/end_effector_pose', qos_profile=10)

        self.get_logger().info(f"Initializing {self.get_name()}...")

    def listener_callback(self, msg: JointState) -> None:
        """
        This is the callback that is executed every time we receive a message of Float32MultiArray on the
        joint_angles topic. We simply call the forward kinematics computation and log the result in the callback.
        :param msg: ROS2 message of type JointState
        :return: None
        """
        # Retrieves a float array of q1, q2, q3
        assert len(msg.position) == 3, "Needs to accept 3 joint angles only."

        # We receive the joint angles as a list of 3 floats, in degrees. And then we convert those joint angles to
        # radians for the forward kin method.
        joint_angles = msg.position
        joint_angles = [np.deg2rad(angle) for angle in joint_angles]  # Convert to radians for fwd kin method

        # Our link lengths are set to 1, 2, 3 meters respectively for L1, L2, L3
        end_effector_pose = self.compute_forward_kinematics(joint_angles=joint_angles, link_lengths=[L1, L2, L3])

        self.get_logger().info(f"I heard: {msg}")
        self.get_logger().info(f"Resulting pose, given q1 q2 q3:\n {end_effector_pose}")

    def compute_forward_kinematics(self, joint_angles: list, link_lengths: list) -> np.ndarray:
        # TODO(BZ): Pen and paper derivation for group assignment 1 robot.

        """
        Given the joint angles, we plug those joint angles into the A1*A2*A3 matrix that we derived in problem 3.5
        by hand, with the DH parameters. We assume a link length of 1 per link, as denoted in the global variables
        above for simplicity and concreteness of the final computation.
        :param joint_angles: Joint angles in radians - q1, q2, q3.
        :param link_lengths: Provided link lengths in meters.
        :return: The final homogeneous transform of end effector in the base frame, e.g. T_0_3.
        """
        q1, q2, q3 = joint_angles
        l1, l2, l3 = link_lengths

        # Use the A1*A2*A3 matrix derived on paper
        T_end_effector = np.array([[np.cos(q1) * np.cos(q2) * np.cos(q3) - np.cos(q1) * np.sin(q2) * np.sin(q3),
                                    - np.cos(q1) * np.cos(q2) * np.sin(q3) - np.cos(q1) * np.cos(q3) * np.sin(q2),
                                    -np.sin(q1),
                                    l2 * np.cos(q1) * np.cos(q2) + l3 * np.cos(q1) * np.cos(q2) * np.cos(
                                        q3) - l3 * np.cos(q1) * np.sin(q2) * np.sin(q3)],

                                   [np.cos(q2) * np.cos(q3) * np.sin(q1) - np.sin(q1) * np.sin(q2) * np.sin(q3),
                                    - np.cos(q2) * np.sin(q1) * np.sin(q3) - np.cos(q3) * np.sin(q1) * np.sin(q2),
                                    np.cos(q1),
                                    l2 * np.cos(q2) * np.sin(q1) + l3 * np.cos(q2) * np.cos(q3) * np.sin(
                                        q1) - l3 * np.sin(q1) * np.sin(q2) * np.sin(q3)],

                                   [- np.cos(q2) * np.sin(q3) - np.cos(q3) * np.sin(q2),
                                    np.sin(q2) * np.sin(q3) - np.cos(q2) * np.cos(q3), 0,
                                    l1 - l2 * np.sin(q2) - l3 * np.cos(q2) * np.sin(q3) - l3 * np.cos(q3) * np.sin(q2)],

                                   [0, 0, 0, 1]])
        
        resulting_pose = PoseStamped()
        resulting_pose.pose.position = T_end_effector[:-1, -1]
        self._pose_publisher.publish(resulting_pose)

        return resulting_pose


def main(args=None):
    rclpy.init(args=args)
    fwd_kin_node = ComputeForwardKinematics()
    rclpy.spin(fwd_kin_node)

    # Enable graceful shutdown.
    fwd_kin_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
