// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mako_nolang_interfaces:srv/TTSCommand.idl
// generated code does not contain a copyright notice

#ifndef MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__STRUCT_H_
#define MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'message'
#include "rosidl_runtime_c/string.h"

// Struct defined in srv/TTSCommand in the package mako_nolang_interfaces.
typedef struct mako_nolang_interfaces__srv__TTSCommand_Request
{
  rosidl_runtime_c__String message;
} mako_nolang_interfaces__srv__TTSCommand_Request;

// Struct for a sequence of mako_nolang_interfaces__srv__TTSCommand_Request.
typedef struct mako_nolang_interfaces__srv__TTSCommand_Request__Sequence
{
  mako_nolang_interfaces__srv__TTSCommand_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mako_nolang_interfaces__srv__TTSCommand_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/TTSCommand in the package mako_nolang_interfaces.
typedef struct mako_nolang_interfaces__srv__TTSCommand_Response
{
  bool done;
} mako_nolang_interfaces__srv__TTSCommand_Response;

// Struct for a sequence of mako_nolang_interfaces__srv__TTSCommand_Response.
typedef struct mako_nolang_interfaces__srv__TTSCommand_Response__Sequence
{
  mako_nolang_interfaces__srv__TTSCommand_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mako_nolang_interfaces__srv__TTSCommand_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MAKO_NOLANG_INTERFACES__SRV__DETAIL__TTS_COMMAND__STRUCT_H_
