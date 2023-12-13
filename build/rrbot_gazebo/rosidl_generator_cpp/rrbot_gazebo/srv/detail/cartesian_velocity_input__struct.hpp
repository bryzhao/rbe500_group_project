// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rrbot_gazebo:srv/CartesianVelocityInput.idl
// generated code does not contain a copyright notice

#ifndef RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__STRUCT_HPP_
#define RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Request __attribute__((deprecated))
#else
# define DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Request __declspec(deprecated)
#endif

namespace rrbot_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartesianVelocityInput_Request_
{
  using Type = CartesianVelocityInput_Request_<ContainerAllocator>;

  explicit CartesianVelocityInput_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_x_dot = 0.0f;
      this->input_y_dot = 0.0f;
      this->input_z_dot = 0.0f;
    }
  }

  explicit CartesianVelocityInput_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->input_x_dot = 0.0f;
      this->input_y_dot = 0.0f;
      this->input_z_dot = 0.0f;
    }
  }

  // field types and members
  using _input_x_dot_type =
    float;
  _input_x_dot_type input_x_dot;
  using _input_y_dot_type =
    float;
  _input_y_dot_type input_y_dot;
  using _input_z_dot_type =
    float;
  _input_z_dot_type input_z_dot;

  // setters for named parameter idiom
  Type & set__input_x_dot(
    const float & _arg)
  {
    this->input_x_dot = _arg;
    return *this;
  }
  Type & set__input_y_dot(
    const float & _arg)
  {
    this->input_y_dot = _arg;
    return *this;
  }
  Type & set__input_z_dot(
    const float & _arg)
  {
    this->input_z_dot = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Request
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Request
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianVelocityInput_Request_ & other) const
  {
    if (this->input_x_dot != other.input_x_dot) {
      return false;
    }
    if (this->input_y_dot != other.input_y_dot) {
      return false;
    }
    if (this->input_z_dot != other.input_z_dot) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianVelocityInput_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianVelocityInput_Request_

// alias to use template instance with default allocator
using CartesianVelocityInput_Request =
  rrbot_gazebo::srv::CartesianVelocityInput_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrbot_gazebo


#ifndef _WIN32
# define DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Response __attribute__((deprecated))
#else
# define DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Response __declspec(deprecated)
#endif

namespace rrbot_gazebo
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CartesianVelocityInput_Response_
{
  using Type = CartesianVelocityInput_Response_<ContainerAllocator>;

  explicit CartesianVelocityInput_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit CartesianVelocityInput_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Response
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rrbot_gazebo__srv__CartesianVelocityInput_Response
    std::shared_ptr<rrbot_gazebo::srv::CartesianVelocityInput_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CartesianVelocityInput_Response_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const CartesianVelocityInput_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CartesianVelocityInput_Response_

// alias to use template instance with default allocator
using CartesianVelocityInput_Response =
  rrbot_gazebo::srv::CartesianVelocityInput_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rrbot_gazebo

namespace rrbot_gazebo
{

namespace srv
{

struct CartesianVelocityInput
{
  using Request = rrbot_gazebo::srv::CartesianVelocityInput_Request;
  using Response = rrbot_gazebo::srv::CartesianVelocityInput_Response;
};

}  // namespace srv

}  // namespace rrbot_gazebo

#endif  // RRBOT_GAZEBO__SRV__DETAIL__CARTESIAN_VELOCITY_INPUT__STRUCT_HPP_
