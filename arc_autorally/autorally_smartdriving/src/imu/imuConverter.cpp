#include "imuConverter.h"

namespace autorally_smartdriving{
  ImuConverter::ImuConverter(){
    i_imuSub = i_nh.subscribe("/imu/data", 10, &ImuConverter::gatherImuData, this);
    i_imuPub = i_nh.advertise<sensor_msgs::Imu>("imu/imu", 1);
  }

  ImuConverter::~ImuConverter(){}

  void ImuConverter::gatherImuData(sensor_msgs::Imu data){
    // sensor_msgs::ImuConstPtr output(new sensor_msgs::Imu);
    //sensor_msgs::ImuConstPtr output(new sensor_msgs::Imu());
    //output->linear_acceleration.x = data.linear_acceleration.x;
    //outpu.t = sensor_msgs::ImuConstPtr(data);
    //output->header.stamp
    i_imuPub.publish(data);
  }
};

int main(int argc, char** argv){
  ros::init(argc, argv, "ImuConverter");
  autorally_smartdriving::ImuConverter imuConverter;
  ros::spin();
}
