// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mako_nolang_interfaces:srv/LedControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__LED_CONTROL__TRAITS_HPP_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__LED_CONTROL__TRAITS_HPP_

#include "mako_nolang_interfaces/srv/detail/led_control__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mako_nolang_interfaces::srv::LedControl_Request>()
{
  return "mako_nolang_interfaces::srv::LedControl_Request";
}

template<>
inline const char * name<mako_nolang_interfaces::srv::LedControl_Request>()
{
  return "mako_nolang_interfaces/srv/LedControl_Request";
}

template<>
struct has_fixed_size<mako_nolang_interfaces::srv::LedControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mako_nolang_interfaces::srv::LedControl_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mako_nolang_interfaces::srv::LedControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mako_nolang_interfaces::srv::LedControl_Response>()
{
  return "mako_nolang_interfaces::srv::LedControl_Response";
}

template<>
inline const char * name<mako_nolang_interfaces::srv::LedControl_Response>()
{
  return "mako_nolang_interfaces/srv/LedControl_Response";
}

template<>
struct has_fixed_size<mako_nolang_interfaces::srv::LedControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<mako_nolang_interfaces::srv::LedControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<mako_nolang_interfaces::srv::LedControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mako_nolang_interfaces::srv::LedControl>()
{
  return "mako_nolang_interfaces::srv::LedControl";
}

template<>
inline const char * name<mako_nolang_interfaces::srv::LedControl>()
{
  return "mako_nolang_interfaces/srv/LedControl";
}

template<>
struct has_fixed_size<mako_nolang_interfaces::srv::LedControl>
  : std::integral_constant<
    bool,
    has_fixed_size<mako_nolang_interfaces::srv::LedControl_Request>::value &&
    has_fixed_size<mako_nolang_interfaces::srv::LedControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<mako_nolang_interfaces::srv::LedControl>
  : std::integral_constant<
    bool,
    has_bounded_size<mako_nolang_interfaces::srv::LedControl_Request>::value &&
    has_bounded_size<mako_nolang_interfaces::srv::LedControl_Response>::value
  >
{
};

template<>
struct is_service<mako_nolang_interfaces::srv::LedControl>
  : std::true_type
{
};

template<>
struct is_service_request<mako_nolang_interfaces::srv::LedControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<mako_nolang_interfaces::srv::LedControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__LED_CONTROL__TRAITS_HPP_
