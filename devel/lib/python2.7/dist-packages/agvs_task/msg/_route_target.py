# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from agvs_task/route_target.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class route_target(genpy.Message):
  _md5sum = "6a82df07cc526c047af2d9e2d7bfca86"
  _type = "agvs_task/route_target"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """float32 target_location_x
float32 target_location_y
float32 target_speed
int8 task_direction
int8 task_route_id
"""
  __slots__ = ['target_location_x','target_location_y','target_speed','task_direction','task_route_id']
  _slot_types = ['float32','float32','float32','int8','int8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       target_location_x,target_location_y,target_speed,task_direction,task_route_id

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(route_target, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.target_location_x is None:
        self.target_location_x = 0.
      if self.target_location_y is None:
        self.target_location_y = 0.
      if self.target_speed is None:
        self.target_speed = 0.
      if self.task_direction is None:
        self.task_direction = 0
      if self.task_route_id is None:
        self.task_route_id = 0
    else:
      self.target_location_x = 0.
      self.target_location_y = 0.
      self.target_speed = 0.
      self.task_direction = 0
      self.task_route_id = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3f2b().pack(_x.target_location_x, _x.target_location_y, _x.target_speed, _x.task_direction, _x.task_route_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 14
      (_x.target_location_x, _x.target_location_y, _x.target_speed, _x.task_direction, _x.task_route_id,) = _get_struct_3f2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3f2b().pack(_x.target_location_x, _x.target_location_y, _x.target_speed, _x.task_direction, _x.task_route_id))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 14
      (_x.target_location_x, _x.target_location_y, _x.target_speed, _x.task_direction, _x.task_route_id,) = _get_struct_3f2b().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_3f2b = None
def _get_struct_3f2b():
    global _struct_3f2b
    if _struct_3f2b is None:
        _struct_3f2b = struct.Struct("<3f2b")
    return _struct_3f2b