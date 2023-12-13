// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rrbot_gazebo:srv/CartesianVelocityInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__STRUCT_H_
#define RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/CartesianVelocityInput in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__CartesianVelocityInput_Request
{
  float input_x_dot;
  float input_y_dot;
  float input_z_dot;
} rrbot_gazebo__srv__CartesianVelocityInput_Request;

// Struct for a sequence of rrbot_gazebo__srv__CartesianVelocityInput_Request.
typedef struct rrbot_gazebo__srv__CartesianVelocityInput_Request__Sequence
{
  rrbot_gazebo__srv__CartesianVelocityInput_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__CartesianVelocityInput_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/CartesianVelocityInput in the package rrbot_gazebo.
typedef struct rrbot_gazebo__srv__CartesianVelocityInput_Response
{
  bool status;
} rrbot_gazebo__srv__CartesianVelocityInput_Response;

// Struct for a sequence of rrbot_gazebo__srv__CartesianVelocityInput_Response.
typedef struct rrbot_gazebo__srv__CartesianVelocityInput_Response__Sequence
{
  rrbot_gazebo__srv__CartesianVelocityInput_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rrbot_gazebo__srv__CartesianVelocityInput_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__STRUCT_H_
