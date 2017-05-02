/**********************************************
* @file tf_nav.h
* @author Tao Chen <chentao@oregonstate.edu>
* @date Feburary 25, 2017
* @copyright 2017 Oregon State University
* @brief ROS node to publish tf data to the navigation stack
*
* @details this node subscribes to th messages from /autorally_platform
and publishes the data to the navigation stack
***********************************************/

#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <tf2_msgs/TFMessage.h>

namespace autorally_smartdriving{
  class TF_NAV{
    public:
      TF_NAV();
      ~TF_NAV();
    private:
      ros::NodeHandle t_nh;
      ros::Subscriber t_tfSub;
      ros::Publisher t_tfPub;

      void gatherTfData(tf2_msgs::TFMessage data);
  };
};
