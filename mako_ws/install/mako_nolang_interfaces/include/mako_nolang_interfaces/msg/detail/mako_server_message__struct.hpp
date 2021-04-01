// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__STRUCT_HPP_
#define MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mako_nolang_interfaces__msg__MakoServerMessage __attribute__((deprecated))
#else
# define DEPRECATED__mako_nolang_interfaces__msg__MakoServerMessage __declspec(deprecated)
#endif

namespace mako_nolang_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MakoServerMessage_
{
  using Type = MakoServerMessage_<ContainerAllocator>;

  explicit MakoServerMessage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->message = "";
      this->module_name = "";
    }
  }

  explicit MakoServerMessage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : type(_alloc),
    message(_alloc),
    module_name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->type = "";
      this->message = "";
      this->module_name = "";
    }
  }

  // field types and members
  using _type_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _type_type type;
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;
  using _module_name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _module_name_type module_name;

  // setters for named parameter idiom
  Type & set__type(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->type = _arg;
    return *this;
  }
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }
  Type & set__module_name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->module_name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator> *;
  using ConstRawPtr =
    const mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mako_nolang_interfaces__msg__MakoServerMessage
    std::shared_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mako_nolang_interfaces__msg__MakoServerMessage
    std::shared_ptr<mako_nolang_interfaces::msg::MakoServerMessage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MakoServerMessage_ & other) const
  {
    if (this->type != other.type) {
      return false;
    }
    if (this->message != other.message) {
      return false;
    }
    if (this->module_name != other.module_name) {
      return false;
    }
    return true;
  }
  bool operator!=(const MakoServerMessage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MakoServerMessage_

// alias to use template instance with default allocator
using MakoServerMessage =
  mako_nolang_interfaces::msg::MakoServerMessage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__STRUCT_HPP_
