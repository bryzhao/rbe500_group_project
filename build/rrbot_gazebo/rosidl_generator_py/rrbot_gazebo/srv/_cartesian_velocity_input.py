# generated from rosidl_generator_py/resource/_idl.py.em
# with input from rrbot_gazebo:srv/CartesianVelocityInput.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CartesianVelocityInput_Request(type):
    """Metaclass of message 'CartesianVelocityInput_Request'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrbot_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrbot_gazebo.srv.CartesianVelocityInput_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cartesian_velocity_input__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cartesian_velocity_input__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cartesian_velocity_input__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cartesian_velocity_input__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cartesian_velocity_input__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianVelocityInput_Request(metaclass=Metaclass_CartesianVelocityInput_Request):
    """Message class 'CartesianVelocityInput_Request'."""

    __slots__ = [
        '_input_x_dot',
        '_input_y_dot',
        '_input_z_dot',
    ]

    _fields_and_field_types = {
        'input_x_dot': 'float',
        'input_y_dot': 'float',
        'input_z_dot': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.input_x_dot = kwargs.get('input_x_dot', float())
        self.input_y_dot = kwargs.get('input_y_dot', float())
        self.input_z_dot = kwargs.get('input_z_dot', float())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.input_x_dot != other.input_x_dot:
            return False
        if self.input_y_dot != other.input_y_dot:
            return False
        if self.input_z_dot != other.input_z_dot:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def input_x_dot(self):
        """Message field 'input_x_dot'."""
        return self._input_x_dot

    @input_x_dot.setter
    def input_x_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_x_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_x_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_x_dot = value

    @builtins.property
    def input_y_dot(self):
        """Message field 'input_y_dot'."""
        return self._input_y_dot

    @input_y_dot.setter
    def input_y_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_y_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_y_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_y_dot = value

    @builtins.property
    def input_z_dot(self):
        """Message field 'input_z_dot'."""
        return self._input_z_dot

    @input_z_dot.setter
    def input_z_dot(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'input_z_dot' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'input_z_dot' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._input_z_dot = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_CartesianVelocityInput_Response(type):
    """Metaclass of message 'CartesianVelocityInput_Response'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrbot_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrbot_gazebo.srv.CartesianVelocityInput_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__cartesian_velocity_input__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__cartesian_velocity_input__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__cartesian_velocity_input__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__cartesian_velocity_input__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__cartesian_velocity_input__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CartesianVelocityInput_Response(metaclass=Metaclass_CartesianVelocityInput_Response):
    """Message class 'CartesianVelocityInput_Response'."""

    __slots__ = [
        '_status',
    ]

    _fields_and_field_types = {
        'status': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.status = kwargs.get('status', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.status != other.status:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'status' field must be of type 'bool'"
        self._status = value


class Metaclass_CartesianVelocityInput(type):
    """Metaclass of service 'CartesianVelocityInput'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('rrbot_gazebo')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'rrbot_gazebo.srv.CartesianVelocityInput')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__cartesian_velocity_input

            from rrbot_gazebo.srv import _cartesian_velocity_input
            if _cartesian_velocity_input.Metaclass_CartesianVelocityInput_Request._TYPE_SUPPORT is None:
                _cartesian_velocity_input.Metaclass_CartesianVelocityInput_Request.__import_type_support__()
            if _cartesian_velocity_input.Metaclass_CartesianVelocityInput_Response._TYPE_SUPPORT is None:
                _cartesian_velocity_input.Metaclass_CartesianVelocityInput_Response.__import_type_support__()


class CartesianVelocityInput(metaclass=Metaclass_CartesianVelocityInput):
    from rrbot_gazebo.srv._cartesian_velocity_input import CartesianVelocityInput_Request as Request
    from rrbot_gazebo.srv._cartesian_velocity_input import CartesianVelocityInput_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
