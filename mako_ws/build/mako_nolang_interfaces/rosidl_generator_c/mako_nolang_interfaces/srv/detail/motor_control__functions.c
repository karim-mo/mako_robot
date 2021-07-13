// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mako_nolang_interfaces:srv/MotorControl.idl
// generated code does not contain a copyright notice
#include "mako_nolang_interfaces/srv/detail/motor_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `direction`
#include "rosidl_runtime_c/string_functions.h"

bool
mako_nolang_interfaces__srv__MotorControl_Request__init(mako_nolang_interfaces__srv__MotorControl_Request * msg)
{
  if (!msg) {
    return false;
  }
  // direction
  if (!rosidl_runtime_c__String__init(&msg->direction)) {
    mako_nolang_interfaces__srv__MotorControl_Request__fini(msg);
    return false;
  }
  return true;
}

void
mako_nolang_interfaces__srv__MotorControl_Request__fini(mako_nolang_interfaces__srv__MotorControl_Request * msg)
{
  if (!msg) {
    return;
  }
  // direction
  rosidl_runtime_c__String__fini(&msg->direction);
}

mako_nolang_interfaces__srv__MotorControl_Request *
mako_nolang_interfaces__srv__MotorControl_Request__create()
{
  mako_nolang_interfaces__srv__MotorControl_Request * msg = (mako_nolang_interfaces__srv__MotorControl_Request *)malloc(sizeof(mako_nolang_interfaces__srv__MotorControl_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mako_nolang_interfaces__srv__MotorControl_Request));
  bool success = mako_nolang_interfaces__srv__MotorControl_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mako_nolang_interfaces__srv__MotorControl_Request__destroy(mako_nolang_interfaces__srv__MotorControl_Request * msg)
{
  if (msg) {
    mako_nolang_interfaces__srv__MotorControl_Request__fini(msg);
  }
  free(msg);
}


bool
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__init(mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mako_nolang_interfaces__srv__MotorControl_Request * data = NULL;
  if (size) {
    data = (mako_nolang_interfaces__srv__MotorControl_Request *)calloc(size, sizeof(mako_nolang_interfaces__srv__MotorControl_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mako_nolang_interfaces__srv__MotorControl_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mako_nolang_interfaces__srv__MotorControl_Request__fini(&data[i - 1]);
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
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__fini(mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mako_nolang_interfaces__srv__MotorControl_Request__fini(&array->data[i]);
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

mako_nolang_interfaces__srv__MotorControl_Request__Sequence *
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__create(size_t size)
{
  mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array = (mako_nolang_interfaces__srv__MotorControl_Request__Sequence *)malloc(sizeof(mako_nolang_interfaces__srv__MotorControl_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mako_nolang_interfaces__srv__MotorControl_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mako_nolang_interfaces__srv__MotorControl_Request__Sequence__destroy(mako_nolang_interfaces__srv__MotorControl_Request__Sequence * array)
{
  if (array) {
    mako_nolang_interfaces__srv__MotorControl_Request__Sequence__fini(array);
  }
  free(array);
}


bool
mako_nolang_interfaces__srv__MotorControl_Response__init(mako_nolang_interfaces__srv__MotorControl_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
mako_nolang_interfaces__srv__MotorControl_Response__fini(mako_nolang_interfaces__srv__MotorControl_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

mako_nolang_interfaces__srv__MotorControl_Response *
mako_nolang_interfaces__srv__MotorControl_Response__create()
{
  mako_nolang_interfaces__srv__MotorControl_Response * msg = (mako_nolang_interfaces__srv__MotorControl_Response *)malloc(sizeof(mako_nolang_interfaces__srv__MotorControl_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mako_nolang_interfaces__srv__MotorControl_Response));
  bool success = mako_nolang_interfaces__srv__MotorControl_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
mako_nolang_interfaces__srv__MotorControl_Response__destroy(mako_nolang_interfaces__srv__MotorControl_Response * msg)
{
  if (msg) {
    mako_nolang_interfaces__srv__MotorControl_Response__fini(msg);
  }
  free(msg);
}


bool
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__init(mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  mako_nolang_interfaces__srv__MotorControl_Response * data = NULL;
  if (size) {
    data = (mako_nolang_interfaces__srv__MotorControl_Response *)calloc(size, sizeof(mako_nolang_interfaces__srv__MotorControl_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mako_nolang_interfaces__srv__MotorControl_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mako_nolang_interfaces__srv__MotorControl_Response__fini(&data[i - 1]);
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
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__fini(mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      mako_nolang_interfaces__srv__MotorControl_Response__fini(&array->data[i]);
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

mako_nolang_interfaces__srv__MotorControl_Response__Sequence *
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__create(size_t size)
{
  mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array = (mako_nolang_interfaces__srv__MotorControl_Response__Sequence *)malloc(sizeof(mako_nolang_interfaces__srv__MotorControl_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = mako_nolang_interfaces__srv__MotorControl_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
mako_nolang_interfaces__srv__MotorControl_Response__Sequence__destroy(mako_nolang_interfaces__srv__MotorControl_Response__Sequence * array)
{
  if (array) {
    mako_nolang_interfaces__srv__MotorControl_Response__Sequence__fini(array);
  }
  free(array);
}
