# Lab07

## Basic image processing task
First create the new catkin workspace for this week:

  ```
  mkdir -p ~/lab_workspaces/lab07_ws/src
  ```

Create the repo directory if not already created

  ```
  mkdir -p ~/lab_demo_repos/
  cd ~/lab_demo_repos/
  ```

Clone this repo into ~/lab_demo_repos/
 
  `git clone git@github.com:UNSW-MTRN4230-T2-2021/lab07_demo.git`
 
Symbolically link the repo into the lab workspace

  ```
  ln -s ~/lab_demo_repos/lab07_demo ~/lab_workspaces/lab07_ws/src
  cd ~/lab_workspaces/lab07_ws/ # navigate back to the workspace, there should be a link in the /src directory now
  ```

Then build the necessary executables
   
- To use C++:

  ```
  catkin_make
  source  devel/setup.bash
  roslaunch thresholding thresholding_cpp.launch
  ```

- To use Python:

  ```
  catkin_make
  source  devel/setup.bash
  roslaunch thresholding thresholding_py.launch
  ```


 ## Post lab extra: Fiducial (ArUco Marker) Detection

  To start the node (which simply executes then waits for keypress to exit)
  ``` 
  cd ~/lab_workspaces/lab07_ws/
  catkin_make
  source devel/setup.bash
  roslaunch aruco_detection aruco_detection.launch
  ```

