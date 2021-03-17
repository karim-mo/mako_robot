// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__BUILDER_HPP_
#define MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__BUILDER_HPP_

#include "mako_nolang_interfaces/msg/detail/mako_server_message__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mako_nolang_interfaces
{

namespace msg
{

namespace builder
{

class Init_MakoServerMessage_module_name
{
public:
  explicit Init_MakoServerMessage_module_name(::mako_nolang_interfaces::msg::MakoServerMessage & msg)
  : msg_(msg)
  {}
  ::mako_nolang_interfaces::msg::MakoServerMessage module_name(::mako_nolang_interfaces::msg::MakoServerMessage::_module_name_type arg)
  {
    msg_.module_name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::msg::MakoServerMessage msg_;
};

class Init_MakoServerMessage_message
{
public:
  explicit Init_MakoServerMessage_message(::mako_nolang_interfaces::msg::MakoServerMessage & msg)
  : msg_(msg)
  {}
  Init_MakoServerMessage_module_name message(::mako_nolang_interfaces::msg::MakoServerMessage::_message_type arg)
  {
    msg_.message = std::move(arg);
    return Init_MakoServerMessage_module_name(msg_);
  }

private:
  ::mako_nolang_interfaces::msg::MakoServerMessage msg_;
};

class Init_MakoServerMessage_type
{
public:
  Init_MakoServerMessage_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MakoServerMessage_message type(::mako_nolang_interfaces::msg::MakoServerMessage::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_MakoServerMessage_message(msg_);
  }

private:
  ::mako_nolang_interfaces::msg::MakoServerMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::msg::MakoServerMessage>()
{
  return mako_nolang_interfaces::msg::builder::Init_MakoServerMessage_type();
}

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__BUILDER_HPP_
