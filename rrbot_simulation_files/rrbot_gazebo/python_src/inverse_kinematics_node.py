#!/usr/bin/env python3

import numpy as np
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from geometry_msgs.msg import PoseStamped, Pose

from rrbot_gazebo.srv import IKService

# Global Lengths:
L1 = 1  # [m]
L2 = 2  # [m]
L3 = 3  # [m]


class ComputeInverseKinematics(Node):

    # Computes the inverse kinematics for a 3-DOF SCARA robotic arm

    def __init__(self):
        super().__init__('inverse_kinematics_node')

        self._inverse_kinematics_service = self.create_service(srv_type=IKService,
                                                               callback=self._ik_callback,
                                                               srv_name="ik_service")

        self.get_logger().info(f"Initializing {self.get_name()}...")

    def _ik_callback(self, request: IKService.Request, response):
        """Callback, which includes processing the request from the client, and then returning our response."""
        self.get_logger().info(f"I heard: {request}")

        # Convert ROS message formats into lists so we can pass the inputs to our IK function
        input_pose = [request.input_x, request.input_y, request.input_z]

        joint_angles = self.compute_inverse_kinematics_callback(input_pose, [L1, L2, L3])

        self.get_logger().info(f"Joint angles computed: {joint_angles}")

        response.joint_x = joint_angles[0]
        response.joint_y = joint_angles[1]
        response.joint_z = joint_angles[2]

        return response

    @staticmethod
    def compute_inverse_kinematics_callback(test_end_effector_coordinates, link_lengths: list) -> list:
        l1, l2, l3 = link_lengths
        # pseudo for now until ROS coordinate array setup

        r = np.sqrt(test_end_effector_coordinates[0] ** 2 + test_end_effector_coordinates[1] ** 2)
        # CHECK IF LINK LENGTHS ARE PROPERLY LABELED AND USED IN GAZEBO, LABELED AS a IN DERIVATION (setting as l2 for now)
        cos_theta2 = (r ** 2 - l2 ** 2 - l3 ** 2) / (2 * l3)
        sin_theta2 = np.sqrt(1 - cos_theta2)
        joint2_angle = np.arctan2(sin_theta2, cos_theta2)

        find_theta1_phi = np.arctan2(test_end_effector_coordinates[1], test_end_effector_coordinates[
            0])  # replace with coordinate array from ROS or service request input
        find_theta1_beta = np.arctan2(
            (l3 * sin_theta2), (l2 + l3 * cos_theta2))  # double-check correct link length assignment
        joint1_angle = find_theta1_phi - find_theta1_beta

        # THIS DEPENDS ON WHERE WORLD COORDINATES ARE DEFINING MY GIVEN END EFFECTOR POSISION IN SPACE. NEED TO DECIDE
        prismatic3_position = l1 - test_end_effector_coordinates[2]  # check correct link assignment

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
