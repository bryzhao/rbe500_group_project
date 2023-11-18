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

# Test Coordinates:
x_c = 2
y_c = 3
z_c = 1
test_end_effector_coordinates = [x_c, y_c, z_c]

class ComputeInverseKinematics(Node):

    # Computes the inverse kinematics for a 3-DOF SCARA robotic arm

    #service based approach: reconfigure

    def __init__(self):
        super().__init__('inverse_kinematics_node')

        self.endEffectorPosition = self.create_service(
            msg_type=JointState, topic='/joint_states', callback=self.listener_callback, qos_profile=10)
        self._pose_service = self.create_service(msg_type=PoseStamped, topic='/end_effector_pose', qos_profile=10)

        self.get_logger().info(f"Initializing {self.get_name()}...")

    def compute_inverse_kinematics_callback(test_end_effector_coordinates, link_lengths: list) -> np.ndarray:

        l1, l2, l3 = link_lengths
        # pseudo for now until ROS coordinate array setup

        r = np.sqrt(test_end_effector_coordinates[0]**2 + test_end_effector_coordinates[1]**2)
        # CHECK IF LINK LENGTHS ARE PROPERLY LABELED AND USED IN GAZEBO, LABELED AS a IN DERIVATION (setting as l2 for now)
        cos_theta2 = (r**2 - l2**2 - l3**2)/(2*l3)
        sin_theta2 = np.sqrt(1-cos_theta2)
        joint2_angle = np.arctan2(sin_theta2, cos_theta2)

        find_theta1_phi = np.arctan2(test_end_effector_coordinates[1], test_end_effector_coordinates[0]) #replace with coordinate array from ROS or service request input
        find_theta1_beta = np.arctan2((l3*sin_theta2)/(l2 + l3*cos_theta2)) #double-check correct link length assignment
        joint1_angle = find_theta1_phi - find_theta1_beta

        prismatic3_position = l1 - test_end_effector_coordinates[2] #check correct link assignment

        computed_joint_angles_positions = [joint1_angle, joint2_angle, prismatic3_position]


        return computed_joint_angles_positions


def main(args=None):
    rclpy.init(args=args)
    inv_kin_node = ComputeInverseKinematics()
    rclpy.spin(inv_kin_node)

    inv_kin_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
