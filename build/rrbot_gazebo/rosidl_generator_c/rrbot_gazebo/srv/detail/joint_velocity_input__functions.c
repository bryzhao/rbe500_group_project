// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from rrbot_gazebo:srv/JointVelocityInput.idl
// generated code does not contain a copyright notice
#include "rrbot_gazebo/srv/detail/joint_velocity_input__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
rrbot_gazebo__srv__JointVelocityInput_Request__init(rrbot_gazebo__srv__JointVelocityInput_Request * msg)
{
  if (!msg) {
    return false;
  }
  // input_q1_dot
  // input_q2_dot
  // input_q3_dot
  return true;
}

void
rrbot_gazebo__srv__JointVelocityInput_Request__fini(rrbot_gazebo__srv__JointVelocityInput_Request * msg)
{
  if (!msg) {
    return;
  }
  // input_q1_dot
  // input_q2_dot
  // input_q3_dot
}

bool
rrbot_gazebo__srv__JointVelocityInput_Request__are_equal(const rrbot_gazebo__srv__JointVelocityInput_Request * lhs, const rrbot_gazebo__srv__JointVelocityInput_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // input_q1_dot
  if (lhs->input_q1_dot != rhs->input_q1_dot) {
    return false;
  }
  // input_q2_dot
  if (lhs->input_q2_dot != rhs->input_q2_dot) {
    return false;
  }
  // input_q3_dot
  if (lhs->input_q3_dot != rhs->input_q3_dot) {
    return false;
  }
  return true;
}

bool
rrbot_gazebo__srv__JointVelocityInput_Request__copy(
  const rrbot_gazebo__srv__JointVelocityInput_Request * input,
  rrbot_gazebo__srv__JointVelocityInput_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // input_q1_dot
  output->input_q1_dot = input->input_q1_dot;
  // input_q2_dot
  output->input_q2_dot = input->input_q2_dot;
  // input_q3_dot
  output->input_q3_dot = input->input_q3_dot;
  return true;
}

rrbot_gazebo__srv__JointVelocityInput_Request *
rrbot_gazebo__srv__JointVelocityInput_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrbot_gazebo__srv__JointVelocityInput_Request * msg = (rrbot_gazebo__srv__JointVelocityInput_Request *)allocator.allocate(sizeof(rrbot_gazebo__srv__JointVelocityInput_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rrbot_gazebo__srv__JointVelocityInput_Request));
  bool success = rrbot_gazebo__srv__JointVelocityInput_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rrbot_gazebo__srv__JointVelocityInput_Request__destroy(rrbot_gazebo__srv__JointVelocityInput_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rrbot_gazebo__srv__JointVelocityInput_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__init(rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrbot_gazebo__srv__JointVelocityInput_Request * data = NULL;

  if (size) {
    data = (rrbot_gazebo__srv__JointVelocityInput_Request *)allocator.zero_allocate(size, sizeof(rrbot_gazebo__srv__JointVelocityInput_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rrbot_gazebo__srv__JointVelocityInput_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rrbot_gazebo__srv__JointVelocityInput_Request__fini(&data[i - 1]);
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
rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__fini(rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * array)
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
      rrbot_gazebo__srv__JointVelocityInput_Request__fini(&array->data[i]);
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

rrbot_gazebo__srv__JointVelocityInput_Request__Sequence *
rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * array = (rrbot_gazebo__srv__JointVelocityInput_Request__Sequence *)allocator.allocate(sizeof(rrbot_gazebo__srv__JointVelocityInput_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__destroy(rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__are_equal(const rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * lhs, const rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rrbot_gazebo__srv__JointVelocityInput_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rrbot_gazebo__srv__JointVelocityInput_Request__Sequence__copy(
  const rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * input,
  rrbot_gazebo__srv__JointVelocityInput_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rrbot_gazebo__srv__JointVelocityInput_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rrbot_gazebo__srv__JointVelocityInput_Request * data =
      (rrbot_gazebo__srv__JointVelocityInput_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rrbot_gazebo__srv__JointVelocityInput_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rrbot_gazebo__srv__JointVelocityInput_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rrbot_gazebo__srv__JointVelocityInput_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
rrbot_gazebo__srv__JointVelocityInput_Response__init(rrbot_gazebo__srv__JointVelocityInput_Response * msg)
{
  if (!msg) {
    return false;
  }
  // status
  return true;
}

void
rrbot_gazebo__srv__JointVelocityInput_Response__fini(rrbot_gazebo__srv__JointVelocityInput_Response * msg)
{
  if (!msg) {
    return;
  }
  // status
}

bool
rrbot_gazebo__srv__JointVelocityInput_Response__are_equal(const rrbot_gazebo__srv__JointVelocityInput_Response * lhs, const rrbot_gazebo__srv__JointVelocityInput_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // status
  if (lhs->status != rhs->status) {
    return false;
  }
  return true;
}

bool
rrbot_gazebo__srv__JointVelocityInput_Response__copy(
  const rrbot_gazebo__srv__JointVelocityInput_Response * input,
  rrbot_gazebo__srv__JointVelocityInput_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // status
  output->status = input->status;
  return true;
}

rrbot_gazebo__srv__JointVelocityInput_Response *
rrbot_gazebo__srv__JointVelocityInput_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrbot_gazebo__srv__JointVelocityInput_Response * msg = (rrbot_gazebo__srv__JointVelocityInput_Response *)allocator.allocate(sizeof(rrbot_gazebo__srv__JointVelocityInput_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(rrbot_gazebo__srv__JointVelocityInput_Response));
  bool success = rrbot_gazebo__srv__JointVelocityInput_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
rrbot_gazebo__srv__JointVelocityInput_Response__destroy(rrbot_gazebo__srv__JointVelocityInput_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    rrbot_gazebo__srv__JointVelocityInput_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__init(rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrbot_gazebo__srv__JointVelocityInput_Response * data = NULL;

  if (size) {
    data = (rrbot_gazebo__srv__JointVelocityInput_Response *)allocator.zero_allocate(size, sizeof(rrbot_gazebo__srv__JointVelocityInput_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = rrbot_gazebo__srv__JointVelocityInput_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        rrbot_gazebo__srv__JointVelocityInput_Response__fini(&data[i - 1]);
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
rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__fini(rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * array)
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
      rrbot_gazebo__srv__JointVelocityInput_Response__fini(&array->data[i]);
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

rrbot_gazebo__srv__JointVelocityInput_Response__Sequence *
rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * array = (rrbot_gazebo__srv__JointVelocityInput_Response__Sequence *)allocator.allocate(sizeof(rrbot_gazebo__srv__JointVelocityInput_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__destroy(rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__are_equal(const rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * lhs, const rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!rrbot_gazebo__srv__JointVelocityInput_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
rrbot_gazebo__srv__JointVelocityInput_Response__Sequence__copy(
  const rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * input,
  rrbot_gazebo__srv__JointVelocityInput_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(rrbot_gazebo__srv__JointVelocityInput_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    rrbot_gazebo__srv__JointVelocityInput_Response * data =
      (rrbot_gazebo__srv__JointVelocityInput_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!rrbot_gazebo__srv__JointVelocityInput_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          rrbot_gazebo__srv__JointVelocityInput_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!rrbot_gazebo__srv__JointVelocityInput_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
