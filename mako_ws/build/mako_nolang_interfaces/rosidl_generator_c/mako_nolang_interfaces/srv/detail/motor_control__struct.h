// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mako_nolang_interfaces:srv/MotorControl.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__STRUCT_H_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/MotorControl in the package mako_nolang_interfaces.
typedef struct mako_nolang_interfaces__srv__MotorControl_Request
{
  rosidl_runtime_c__String direction;
} mako_nolang_interfaces__srv__MotorControl_Request;

// Struct for a sequence of mako_nolang_interfaces__srv__MotorControl_Request.
typedef struct mako_nolang_interfaces__srv__MotorControl_Request__Sequence
{
  mako_nolang_interfaces__srv__MotorControl_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mako_nolang_interfaces__srv__MotorControl_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/MotorControl in the package mako_nolang_interfaces.
typedef struct mako_nolang_interfaces__srv__MotorControl_Response
{
  bool success;
} mako_nolang_interfaces__srv__MotorControl_Response;

// Struct for a sequence of mako_nolang_interfaces__srv__MotorControl_Response.
typedef struct mako_nolang_interfaces__srv__MotorControl_Response__Sequence
{
  mako_nolang_interfaces__srv__MotorControl_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mako_nolang_interfaces__srv__MotorControl_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__MOTOR_CONTROL__STRUCT_H_
