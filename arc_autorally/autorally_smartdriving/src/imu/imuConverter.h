#include <ros/ros.h>
#include <sensor_msgs/Imu.h>
#include <nodelet/nodelet.h>

namespace autorally_smartdriving{
  class ImuConverter{
    public:
      ImuConverter();
      ~ImuConverter();
    private:
      ros::NodeHandle i_nh;
      ros::Subscriber i_imuSub;
      ros::Publisher i_imuPub;

      void gatherImuData(sensor_msgs::Imu data);

  };
};
