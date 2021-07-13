cmake_minimum_required(VERSION 3.0.2)
project(thresholding)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  roscpp
  rospy
  OpenCV
)
catkin_package()

include_directories(
  ${catkin_INCLUDE_DIRS}
  ${OpenCV_INCLUDE_DIRS}
)
add_executable(thresholding src/thresholding.cpp)
target_link_libraries(thresholding ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})