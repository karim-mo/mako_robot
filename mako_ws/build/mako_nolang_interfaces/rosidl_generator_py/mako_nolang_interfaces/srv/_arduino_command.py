# generated from rosidl_generator_py/resource/_idl.py.em
# with input from mako_nolang_interfaces:srv/ArduinoCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArduinoCommand_Request(type):
    """Metaclass of message 'ArduinoCommand_Request'."""

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
            module = import_type_support('mako_nolang_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mako_nolang_interfaces.srv.ArduinoCommand_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arduino_command__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arduino_command__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arduino_command__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arduino_command__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arduino_command__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArduinoCommand_Request(metaclass=Metaclass_ArduinoCommand_Request):
    """Message class 'ArduinoCommand_Request'."""

    __slots__ = [
        '_cmd_type',
        '_led_exp_type',
    ]

    _fields_and_field_types = {
        'cmd_type': 'string',
        'led_exp_type': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.cmd_type = kwargs.get('cmd_type', str())
        self.led_exp_type = kwargs.get('led_exp_type', str())

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
        if self.cmd_type != other.cmd_type:
            return False
        if self.led_exp_type != other.led_exp_type:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def cmd_type(self):
        """Message field 'cmd_type'."""
        return self._cmd_type

    @cmd_type.setter
    def cmd_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'cmd_type' field must be of type 'str'"
        self._cmd_type = value

    @property
    def led_exp_type(self):
        """Message field 'led_exp_type'."""
        return self._led_exp_type

    @led_exp_type.setter
    def led_exp_type(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'led_exp_type' field must be of type 'str'"
        self._led_exp_type = value


# Import statements for member types

# already imported above
# import rosidl_parser.definition


class Metaclass_ArduinoCommand_Response(type):
    """Metaclass of message 'ArduinoCommand_Response'."""

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
            module = import_type_support('mako_nolang_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mako_nolang_interfaces.srv.ArduinoCommand_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__arduino_command__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__arduino_command__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__arduino_command__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__arduino_command__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__arduino_command__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ArduinoCommand_Response(metaclass=Metaclass_ArduinoCommand_Response):
    """Message class 'ArduinoCommand_Response'."""

    __slots__ = [
        '_success',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.success = kwargs.get('success', bool())

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
        if self.success != other.success:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value


class Metaclass_ArduinoCommand(type):
    """Metaclass of service 'ArduinoCommand'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('mako_nolang_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'mako_nolang_interfaces.srv.ArduinoCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__arduino_command

            from mako_nolang_interfaces.srv import _arduino_command
            if _arduino_command.Metaclass_ArduinoCommand_Request._TYPE_SUPPORT is None:
                _arduino_command.Metaclass_ArduinoCommand_Request.__import_type_support__()
            if _arduino_command.Metaclass_ArduinoCommand_Response._TYPE_SUPPORT is None:
                _arduino_command.Metaclass_ArduinoCommand_Response.__import_type_support__()


class ArduinoCommand(metaclass=Metaclass_ArduinoCommand):
    from mako_nolang_interfaces.srv._arduino_command import ArduinoCommand_Request as Request
    from mako_nolang_interfaces.srv._arduino_command import ArduinoCommand_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
