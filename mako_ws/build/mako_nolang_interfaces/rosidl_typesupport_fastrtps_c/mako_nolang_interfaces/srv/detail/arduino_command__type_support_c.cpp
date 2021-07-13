// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from mako_nolang_interfaces:srv/ArduinoCommand.idl
// generated code does not contain a copyright notice
#include "mako_nolang_interfaces/srv/detail/arduino_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "mako_nolang_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mako_nolang_interfaces/srv/detail/arduino_command__struct.h"
#include "mako_nolang_interfaces/srv/detail/arduino_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // cmd_type, led_exp_type, motor_direction, servo_expression
#include "rosidl_runtime_c/string_functions.h"  // cmd_type, led_exp_type, motor_direction, servo_expression

// forward declare type support functions


using _ArduinoCommand_Request__ros_msg_type = mako_nolang_interfaces__srv__ArduinoCommand_Request;

static bool _ArduinoCommand_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArduinoCommand_Request__ros_msg_type * ros_message = static_cast<const _ArduinoCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    const rosidl_runtime_c__String * str = &ros_message->cmd_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: led_exp_type
  {
    const rosidl_runtime_c__String * str = &ros_message->led_exp_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: servo_expression
  {
    const rosidl_runtime_c__String * str = &ros_message->servo_expression;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: motor_direction
  {
    const rosidl_runtime_c__String * str = &ros_message->motor_direction;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _ArduinoCommand_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArduinoCommand_Request__ros_msg_type * ros_message = static_cast<_ArduinoCommand_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: cmd_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->cmd_type.data) {
      rosidl_runtime_c__String__init(&ros_message->cmd_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->cmd_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'cmd_type'\n");
      return false;
    }
  }

  // Field name: led_exp_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->led_exp_type.data) {
      rosidl_runtime_c__String__init(&ros_message->led_exp_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->led_exp_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'led_exp_type'\n");
      return false;
    }
  }

  // Field name: servo_expression
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->servo_expression.data) {
      rosidl_runtime_c__String__init(&ros_message->servo_expression);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->servo_expression,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'servo_expression'\n");
      return false;
    }
  }

  // Field name: motor_direction
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motor_direction.data) {
      rosidl_runtime_c__String__init(&ros_message->motor_direction);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motor_direction,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motor_direction'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mako_nolang_interfaces
size_t get_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArduinoCommand_Request__ros_msg_type * ros_message = static_cast<const _ArduinoCommand_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name cmd_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->cmd_type.size + 1);
  // field.name led_exp_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->led_exp_type.size + 1);
  // field.name servo_expression
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->servo_expression.size + 1);
  // field.name motor_direction
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motor_direction.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _ArduinoCommand_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mako_nolang_interfaces
size_t max_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: cmd_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: led_exp_type
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: servo_expression
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: motor_direction
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _ArduinoCommand_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArduinoCommand_Request = {
  "mako_nolang_interfaces::srv",
  "ArduinoCommand_Request",
  _ArduinoCommand_Request__cdr_serialize,
  _ArduinoCommand_Request__cdr_deserialize,
  _ArduinoCommand_Request__get_serialized_size,
  _ArduinoCommand_Request__max_serialized_size
};

static rosidl_message_type_support_t _ArduinoCommand_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArduinoCommand_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mako_nolang_interfaces, srv, ArduinoCommand_Request)() {
  return &_ArduinoCommand_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "mako_nolang_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__struct.h"
// already included above
// #include "mako_nolang_interfaces/srv/detail/arduino_command__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _ArduinoCommand_Response__ros_msg_type = mako_nolang_interfaces__srv__ArduinoCommand_Response;

static bool _ArduinoCommand_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArduinoCommand_Response__ros_msg_type * ros_message = static_cast<const _ArduinoCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _ArduinoCommand_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArduinoCommand_Response__ros_msg_type * ros_message = static_cast<_ArduinoCommand_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mako_nolang_interfaces
size_t get_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArduinoCommand_Response__ros_msg_type * ros_message = static_cast<const _ArduinoCommand_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArduinoCommand_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_mako_nolang_interfaces
size_t max_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _ArduinoCommand_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_mako_nolang_interfaces__srv__ArduinoCommand_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_ArduinoCommand_Response = {
  "mako_nolang_interfaces::srv",
  "ArduinoCommand_Response",
  _ArduinoCommand_Response__cdr_serialize,
  _ArduinoCommand_Response__cdr_deserialize,
  _ArduinoCommand_Response__get_serialized_size,
  _ArduinoCommand_Response__max_serialized_size
};

static rosidl_message_type_support_t _ArduinoCommand_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArduinoCommand_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mako_nolang_interfaces, srv, ArduinoCommand_Response)() {
  return &_ArduinoCommand_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "mako_nolang_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "mako_nolang_interfaces/srv/arduino_command.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t ArduinoCommand__callbacks = {
  "mako_nolang_interfaces::srv",
  "ArduinoCommand",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mako_nolang_interfaces, srv, ArduinoCommand_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mako_nolang_interfaces, srv, ArduinoCommand_Response)(),
};

static rosidl_service_type_support_t ArduinoCommand__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &ArduinoCommand__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, mako_nolang_interfaces, srv, ArduinoCommand)() {
  return &ArduinoCommand__handle;
}

#if defined(__cplusplus)
}
#endif
