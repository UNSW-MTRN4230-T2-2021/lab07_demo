#include "opencv2/imgproc.hpp"
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include <iostream>


int threshold_value = 0;
int threshold_type = 3;
int const max_value = 255;
int const max_type = 4;
int const max_binary_value = 255;

cv::Mat src, src_gray, dst;
std::string window_name("Threshold Demo");
std::string trackbar_type("Type: \n 0: Binary \n 1: Binary Inverted \n 2: Truncate \n 3: To Zero \n 4: To Zero Inverted");
std::string trackbar_value("Value");

// callback function for the slider. It requries signature of int, void* even if these are unused
static void threshold_demo( int trackbarPos, void* userData ) {
    /* 
     Thresholding types:
     0: Binary
     1: Binary Inverted
     2: Threshold Truncated
     3: Threshold to Zero
     4: Threshold to Zero Inverted
    */
    cv::threshold( src_gray, dst, threshold_value, max_binary_value, threshold_type );
    cv::imshow( window_name, dst );
}
int main( int argc, char** argv ) {
    std::string imageName("/home/mtrn4230/lab_demo_repos/lab07_demo/thresholding/src/coins.jpeg");

    src = cv::imread(imageName, cv::IMREAD_COLOR ); // Load an image
    if (src.empty()) {
        std::cout << "Cannot read the image: " << imageName << std::endl;
        return -1;
    }
    cv::cvtColor( src, src_gray, cv::COLOR_BGR2GRAY ); // Convert the image to Gray
    cv::namedWindow( window_name, cv::WINDOW_AUTOSIZE ); // Create a window to display results
    cv::createTrackbar( trackbar_type,
                    window_name, &threshold_type,
                    max_type, threshold_demo ); // Create a Trackbar to choose type of Threshold
   cv:: createTrackbar( trackbar_value,
                    window_name, &threshold_value,
                    max_value, threshold_demo ); // Create a Trackbar to choose Threshold value
    threshold_demo( 0, 0 ); // Call the function to initialize
    cv::waitKey();
    return 0;
}