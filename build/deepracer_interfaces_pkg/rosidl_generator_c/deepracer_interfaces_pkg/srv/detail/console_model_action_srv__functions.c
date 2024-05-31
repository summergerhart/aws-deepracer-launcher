// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from deepracer_interfaces_pkg:srv/ConsoleModelActionSrv.idl
// generated code does not contain a copyright notice
#include "deepracer_interfaces_pkg/srv/detail/console_model_action_srv__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `model_path`
#include "rosidl_runtime_c/string_functions.h"

bool
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__init(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request * msg)
{
  if (!msg) {
    return false;
  }
  // model_path
  if (!rosidl_runtime_c__String__init(&msg->model_path)) {
    deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__fini(msg);
    return false;
  }
  // action
  return true;
}

void
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__fini(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request * msg)
{
  if (!msg) {
    return;
  }
  // model_path
  rosidl_runtime_c__String__fini(&msg->model_path);
  // action
}

deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request *
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__create()
{
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request * msg = (deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request *)malloc(sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request));
  bool success = deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__destroy(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request * msg)
{
  if (msg) {
    deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__fini(msg);
  }
  free(msg);
}


bool
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence__init(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request * data = NULL;
  if (size) {
    data = (deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request *)calloc(size, sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__fini(&data[i - 1]);
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
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence__fini(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__fini(&array->data[i]);
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

deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence *
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence__create(size_t size)
{
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence * array = (deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence *)malloc(sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence__destroy(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence * array)
{
  if (array) {
    deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Request__Sequence__fini(array);
  }
  free(array);
}


// Include directives for member types
// Member `status`
// already included above
// #include "rosidl_runtime_c/string_functions.h"

bool
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__init(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  if (!rosidl_runtime_c__String__init(&msg->status)) {
    deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__fini(msg);
    return false;
  }
  return true;
}

void
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__fini(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  rosidl_runtime_c__String__fini(&msg->status);
}

deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response *
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__create()
{
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response * msg = (deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response *)malloc(sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response));
  bool success = deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__destroy(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response * msg)
{
  if (msg) {
    deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__fini(msg);
  }
  free(msg);
}


bool
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence__init(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response * data = NULL;
  if (size) {
    data = (deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response *)calloc(size, sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__fini(&data[i - 1]);
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
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence__fini(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__fini(&array->data[i]);
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

deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence *
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence__create(size_t size)
{
  deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence * array = (deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence *)malloc(sizeof(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence__destroy(deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence * array)
{
  if (array) {
    deepracer_interfaces_pkg__srv__ConsoleModelActionSrv_Response__Sequence__fini(array);
  }
  free(array);
}