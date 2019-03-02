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

#include "lidarDetection.h"

namespace autorally_smartdriving{
	LidarDetection::LidarDetection(){
		l_lidarSub = l_nh.subscribe("/autorally_platform/laser_scan", 1, &LidarDetection::gatherLidarData, this);
		l_waypointSub = l_nh.subscribe("/waypointFollower/waypoints", 1, &LidarDetection::gatherWaypointData, this);
		l_lidarPub = l_nh.advertise<sensor_msgs::LaserScan>("scan", 1);

		samples = 2000;
		laser_frequency = 30;
		scan.ranges.resize(samples);
		scan.intensities.resize(samples);
	}

	LidarDetection::~LidarDetection(){}

	void LidarDetection::gatherLidarData(sensor_msgs::LaserScan data){
		int counter = 0;
		int beginLaser = 0, endLaser = 0;

		ros::Time scan_time = ros::Time::now();

		scan.header.stamp = scan_time;
		scan.header.frame_id = "lidar";
		scan.angle_min = data.angle_min;
		scan.angle_max = data.angle_max;
		scan.angle_increment = data.angle_max / samples;
		scan.time_increment = (1 / laser_frequency) / samples;
		scan.range_min = data.range_min;
		scan.range_max = data.range_max;

		for(counter = 0; counter < samples; counter++){
			scan.ranges[counter] = data.ranges[counter];
			scan.intensities[counter] = data.intensities[counter];
		}

		// publish scan to scan topic
		l_lidarPub.publish(scan);

		for(counter = 0; counter < samples; counter++){
			if(data.ranges[counter] != (float)8){
				beginLaser = counter;
				break;
			}
		}

		for(; counter < samples; counter++){
			if(data.ranges[counter] == (float)8){
				endLaser = counter - 1;
				break;
			}
		}

		ROS_INFO("Range from: %d to %d. %s", beginLaser, endLaser, data.header.frame_id.c_str());
	}

	void LidarDetection::gatherWaypointData(autorally_msgs::waypoints data){
		ROS_INFO("Current stack size: %lu.", data.waypoints.size());
	}
};

int main(int argc, char** argv){
	ros::init(argc, argv, "LidarDetection");
	autorally_smartdriving::LidarDetection lidarDetection;
	ros::spin();
}
