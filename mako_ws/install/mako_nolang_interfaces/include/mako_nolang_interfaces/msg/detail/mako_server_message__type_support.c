// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mako_nolang_interfaces/msg/detail/mako_server_message__rosidl_typesupport_introspection_c.h"
#include "mako_nolang_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mako_nolang_interfaces/msg/detail/mako_server_message__functions.h"
#include "mako_nolang_interfaces/msg/detail/mako_server_message__struct.h"


// Include directives for member types
// Member `type`
// Member `message`
// Member `module_name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mako_nolang_interfaces__msg__MakoServerMessage__init(message_memory);
}

void MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_fini_function(void * message_memory)
{
  mako_nolang_interfaces__msg__MakoServerMessage__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_member_array[3] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__msg__MakoServerMessage, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__msg__MakoServerMessage, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "module_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mako_nolang_interfaces__msg__MakoServerMessage, module_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_members = {
  "mako_nolang_interfaces__msg",  // message namespace
  "MakoServerMessage",  // message name
  3,  // number of fields
  sizeof(mako_nolang_interfaces__msg__MakoServerMessage),
  MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_member_array,  // message members
  MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_type_support_handle = {
  0,
  &MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mako_nolang_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, msg, MakoServerMessage)() {
  if (!MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_type_support_handle.typesupport_identifier) {
    MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &MakoServerMessage__rosidl_typesupport_introspection_c__MakoServerMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
