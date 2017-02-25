/**********************************************
* @file lidarDetection.cpp
* @author Tao Chen <chentao@oregonstate.edu>
* @date Feburary 21, 2017
* @copyright 2017 Oregon State University
* @brief ROS node to generate new waypoints based on lidar scan
*
* @details When an obstacle is detected, it alters the original
* set of waypoints to go around the obstacle. This node subscribes to
* the laser_scan message and the current_list_of_waypoints message and
* publish the new_waypoints message.
***********************************************/

#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <sensor_msgs/LaserScan.h>
#include <autorally_msgs/waypoints.h>

namespace autorally_smartdriving{
	class LidarDetection{
		public:
			LidarDetection();
			~LidarDetection();
		private:
			ros::NodeHandle l_nh;
			ros::Subscriber l_lidarSub;
			ros::Subscriber l_waypointSub;
			ros::Publisher l_lidarPub;

			// laser scan message
			sensor_msgs::LaserScan scan;
			int samples;
			int laser_frequency;

			void gatherLidarData(sensor_msgs::LaserScan data);
			void gatherWaypointData(autorally_msgs::waypoints data);
	};
};
