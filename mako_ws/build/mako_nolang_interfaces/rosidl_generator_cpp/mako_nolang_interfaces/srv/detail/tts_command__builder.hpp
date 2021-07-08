// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mako_nolang_interfaces:srv/TTSCommand.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__BUILDER_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__BUILDER_HPP_

#include "mako_nolang_interfaces/srv/detail/tts_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_TTSCommand_Request_message
{
public:
  Init_TTSCommand_Request_message()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::TTSCommand_Request message(::mako_nolang_interfaces::srv::TTSCommand_Request::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::TTSCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::TTSCommand_Request>()
{
  return mako_nolang_interfaces::srv::builder::Init_TTSCommand_Request_message();
}

}  // namespace mako_nolang_interfaces


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_TTSCommand_Response_done
{
public:
  Init_TTSCommand_Response_done()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::TTSCommand_Response done(::mako_nolang_interfaces::srv::TTSCommand_Response::_done_type arg)
  {
    msg_.done = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::TTSCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::TTSCommand_Response>()
{
  return mako_nolang_interfaces::srv::builder::Init_TTSCommand_Response_done();
}

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__BUILDER_HPP_
