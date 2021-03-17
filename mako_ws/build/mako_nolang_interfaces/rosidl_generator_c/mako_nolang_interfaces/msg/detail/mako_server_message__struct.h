// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__STRUCT_H_
#define MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
// Member 'message'
// Member 'module_name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/MakoServerMessage in the package mako_nolang_interfaces.
typedef struct mako_nolang_interfaces__msg__MakoServerMessage
{
  rosidl_runtime_c__String type;
  rosidl_runtime_c__String message;
  rosidl_runtime_c__String module_name;
} mako_nolang_interfaces__msg__MakoServerMessage;

// Struct for a sequence of mako_nolang_interfaces__msg__MakoServerMessage.
typedef struct mako_nolang_interfaces__msg__MakoServerMessage__Sequence
{
  mako_nolang_interfaces__msg__MakoServerMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mako_nolang_interfaces__msg__MakoServerMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKO_NOLANG_INTERFACES__MSG__DETAIL__MAKO_SERVER_MESSAGE__STRUCT_H_
