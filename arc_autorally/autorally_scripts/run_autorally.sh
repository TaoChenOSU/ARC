#!/bin/bash

# A script to start autorally automatically.
# A single terminal window is opened and new processes are run in t-mux sub-windows. 

# Dependencies:
# check_for_processes.sh script must be in the same folder as this script.

# A function to wait until a specified process is running.
# By process name.
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

tmux new-session -s autorally -d

# split screen in half horizontally
tmux split-window -v
#split the top window in half vertically
tmux split-window -h -t 0
#split the bottom window in half vertically
tmux split-window -h -t 1
#split the top-left window in half vertically
tmux split-window -h -t 0
#split the top-right window in half vertically
tmux split-window -h -t 2
#split the bottom-left window in half vertically
tmux split-window -h -t 1
#split the bottom-right window in half vertically
tmux split-window -h -t 3

# send keys/commands
tmux send-keys -t 0 "roslaunch autorally_gazebo autoRallyTrackGazeboSim.launch" C-m
# Wait until the simulator fully launched. The max wait time can be adjusted based on your needs.
check_for_process rosmaster 30

tmux send-keys -t 1 "rosrun rqt_publisher rqt_publisher" C-m
sleep 5

tmux send-keys -t 4 "rosparam set /gps_imu/FixedInitialPose true && roslaunch autorally_core stateEstimator.launch" C-m
check_for_process imuGpsEstimator 30

tmux send-keys -t 2 "roslaunch autorally_control waypointFollower.launch" C-m
check_for_process gpsWaypoint 30

tmux send-keys -t 5 "roslaunch autorally_control constantSpeedController.launch" C-m
check_for_process nodelet 30

tmux attach -t autorally

exit 0
