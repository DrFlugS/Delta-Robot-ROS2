// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delta_robot_serial:srv/Ikin.idl
// generated code does not contain a copyright notice
#include "delta_robot_serial/srv/detail/ikin__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
delta_robot_serial__srv__Ikin_Request__init(delta_robot_serial__srv__Ikin_Request * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  return true;
}

void
delta_robot_serial__srv__Ikin_Request__fini(delta_robot_serial__srv__Ikin_Request * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
delta_robot_serial__srv__Ikin_Request__are_equal(const delta_robot_serial__srv__Ikin_Request * lhs, const delta_robot_serial__srv__Ikin_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
delta_robot_serial__srv__Ikin_Request__copy(
  const delta_robot_serial__srv__Ikin_Request * input,
  delta_robot_serial__srv__Ikin_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  return true;
}

delta_robot_serial__srv__Ikin_Request *
delta_robot_serial__srv__Ikin_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Request * msg = (delta_robot_serial__srv__Ikin_Request *)allocator.allocate(sizeof(delta_robot_serial__srv__Ikin_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__srv__Ikin_Request));
  bool success = delta_robot_serial__srv__Ikin_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__srv__Ikin_Request__destroy(delta_robot_serial__srv__Ikin_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__srv__Ikin_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__srv__Ikin_Request__Sequence__init(delta_robot_serial__srv__Ikin_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__srv__Ikin_Request)) {
      return false;
    }
    data = (delta_robot_serial__srv__Ikin_Request *)allocator.zero_allocate(size, sizeof(delta_robot_serial__srv__Ikin_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__srv__Ikin_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__srv__Ikin_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delta_robot_serial__srv__Ikin_Request__Sequence__fini(delta_robot_serial__srv__Ikin_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delta_robot_serial__srv__Ikin_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delta_robot_serial__srv__Ikin_Request__Sequence *
delta_robot_serial__srv__Ikin_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Request__Sequence * array = (delta_robot_serial__srv__Ikin_Request__Sequence *)allocator.allocate(sizeof(delta_robot_serial__srv__Ikin_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__srv__Ikin_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__srv__Ikin_Request__Sequence__destroy(delta_robot_serial__srv__Ikin_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__srv__Ikin_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__srv__Ikin_Request__Sequence__are_equal(const delta_robot_serial__srv__Ikin_Request__Sequence * lhs, const delta_robot_serial__srv__Ikin_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__srv__Ikin_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__srv__Ikin_Request__Sequence__copy(
  const delta_robot_serial__srv__Ikin_Request__Sequence * input,
  delta_robot_serial__srv__Ikin_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__srv__Ikin_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__srv__Ikin_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__srv__Ikin_Request * data =
      (delta_robot_serial__srv__Ikin_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__srv__Ikin_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__srv__Ikin_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__srv__Ikin_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
delta_robot_serial__srv__Ikin_Response__init(delta_robot_serial__srv__Ikin_Response * msg)
{
  if (!msg) {
    return false;
  }
  // phi_11
  // phi_21
  // phi_31
  return true;
}

void
delta_robot_serial__srv__Ikin_Response__fini(delta_robot_serial__srv__Ikin_Response * msg)
{
  if (!msg) {
    return;
  }
  // phi_11
  // phi_21
  // phi_31
}

bool
delta_robot_serial__srv__Ikin_Response__are_equal(const delta_robot_serial__srv__Ikin_Response * lhs, const delta_robot_serial__srv__Ikin_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // phi_11
  if (lhs->phi_11 != rhs->phi_11) {
    return false;
  }
  // phi_21
  if (lhs->phi_21 != rhs->phi_21) {
    return false;
  }
  // phi_31
  if (lhs->phi_31 != rhs->phi_31) {
    return false;
  }
  return true;
}

bool
delta_robot_serial__srv__Ikin_Response__copy(
  const delta_robot_serial__srv__Ikin_Response * input,
  delta_robot_serial__srv__Ikin_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // phi_11
  output->phi_11 = input->phi_11;
  // phi_21
  output->phi_21 = input->phi_21;
  // phi_31
  output->phi_31 = input->phi_31;
  return true;
}

delta_robot_serial__srv__Ikin_Response *
delta_robot_serial__srv__Ikin_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Response * msg = (delta_robot_serial__srv__Ikin_Response *)allocator.allocate(sizeof(delta_robot_serial__srv__Ikin_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__srv__Ikin_Response));
  bool success = delta_robot_serial__srv__Ikin_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__srv__Ikin_Response__destroy(delta_robot_serial__srv__Ikin_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__srv__Ikin_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__srv__Ikin_Response__Sequence__init(delta_robot_serial__srv__Ikin_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__srv__Ikin_Response)) {
      return false;
    }
    data = (delta_robot_serial__srv__Ikin_Response *)allocator.zero_allocate(size, sizeof(delta_robot_serial__srv__Ikin_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__srv__Ikin_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__srv__Ikin_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delta_robot_serial__srv__Ikin_Response__Sequence__fini(delta_robot_serial__srv__Ikin_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delta_robot_serial__srv__Ikin_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delta_robot_serial__srv__Ikin_Response__Sequence *
delta_robot_serial__srv__Ikin_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Response__Sequence * array = (delta_robot_serial__srv__Ikin_Response__Sequence *)allocator.allocate(sizeof(delta_robot_serial__srv__Ikin_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__srv__Ikin_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__srv__Ikin_Response__Sequence__destroy(delta_robot_serial__srv__Ikin_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__srv__Ikin_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__srv__Ikin_Response__Sequence__are_equal(const delta_robot_serial__srv__Ikin_Response__Sequence * lhs, const delta_robot_serial__srv__Ikin_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__srv__Ikin_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__srv__Ikin_Response__Sequence__copy(
  const delta_robot_serial__srv__Ikin_Response__Sequence * input,
  delta_robot_serial__srv__Ikin_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__srv__Ikin_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__srv__Ikin_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__srv__Ikin_Response * data =
      (delta_robot_serial__srv__Ikin_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__srv__Ikin_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__srv__Ikin_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__srv__Ikin_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "delta_robot_serial/srv/detail/ikin__functions.h"

bool
delta_robot_serial__srv__Ikin_Event__init(delta_robot_serial__srv__Ikin_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    delta_robot_serial__srv__Ikin_Event__fini(msg);
    return false;
  }
  // request
  if (!delta_robot_serial__srv__Ikin_Request__Sequence__init(&msg->request, 0)) {
    delta_robot_serial__srv__Ikin_Event__fini(msg);
    return false;
  }
  // response
  if (!delta_robot_serial__srv__Ikin_Response__Sequence__init(&msg->response, 0)) {
    delta_robot_serial__srv__Ikin_Event__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__srv__Ikin_Event__fini(delta_robot_serial__srv__Ikin_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  delta_robot_serial__srv__Ikin_Request__Sequence__fini(&msg->request);
  // response
  delta_robot_serial__srv__Ikin_Response__Sequence__fini(&msg->response);
}

bool
delta_robot_serial__srv__Ikin_Event__are_equal(const delta_robot_serial__srv__Ikin_Event * lhs, const delta_robot_serial__srv__Ikin_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!delta_robot_serial__srv__Ikin_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!delta_robot_serial__srv__Ikin_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__srv__Ikin_Event__copy(
  const delta_robot_serial__srv__Ikin_Event * input,
  delta_robot_serial__srv__Ikin_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!delta_robot_serial__srv__Ikin_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!delta_robot_serial__srv__Ikin_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__srv__Ikin_Event *
delta_robot_serial__srv__Ikin_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Event * msg = (delta_robot_serial__srv__Ikin_Event *)allocator.allocate(sizeof(delta_robot_serial__srv__Ikin_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__srv__Ikin_Event));
  bool success = delta_robot_serial__srv__Ikin_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__srv__Ikin_Event__destroy(delta_robot_serial__srv__Ikin_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__srv__Ikin_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__srv__Ikin_Event__Sequence__init(delta_robot_serial__srv__Ikin_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__srv__Ikin_Event)) {
      return false;
    }
    data = (delta_robot_serial__srv__Ikin_Event *)allocator.zero_allocate(size, sizeof(delta_robot_serial__srv__Ikin_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__srv__Ikin_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__srv__Ikin_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
delta_robot_serial__srv__Ikin_Event__Sequence__fini(delta_robot_serial__srv__Ikin_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      delta_robot_serial__srv__Ikin_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

delta_robot_serial__srv__Ikin_Event__Sequence *
delta_robot_serial__srv__Ikin_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__srv__Ikin_Event__Sequence * array = (delta_robot_serial__srv__Ikin_Event__Sequence *)allocator.allocate(sizeof(delta_robot_serial__srv__Ikin_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__srv__Ikin_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__srv__Ikin_Event__Sequence__destroy(delta_robot_serial__srv__Ikin_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__srv__Ikin_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__srv__Ikin_Event__Sequence__are_equal(const delta_robot_serial__srv__Ikin_Event__Sequence * lhs, const delta_robot_serial__srv__Ikin_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__srv__Ikin_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__srv__Ikin_Event__Sequence__copy(
  const delta_robot_serial__srv__Ikin_Event__Sequence * input,
  delta_robot_serial__srv__Ikin_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__srv__Ikin_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__srv__Ikin_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__srv__Ikin_Event * data =
      (delta_robot_serial__srv__Ikin_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__srv__Ikin_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__srv__Ikin_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__srv__Ikin_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
