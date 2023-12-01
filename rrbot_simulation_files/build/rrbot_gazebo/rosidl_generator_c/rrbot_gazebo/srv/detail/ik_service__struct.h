// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__STRUCT_H_
#define RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/IKService in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__IKService_Request
{
  float input_x;
  float input_y;
  float input_z;
} rrbot_gazebo__srv__IKService_Request;

// Struct for a sequence of rrbot_gazebo__srv__IKService_Request.
typedef struct rrbot_gazebo__srv__IKService_Request__Sequence
{
  rrbot_gazebo__srv__IKService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__IKService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/IKService in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__IKService_Response
{
  float joint_x;
  float joint_y;
  float joint_z;
} rrbot_gazebo__srv__IKService_Response;

// Struct for a sequence of rrbot_gazebo__srv__IKService_Response.
typedef struct rrbot_gazebo__srv__IKService_Response__Sequence
{
  rrbot_gazebo__srv__IKService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__IKService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__STRUCT_H_
