// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mako_nolang_interfaces:srv/ServoControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__SERVO_CONTROL__STRUCT_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__SERVO_CONTROL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Request __attribute__((deprecated))
#else
# define DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Request __declspec(deprecated)
#endif

namespace mako_nolang_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoControl_Request_
{
  using Type = ServoControl_Request_<ContainerAllocator>;

  explicit ServoControl_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expression = "";
    }
  }

  explicit ServoControl_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : expression(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->expression = "";
    }
  }

  // field types and members
  using _expression_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _expression_type expression;

  // setters for named parameter idiom
  Type & set__expression(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->expression = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Request
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Request
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoControl_Request_ & other) const
  {
    if (this->expression != other.expression) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoControl_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoControl_Request_

// alias to use template instance with default allocator
using ServoControl_Request =
  mako_nolang_interfaces::srv::ServoControl_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mako_nolang_interfaces


#ifndef _WIN32
# define DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Response __attribute__((deprecated))
#else
# define DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Response __declspec(deprecated)
#endif

namespace mako_nolang_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ServoControl_Response_
{
  using Type = ServoControl_Response_<ContainerAllocator>;

  explicit ServoControl_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ServoControl_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Response
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mako_nolang_interfaces__srv__ServoControl_Response
    std::shared_ptr<mako_nolang_interfaces::srv::ServoControl_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ServoControl_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ServoControl_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ServoControl_Response_

// alias to use template instance with default allocator
using ServoControl_Response =
  mako_nolang_interfaces::srv::ServoControl_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mako_nolang_interfaces

namespace mako_nolang_interfaces
{

namespace srv
{

struct ServoControl
{
  using Request = mako_nolang_interfaces::srv::ServoControl_Request;
  using Response = mako_nolang_interfaces::srv::ServoControl_Response;
};

}  // namespace srv

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__SERVO_CONTROL__STRUCT_HPP_
