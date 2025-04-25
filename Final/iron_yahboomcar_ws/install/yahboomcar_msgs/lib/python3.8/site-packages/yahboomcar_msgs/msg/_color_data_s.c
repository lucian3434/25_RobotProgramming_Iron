// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from yahboomcar_msgs:msg/ColorData.idl
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
#include "yahboomcar_msgs/msg/detail/color_data__struct.h"
#include "yahboomcar_msgs/msg/detail/color_data__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool yahboomcar_msgs__msg__color_data__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[42];
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
    assert(strncmp("yahboomcar_msgs.msg._color_data.ColorData", full_classname_dest, 41) == 0);
  }
  yahboomcar_msgs__msg__ColorData * ros_message = _ros_message;
  {  // hue
    PyObject * field = PyObject_GetAttrString(_pymsg, "hue");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->hue = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // saturation
    PyObject * field = PyObject_GetAttrString(_pymsg, "saturation");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->saturation = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }
  {  // value
    PyObject * field = PyObject_GetAttrString(_pymsg, "value");
    if (!field) {
      return false;
    }
    assert(PyLong_Check(field));
    ros_message->value = (uint8_t)PyLong_AsUnsignedLong(field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * yahboomcar_msgs__msg__color_data__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of ColorData */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("yahboomcar_msgs.msg._color_data");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "ColorData");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  yahboomcar_msgs__msg__ColorData * ros_message = (yahboomcar_msgs__msg__ColorData *)raw_ros_message;
  {  // hue
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->hue);
    {
      int rc = PyObject_SetAttrString(_pymessage, "hue", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // saturation
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->saturation);
    {
      int rc = PyObject_SetAttrString(_pymessage, "saturation", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // value
    PyObject * field = NULL;
    field = PyLong_FromUnsignedLong(ros_message->value);
    {
      int rc = PyObject_SetAttrString(_pymessage, "value", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
