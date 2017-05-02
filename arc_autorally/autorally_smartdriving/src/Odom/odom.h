/**********************************************
* @file odom.h
* @author Tao Chen <chentao@oregonstate.edu>
* @date Feburary 25, 2017
* @copyright 2017 Oregon State University
* @brief pulishes odometry data to the navigation stack
*
* @details This node subscribes to odometry data from /autorally_platform
and publisher the data to the navigation stack
***********************************************/

#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <nav_msgs/Odometry.h>
#include <geometry_msgs/PoseArray.h>
#include <geometry_msgs/PoseWithCovarianceStamped.h>
#include <tf/transform_broadcaster.h>

namespace autorally_smartdriving{
  class Odom{
    public:
      Odom();
      ~Odom();

    private:
      ros::NodeHandle o_nh;
      ros::Subscriber o_odomSub;      //subscribe odom from /autorally_platform
      ros::Publisher o_odomPub;       //Publish odom to navigation stack
      ros::Publisher o_PoseArrayPub;  //Publish pose array so that we don't have to use amcl
      ros::Publisher o_poseCovariancePub;

      tf::TransformBroadcaster odom_broadcaster;

      void gatherOdomData(nav_msgs::Odometry);
  };
};
