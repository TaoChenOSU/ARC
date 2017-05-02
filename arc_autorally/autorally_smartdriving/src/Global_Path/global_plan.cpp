/**********************************************
* @file global_plan.cpp
* @author Tao Chen <chentao@oregonstate.edu>
* @date March 05, 2017
* @copyright 2017 Oregon State University
* @brief test the size of the global plan pose list
*
* @details This node subscribes to the global plan from /move_base
and prints out the size of the pose list
***********************************************/

#include "global_plan.h"

namespace autorally_smartdriving{
  GlobalPlan::GlobalPlan(){
    g_planSub = g_nh.subscribe("/move_base/TrajectoryPlannerROS/global_plan", 1, &GlobalPlan::printSize, this);
  }

  GlobalPlan::~GlobalPlan(){};

  void GlobalPlan::printSize(nav_msgs::Path data){
    ROS_INFO("There are %lu points in the path", data.poses.size()/sizeof(geometry_msgs::PoseStamped));
  }
};

int main(int argc, char** argv){
  ros::init(argc, argv, "GlobalPlan");
  autorally_smartdriving::GlobalPlan globalPlan;
  ros::spin();
}
