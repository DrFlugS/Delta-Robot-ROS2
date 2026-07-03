// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from delta_robot_serial:action/PosTraj.idl
// generated code does not contain a copyright notice
#include "delta_robot_serial/action/detail/pos_traj__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `x`
// Member `y`
// Member `z`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
delta_robot_serial__action__PosTraj_Goal__init(delta_robot_serial__action__PosTraj_Goal * msg)
{
  if (!msg) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__init(&msg->x, 0)) {
    delta_robot_serial__action__PosTraj_Goal__fini(msg);
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__init(&msg->y, 0)) {
    delta_robot_serial__action__PosTraj_Goal__fini(msg);
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__init(&msg->z, 0)) {
    delta_robot_serial__action__PosTraj_Goal__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_Goal__fini(delta_robot_serial__action__PosTraj_Goal * msg)
{
  if (!msg) {
    return;
  }
  // x
  rosidl_runtime_c__double__Sequence__fini(&msg->x);
  // y
  rosidl_runtime_c__double__Sequence__fini(&msg->y);
  // z
  rosidl_runtime_c__double__Sequence__fini(&msg->z);
}

bool
delta_robot_serial__action__PosTraj_Goal__are_equal(const delta_robot_serial__action__PosTraj_Goal * lhs, const delta_robot_serial__action__PosTraj_Goal * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->x), &(rhs->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->y), &(rhs->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->z), &(rhs->z)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_Goal__copy(
  const delta_robot_serial__action__PosTraj_Goal * input,
  delta_robot_serial__action__PosTraj_Goal * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->x), &(output->x)))
  {
    return false;
  }
  // y
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->y), &(output->y)))
  {
    return false;
  }
  // z
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->z), &(output->z)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_Goal *
delta_robot_serial__action__PosTraj_Goal__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Goal * msg = (delta_robot_serial__action__PosTraj_Goal *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_Goal), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_Goal));
  bool success = delta_robot_serial__action__PosTraj_Goal__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_Goal__destroy(delta_robot_serial__action__PosTraj_Goal * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_Goal__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_Goal__Sequence__init(delta_robot_serial__action__PosTraj_Goal__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Goal * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_Goal)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_Goal *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_Goal), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_Goal__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_Goal__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_Goal__Sequence__fini(delta_robot_serial__action__PosTraj_Goal__Sequence * array)
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
      delta_robot_serial__action__PosTraj_Goal__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_Goal__Sequence *
delta_robot_serial__action__PosTraj_Goal__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Goal__Sequence * array = (delta_robot_serial__action__PosTraj_Goal__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_Goal__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_Goal__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_Goal__Sequence__destroy(delta_robot_serial__action__PosTraj_Goal__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_Goal__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_Goal__Sequence__are_equal(const delta_robot_serial__action__PosTraj_Goal__Sequence * lhs, const delta_robot_serial__action__PosTraj_Goal__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_Goal__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_Goal__Sequence__copy(
  const delta_robot_serial__action__PosTraj_Goal__Sequence * input,
  delta_robot_serial__action__PosTraj_Goal__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_Goal)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_Goal);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_Goal * data =
      (delta_robot_serial__action__PosTraj_Goal *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_Goal__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_Goal__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_Goal__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
delta_robot_serial__action__PosTraj_Result__init(delta_robot_serial__action__PosTraj_Result * msg)
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
delta_robot_serial__action__PosTraj_Result__fini(delta_robot_serial__action__PosTraj_Result * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
}

bool
delta_robot_serial__action__PosTraj_Result__are_equal(const delta_robot_serial__action__PosTraj_Result * lhs, const delta_robot_serial__action__PosTraj_Result * rhs)
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
delta_robot_serial__action__PosTraj_Result__copy(
  const delta_robot_serial__action__PosTraj_Result * input,
  delta_robot_serial__action__PosTraj_Result * output)
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

delta_robot_serial__action__PosTraj_Result *
delta_robot_serial__action__PosTraj_Result__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Result * msg = (delta_robot_serial__action__PosTraj_Result *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_Result), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_Result));
  bool success = delta_robot_serial__action__PosTraj_Result__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_Result__destroy(delta_robot_serial__action__PosTraj_Result * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_Result__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_Result__Sequence__init(delta_robot_serial__action__PosTraj_Result__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Result * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_Result)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_Result *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_Result), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_Result__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_Result__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_Result__Sequence__fini(delta_robot_serial__action__PosTraj_Result__Sequence * array)
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
      delta_robot_serial__action__PosTraj_Result__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_Result__Sequence *
delta_robot_serial__action__PosTraj_Result__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Result__Sequence * array = (delta_robot_serial__action__PosTraj_Result__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_Result__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_Result__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_Result__Sequence__destroy(delta_robot_serial__action__PosTraj_Result__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_Result__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_Result__Sequence__are_equal(const delta_robot_serial__action__PosTraj_Result__Sequence * lhs, const delta_robot_serial__action__PosTraj_Result__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_Result__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_Result__Sequence__copy(
  const delta_robot_serial__action__PosTraj_Result__Sequence * input,
  delta_robot_serial__action__PosTraj_Result__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_Result)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_Result);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_Result * data =
      (delta_robot_serial__action__PosTraj_Result *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_Result__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_Result__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_Result__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
delta_robot_serial__action__PosTraj_Feedback__init(delta_robot_serial__action__PosTraj_Feedback * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // y
  // z
  // via_index
  return true;
}

void
delta_robot_serial__action__PosTraj_Feedback__fini(delta_robot_serial__action__PosTraj_Feedback * msg)
{
  if (!msg) {
    return;
  }
  // x
  // y
  // z
  // via_index
}

bool
delta_robot_serial__action__PosTraj_Feedback__are_equal(const delta_robot_serial__action__PosTraj_Feedback * lhs, const delta_robot_serial__action__PosTraj_Feedback * rhs)
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
  // via_index
  if (lhs->via_index != rhs->via_index) {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_Feedback__copy(
  const delta_robot_serial__action__PosTraj_Feedback * input,
  delta_robot_serial__action__PosTraj_Feedback * output)
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
  // via_index
  output->via_index = input->via_index;
  return true;
}

delta_robot_serial__action__PosTraj_Feedback *
delta_robot_serial__action__PosTraj_Feedback__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Feedback * msg = (delta_robot_serial__action__PosTraj_Feedback *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_Feedback), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_Feedback));
  bool success = delta_robot_serial__action__PosTraj_Feedback__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_Feedback__destroy(delta_robot_serial__action__PosTraj_Feedback * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_Feedback__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_Feedback__Sequence__init(delta_robot_serial__action__PosTraj_Feedback__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Feedback * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_Feedback)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_Feedback *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_Feedback), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_Feedback__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_Feedback__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_Feedback__Sequence__fini(delta_robot_serial__action__PosTraj_Feedback__Sequence * array)
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
      delta_robot_serial__action__PosTraj_Feedback__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_Feedback__Sequence *
delta_robot_serial__action__PosTraj_Feedback__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_Feedback__Sequence * array = (delta_robot_serial__action__PosTraj_Feedback__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_Feedback__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_Feedback__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_Feedback__Sequence__destroy(delta_robot_serial__action__PosTraj_Feedback__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_Feedback__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_Feedback__Sequence__are_equal(const delta_robot_serial__action__PosTraj_Feedback__Sequence * lhs, const delta_robot_serial__action__PosTraj_Feedback__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_Feedback__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_Feedback__Sequence__copy(
  const delta_robot_serial__action__PosTraj_Feedback__Sequence * input,
  delta_robot_serial__action__PosTraj_Feedback__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_Feedback)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_Feedback);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_Feedback * data =
      (delta_robot_serial__action__PosTraj_Feedback *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_Feedback__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_Feedback__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_Feedback__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
#include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `goal`
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"

bool
delta_robot_serial__action__PosTraj_SendGoal_Request__init(delta_robot_serial__action__PosTraj_SendGoal_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    delta_robot_serial__action__PosTraj_SendGoal_Request__fini(msg);
    return false;
  }
  // goal
  if (!delta_robot_serial__action__PosTraj_Goal__init(&msg->goal)) {
    delta_robot_serial__action__PosTraj_SendGoal_Request__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Request__fini(delta_robot_serial__action__PosTraj_SendGoal_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // goal
  delta_robot_serial__action__PosTraj_Goal__fini(&msg->goal);
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Request__are_equal(const delta_robot_serial__action__PosTraj_SendGoal_Request * lhs, const delta_robot_serial__action__PosTraj_SendGoal_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // goal
  if (!delta_robot_serial__action__PosTraj_Goal__are_equal(
      &(lhs->goal), &(rhs->goal)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Request__copy(
  const delta_robot_serial__action__PosTraj_SendGoal_Request * input,
  delta_robot_serial__action__PosTraj_SendGoal_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // goal
  if (!delta_robot_serial__action__PosTraj_Goal__copy(
      &(input->goal), &(output->goal)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_SendGoal_Request *
delta_robot_serial__action__PosTraj_SendGoal_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Request * msg = (delta_robot_serial__action__PosTraj_SendGoal_Request *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request));
  bool success = delta_robot_serial__action__PosTraj_SendGoal_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Request__destroy(delta_robot_serial__action__PosTraj_SendGoal_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_SendGoal_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__init(delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_SendGoal_Request *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_SendGoal_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_SendGoal_Request__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__fini(delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * array)
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
      delta_robot_serial__action__PosTraj_SendGoal_Request__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence *
delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * array = (delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__destroy(delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__are_equal(const delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * lhs, const delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_SendGoal_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__copy(
  const delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * input,
  delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_SendGoal_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_SendGoal_Request * data =
      (delta_robot_serial__action__PosTraj_SendGoal_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_SendGoal_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_SendGoal_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_SendGoal_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `stamp`
#include "builtin_interfaces/msg/detail/time__functions.h"

bool
delta_robot_serial__action__PosTraj_SendGoal_Response__init(delta_robot_serial__action__PosTraj_SendGoal_Response * msg)
{
  if (!msg) {
    return false;
  }
  // accepted
  // stamp
  if (!builtin_interfaces__msg__Time__init(&msg->stamp)) {
    delta_robot_serial__action__PosTraj_SendGoal_Response__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Response__fini(delta_robot_serial__action__PosTraj_SendGoal_Response * msg)
{
  if (!msg) {
    return;
  }
  // accepted
  // stamp
  builtin_interfaces__msg__Time__fini(&msg->stamp);
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Response__are_equal(const delta_robot_serial__action__PosTraj_SendGoal_Response * lhs, const delta_robot_serial__action__PosTraj_SendGoal_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // accepted
  if (lhs->accepted != rhs->accepted) {
    return false;
  }
  // stamp
  if (!builtin_interfaces__msg__Time__are_equal(
      &(lhs->stamp), &(rhs->stamp)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Response__copy(
  const delta_robot_serial__action__PosTraj_SendGoal_Response * input,
  delta_robot_serial__action__PosTraj_SendGoal_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // accepted
  output->accepted = input->accepted;
  // stamp
  if (!builtin_interfaces__msg__Time__copy(
      &(input->stamp), &(output->stamp)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_SendGoal_Response *
delta_robot_serial__action__PosTraj_SendGoal_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Response * msg = (delta_robot_serial__action__PosTraj_SendGoal_Response *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response));
  bool success = delta_robot_serial__action__PosTraj_SendGoal_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Response__destroy(delta_robot_serial__action__PosTraj_SendGoal_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_SendGoal_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__init(delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_SendGoal_Response *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_SendGoal_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_SendGoal_Response__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__fini(delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * array)
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
      delta_robot_serial__action__PosTraj_SendGoal_Response__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence *
delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * array = (delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__destroy(delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__are_equal(const delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * lhs, const delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_SendGoal_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__copy(
  const delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * input,
  delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_SendGoal_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_SendGoal_Response * data =
      (delta_robot_serial__action__PosTraj_SendGoal_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_SendGoal_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_SendGoal_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_SendGoal_Response__copy(
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
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"

bool
delta_robot_serial__action__PosTraj_SendGoal_Event__init(delta_robot_serial__action__PosTraj_SendGoal_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    delta_robot_serial__action__PosTraj_SendGoal_Event__fini(msg);
    return false;
  }
  // request
  if (!delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__init(&msg->request, 0)) {
    delta_robot_serial__action__PosTraj_SendGoal_Event__fini(msg);
    return false;
  }
  // response
  if (!delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__init(&msg->response, 0)) {
    delta_robot_serial__action__PosTraj_SendGoal_Event__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Event__fini(delta_robot_serial__action__PosTraj_SendGoal_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__fini(&msg->request);
  // response
  delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__fini(&msg->response);
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Event__are_equal(const delta_robot_serial__action__PosTraj_SendGoal_Event * lhs, const delta_robot_serial__action__PosTraj_SendGoal_Event * rhs)
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
  if (!delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Event__copy(
  const delta_robot_serial__action__PosTraj_SendGoal_Event * input,
  delta_robot_serial__action__PosTraj_SendGoal_Event * output)
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
  if (!delta_robot_serial__action__PosTraj_SendGoal_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!delta_robot_serial__action__PosTraj_SendGoal_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_SendGoal_Event *
delta_robot_serial__action__PosTraj_SendGoal_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Event * msg = (delta_robot_serial__action__PosTraj_SendGoal_Event *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event));
  bool success = delta_robot_serial__action__PosTraj_SendGoal_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Event__destroy(delta_robot_serial__action__PosTraj_SendGoal_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_SendGoal_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__init(delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_SendGoal_Event *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_SendGoal_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_SendGoal_Event__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__fini(delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * array)
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
      delta_robot_serial__action__PosTraj_SendGoal_Event__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence *
delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * array = (delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__destroy(delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__are_equal(const delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * lhs, const delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_SendGoal_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence__copy(
  const delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * input,
  delta_robot_serial__action__PosTraj_SendGoal_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_SendGoal_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_SendGoal_Event * data =
      (delta_robot_serial__action__PosTraj_SendGoal_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_SendGoal_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_SendGoal_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_SendGoal_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"

bool
delta_robot_serial__action__PosTraj_GetResult_Request__init(delta_robot_serial__action__PosTraj_GetResult_Request * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    delta_robot_serial__action__PosTraj_GetResult_Request__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_GetResult_Request__fini(delta_robot_serial__action__PosTraj_GetResult_Request * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
}

bool
delta_robot_serial__action__PosTraj_GetResult_Request__are_equal(const delta_robot_serial__action__PosTraj_GetResult_Request * lhs, const delta_robot_serial__action__PosTraj_GetResult_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_GetResult_Request__copy(
  const delta_robot_serial__action__PosTraj_GetResult_Request * input,
  delta_robot_serial__action__PosTraj_GetResult_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_GetResult_Request *
delta_robot_serial__action__PosTraj_GetResult_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Request * msg = (delta_robot_serial__action__PosTraj_GetResult_Request *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_GetResult_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_GetResult_Request));
  bool success = delta_robot_serial__action__PosTraj_GetResult_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_GetResult_Request__destroy(delta_robot_serial__action__PosTraj_GetResult_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_GetResult_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__init(delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Request * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_GetResult_Request)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_GetResult_Request *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_GetResult_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_GetResult_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_GetResult_Request__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__fini(delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * array)
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
      delta_robot_serial__action__PosTraj_GetResult_Request__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_GetResult_Request__Sequence *
delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * array = (delta_robot_serial__action__PosTraj_GetResult_Request__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_GetResult_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__destroy(delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__are_equal(const delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * lhs, const delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_GetResult_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__copy(
  const delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * input,
  delta_robot_serial__action__PosTraj_GetResult_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_GetResult_Request)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_GetResult_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_GetResult_Request * data =
      (delta_robot_serial__action__PosTraj_GetResult_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_GetResult_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_GetResult_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_GetResult_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `result`
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"

bool
delta_robot_serial__action__PosTraj_GetResult_Response__init(delta_robot_serial__action__PosTraj_GetResult_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  // result
  if (!delta_robot_serial__action__PosTraj_Result__init(&msg->result)) {
    delta_robot_serial__action__PosTraj_GetResult_Response__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_GetResult_Response__fini(delta_robot_serial__action__PosTraj_GetResult_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
  // result
  delta_robot_serial__action__PosTraj_Result__fini(&msg->result);
}

bool
delta_robot_serial__action__PosTraj_GetResult_Response__are_equal(const delta_robot_serial__action__PosTraj_GetResult_Response * lhs, const delta_robot_serial__action__PosTraj_GetResult_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  // result
  if (!delta_robot_serial__action__PosTraj_Result__are_equal(
      &(lhs->result), &(rhs->result)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_GetResult_Response__copy(
  const delta_robot_serial__action__PosTraj_GetResult_Response * input,
  delta_robot_serial__action__PosTraj_GetResult_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  // result
  if (!delta_robot_serial__action__PosTraj_Result__copy(
      &(input->result), &(output->result)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_GetResult_Response *
delta_robot_serial__action__PosTraj_GetResult_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Response * msg = (delta_robot_serial__action__PosTraj_GetResult_Response *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_GetResult_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_GetResult_Response));
  bool success = delta_robot_serial__action__PosTraj_GetResult_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_GetResult_Response__destroy(delta_robot_serial__action__PosTraj_GetResult_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_GetResult_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__init(delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Response * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_GetResult_Response)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_GetResult_Response *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_GetResult_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_GetResult_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_GetResult_Response__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__fini(delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * array)
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
      delta_robot_serial__action__PosTraj_GetResult_Response__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_GetResult_Response__Sequence *
delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * array = (delta_robot_serial__action__PosTraj_GetResult_Response__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_GetResult_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__destroy(delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__are_equal(const delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * lhs, const delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_GetResult_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__copy(
  const delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * input,
  delta_robot_serial__action__PosTraj_GetResult_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_GetResult_Response)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_GetResult_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_GetResult_Response * data =
      (delta_robot_serial__action__PosTraj_GetResult_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_GetResult_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_GetResult_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_GetResult_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
// already included above
// #include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"

bool
delta_robot_serial__action__PosTraj_GetResult_Event__init(delta_robot_serial__action__PosTraj_GetResult_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    delta_robot_serial__action__PosTraj_GetResult_Event__fini(msg);
    return false;
  }
  // request
  if (!delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__init(&msg->request, 0)) {
    delta_robot_serial__action__PosTraj_GetResult_Event__fini(msg);
    return false;
  }
  // response
  if (!delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__init(&msg->response, 0)) {
    delta_robot_serial__action__PosTraj_GetResult_Event__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_GetResult_Event__fini(delta_robot_serial__action__PosTraj_GetResult_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__fini(&msg->request);
  // response
  delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__fini(&msg->response);
}

bool
delta_robot_serial__action__PosTraj_GetResult_Event__are_equal(const delta_robot_serial__action__PosTraj_GetResult_Event * lhs, const delta_robot_serial__action__PosTraj_GetResult_Event * rhs)
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
  if (!delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_GetResult_Event__copy(
  const delta_robot_serial__action__PosTraj_GetResult_Event * input,
  delta_robot_serial__action__PosTraj_GetResult_Event * output)
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
  if (!delta_robot_serial__action__PosTraj_GetResult_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!delta_robot_serial__action__PosTraj_GetResult_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_GetResult_Event *
delta_robot_serial__action__PosTraj_GetResult_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Event * msg = (delta_robot_serial__action__PosTraj_GetResult_Event *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_GetResult_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_GetResult_Event));
  bool success = delta_robot_serial__action__PosTraj_GetResult_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_GetResult_Event__destroy(delta_robot_serial__action__PosTraj_GetResult_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_GetResult_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__init(delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Event * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_GetResult_Event)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_GetResult_Event *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_GetResult_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_GetResult_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_GetResult_Event__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__fini(delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * array)
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
      delta_robot_serial__action__PosTraj_GetResult_Event__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_GetResult_Event__Sequence *
delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * array = (delta_robot_serial__action__PosTraj_GetResult_Event__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_GetResult_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__destroy(delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__are_equal(const delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * lhs, const delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_GetResult_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_GetResult_Event__Sequence__copy(
  const delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * input,
  delta_robot_serial__action__PosTraj_GetResult_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_GetResult_Event)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_GetResult_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_GetResult_Event * data =
      (delta_robot_serial__action__PosTraj_GetResult_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_GetResult_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_GetResult_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_GetResult_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `goal_id`
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__functions.h"
// Member `feedback`
// already included above
// #include "delta_robot_serial/action/detail/pos_traj__functions.h"

bool
delta_robot_serial__action__PosTraj_FeedbackMessage__init(delta_robot_serial__action__PosTraj_FeedbackMessage * msg)
{
  if (!msg) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__init(&msg->goal_id)) {
    delta_robot_serial__action__PosTraj_FeedbackMessage__fini(msg);
    return false;
  }
  // feedback
  if (!delta_robot_serial__action__PosTraj_Feedback__init(&msg->feedback)) {
    delta_robot_serial__action__PosTraj_FeedbackMessage__fini(msg);
    return false;
  }
  return true;
}

void
delta_robot_serial__action__PosTraj_FeedbackMessage__fini(delta_robot_serial__action__PosTraj_FeedbackMessage * msg)
{
  if (!msg) {
    return;
  }
  // goal_id
  unique_identifier_msgs__msg__UUID__fini(&msg->goal_id);
  // feedback
  delta_robot_serial__action__PosTraj_Feedback__fini(&msg->feedback);
}

bool
delta_robot_serial__action__PosTraj_FeedbackMessage__are_equal(const delta_robot_serial__action__PosTraj_FeedbackMessage * lhs, const delta_robot_serial__action__PosTraj_FeedbackMessage * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__are_equal(
      &(lhs->goal_id), &(rhs->goal_id)))
  {
    return false;
  }
  // feedback
  if (!delta_robot_serial__action__PosTraj_Feedback__are_equal(
      &(lhs->feedback), &(rhs->feedback)))
  {
    return false;
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_FeedbackMessage__copy(
  const delta_robot_serial__action__PosTraj_FeedbackMessage * input,
  delta_robot_serial__action__PosTraj_FeedbackMessage * output)
{
  if (!input || !output) {
    return false;
  }
  // goal_id
  if (!unique_identifier_msgs__msg__UUID__copy(
      &(input->goal_id), &(output->goal_id)))
  {
    return false;
  }
  // feedback
  if (!delta_robot_serial__action__PosTraj_Feedback__copy(
      &(input->feedback), &(output->feedback)))
  {
    return false;
  }
  return true;
}

delta_robot_serial__action__PosTraj_FeedbackMessage *
delta_robot_serial__action__PosTraj_FeedbackMessage__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_FeedbackMessage * msg = (delta_robot_serial__action__PosTraj_FeedbackMessage *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage));
  bool success = delta_robot_serial__action__PosTraj_FeedbackMessage__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
delta_robot_serial__action__PosTraj_FeedbackMessage__destroy(delta_robot_serial__action__PosTraj_FeedbackMessage * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    delta_robot_serial__action__PosTraj_FeedbackMessage__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__init(delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_FeedbackMessage * data = NULL;

  if (size) {
    if (size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage)) {
      return false;
    }
    data = (delta_robot_serial__action__PosTraj_FeedbackMessage *)allocator.zero_allocate(size, sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = delta_robot_serial__action__PosTraj_FeedbackMessage__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        delta_robot_serial__action__PosTraj_FeedbackMessage__fini(&data[i - 1]);
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
delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__fini(delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * array)
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
      delta_robot_serial__action__PosTraj_FeedbackMessage__fini(&array->data[i]);
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

delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence *
delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * array = (delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence *)allocator.allocate(sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__destroy(delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__are_equal(const delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * lhs, const delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_FeedbackMessage__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence__copy(
  const delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * input,
  delta_robot_serial__action__PosTraj_FeedbackMessage__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    if (input->size > SIZE_MAX / sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage)) {
      return false;
    }
    const size_t allocation_size =
      input->size * sizeof(delta_robot_serial__action__PosTraj_FeedbackMessage);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    delta_robot_serial__action__PosTraj_FeedbackMessage * data =
      (delta_robot_serial__action__PosTraj_FeedbackMessage *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!delta_robot_serial__action__PosTraj_FeedbackMessage__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          delta_robot_serial__action__PosTraj_FeedbackMessage__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!delta_robot_serial__action__PosTraj_FeedbackMessage__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
