// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from mako_nolang_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__LED_CONTROL__BUILDER_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__LED_CONTROL__BUILDER_HPP_

#include "mako_nolang_interfaces/srv/detail/led_control__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_LedControl_Request_exp_type
{
public:
  Init_LedControl_Request_exp_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::LedControl_Request exp_type(::mako_nolang_interfaces::srv::LedControl_Request::_exp_type_type arg)
  {
    msg_.exp_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::LedControl_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::LedControl_Request>()
{
  return mako_nolang_interfaces::srv::builder::Init_LedControl_Request_exp_type();
}

}  // namespace mako_nolang_interfaces


namespace mako_nolang_interfaces
{

namespace srv
{

namespace builder
{

class Init_LedControl_Response_success
{
public:
  Init_LedControl_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::mako_nolang_interfaces::srv::LedControl_Response success(::mako_nolang_interfaces::srv::LedControl_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::mako_nolang_interfaces::srv::LedControl_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::mako_nolang_interfaces::srv::LedControl_Response>()
{
  return mako_nolang_interfaces::srv::builder::Init_LedControl_Response_success();
}

}  // namespace mako_nolang_interfaces

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__LED_CONTROL__BUILDER_HPP_
