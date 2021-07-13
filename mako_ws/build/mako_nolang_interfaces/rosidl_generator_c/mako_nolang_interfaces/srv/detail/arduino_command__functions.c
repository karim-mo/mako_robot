// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mako_nolang_interfaces:srv/ArduinoCommand.idl
// generated code does not contain a copyright notice
#include "mako_nolang_interfaces/srv/detail/arduino_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `cmd_type`
// Member `led_exp_type`
// Member `servo_expression`
// Member `motor_direction`
#include "rosidl_runtime_c/string_functions.h"

bool
mako_nolang_interfaces__srv__ArduinoCommand_Request__init(mako_nolang_interfaces__srv__ArduinoCommand_Request * msg)
{
  if (!msg) {
    return false;
  }
  // cmd_type
  if (!rosidl_runtime_c__String__init(&msg->cmd_type)) {
    mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(msg);
    return false;
  }
  // led_exp_type
  if (!rosidl_runtime_c__String__init(&msg->led_exp_type)) {
    mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(msg);
    return false;
  }
  // servo_expression
  if (!rosidl_runtime_c__String__init(&msg->servo_expression)) {
    mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(msg);
    return false;
  }
  // motor_direction
  if (!rosidl_runtime_c__String__init(&msg->motor_direction)) {
    mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(msg);
    return false;
  }
  return true;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(mako_nolang_interfaces__srv__ArduinoCommand_Request * msg)
{
  if (!msg) {
    return;
  }
  // cmd_type
  rosidl_runtime_c__String__fini(&msg->cmd_type);
  // led_exp_type
  rosidl_runtime_c__String__fini(&msg->led_exp_type);
  // servo_expression
  rosidl_runtime_c__String__fini(&msg->servo_expression);
  // motor_direction
  rosidl_runtime_c__String__fini(&msg->motor_direction);
}

mako_nolang_interfaces__srv__ArduinoCommand_Request *
mako_nolang_interfaces__srv__ArduinoCommand_Request__create()
{
  mako_nolang_interfaces__srv__ArduinoCommand_Request * msg = (mako_nolang_interfaces__srv__ArduinoCommand_Request *)malloc(sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Request));
  bool success = mako_nolang_interfaces__srv__ArduinoCommand_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Request__destroy(mako_nolang_interfaces__srv__ArduinoCommand_Request * msg)
{
  if (msg) {
    mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(msg);
  }
  free(msg);
}


bool
mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence__init(mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mako_nolang_interfaces__srv__ArduinoCommand_Request * data = NULL;
  if (size) {
    data = (mako_nolang_interfaces__srv__ArduinoCommand_Request *)calloc(size, sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mako_nolang_interfaces__srv__ArduinoCommand_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence__fini(mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mako_nolang_interfaces__srv__ArduinoCommand_Request__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence *
mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence__create(size_t size)
{
  mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence * array = (mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence *)malloc(sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence__destroy(mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence * array)
{
  if (array) {
    mako_nolang_interfaces__srv__ArduinoCommand_Request__Sequence__fini(array);
  }
  free(array);
}


bool
mako_nolang_interfaces__srv__ArduinoCommand_Response__init(mako_nolang_interfaces__srv__ArduinoCommand_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Response__fini(mako_nolang_interfaces__srv__ArduinoCommand_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

mako_nolang_interfaces__srv__ArduinoCommand_Response *
mako_nolang_interfaces__srv__ArduinoCommand_Response__create()
{
  mako_nolang_interfaces__srv__ArduinoCommand_Response * msg = (mako_nolang_interfaces__srv__ArduinoCommand_Response *)malloc(sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Response));
  bool success = mako_nolang_interfaces__srv__ArduinoCommand_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Response__destroy(mako_nolang_interfaces__srv__ArduinoCommand_Response * msg)
{
  if (msg) {
    mako_nolang_interfaces__srv__ArduinoCommand_Response__fini(msg);
  }
  free(msg);
}


bool
mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence__init(mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mako_nolang_interfaces__srv__ArduinoCommand_Response * data = NULL;
  if (size) {
    data = (mako_nolang_interfaces__srv__ArduinoCommand_Response *)calloc(size, sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mako_nolang_interfaces__srv__ArduinoCommand_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mako_nolang_interfaces__srv__ArduinoCommand_Response__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence__fini(mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mako_nolang_interfaces__srv__ArduinoCommand_Response__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence *
mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence__create(size_t size)
{
  mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence * array = (mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence *)malloc(sizeof(mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence__destroy(mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence * array)
{
  if (array) {
    mako_nolang_interfaces__srv__ArduinoCommand_Response__Sequence__fini(array);
  }
  free(array);
}
