// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__TRAITS_HPP_
#define MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__TRAITS_HPP_

#include "mako_nolang_interfaces/msg/detail/mako_server_message__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<mako_nolang_interfaces::msg::MakoServerMessage>()
{
  return "mako_nolang_interfaces::msg::MakoServerMessage";
}

template<>
inline const char * name<mako_nolang_interfaces::msg::MakoServerMessage>()
{
  return "mako_nolang_interfaces/msg/MakoServerMessage";
}

template<>
struct has_fixed_size<mako_nolang_interfaces::msg::MakoServerMessage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<mako_nolang_interfaces::msg::MakoServerMessage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<mako_nolang_interfaces::msg::MakoServerMessage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__TRAITS_HPP_
