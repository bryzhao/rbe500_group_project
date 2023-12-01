// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from rrbot_gazebo:srv/IKService.idl
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
#include "rrbot_gazebo/srv/detail/ik_service__struct.h"
#include "rrbot_gazebo/srv/detail/ik_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrbot_gazebo__srv__ik_service__request__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[47];
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
    assert(strncmp("rrbot_gazebo.srv._ik_service.IKService_Request", full_classname_dest, 46) == 0);
  }
  rrbot_gazebo__srv__IKService_Request * ros_message = _ros_message;
  {  // input_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // input_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // input_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "input_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->input_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrbot_gazebo__srv__ik_service__request__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IKService_Request */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrbot_gazebo.srv._ik_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IKService_Request");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrbot_gazebo__srv__IKService_Request * ros_message = (rrbot_gazebo__srv__IKService_Request *)raw_ros_message;
  {  // input_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // input_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->input_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "input_z", field);
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
// #include "rrbot_gazebo/srv/detail/ik_service__struct.h"
// already included above
// #include "rrbot_gazebo/srv/detail/ik_service__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool rrbot_gazebo__srv__ik_service__response__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[48];
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
    assert(strncmp("rrbot_gazebo.srv._ik_service.IKService_Response", full_classname_dest, 47) == 0);
  }
  rrbot_gazebo__srv__IKService_Response * ros_message = _ros_message;
  {  // joint_x
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_x");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_x = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_y
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_y");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_y = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // joint_z
    PyObject * field = PyObject_GetAttrString(_pymsg, "joint_z");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->joint_z = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * rrbot_gazebo__srv__ik_service__response__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of IKService_Response */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("rrbot_gazebo.srv._ik_service");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "IKService_Response");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  rrbot_gazebo__srv__IKService_Response * ros_message = (rrbot_gazebo__srv__IKService_Response *)raw_ros_message;
  {  // joint_x
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_x);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_x", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_y
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_y);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_y", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // joint_z
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->joint_z);
    {
      int rc = PyObject_SetAttrString(_pymessage, "joint_z", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
