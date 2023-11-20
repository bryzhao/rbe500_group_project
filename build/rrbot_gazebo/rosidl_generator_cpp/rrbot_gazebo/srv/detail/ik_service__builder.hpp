// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from rrbot_gazebo:srv/IKService.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__BUILDER_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "rrbot_gazebo/srv/detail/ik_service__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_IKService_Request_input_z
{
public:
  explicit Init_IKService_Request_input_z(::rrbot_gazebo::srv::IKService_Request & msg)
  : msg_(msg)
  {}
  ::rrbot_gazebo::srv::IKService_Request input_z(::rrbot_gazebo::srv::IKService_Request::_input_z_type arg)
  {
    msg_.input_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::IKService_Request msg_;
};

class Init_IKService_Request_input_y
{
public:
  explicit Init_IKService_Request_input_y(::rrbot_gazebo::srv::IKService_Request & msg)
  : msg_(msg)
  {}
  Init_IKService_Request_input_z input_y(::rrbot_gazebo::srv::IKService_Request::_input_y_type arg)
  {
    msg_.input_y = std::move(arg);
    return Init_IKService_Request_input_z(msg_);
  }

private:
  ::rrbot_gazebo::srv::IKService_Request msg_;
};

class Init_IKService_Request_input_x
{
public:
  Init_IKService_Request_input_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKService_Request_input_y input_x(::rrbot_gazebo::srv::IKService_Request::_input_x_type arg)
  {
    msg_.input_x = std::move(arg);
    return Init_IKService_Request_input_y(msg_);
  }

private:
  ::rrbot_gazebo::srv::IKService_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::IKService_Request>()
{
  return rrbot_gazebo::srv::builder::Init_IKService_Request_input_x();
}

}  // namespace rrbot_gazebo


namespace rrbot_gazebo
{

namespace srv
{

namespace builder
{

class Init_IKService_Response_joint_z
{
public:
  explicit Init_IKService_Response_joint_z(::rrbot_gazebo::srv::IKService_Response & msg)
  : msg_(msg)
  {}
  ::rrbot_gazebo::srv::IKService_Response joint_z(::rrbot_gazebo::srv::IKService_Response::_joint_z_type arg)
  {
    msg_.joint_z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::rrbot_gazebo::srv::IKService_Response msg_;
};

class Init_IKService_Response_joint_y
{
public:
  explicit Init_IKService_Response_joint_y(::rrbot_gazebo::srv::IKService_Response & msg)
  : msg_(msg)
  {}
  Init_IKService_Response_joint_z joint_y(::rrbot_gazebo::srv::IKService_Response::_joint_y_type arg)
  {
    msg_.joint_y = std::move(arg);
    return Init_IKService_Response_joint_z(msg_);
  }

private:
  ::rrbot_gazebo::srv::IKService_Response msg_;
};

class Init_IKService_Response_joint_x
{
public:
  Init_IKService_Response_joint_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_IKService_Response_joint_y joint_x(::rrbot_gazebo::srv::IKService_Response::_joint_x_type arg)
  {
    msg_.joint_x = std::move(arg);
    return Init_IKService_Response_joint_y(msg_);
  }

private:
  ::rrbot_gazebo::srv::IKService_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::rrbot_gazebo::srv::IKService_Response>()
{
  return rrbot_gazebo::srv::builder::Init_IKService_Response_joint_x();
}

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__IK_SERVICE__BUILDER_HPP_
