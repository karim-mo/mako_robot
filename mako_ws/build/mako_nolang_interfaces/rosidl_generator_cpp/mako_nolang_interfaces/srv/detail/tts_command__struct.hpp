// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from mako_nolang_interfaces:srv/TTSCommand.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__STRUCT_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Request __attribute__((deprecated))
#else
# define DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Request __declspec(deprecated)
#endif

namespace mako_nolang_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TTSCommand_Request_
{
  using Type = TTSCommand_Request_<ContainerAllocator>;

  explicit TTSCommand_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  explicit TTSCommand_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : message(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->message = "";
    }
  }

  // field types and members
  using _message_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _message_type message;

  // setters for named parameter idiom
  Type & set__message(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->message = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Request
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Request
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTSCommand_Request_ & other) const
  {
    if (this->message != other.message) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTSCommand_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTSCommand_Request_

// alias to use template instance with default allocator
using TTSCommand_Request =
  mako_nolang_interfaces::srv::TTSCommand_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mako_nolang_interfaces


#ifndef _WIN32
# define DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Response __attribute__((deprecated))
#else
# define DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Response __declspec(deprecated)
#endif

namespace mako_nolang_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct TTSCommand_Response_
{
  using Type = TTSCommand_Response_<ContainerAllocator>;

  explicit TTSCommand_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit TTSCommand_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Response
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__mako_nolang_interfaces__srv__TTSCommand_Response
    std::shared_ptr<mako_nolang_interfaces::srv::TTSCommand_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TTSCommand_Response_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const TTSCommand_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TTSCommand_Response_

// alias to use template instance with default allocator
using TTSCommand_Response =
  mako_nolang_interfaces::srv::TTSCommand_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace mako_nolang_interfaces

namespace mako_nolang_interfaces
{

namespace srv
{

struct TTSCommand
{
  using Request = mako_nolang_interfaces::srv::TTSCommand_Request;
  using Response = mako_nolang_interfaces::srv::TTSCommand_Response;
};

}  // namespace srv

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__STRUCT_HPP_
