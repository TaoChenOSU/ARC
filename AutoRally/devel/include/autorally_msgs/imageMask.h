// Generated by gencpp from file autorally_msgs/imageMask.msg
// DO NOT EDIT!


#ifndef AUTORALLY_MSGS_MESSAGE_IMAGEMASK_H
#define AUTORALLY_MSGS_MESSAGE_IMAGEMASK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <autorally_msgs/point2D.h>
#include <autorally_msgs/line2D.h>
#include <sensor_msgs/RegionOfInterest.h>

namespace autorally_msgs
{
template <class ContainerAllocator>
struct imageMask_
{
  typedef imageMask_<ContainerAllocator> Type;

  imageMask_()
    : header()
    , sender()
    , points()
    , lines()
    , rois()  {
    }
  imageMask_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , sender(_alloc)
    , points(_alloc)
    , lines(_alloc)
    , rois(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _sender_type;
  _sender_type sender;

   typedef std::vector< ::autorally_msgs::point2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autorally_msgs::point2D_<ContainerAllocator> >::other >  _points_type;
  _points_type points;

   typedef std::vector< ::autorally_msgs::line2D_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::autorally_msgs::line2D_<ContainerAllocator> >::other >  _lines_type;
  _lines_type lines;

   typedef std::vector< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> >::other >  _rois_type;
  _rois_type rois;




  typedef boost::shared_ptr< ::autorally_msgs::imageMask_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autorally_msgs::imageMask_<ContainerAllocator> const> ConstPtr;

}; // struct imageMask_

typedef ::autorally_msgs::imageMask_<std::allocator<void> > imageMask;

typedef boost::shared_ptr< ::autorally_msgs::imageMask > imageMaskPtr;
typedef boost::shared_ptr< ::autorally_msgs::imageMask const> imageMaskConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autorally_msgs::imageMask_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autorally_msgs::imageMask_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace autorally_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'autorally_msgs': ['/home/arc/Desktop/AutoRally/src/autorally/autorally_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'diagnostic_msgs': ['/opt/ros/indigo/share/diagnostic_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::autorally_msgs::imageMask_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autorally_msgs::imageMask_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autorally_msgs::imageMask_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autorally_msgs::imageMask_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autorally_msgs::imageMask_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autorally_msgs::imageMask_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autorally_msgs::imageMask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "da71ef8be852ae3b57ef13c4fd86dd46";
  }

  static const char* value(const ::autorally_msgs::imageMask_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xda71ef8be852ae3bULL;
  static const uint64_t static_value2 = 0x57ef13c4fd86dd46ULL;
};

template<class ContainerAllocator>
struct DataType< ::autorally_msgs::imageMask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autorally_msgs/imageMask";
  }

  static const char* value(const ::autorally_msgs::imageMask_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autorally_msgs::imageMask_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
string sender\n\
point2D[] points\n\
line2D[] lines\n\
sensor_msgs/RegionOfInterest[] rois\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: autorally_msgs/point2D\n\
uint16 x\n\
uint16 y\n\
\n\
================================================================================\n\
MSG: autorally_msgs/line2D\n\
point2D start\n\
point2D end\n\
\n\
================================================================================\n\
MSG: sensor_msgs/RegionOfInterest\n\
# This message is used to specify a region of interest within an image.\n\
#\n\
# When used to specify the ROI setting of the camera when the image was\n\
# taken, the height and width fields should either match the height and\n\
# width fields for the associated image; or height = width = 0\n\
# indicates that the full resolution image was captured.\n\
\n\
uint32 x_offset  # Leftmost pixel of the ROI\n\
                 # (0 if the ROI includes the left edge of the image)\n\
uint32 y_offset  # Topmost pixel of the ROI\n\
                 # (0 if the ROI includes the top edge of the image)\n\
uint32 height    # Height of ROI\n\
uint32 width     # Width of ROI\n\
\n\
# True if a distinct rectified ROI should be calculated from the \"raw\"\n\
# ROI in this message. Typically this should be False if the full image\n\
# is captured (ROI not used), and True if a subwindow is captured (ROI\n\
# used).\n\
bool do_rectify\n\
";
  }

  static const char* value(const ::autorally_msgs::imageMask_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autorally_msgs::imageMask_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.sender);
      stream.next(m.points);
      stream.next(m.lines);
      stream.next(m.rois);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct imageMask_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autorally_msgs::imageMask_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autorally_msgs::imageMask_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "sender: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.sender);
    s << indent << "points[]" << std::endl;
    for (size_t i = 0; i < v.points.size(); ++i)
    {
      s << indent << "  points[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autorally_msgs::point2D_<ContainerAllocator> >::stream(s, indent + "    ", v.points[i]);
    }
    s << indent << "lines[]" << std::endl;
    for (size_t i = 0; i < v.lines.size(); ++i)
    {
      s << indent << "  lines[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::autorally_msgs::line2D_<ContainerAllocator> >::stream(s, indent + "    ", v.lines[i]);
    }
    s << indent << "rois[]" << std::endl;
    for (size_t i = 0; i < v.rois.size(); ++i)
    {
      s << indent << "  rois[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::sensor_msgs::RegionOfInterest_<ContainerAllocator> >::stream(s, indent + "    ", v.rois[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTORALLY_MSGS_MESSAGE_IMAGEMASK_H