/**********************************************
* @file global_plan.h
* @author Tao Chen <chentao@oregonstate.edu>
* @date March 05, 2017
* @copyright 2017 Oregon State University
* @brief test the size of the global plan pose list
*
* @details This node subscribes to the global plan from /move_base
and prints out the size of the pose list
***********************************************/

#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <nav_msgs/Path.h>
#include <autorally_msgs/waypoints.h>

namespace autorally_smartdriving{
  class GlobalPlan{
    public:
      GlobalPlan();
      ~GlobalPlan();

    private:
      ros::NodeHandle g_nh;
			ros::Subscriber g_planSub;

      void printSize(nav_msgs::Path data);
  };
};
