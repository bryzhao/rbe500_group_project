// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rrbot_gazebo:srv/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__TRAITS_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rrbot_gazebo/srv/detail/control_input__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rrbot_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlInput_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: input_q1
  {
    out << "input_q1: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q1, out);
    out << ", ";
  }

  // member: input_q2
  {
    out << "input_q2: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q2, out);
    out << ", ";
  }

  // member: input_q3
  {
    out << "input_q3: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q3, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlInput_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: input_q1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_q1: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q1, out);
    out << "\n";
  }

  // member: input_q2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_q2: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q2, out);
    out << "\n";
  }

  // member: input_q3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_q3: ";
    rosidl_generator_traits::value_to_yaml(msg.input_q3, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlInput_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use rrbot_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrbot_gazebo::srv::ControlInput_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrbot_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrbot_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrbot_gazebo::srv::ControlInput_Request & msg)
{
  return rrbot_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrbot_gazebo::srv::ControlInput_Request>()
{
  return "rrbot_gazebo::srv::ControlInput_Request";
}

template<>
inline const char * name<rrbot_gazebo::srv::ControlInput_Request>()
{
  return "rrbot_gazebo/srv/ControlInput_Request";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::ControlInput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrbot_gazebo::srv::ControlInput_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrbot_gazebo::srv::ControlInput_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rrbot_gazebo
{

namespace srv
{

inline void to_flow_style_yaml(
  const ControlInput_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ControlInput_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ControlInput_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rosidl_generator_traits
{

[[deprecated("use rrbot_gazebo::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rrbot_gazebo::srv::ControlInput_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  rrbot_gazebo::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rrbot_gazebo::srv::to_yaml() instead")]]
inline std::string to_yaml(const rrbot_gazebo::srv::ControlInput_Response & msg)
{
  return rrbot_gazebo::srv::to_yaml(msg);
}

template<>
inline const char * data_type<rrbot_gazebo::srv::ControlInput_Response>()
{
  return "rrbot_gazebo::srv::ControlInput_Response";
}

template<>
inline const char * name<rrbot_gazebo::srv::ControlInput_Response>()
{
  return "rrbot_gazebo/srv/ControlInput_Response";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::ControlInput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<rrbot_gazebo::srv::ControlInput_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<rrbot_gazebo::srv::ControlInput_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<rrbot_gazebo::srv::ControlInput>()
{
  return "rrbot_gazebo::srv::ControlInput";
}

template<>
inline const char * name<rrbot_gazebo::srv::ControlInput>()
{
  return "rrbot_gazebo/srv/ControlInput";
}

template<>
struct has_fixed_size<rrbot_gazebo::srv::ControlInput>
  : std::integral_constant<
    bool,
    has_fixed_size<rrbot_gazebo::srv::ControlInput_Request>::value &&
    has_fixed_size<rrbot_gazebo::srv::ControlInput_Response>::value
  >
{
};

template<>
struct has_bounded_size<rrbot_gazebo::srv::ControlInput>
  : std::integral_constant<
    bool,
    has_bounded_size<rrbot_gazebo::srv::ControlInput_Request>::value &&
    has_bounded_size<rrbot_gazebo::srv::ControlInput_Response>::value
  >
{
};

template<>
struct is_service<rrbot_gazebo::srv::ControlInput>
  : std::true_type
{
};

template<>
struct is_service_request<rrbot_gazebo::srv::ControlInput_Request>
  : std::true_type
{
};

template<>
struct is_service_response<rrbot_gazebo::srv::ControlInput_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__TRAITS_HPP_
