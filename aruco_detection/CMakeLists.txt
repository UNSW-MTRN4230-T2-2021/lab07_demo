cmake_minimum_required(VERSION 3.0.2)
project(aruco_detection)

add_compile_options(-std=c++17)

find_package(catkin REQUIRED)
find_package(OpenCV)
catkin_package()
include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(aruco_detection src/aruco_detection.cpp)
target_link_libraries(aruco_detection ${catkin_LIBRARIES} ${OpenCV_LIBRARIES})