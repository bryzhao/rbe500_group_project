// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice
#include "rrbot_gazebo/srv/detail/ik_service__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rrbot_gazebo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rrbot_gazebo/srv/detail/ik_service__struct.h"
#include "rrbot_gazebo/srv/detail/ik_service__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IKService_Request__ros_msg_type = rrbot_gazebo__srv__IKService_Request;

static bool _IKService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IKService_Request__ros_msg_type * ros_message = static_cast<const _IKService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_x
  {
    cdr << ros_message->input_x;
  }

  // Field name: input_y
  {
    cdr << ros_message->input_y;
  }

  // Field name: input_z
  {
    cdr << ros_message->input_z;
  }

  return true;
}

static bool _IKService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IKService_Request__ros_msg_type * ros_message = static_cast<_IKService_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: input_x
  {
    cdr >> ros_message->input_x;
  }

  // Field name: input_y
  {
    cdr >> ros_message->input_y;
  }

  // Field name: input_z
  {
    cdr >> ros_message->input_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrbot_gazebo
size_t get_serialized_size_rrbot_gazebo__srv__IKService_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IKService_Request__ros_msg_type * ros_message = static_cast<const _IKService_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name input_x
  {
    size_t item_size = sizeof(ros_message->input_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_y
  {
    size_t item_size = sizeof(ros_message->input_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name input_z
  {
    size_t item_size = sizeof(ros_message->input_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IKService_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rrbot_gazebo__srv__IKService_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrbot_gazebo
size_t max_serialized_size_rrbot_gazebo__srv__IKService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: input_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: input_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _IKService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rrbot_gazebo__srv__IKService_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IKService_Request = {
  "rrbot_gazebo::srv",
  "IKService_Request",
  _IKService_Request__cdr_serialize,
  _IKService_Request__cdr_deserialize,
  _IKService_Request__get_serialized_size,
  _IKService_Request__max_serialized_size
};

static rosidl_message_type_support_t _IKService_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IKService_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrbot_gazebo, srv, IKService_Request)() {
  return &_IKService_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rrbot_gazebo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__struct.h"
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _IKService_Response__ros_msg_type = rrbot_gazebo__srv__IKService_Response;

static bool _IKService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _IKService_Response__ros_msg_type * ros_message = static_cast<const _IKService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_x
  {
    cdr << ros_message->joint_x;
  }

  // Field name: joint_y
  {
    cdr << ros_message->joint_y;
  }

  // Field name: joint_z
  {
    cdr << ros_message->joint_z;
  }

  return true;
}

static bool _IKService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _IKService_Response__ros_msg_type * ros_message = static_cast<_IKService_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: joint_x
  {
    cdr >> ros_message->joint_x;
  }

  // Field name: joint_y
  {
    cdr >> ros_message->joint_y;
  }

  // Field name: joint_z
  {
    cdr >> ros_message->joint_z;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrbot_gazebo
size_t get_serialized_size_rrbot_gazebo__srv__IKService_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _IKService_Response__ros_msg_type * ros_message = static_cast<const _IKService_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name joint_x
  {
    size_t item_size = sizeof(ros_message->joint_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_y
  {
    size_t item_size = sizeof(ros_message->joint_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name joint_z
  {
    size_t item_size = sizeof(ros_message->joint_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _IKService_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_rrbot_gazebo__srv__IKService_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_rrbot_gazebo
size_t max_serialized_size_rrbot_gazebo__srv__IKService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: joint_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: joint_z
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _IKService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_rrbot_gazebo__srv__IKService_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_IKService_Response = {
  "rrbot_gazebo::srv",
  "IKService_Response",
  _IKService_Response__cdr_serialize,
  _IKService_Response__cdr_deserialize,
  _IKService_Response__get_serialized_size,
  _IKService_Response__max_serialized_size
};

static rosidl_message_type_support_t _IKService_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_IKService_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrbot_gazebo, srv, IKService_Response)() {
  return &_IKService_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rrbot_gazebo/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "rrbot_gazebo/srv/ik_service.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t IKService__callbacks = {
  "rrbot_gazebo::srv",
  "IKService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrbot_gazebo, srv, IKService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrbot_gazebo, srv, IKService_Response)(),
};

static rosidl_service_type_support_t IKService__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &IKService__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, rrbot_gazebo, srv, IKService)() {
  return &IKService__handle;
}

#if defined(__cplusplus)
}
#endif
