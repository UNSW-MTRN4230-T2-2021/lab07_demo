# Lab07

## Basic image processing task
First create the new catkin workspace for this week:

  `mkdir -p ~/lab07_ws/src`

  `cd ~/lab07_ws/src`

Clone this repo contents into ~/lab07_ws/src
 
  `git clone git@github.com:UNSW-MTRN4230-T2-2021/lab07_demo.git .`
 

 Then build the necessary executables
 
   `catkin_make`
   
- To use C++:

    `source  ~/lab07_ws/devel/setup.bash`
   
    `roslaunch thresholding thresholding_cpp.launch`

- To use Python, no compilation needed:

   `source  ~/lab07_ws/devel/setup.bash`

   `roslaunch thresholding thresholding_py.launch`

## Gazebo + ROS + Camera feed
*Ensure you have completed the steps above (for either C++ or Python)*

- Start the gazebo ROS node (C++ only from this point on)

  `roslaunch ur_gazebo lab7.launch`
  
  Gazebo should open up with the ur5e arm and a small 'box' camera above
  
- Start the image publisher/subscriber node

  `roslaunch img_sub img_sub_cpp.launch`
  
  A new window should appear with the camera feed and a red circle drawn on it
  
  
