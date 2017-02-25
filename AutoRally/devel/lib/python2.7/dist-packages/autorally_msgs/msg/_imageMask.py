# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from autorally_msgs/imageMask.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import autorally_msgs.msg
import sensor_msgs.msg
import std_msgs.msg

class imageMask(genpy.Message):
  _md5sum = "da71ef8be852ae3b57ef13c4fd86dd46"
  _type = "autorally_msgs/imageMask"
  _has_header = True #flag to mark the presence of a Header object
  _full_text = """Header header

string sender
point2D[] points
line2D[] lines
sensor_msgs/RegionOfInterest[] rois

================================================================================
MSG: std_msgs/Header
# Standard metadata for higher-level stamped data types.
# This is generally used to communicate timestamped data 
# in a particular coordinate frame.
# 
# sequence ID: consecutively increasing ID 
uint32 seq
#Two-integer timestamp that is expressed as:
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
# time-handling sugar is provided by the client library
time stamp
#Frame this data is associated with
# 0: no frame
# 1: global frame
string frame_id

================================================================================
MSG: autorally_msgs/point2D
uint16 x
uint16 y

================================================================================
MSG: autorally_msgs/line2D
point2D start
point2D end

================================================================================
MSG: sensor_msgs/RegionOfInterest
# This message is used to specify a region of interest within an image.
#
# When used to specify the ROI setting of the camera when the image was
# taken, the height and width fields should either match the height and
# width fields for the associated image; or height = width = 0
# indicates that the full resolution image was captured.

uint32 x_offset  # Leftmost pixel of the ROI
                 # (0 if the ROI includes the left edge of the image)
uint32 y_offset  # Topmost pixel of the ROI
                 # (0 if the ROI includes the top edge of the image)
uint32 height    # Height of ROI
uint32 width     # Width of ROI

# True if a distinct rectified ROI should be calculated from the "raw"
# ROI in this message. Typically this should be False if the full image
# is captured (ROI not used), and True if a subwindow is captured (ROI
# used).
bool do_rectify
"""
  __slots__ = ['header','sender','points','lines','rois']
  _slot_types = ['std_msgs/Header','string','autorally_msgs/point2D[]','autorally_msgs/line2D[]','sensor_msgs/RegionOfInterest[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,sender,points,lines,rois

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(imageMask, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.sender is None:
        self.sender = ''
      if self.points is None:
        self.points = []
      if self.lines is None:
        self.lines = []
      if self.rois is None:
        self.rois = []
    else:
      self.header = std_msgs.msg.Header()
      self.sender = ''
      self.points = []
      self.lines = []
      self.rois = []

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
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.sender
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.points:
        _x = val1
        buff.write(_struct_2H.pack(_x.x, _x.y))
      length = len(self.lines)
      buff.write(_struct_I.pack(length))
      for val1 in self.lines:
        _v1 = val1.start
        _x = _v1
        buff.write(_struct_2H.pack(_x.x, _x.y))
        _v2 = val1.end
        _x = _v2
        buff.write(_struct_2H.pack(_x.x, _x.y))
      length = len(self.rois)
      buff.write(_struct_I.pack(length))
      for val1 in self.rois:
        _x = val1
        buff.write(_struct_4IB.pack(_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.points is None:
        self.points = None
      if self.lines is None:
        self.lines = None
      if self.rois is None:
        self.rois = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender = str[start:end].decode('utf-8')
      else:
        self.sender = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.points = []
      for i in range(0, length):
        val1 = autorally_msgs.msg.point2D()
        _x = val1
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2H.unpack(str[start:end])
        self.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.lines = []
      for i in range(0, length):
        val1 = autorally_msgs.msg.line2D()
        _v3 = val1.start
        _x = _v3
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2H.unpack(str[start:end])
        _v4 = val1.end
        _x = _v4
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2H.unpack(str[start:end])
        self.lines.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.rois = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.RegionOfInterest()
        _x = val1
        start = end
        end += 17
        (_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify,) = _struct_4IB.unpack(str[start:end])
        val1.do_rectify = bool(val1.do_rectify)
        self.rois.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3I.pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      _x = self.sender
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      if python3:
        buff.write(struct.pack('<I%sB'%length, length, *_x))
      else:
        buff.write(struct.pack('<I%ss'%length, length, _x))
      length = len(self.points)
      buff.write(_struct_I.pack(length))
      for val1 in self.points:
        _x = val1
        buff.write(_struct_2H.pack(_x.x, _x.y))
      length = len(self.lines)
      buff.write(_struct_I.pack(length))
      for val1 in self.lines:
        _v5 = val1.start
        _x = _v5
        buff.write(_struct_2H.pack(_x.x, _x.y))
        _v6 = val1.end
        _x = _v6
        buff.write(_struct_2H.pack(_x.x, _x.y))
      length = len(self.rois)
      buff.write(_struct_I.pack(length))
      for val1 in self.rois:
        _x = val1
        buff.write(_struct_4IB.pack(_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.points is None:
        self.points = None
      if self.lines is None:
        self.lines = None
      if self.rois is None:
        self.rois = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _struct_3I.unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8')
      else:
        self.header.frame_id = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.sender = str[start:end].decode('utf-8')
      else:
        self.sender = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.points = []
      for i in range(0, length):
        val1 = autorally_msgs.msg.point2D()
        _x = val1
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2H.unpack(str[start:end])
        self.points.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.lines = []
      for i in range(0, length):
        val1 = autorally_msgs.msg.line2D()
        _v7 = val1.start
        _x = _v7
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2H.unpack(str[start:end])
        _v8 = val1.end
        _x = _v8
        start = end
        end += 4
        (_x.x, _x.y,) = _struct_2H.unpack(str[start:end])
        self.lines.append(val1)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.rois = []
      for i in range(0, length):
        val1 = sensor_msgs.msg.RegionOfInterest()
        _x = val1
        start = end
        end += 17
        (_x.x_offset, _x.y_offset, _x.height, _x.width, _x.do_rectify,) = _struct_4IB.unpack(str[start:end])
        val1.do_rectify = bool(val1.do_rectify)
        self.rois.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3I = struct.Struct("<3I")
_struct_2H = struct.Struct("<2H")
_struct_4IB = struct.Struct("<4IB")
