// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mako_nolang_interfaces/msg/rosidl_typesupport_c__visibility_control.h"
#include "mako_nolang_interfaces/msg/detail/mako_server_message__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mako_nolang_interfaces
{

namespace msg
{

namespace rosidl_typesupport_c
{

typedef struct _MakoServerMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _MakoServerMessage_type_support_ids_t;

static const _MakoServerMessage_type_support_ids_t _MakoServerMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _MakoServerMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _MakoServerMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _MakoServerMessage_type_support_symbol_names_t _MakoServerMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mako_nolang_interfaces, msg, MakoServerMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mako_nolang_interfaces, msg, MakoServerMessage)),
  }
};

typedef struct _MakoServerMessage_type_support_data_t
{
  void * data[2];
} _MakoServerMessage_type_support_data_t;

static _MakoServerMessage_type_support_data_t _MakoServerMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _MakoServerMessage_message_typesupport_map = {
  2,
  "mako_nolang_interfaces",
  &_MakoServerMessage_message_typesupport_ids.typesupport_identifier[0],
  &_MakoServerMessage_message_typesupport_symbol_names.symbol_name[0],
  &_MakoServerMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t MakoServerMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_MakoServerMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace msg

}  // namespace mako_nolang_interfaces

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_mako_nolang_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, mako_nolang_interfaces, msg, MakoServerMessage)() {
  return &::mako_nolang_interfaces::msg::rosidl_typesupport_c::MakoServerMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
