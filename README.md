# Lab07

## Basic image processing task

### Setup

NB: If you haven't already, install the new VM.

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
  cd ~/lab_workspaces/lab07_ws/
  ```
*If you look in the ~/lab_workspaces/lab07_ws/src directory, you will find the repo is now symbolically linked into the workspace*

Then create and source the necessary files
 ```
  catkin_make
  source  devel/setup.bash
  ```

   
- To use C++:

  ```
  roslaunch thresholding thresholding_cpp.launch
  ```

- To use Python:

  ```
  roslaunch thresholding thresholding_py.launch
  ```

 ## Examples of image processing methods
 ### [Opening an image from file](https://learnopencv.com/read-an-image-in-opencv-python-cpp/)
 ### [Reading an image from a rostopic](https://automaticaddison.com/working-with-ros-and-opencv-in-ros-noetic/)
 ### [Displaying an image](https://docs.opencv.org/master/db/deb/tutorial_display_image.html)
 ### Colour space conversion
 #### RGB --> HSV
 #### HSV --> RGB
 #### RGB --> LAB
 #### RGB --> Grayscale
 ### [Thresholding](https://learnopencv.com/opencv-threshold-python-cpp/)
 ### Morphology
 #### Erosion
 #### Dilation
 #### Opening
 #### Closing
 ### Region properties - [Centroids](https://learnopencv.com/find-center-of-blob-centroid-using-opencv-cpp-python/)
 ### Brightness adjustment
 ### Histogram equalisation
 ### Sharpen / blur
 ### Sobel edge
 ### Corner detection: FAST
 ### Detectors: SURF
 ### Descriptors
 #### SIFT
 #### ORB
 

 ## Post lab extra: Fiducial (ArUco Marker) Detection
  [Tutorial on ArUco Markers](https://docs.opencv.org/master/d5/dae/tutorial_aruco_detection.html)
  To start the node (which simply executes then waits for keypress to exit)
  ``` 
  cd ~/lab_workspaces/lab07_ws/
  catkin_make
  source devel/setup.bash
  roslaunch aruco_detection aruco_detection.launch
  ```
