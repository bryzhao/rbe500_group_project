#!/usr/bin/env python3

import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped

# Global Lengths:
L1 = 1  # [m]
L2 = 2  # [m]
L3 = 3  # [m]

class ComputeInverseKinematics(Node):

    # Computes the inverse kinematics for a 3-DOF SCARA robotic arm

    #service based approach: reconfigure

    def __init__(self):
        super().__init__('inverse_kinematics_node')

        self.endEffectorPosition = self.create_service(
            msg_type=JointState, topic='/joint_states', callback=self.listener_callback, qos_profile=10)
        self._pose_service = self.create_service(msg_type=PoseStamped, topic='/end_effector_pose', qos_profile=10)

        self.get_logger().info(f"Initializing {self.get_name()}...")

    def listener_callback(self, msg: JointState) -> None:

        #End effector position take from Gazebo? or FK Output?
        # assert len(msg.position) == 3, "Needs to accept 3 joint angles only."

        self.get_logger().info(f"I heard: {msg}")
        self.get_logger().info(f"Resulting pose, given q1 q2 q3:\n {end_effector_pose}")

    def compute_inverse_kinematics(link_lengths: list) -> np.ndarray:

        l1, l2, l3 = link_lengths


        return computed_joint_angles


def main(args=None):
    rclpy.init(args=args)
    inv_kin_node = ComputeInverseKinematics()
    rclpy.spin(inv_kin_node)

    inv_kin_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
