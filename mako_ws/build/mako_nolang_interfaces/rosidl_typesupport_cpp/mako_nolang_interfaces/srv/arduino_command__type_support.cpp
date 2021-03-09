// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from mako_nolang_interfaces:srv/ArduinoCommand.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "mako_nolang_interfaces/srv/detail/arduino_command__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace mako_nolang_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArduinoCommand_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArduinoCommand_Request_type_support_ids_t;

static const _ArduinoCommand_Request_type_support_ids_t _ArduinoCommand_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArduinoCommand_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArduinoCommand_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArduinoCommand_Request_type_support_symbol_names_t _ArduinoCommand_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mako_nolang_interfaces, srv, ArduinoCommand_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mako_nolang_interfaces, srv, ArduinoCommand_Request)),
  }
};

typedef struct _ArduinoCommand_Request_type_support_data_t
{
  void * data[2];
} _ArduinoCommand_Request_type_support_data_t;

static _ArduinoCommand_Request_type_support_data_t _ArduinoCommand_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArduinoCommand_Request_message_typesupport_map = {
  2,
  "mako_nolang_interfaces",
  &_ArduinoCommand_Request_message_typesupport_ids.typesupport_identifier[0],
  &_ArduinoCommand_Request_message_typesupport_symbol_names.symbol_name[0],
  &_ArduinoCommand_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArduinoCommand_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArduinoCommand_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mako_nolang_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mako_nolang_interfaces::srv::ArduinoCommand_Request>()
{
  return &::mako_nolang_interfaces::srv::rosidl_typesupport_cpp::ArduinoCommand_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mako_nolang_interfaces, srv, ArduinoCommand_Request)() {
  return get_message_type_support_handle<mako_nolang_interfaces::srv::ArduinoCommand_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mako_nolang_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArduinoCommand_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArduinoCommand_Response_type_support_ids_t;

static const _ArduinoCommand_Response_type_support_ids_t _ArduinoCommand_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArduinoCommand_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArduinoCommand_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArduinoCommand_Response_type_support_symbol_names_t _ArduinoCommand_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mako_nolang_interfaces, srv, ArduinoCommand_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mako_nolang_interfaces, srv, ArduinoCommand_Response)),
  }
};

typedef struct _ArduinoCommand_Response_type_support_data_t
{
  void * data[2];
} _ArduinoCommand_Response_type_support_data_t;

static _ArduinoCommand_Response_type_support_data_t _ArduinoCommand_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArduinoCommand_Response_message_typesupport_map = {
  2,
  "mako_nolang_interfaces",
  &_ArduinoCommand_Response_message_typesupport_ids.typesupport_identifier[0],
  &_ArduinoCommand_Response_message_typesupport_symbol_names.symbol_name[0],
  &_ArduinoCommand_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t ArduinoCommand_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArduinoCommand_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mako_nolang_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mako_nolang_interfaces::srv::ArduinoCommand_Response>()
{
  return &::mako_nolang_interfaces::srv::rosidl_typesupport_cpp::ArduinoCommand_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, mako_nolang_interfaces, srv, ArduinoCommand_Response)() {
  return get_message_type_support_handle<mako_nolang_interfaces::srv::ArduinoCommand_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace mako_nolang_interfaces
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _ArduinoCommand_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _ArduinoCommand_type_support_ids_t;

static const _ArduinoCommand_type_support_ids_t _ArduinoCommand_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _ArduinoCommand_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _ArduinoCommand_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _ArduinoCommand_type_support_symbol_names_t _ArduinoCommand_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, mako_nolang_interfaces, srv, ArduinoCommand)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mako_nolang_interfaces, srv, ArduinoCommand)),
  }
};

typedef struct _ArduinoCommand_type_support_data_t
{
  void * data[2];
} _ArduinoCommand_type_support_data_t;

static _ArduinoCommand_type_support_data_t _ArduinoCommand_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _ArduinoCommand_service_typesupport_map = {
  2,
  "mako_nolang_interfaces",
  &_ArduinoCommand_service_typesupport_ids.typesupport_identifier[0],
  &_ArduinoCommand_service_typesupport_symbol_names.symbol_name[0],
  &_ArduinoCommand_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t ArduinoCommand_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_ArduinoCommand_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace mako_nolang_interfaces

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<mako_nolang_interfaces::srv::ArduinoCommand>()
{
  return &::mako_nolang_interfaces::srv::rosidl_typesupport_cpp::ArduinoCommand_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp
