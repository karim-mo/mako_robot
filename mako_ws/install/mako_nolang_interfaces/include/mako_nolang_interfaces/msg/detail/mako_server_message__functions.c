// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mako_nolang_interfaces:msg/MakoServerMessage.idl
// generated code does not contain a copyright notice
#include "mako_nolang_interfaces/msg/detail/mako_server_message__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `type`
// Member `message`
// Member `module_name`
#include "rosidl_runtime_c/string_functions.h"

bool
mako_nolang_interfaces__msg__MakoServerMessage__init(mako_nolang_interfaces__msg__MakoServerMessage * msg)
{
  if (!msg) {
    return false;
  }
  // type
  if (!rosidl_runtime_c__String__init(&msg->type)) {
    mako_nolang_interfaces__msg__MakoServerMessage__fini(msg);
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    mako_nolang_interfaces__msg__MakoServerMessage__fini(msg);
    return false;
  }
  // module_name
  if (!rosidl_runtime_c__String__init(&msg->module_name)) {
    mako_nolang_interfaces__msg__MakoServerMessage__fini(msg);
    return false;
  }
  return true;
}

void
mako_nolang_interfaces__msg__MakoServerMessage__fini(mako_nolang_interfaces__msg__MakoServerMessage * msg)
{
  if (!msg) {
    return;
  }
  // type
  rosidl_runtime_c__String__fini(&msg->type);
  // message
  rosidl_runtime_c__String__fini(&msg->message);
  // module_name
  rosidl_runtime_c__String__fini(&msg->module_name);
}

mako_nolang_interfaces__msg__MakoServerMessage *
mako_nolang_interfaces__msg__MakoServerMessage__create()
{
  mako_nolang_interfaces__msg__MakoServerMessage * msg = (mako_nolang_interfaces__msg__MakoServerMessage *)malloc(sizeof(mako_nolang_interfaces__msg__MakoServerMessage));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mako_nolang_interfaces__msg__MakoServerMessage));
  bool success = mako_nolang_interfaces__msg__MakoServerMessage__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mako_nolang_interfaces__msg__MakoServerMessage__destroy(mako_nolang_interfaces__msg__MakoServerMessage * msg)
{
  if (msg) {
    mako_nolang_interfaces__msg__MakoServerMessage__fini(msg);
  }
  free(msg);
}


bool
mako_nolang_interfaces__msg__MakoServerMessage__Sequence__init(mako_nolang_interfaces__msg__MakoServerMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mako_nolang_interfaces__msg__MakoServerMessage * data = NULL;
  if (size) {
    data = (mako_nolang_interfaces__msg__MakoServerMessage *)calloc(size, sizeof(mako_nolang_interfaces__msg__MakoServerMessage));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mako_nolang_interfaces__msg__MakoServerMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mako_nolang_interfaces__msg__MakoServerMessage__fini(&data[i - 1]);
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
mako_nolang_interfaces__msg__MakoServerMessage__Sequence__fini(mako_nolang_interfaces__msg__MakoServerMessage__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mako_nolang_interfaces__msg__MakoServerMessage__fini(&array->data[i]);
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

mako_nolang_interfaces__msg__MakoServerMessage__Sequence *
mako_nolang_interfaces__msg__MakoServerMessage__Sequence__create(size_t size)
{
  mako_nolang_interfaces__msg__MakoServerMessage__Sequence * array = (mako_nolang_interfaces__msg__MakoServerMessage__Sequence *)malloc(sizeof(mako_nolang_interfaces__msg__MakoServerMessage__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mako_nolang_interfaces__msg__MakoServerMessage__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mako_nolang_interfaces__msg__MakoServerMessage__Sequence__destroy(mako_nolang_interfaces__msg__MakoServerMessage__Sequence * array)
{
  if (array) {
    mako_nolang_interfaces__msg__MakoServerMessage__Sequence__fini(array);
  }
  free(array);
}
