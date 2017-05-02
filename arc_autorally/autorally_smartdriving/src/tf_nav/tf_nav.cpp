/**********************************************
* @file tf_nav.c
* @author Tao Chen <chentao@oregonstate.edu>
* @date Feburary 25, 2017
* @copyright 2017 Oregon State University
* @brief ROS node to publish tf data to the navigation stack
*
* @details this node subscribes to th messages from /autorally_platform
and publishes the data to the navigation stack
***********************************************/

#include "tf_nav.h"

namespace autorally_smartdriving{
  TF_NAV::TF_NAV(){
    t_tfSub = t_nh.subscribe("/tf", 50, &TF_NAV::gatherTfData, this);
    t_tfPub = t_nh.advertise<tf2_msgs::TFMessage>("tf_nav", 50);
  }

  TF_NAV::~TF_NAV(){}

  void TF_NAV::gatherTfData(tf2_msgs::TFMessage data){
    t_tfPub.publish(data);
  }
};

int main(int argc, char** argv){
	ros::init(argc, argv, "TF_NAV");
	autorally_smartdriving::TF_NAV tf_nav;
	ros::spin();
}
