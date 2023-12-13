// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrbot_gazebo:srv/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__BUILDER_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrbot_gazebo/srv/detail/control_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_ControlInput_Request_input_q3
{
public:
  explicit Init_ControlInput_Request_input_q3(::rrbot_gazebo::srv::ControlInput_Request & msg)
  : msg_(msg)
  {}
  ::rrbot_gazebo::srv::ControlInput_Request input_q3(::rrbot_gazebo::srv::ControlInput_Request::_input_q3_type arg)
  {
    msg_.input_q3 = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::ControlInput_Request msg_;
};

class Init_ControlInput_Request_input_q2
{
public:
  explicit Init_ControlInput_Request_input_q2(::rrbot_gazebo::srv::ControlInput_Request & msg)
  : msg_(msg)
  {}
  Init_ControlInput_Request_input_q3 input_q2(::rrbot_gazebo::srv::ControlInput_Request::_input_q2_type arg)
  {
    msg_.input_q2 = std::move(arg);
    return Init_ControlInput_Request_input_q3(msg_);
  }

private:
  ::rrbot_gazebo::srv::ControlInput_Request msg_;
};

class Init_ControlInput_Request_input_q1
{
public:
  Init_ControlInput_Request_input_q1()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ControlInput_Request_input_q2 input_q1(::rrbot_gazebo::srv::ControlInput_Request::_input_q1_type arg)
  {
    msg_.input_q1 = std::move(arg);
    return Init_ControlInput_Request_input_q2(msg_);
  }

private:
  ::rrbot_gazebo::srv::ControlInput_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::ControlInput_Request>()
{
  return rrbot_gazebo::srv::builder::Init_ControlInput_Request_input_q1();
}

}  // namespace rrbot_gazebo


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_ControlInput_Response_status
{
public:
  Init_ControlInput_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::rrbot_gazebo::srv::ControlInput_Response status(::rrbot_gazebo::srv::ControlInput_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::ControlInput_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::ControlInput_Response>()
{
  return rrbot_gazebo::srv::builder::Init_ControlInput_Response_status();
}

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CONTROL_INPUT__BUILDER_HPP_
