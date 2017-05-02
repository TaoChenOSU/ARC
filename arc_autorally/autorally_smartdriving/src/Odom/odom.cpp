/**********************************************
* @file odom.cpp
* @author Tao Chen <chentao@oregonstate.edu>
* @date Feburary 25, 2017
* @copyright 2017 Oregon State University
* @brief pulishes odometry data to the navigation stack
*
* @details This node subscribes to odometry data from /autorally_platform
and publisher the data to the navigation stack
***********************************************/

#include "odom.h"

namespace autorally_smartdriving{
  Odom::Odom(){
    o_odomSub = o_nh.subscribe("/base_pose_ground_truth", 1, &Odom::gatherOdomData, this);
    o_odomPub = o_nh.advertise<nav_msgs::Odometry>("odom", 1);
    o_PoseArrayPub = o_nh.advertise<geometry_msgs::PoseArray>("particlecloud", 1);
    o_poseCovariancePub = o_nh.advertise<geometry_msgs::PoseWithCovarianceStamped>("amcl_pose", 1);
  }

  Odom::~Odom(){};

  void Odom::gatherOdomData(nav_msgs::Odometry data){
    tf::TransformBroadcaster odom_broadcaster;
    ros::Time time_stamp = ros::Time::now();

    //publish transform over tf
    geometry_msgs::TransformStamped odom_trans;
    geometry_msgs::TransformStamped map_trans;

    odom_trans.header.stamp = time_stamp;
    odom_trans.header.frame_id = "odom";             //base_link
    odom_trans.child_frame_id = "base_footprint";     //odom

    odom_trans.transform.translation.x = 0;
    odom_trans.transform.translation.y = 0;
    odom_trans.transform.translation.z = 0;
    odom_trans.transform.rotation.x = 0;
    odom_trans.transform.rotation.y = 0;
    odom_trans.transform.rotation.z = 0;
    odom_trans.transform.rotation.w = 1;

    /*odom_trans.transform.rotation.x = data.pose.pose.orientation.x;
    odom_trans.transform.rotation.y = data.pose.pose.orientation.y;
    odom_trans.transform.rotation.z = data.pose.pose.orientation.z;
    odom_trans.transform.rotation.w = data.pose.pose.orientation.w;*/

    map_trans.header.stamp = time_stamp;
    map_trans.header.frame_id = "map";
    map_trans.child_frame_id = "odom";        //base_link

    map_trans.transform.translation.x = data.pose.pose.position.x;
    map_trans.transform.translation.y = data.pose.pose.position.y;
    map_trans.transform.translation.z = data.pose.pose.position.z;
    map_trans.transform.rotation.x = data.pose.pose.orientation.x;
    map_trans.transform.rotation.y = data.pose.pose.orientation.y;
    map_trans.transform.rotation.z = data.pose.pose.orientation.z;
    map_trans.transform.rotation.w = data.pose.pose.orientation.w;

    /*map_trans.transform.rotation.x = 0;
    map_trans.transform.rotation.y = 0;
    map_trans.transform.rotation.z = 0;
    map_trans.transform.rotation.w = -1;*/

    //send the transform
    odom_broadcaster.sendTransform(odom_trans);
    odom_broadcaster.sendTransform(map_trans);

    //Publish pose array
    geometry_msgs::PoseArray poseArray;
    poseArray.poses.resize(1);
    poseArray.header.stamp = time_stamp;
    poseArray.header.frame_id = "map";

    for(int i = 0; i < 1; i++){
      poseArray.poses[i].position.x = data.pose.pose.position.x;
      poseArray.poses[i].position.y = data.pose.pose.position.y;
      poseArray.poses[i].position.z = data.pose.pose.position.z;

      poseArray.poses[i].orientation.x = data.pose.pose.orientation.x;
      poseArray.poses[i].orientation.y = data.pose.pose.orientation.y;
      poseArray.poses[i].orientation.z = data.pose.pose.orientation.z;
      poseArray.poses[i].orientation.w = data.pose.pose.orientation.w;
    }
    o_PoseArrayPub.publish(poseArray);

    //Publish pose with covariance
    geometry_msgs::PoseWithCovarianceStamped PoseWithCovariance;
    PoseWithCovariance.header.stamp = time_stamp;
    PoseWithCovariance.header.frame_id = "map";
    PoseWithCovariance.pose.pose.position.x = data.pose.pose.position.x;
    PoseWithCovariance.pose.pose.position.y = data.pose.pose.position.y;
    PoseWithCovariance.pose.pose.position.z = data.pose.pose.position.z;

    PoseWithCovariance.pose.covariance = data.pose.covariance;
    o_poseCovariancePub.publish(PoseWithCovariance);

    //add frame_id and child_frame to odom message
    data.header.stamp = time_stamp;
    data.header.frame_id = "map";

    data.child_frame_id = "odom";
    o_odomPub.publish(data);
  }
};

int main(int argc, char** argv){
  ros::init(argc, argv, "OdomNav");
  autorally_smartdriving::Odom odom;
  ros::spin();
}
