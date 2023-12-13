// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rrbot_gazebo:srv/JointVelocityInput.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "rrbot_gazebo/srv/detail/joint_velocity_input__struct.h"
#include "rrbot_gazebo/srv/detail/joint_velocity_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrbot_gazebo__srv__joint_velocity_input__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[66];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rrbot_gazebo.srv._joint_velocity_input.JointVelocityInput_Request", full_classname_dest, 65) == 0);
  }
  rrbot_gazebo__srv__JointVelocityInput_Request * ros_message = _ros_message;
  {  // input_q1_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_q1_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_q1_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // input_q2_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_q2_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_q2_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // input_q3_dot
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_q3_dot");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_q3_dot = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrbot_gazebo__srv__joint_velocity_input__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointVelocityInput_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrbot_gazebo.srv._joint_velocity_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointVelocityInput_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrbot_gazebo__srv__JointVelocityInput_Request * ros_message = (rrbot_gazebo__srv__JointVelocityInput_Request *)raw_ros_message;
  {  // input_q1_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_q1_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_q1_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_q2_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_q2_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_q2_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_q3_dot
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_q3_dot);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_q3_dot", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}

#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
// already included above
// #include <Python.h>
// already included above
// #include <stdbool.h>
// already included above
// #include "numpy/ndarrayobject.h"
// already included above
// #include "rosidl_runtime_c/visibility_control.h"
// already included above
// #include "rrbot_gazebo/srv/detail/joint_velocity_input__struct.h"
// already included above
// #include "rrbot_gazebo/srv/detail/joint_velocity_input__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrbot_gazebo__srv__joint_velocity_input__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[67];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("rrbot_gazebo.srv._joint_velocity_input.JointVelocityInput_Response", full_classname_dest, 66) == 0);
  }
  rrbot_gazebo__srv__JointVelocityInput_Response * ros_message = _ros_message;
  {  // status
    PyObject * field = PyObject_GetAttrString(_pymsg, "status");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->status = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrbot_gazebo__srv__joint_velocity_input__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of JointVelocityInput_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrbot_gazebo.srv._joint_velocity_input");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "JointVelocityInput_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrbot_gazebo__srv__JointVelocityInput_Response * ros_message = (rrbot_gazebo__srv__JointVelocityInput_Response *)raw_ros_message;
  {  // status
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->status ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "status", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
