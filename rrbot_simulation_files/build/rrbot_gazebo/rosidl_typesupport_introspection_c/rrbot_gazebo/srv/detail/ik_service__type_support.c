// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rrbot_gazebo/srv/detail/ik_service__rosidl_typesupport_introspection_c.h"
#include "rrbot_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rrbot_gazebo/srv/detail/ik_service__functions.h"
#include "rrbot_gazebo/srv/detail/ik_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrbot_gazebo__srv__IKService_Request__init(message_memory);
}

void rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_fini_function(void * message_memory)
{
  rrbot_gazebo__srv__IKService_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_member_array[3] = {
  {
    "input_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__IKService_Request, input_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__IKService_Request, input_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "input_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__IKService_Request, input_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_members = {
  "rrbot_gazebo__srv",  // message namespace
  "IKService_Request",  // message name
  3,  // number of fields
  sizeof(rrbot_gazebo__srv__IKService_Request),
  rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_member_array,  // message members
  rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_type_support_handle = {
  0,
  &rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService_Request)() {
  if (!rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_type_support_handle.typesupport_identifier) {
    rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrbot_gazebo__srv__IKService_Request__rosidl_typesupport_introspection_c__IKService_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rrbot_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__functions.h"
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rrbot_gazebo__srv__IKService_Response__init(message_memory);
}

void rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_fini_function(void * message_memory)
{
  rrbot_gazebo__srv__IKService_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_member_array[3] = {
  {
    "joint_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__IKService_Response, joint_x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__IKService_Response, joint_y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "joint_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rrbot_gazebo__srv__IKService_Response, joint_z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_members = {
  "rrbot_gazebo__srv",  // message namespace
  "IKService_Response",  // message name
  3,  // number of fields
  sizeof(rrbot_gazebo__srv__IKService_Response),
  rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_member_array,  // message members
  rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_type_support_handle = {
  0,
  &rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService_Response)() {
  if (!rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_type_support_handle.typesupport_identifier) {
    rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rrbot_gazebo__srv__IKService_Response__rosidl_typesupport_introspection_c__IKService_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "rrbot_gazebo/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_members = {
  "rrbot_gazebo__srv",  // service namespace
  "IKService",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_Request_message_type_support_handle,
  NULL  // response message
  // rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_Response_message_type_support_handle
};

static rosidl_service_type_support_t rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_type_support_handle = {
  0,
  &rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rrbot_gazebo
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService)() {
  if (!rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_type_support_handle.typesupport_identifier) {
    rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rrbot_gazebo, srv, IKService_Response)()->data;
  }

  return &rrbot_gazebo__srv__detail__ik_service__rosidl_typesupport_introspection_c__IKService_service_type_support_handle;
}
