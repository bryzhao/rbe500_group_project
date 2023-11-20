#!/usr/bin/env python3

"""
Bryan Zhao
Group Assignment 1
RBE500 - Fall 2023

Note: use a command like this to move the Gazebo arm:
 > ros2 topic pub --once /forward_position_controller/commands std_msgs/msg/Float64MultiArray "{data: [2.0, 2.0, 0.5]}"
"""

import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped, Point

# Globals
L1 = 1  # link length [m]
L2 = 1  # link length [m]
L3 = 1  # link length [m]

np.set_printoptions(precision=3, suppress=True)


class ComputeForwardKinematics(Node):
    """
    Computes the forward kinematics for a 3-DOF SCARA, with the transform derived via D-H parameters.
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
        # joint_angles = [np.deg2rad(angle) for angle in joint_angles]  # Convert to radians for fwd kin method

        # Our link lengths are set to 1, 2, 3 meters respectively for L1, L2, L3
        end_effector_pose: PoseStamped = \
            self.compute_forward_kinematics(joint_angles=joint_angles, link_lengths=[L1, L2, L3])

        self.get_logger().info(f"Input joint angles: {msg.position}\n "
                               f"Resulting pose:\n {end_effector_pose.pose.position}")

    def compute_forward_kinematics(self, joint_angles: list, link_lengths: list) -> PoseStamped:

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

        T_end_effector = np.array([[np.cos(q1) * np.cos(q2) - np.sin(q1) * np.sin(q2),
                                    np.sin(q2) * np.cos(q1),
                                    0,
                                    l1 * np.cos(q1) + l2*np.cos(q1)*np.cos(q2) - l2*np.sin(q1)*np.sin(q2)
                                    ],

                                    [np.sin(q1) * np.cos(q2) + np.sin(q2) * np.cos(q1),
                                     np.sin(q1) * np.sin(q2),
                                     0,
                                     l1 * np.sin(q1) + l2*np.cos(q1)*np.sin(q2) + l2*np.cos(q2)*np.sin(q1)
                                     ],
                                    [0, 0, -1, l1 - q3],
                                    [0, 0, 0, 1]
                                    ])

        resulting_pose = PoseStamped()
        position = T_end_effector[:-1, -1]
        position_ros_msg = Point(x=position[0], y=position[1], z=position[2])
        resulting_pose.pose.position = position_ros_msg
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
