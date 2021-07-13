// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mako_nolang_interfaces:srv/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__BUILDER_HPP_

#include "mako_nolang_interfaces/srv/detail/motor_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_MotorControl_Request_direction
{
public:
  Init_MotorControl_Request_direction()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::MotorControl_Request direction(::mako_nolang_interfaces::srv::MotorControl_Request::_direction_type arg)
  {
    msg_.direction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::MotorControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::MotorControl_Request>()
{
  return mako_nolang_interfaces::srv::builder::Init_MotorControl_Request_direction();
}

}  // namespace mako_nolang_interfaces


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_MotorControl_Response_success
{
public:
  Init_MotorControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::MotorControl_Response success(::mako_nolang_interfaces::srv::MotorControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::MotorControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::MotorControl_Response>()
{
  return mako_nolang_interfaces::srv::builder::Init_MotorControl_Response_success();
}

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__BUILDER_HPP_
