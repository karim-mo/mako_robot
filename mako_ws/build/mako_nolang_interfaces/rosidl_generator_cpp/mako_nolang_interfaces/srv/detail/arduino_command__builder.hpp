// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mako_nolang_interfaces:srv/ArduinoCommand.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__ARDUINO_COMMAND__BUILDER_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__ARDUINO_COMMAND__BUILDER_HPP_

#include "mako_nolang_interfaces/srv/detail/arduino_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArduinoCommand_Request_servo_expression
{
public:
  explicit Init_ArduinoCommand_Request_servo_expression(::mako_nolang_interfaces::srv::ArduinoCommand_Request & msg)
  : msg_(msg)
  {}
  ::mako_nolang_interfaces::srv::ArduinoCommand_Request servo_expression(::mako_nolang_interfaces::srv::ArduinoCommand_Request::_servo_expression_type arg)
  {
    msg_.servo_expression = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::ArduinoCommand_Request msg_;
};

class Init_ArduinoCommand_Request_led_exp_type
{
public:
  explicit Init_ArduinoCommand_Request_led_exp_type(::mako_nolang_interfaces::srv::ArduinoCommand_Request & msg)
  : msg_(msg)
  {}
  Init_ArduinoCommand_Request_servo_expression led_exp_type(::mako_nolang_interfaces::srv::ArduinoCommand_Request::_led_exp_type_type arg)
  {
    msg_.led_exp_type = std::move(arg);
    return Init_ArduinoCommand_Request_servo_expression(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::ArduinoCommand_Request msg_;
};

class Init_ArduinoCommand_Request_cmd_type
{
public:
  Init_ArduinoCommand_Request_cmd_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ArduinoCommand_Request_led_exp_type cmd_type(::mako_nolang_interfaces::srv::ArduinoCommand_Request::_cmd_type_type arg)
  {
    msg_.cmd_type = std::move(arg);
    return Init_ArduinoCommand_Request_led_exp_type(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::ArduinoCommand_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::ArduinoCommand_Request>()
{
  return mako_nolang_interfaces::srv::builder::Init_ArduinoCommand_Request_cmd_type();
}

}  // namespace mako_nolang_interfaces


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_ArduinoCommand_Response_success
{
public:
  Init_ArduinoCommand_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::ArduinoCommand_Response success(::mako_nolang_interfaces::srv::ArduinoCommand_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::ArduinoCommand_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::ArduinoCommand_Response>()
{
  return mako_nolang_interfaces::srv::builder::Init_ArduinoCommand_Response_success();
}

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__ARDUINO_COMMAND__BUILDER_HPP_
