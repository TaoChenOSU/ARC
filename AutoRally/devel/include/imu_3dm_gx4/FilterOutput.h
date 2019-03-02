// Generated by gencpp from file imu_3dm_gx4/FilterOutput.msg
// DO NOT EDIT!


#ifndef IMU_3DM_GX4_MESSAGE_FILTEROUTPUT_H
#define IMU_3DM_GX4_MESSAGE_FILTEROUTPUT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <geometry_msgs/Quaternion.h>
#include <geometry_msgs/Vector3.h>

namespace imu_3dm_gx4
{
template <class ContainerAllocator>
struct FilterOutput_
{
  typedef FilterOutput_<ContainerAllocator> Type;

  FilterOutput_()
    : header()
    , quat_status(0)
    , bias_status(0)
    , orientation()
    , orientation_covariance()
    , bias()
    , bias_covariance()
    , bias_covariance_status(0)
    , orientation_covariance_status(0)  {
      orientation_covariance.assign(0.0);

      bias_covariance.assign(0.0);
  }
  FilterOutput_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , quat_status(0)
    , bias_status(0)
    , orientation(_alloc)
    , orientation_covariance()
    , bias(_alloc)
    , bias_covariance()
    , bias_covariance_status(0)
    , orientation_covariance_status(0)  {
  (void)_alloc;
      orientation_covariance.assign(0.0);

      bias_covariance.assign(0.0);
  }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint16_t _quat_status_type;
  _quat_status_type quat_status;

   typedef uint16_t _bias_status_type;
  _bias_status_type bias_status;

   typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _orientation_type;
  _orientation_type orientation;

   typedef boost::array<double, 9>  _orientation_covariance_type;
  _orientation_covariance_type orientation_covariance;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _bias_type;
  _bias_type bias;

   typedef boost::array<double, 9>  _bias_covariance_type;
  _bias_covariance_type bias_covariance;

   typedef uint16_t _bias_covariance_status_type;
  _bias_covariance_status_type bias_covariance_status;

   typedef uint16_t _orientation_covariance_status_type;
  _orientation_covariance_status_type orientation_covariance_status;


    enum { STATUS_INVALID = 0u };
     enum { STATUS_VALID = 1u };
     enum { STATUS_VALID_REFERENCED = 2u };
 

  typedef boost::shared_ptr< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> const> ConstPtr;

}; // struct FilterOutput_

typedef ::imu_3dm_gx4::FilterOutput_<std::allocator<void> > FilterOutput;

typedef boost::shared_ptr< ::imu_3dm_gx4::FilterOutput > FilterOutputPtr;
typedef boost::shared_ptr< ::imu_3dm_gx4::FilterOutput const> FilterOutputConstPtr;

// constants requiring out of line definition

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace imu_3dm_gx4

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'imu_3dm_gx4': ['/home/arc/Desktop/AutoRally/src/imu_3dm_gx4/msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "40af8b09da9b33d02fc6b6288f52b159";
  }

  static const char* value(const ::imu_3dm_gx4::FilterOutput_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x40af8b09da9b33d0ULL;
  static const uint64_t static_value2 = 0x2fc6b6288f52b159ULL;
};

template<class ContainerAllocator>
struct DataType< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "imu_3dm_gx4/FilterOutput";
  }

  static const char* value(const ::imu_3dm_gx4::FilterOutput_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Output from the 3DM-GX4 attitude estimation filter.\n\
std_msgs/Header header\n\
\n\
# Node on status flags:\n\
# Status flags are implemented as bit-fields.\n\
#  0 = invalid\n\
#  1 = valid\n\
#  2 = valid and geo-magnetically referenced (quat_status only)\n\
#\n\
# Note that covariance on orientation becomes invalid as pitch angle exceeds 70 # degrees. This will be indicated by the status flag.\n\
\n\
# Quaternion status:\n\
uint16 quat_status\n\
\n\
# Bias status\n\
uint16 bias_status\n\
\n\
# Orientation estimate and diagonal covariance\n\
geometry_msgs/Quaternion orientation\n\
float64[9] orientation_covariance\n\
\n\
# Gyro bias and diagonal covariance\n\
geometry_msgs/Vector3 bias\n\
float64[9] bias_covariance\n\
\n\
# Covariance statuses\n\
uint16 bias_covariance_status\n\
uint16 orientation_covariance_status\n\
\n\
# Constants\n\
uint16 STATUS_INVALID = 0\n\
uint16 STATUS_VALID = 1\n\
uint16 STATUS_VALID_REFERENCED = 2\n\
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
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
# It is only meant to represent a direction. Therefore, it does not\n\
# make sense to apply a translation to it (e.g., when applying a \n\
# generic rigid transformation to a Vector3, tf2 will only apply the\n\
# rotation). If you want your data to be translatable too, use the\n\
# geometry_msgs/Point message instead.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::imu_3dm_gx4::FilterOutput_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.quat_status);
      stream.next(m.bias_status);
      stream.next(m.orientation);
      stream.next(m.orientation_covariance);
      stream.next(m.bias);
      stream.next(m.bias_covariance);
      stream.next(m.bias_covariance_status);
      stream.next(m.orientation_covariance_status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct FilterOutput_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::imu_3dm_gx4::FilterOutput_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::imu_3dm_gx4::FilterOutput_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "quat_status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.quat_status);
    s << indent << "bias_status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.bias_status);
    s << indent << "orientation: ";
    s << std::endl;
    Printer< ::geometry_msgs::Quaternion_<ContainerAllocator> >::stream(s, indent + "  ", v.orientation);
    s << indent << "orientation_covariance[]" << std::endl;
    for (size_t i = 0; i < v.orientation_covariance.size(); ++i)
    {
      s << indent << "  orientation_covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.orientation_covariance[i]);
    }
    s << indent << "bias: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.bias);
    s << indent << "bias_covariance[]" << std::endl;
    for (size_t i = 0; i < v.bias_covariance.size(); ++i)
    {
      s << indent << "  bias_covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.bias_covariance[i]);
    }
    s << indent << "bias_covariance_status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.bias_covariance_status);
    s << indent << "orientation_covariance_status: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.orientation_covariance_status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // IMU_3DM_GX4_MESSAGE_FILTEROUTPUT_H
