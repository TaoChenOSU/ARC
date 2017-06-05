# CS461 Senior Capstone Project: ARC
![ARC header image](/resources/arc_header.JPG)

The purpose of ARC is to determine if it is possible to build an autonomous RC vehicle using commodity hardware.  
We will try to use relatively inexpensive parts, including cameras, computers, and an RC vehicle used as the base, with minimal fabrication. All of the software used is open source, allowing users to tinker and adapt the project to their needs.

---

Research for ARC took us down several paths as we tested platforms for use in our project. We chose platforms that we could run in simulation to speed up the development process.

We found that the Robotics Operating System (ROS) provides a good base to build from and, consequently, the platforms we chose are implemented on ROS.

Two such simulation environments were Georgia Tech's AutoRally platform and the Stage simulation platform.

Below are instructions for installing and running GT AutoRally and Stage with the ARC project.

---

## GT AutoRally Instructions
Step-by-step instructions on how to run our implementation of the [GT AutoRally](https://github.com/AutoRally/autorally) simulation platform.


1. Go to [GT AutoRally](https://github.com/AutoRally/autorally) and follow the instructions to install the AutoRally platform. Be sure to follow the instructions carefully and completely, failure to do so may result in an incomplete installation that will require extended time to troubleshoot.  

  **NOTE**: It is assumed from this point on that you have already gone through the "Autonomous Driving in Simulation" instructions at [GT AutoRally](https://github.com/AutoRally/autorally).  
  The following instructions are intended for _**after**_ completing the GT AutoRally setup and simulation instructions above.  
  At this point you should be able to run GT AutoRally 

1. Keep all simulation configuration according to the AutoRally specifications.  
  e.g. stateEstimator's InvertY and InvertZ values.  

1. Navigate to the work space where you put the AutoRally package. And then go to the `src/autorally` directory.  

  **NOTE**: All files/folders modified and provided by ARC for AutoRally are found in the arc_autorally folder.  

1. Under autorally_description/urdf, replace the `autoRallyPlatform.urdf.xacro` file with file of the same name that we provide.  

1. Copy the `world` folder we provide to `autorally_description/models`.  

1. Under `autorally_description`, there is a file named `empty_sky_AR.world`. Copy the code below to the end of the file (before the last "</world>"):  
    <include>
      <uri>model://urdf/models/world</url>
    </include>

1. Under `autorally_gazebo/launch`, there is a file named `autoRallyTrackWorld.launch`,
  comment out the last node (named `spawn_track`).

1. Copy the `autorally_smartdriving` folder to src/autorally.

1. Open a terminal, navigate to your work space. The directory that contains
  `devel/`, `src/` and `build/`.

1. Use `catkin_make` to compile the package.

1. Open the bashrc by typing in `gedit ~/.bashrc`.

1. At the bottom of the file, add these two lines:
  `source workspace_directory/devel/setup.bash`
  `source workspace_directory/src/autorally/autorally_util/setupEnvLocal.sh`
  (Replace the `workspace_directory` with your actually work space directory)

1. Copy the `run_autorally.sh` we provide to your work space.

1. Open another terminal, navigate to your work space and run the `run_autorally.sh` script.

  `run_autorally.sh` script automates the initialization processes of the GT AutoRally
  simulation. 
  1. A single terminal window opens opens with sub-divided windows using tmux.
  1. Applications necessary for AutoRally will open next, including Gazebo and `rqt_publisher`. These applications along with other processes are launched by the script within different tmux sub-windows in the main terminal window.

1. Find the application window (seperate from the terminal window) titled "rqt_publisher".

1. Go to rqt_publisher and make sure the topics created during initial setup are still there:  
  `/runStop`
  `/chassisState`
  `/constantSpeedController/speedCommand`

  If rqt_publisher does not have those three topics in the main part of the window, go back to the setup instructions and add them.

1. Make sure /runStop is set to true and speed (under `/speedCommand`) is set to 3. Then check the boxes to the left of those three topics.

1. Run these two commands in two of the tmux windows:  
  `roslaunch autorally_smartdriving autorally_configuration.launch  `
  `roslaunch autorally_smartdriving move_base.launch  `

1. Go back to the rqt_publisher window and uncheck the `constantspeedcontroller` message.

1. Terminate the `waypointfollower` and the `constantspeedcontroller`.

1. Copy the rviz config file we provide.

1. `roslaunch autorally_smartdriving auto_turn.launch`

1. run rviz with the rviz config file.
   `rosrun rviz rviz`

1. Now you can set goals through Rviz and the car should go towards the
  goal autonomously  
  
---
---
## Stage installation instructions  
---
All files modified by ARC for use in the Stage simulator are found in the `arc_stage` folder provided.
1. Navigate to the work space where you put the AutoRally package. And then go to the `src/autorally` directory.  
1. Copy the `stage_launch` folder in `arc_stage` to `src/autorally`.  
1. Open a terminal, navigate to your work space. The directory that contains devel/, src/ and build/  
1. Use `catkin_make` to compile the package.  

## [ARC Part list](parts_list.md)
