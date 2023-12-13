// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice
#include "rrbot_gazebo/srv/detail/ik_service__rosidl_typesupport_fastrtps_cpp.hpp"
#include "rrbot_gazebo/srv/detail/ik_service__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rrbot_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_serialize(
  const rrbot_gazebo::srv::IKService_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: input_x
  cdr << ros_message.input_x;
  // Member: input_y
  cdr << ros_message.input_y;
  // Member: input_z
  cdr << ros_message.input_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rrbot_gazebo::srv::IKService_Request & ros_message)
{
  // Member: input_x
  cdr >> ros_message.input_x;

  // Member: input_y
  cdr >> ros_message.input_y;

  // Member: input_z
  cdr >> ros_message.input_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
get_serialized_size(
  const rrbot_gazebo::srv::IKService_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: input_x
  {
    size_t item_size = sizeof(ros_message.input_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_y
  {
    size_t item_size = sizeof(ros_message.input_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: input_z
  {
    size_t item_size = sizeof(ros_message.input_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
max_serialized_size_IKService_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: input_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: input_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rrbot_gazebo::srv::IKService_Request;
    is_plain =
      (
      offsetof(DataType, input_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IKService_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::IKService_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IKService_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rrbot_gazebo::srv::IKService_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IKService_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::IKService_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IKService_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IKService_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IKService_Request__callbacks = {
  "rrbot_gazebo::srv",
  "IKService_Request",
  _IKService_Request__cdr_serialize,
  _IKService_Request__cdr_deserialize,
  _IKService_Request__get_serialized_size,
  _IKService_Request__max_serialized_size
};

static rosidl_message_type_support_t _IKService_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IKService_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<rrbot_gazebo::srv::IKService_Request>()
{
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_IKService_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, IKService_Request)() {
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_IKService_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace rrbot_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_serialize(
  const rrbot_gazebo::srv::IKService_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: joint_x
  cdr << ros_message.joint_x;
  // Member: joint_y
  cdr << ros_message.joint_y;
  // Member: joint_z
  cdr << ros_message.joint_z;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rrbot_gazebo::srv::IKService_Response & ros_message)
{
  // Member: joint_x
  cdr >> ros_message.joint_x;

  // Member: joint_y
  cdr >> ros_message.joint_y;

  // Member: joint_z
  cdr >> ros_message.joint_z;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
get_serialized_size(
  const rrbot_gazebo::srv::IKService_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: joint_x
  {
    size_t item_size = sizeof(ros_message.joint_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_y
  {
    size_t item_size = sizeof(ros_message.joint_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: joint_z
  {
    size_t item_size = sizeof(ros_message.joint_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rrbot_gazebo
max_serialized_size_IKService_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: joint_x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: joint_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = rrbot_gazebo::srv::IKService_Response;
    is_plain =
      (
      offsetof(DataType, joint_z) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _IKService_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::IKService_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _IKService_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<rrbot_gazebo::srv::IKService_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _IKService_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const rrbot_gazebo::srv::IKService_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _IKService_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_IKService_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _IKService_Response__callbacks = {
  "rrbot_gazebo::srv",
  "IKService_Response",
  _IKService_Response__cdr_serialize,
  _IKService_Response__cdr_deserialize,
  _IKService_Response__get_serialized_size,
  _IKService_Response__max_serialized_size
};

static rosidl_message_type_support_t _IKService_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IKService_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrbot_gazebo
const rosidl_message_type_support_t *
get_message_type_support_handle<rrbot_gazebo::srv::IKService_Response>()
{
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_IKService_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, IKService_Response)() {
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_IKService_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace rrbot_gazebo
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _IKService__callbacks = {
  "rrbot_gazebo::srv",
  "IKService",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, IKService_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, IKService_Response)(),
};

static rosidl_service_type_support_t _IKService__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_IKService__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_rrbot_gazebo
const rosidl_service_type_support_t *
get_service_type_support_handle<rrbot_gazebo::srv::IKService>()
{
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_IKService__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rrbot_gazebo, srv, IKService)() {
  return &rrbot_gazebo::srv::typesupport_fastrtps_cpp::_IKService__handle;
}

#ifdef __cplusplus
}
#endif
