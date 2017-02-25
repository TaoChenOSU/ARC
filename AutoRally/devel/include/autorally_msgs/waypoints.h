// Generated by gencpp from file autorally_msgs/waypoints.msg
// DO NOT EDIT!


#ifndef AUTORALLY_MSGS_MESSAGE_WAYPOINTS_H
#define AUTORALLY_MSGS_MESSAGE_WAYPOINTS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Point.h>

namespace autorally_msgs
{
template <class ContainerAllocator>
struct waypoints_
{
  typedef waypoints_<ContainerAllocator> Type;

  waypoints_()
    : header()
    , waypoints()  {
    }
  waypoints_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , waypoints(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::geometry_msgs::Point_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::geometry_msgs::Point_<ContainerAllocator> >::other >  _waypoints_type;
  _waypoints_type waypoints;




  typedef boost::shared_ptr< ::autorally_msgs::waypoints_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::autorally_msgs::waypoints_<ContainerAllocator> const> ConstPtr;

}; // struct waypoints_

typedef ::autorally_msgs::waypoints_<std::allocator<void> > waypoints;

typedef boost::shared_ptr< ::autorally_msgs::waypoints > waypointsPtr;
typedef boost::shared_ptr< ::autorally_msgs::waypoints const> waypointsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::autorally_msgs::waypoints_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::autorally_msgs::waypoints_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::autorally_msgs::waypoints_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::autorally_msgs::waypoints_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autorally_msgs::waypoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::autorally_msgs::waypoints_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autorally_msgs::waypoints_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::autorally_msgs::waypoints_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::autorally_msgs::waypoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ce72697cb9c51ec8a9ef1e90c5260d0b";
  }

  static const char* value(const ::autorally_msgs::waypoints_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xce72697cb9c51ec8ULL;
  static const uint64_t static_value2 = 0xa9ef1e90c5260d0bULL;
};

template<class ContainerAllocator>
struct DataType< ::autorally_msgs::waypoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "autorally_msgs/waypoints";
  }

  static const char* value(const ::autorally_msgs::waypoints_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::autorally_msgs::waypoints_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
\n\
geometry_msgs/Point[] waypoints\n\
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
MSG: geometry_msgs/Point\n\
# This contains the position of a point in free space\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::autorally_msgs::waypoints_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::autorally_msgs::waypoints_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.waypoints);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct waypoints_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::autorally_msgs::waypoints_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::autorally_msgs::waypoints_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "waypoints[]" << std::endl;
    for (size_t i = 0; i < v.waypoints.size(); ++i)
    {
      s << indent << "  waypoints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "    ", v.waypoints[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // AUTORALLY_MSGS_MESSAGE_WAYPOINTS_H
