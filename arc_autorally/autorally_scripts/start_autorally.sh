#!/bin/bash

# Script to automate starting the GT Autorally simulation software.
# A new terminal window is opened for each new process and closes automatically when that process dies.
# Date: 1/24/2017
# Author: Dan Stoyer
# Verion: 1.0

# Script Dependencies:
# check_for_processes.sh must be in the same folder as this script.

# The dependencies for autorally should be sourced in ~/.bashrc so that each new terminal window will have access to the proper resources:

# Example of what should be sourced in ~/.bashrc:
# source /opt/ros/<ros-version>/setup.bash
# source /<full-path-to-autorally-workspace>/devel/setup.bash
# source /<full-path-to-autorally-workspace>/src/autorally/autorally_util/setupEnvLocal.sh


# A function to wait until a specified process is running.
# Argument 1: process name
# Argument 2: wait time in seconds
function check_for_process {
	if [[ "$1" == "" || "$2" == "" ]]; then
	
	echo "Invalid arguments"

	echo "Usage: $0 {process name} {wait time}"
	exit -1
	fi
	
	proc_name="$1"
	
	proc_starting=""
	
	seconds="$2"
	
	echo "Waiting for [$proc_name] to start ."
	
	end_time=$(expr $(date +%s) + $seconds)
	
	while [[ "$proc_starting" == "" ]]; do
		sleep 1
		proc_starting=`pgrep $proc_name`
	
		#echo "process name: [$proc_name]"
	
		#time=$(date +%s)
		
		#echo "[$time] > [$end_time]"
	
		if [[ $(date +%s) > $end_time ]]; then
			echo "Process [$1] did not start in $seconds seconds."
			break
		fi
		echo -n " ."
	done
}

# Open a new terminal window and start autorally_gazebo:
gnome-terminal -e "bash -c 'roslaunch autorally_gazebo autoRallyTrackGazeboSim.launch'"
#gnome-terminal --window-with-profile=autorally -e "roslaunch autorally_gazebo autoRallyTrackGazeboSim.launch"
check_for_process rosmaster 30

# sleep for a few seconds for the simulator to launch, then continue.
#sleep 10

# Open new terminal for rqt publisher:

gnome-terminal -e "bash -c 'rosrun rqt_publisher rqt_publisher'"
#gnome-terminal --window-with-profile=autorally -e "rosrun rqt_publisher rqt_publisher"
sleep 5 # wait briefly

# Open new terminal for the state estimator:
gnome-terminal -e "bash -c 'rosparam set /gps_imu/FixedInitialPose true; roslaunch autorally_core stateEstimator.launch'"
#gnome-terminal --window-with-profile=autorally -e "bash -c 'rosparam set /gps_imu/FixedInitialPose true; roslaunch autorally_core stateEstimator.launch'"
check_for_process imuGpsEstimator 30
#sleep 3

# Open new terminal for the waypoint follower:
gnome-terminal -e "bash -c 'roslaunch autorally_control waypointFollower.launch'"
#gnome-terminal --window-with-profile=autorally -e "roslaunch autorally_control waypointFollower.launch"
check_for_process gpsWaypoint 30
#sleep 3

# Open new terminal and execute the constant speed controller:
gnome-terminal -e "bash -c 'roslaunch autorally_control constantSpeedController.launch'"
#gnome-terminal --window-with-profile=autorally -e "roslaunch autorally_control constantSpeedController.launch"
check_for_process nodelet 30

exit 0
