// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mako_nolang_interfaces:srv/ServoControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__SERVO_CONTROL__BUILDER_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__SERVO_CONTROL__BUILDER_HPP_

#include "mako_nolang_interfaces/srv/detail/servo_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoControl_Request_expression
{
public:
  Init_ServoControl_Request_expression()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::ServoControl_Request expression(::mako_nolang_interfaces::srv::ServoControl_Request::_expression_type arg)
  {
    msg_.expression = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::ServoControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::ServoControl_Request>()
{
  return mako_nolang_interfaces::srv::builder::Init_ServoControl_Request_expression();
}

}  // namespace mako_nolang_interfaces


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_ServoControl_Response_success
{
public:
  Init_ServoControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::ServoControl_Response success(::mako_nolang_interfaces::srv::ServoControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::ServoControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::ServoControl_Response>()
{
  return mako_nolang_interfaces::srv::builder::Init_ServoControl_Response_success();
}

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__SERVO_CONTROL__BUILDER_HPP_
