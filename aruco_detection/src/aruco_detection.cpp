#include <opencv2/highgui.hpp>
#include <opencv2/aruco.hpp> // Import the aruco module in OpenCV
#include <iostream>

int main( int argc, char** argv ) {
    // Load the dictionary that was used to generate the markers.
    cv::Ptr<cv::aruco::Dictionary> dictionary = getPredefinedDictionary(cv::aruco::DICT_6X6_250);

    // Initialize the detector parameters using default values
    cv::Ptr<cv::aruco::DetectorParameters> parameters = cv::aruco::DetectorParameters::create();

    // Declare the vectors that would contain the detected marker corners and the rejected marker candidates
    std::vector<std::vector<cv::Point2f>> markerCorners, rejectedCandidates;

    // The ids of the detected markers are stored in a vector
    std::vector<int> markerIds;           

    std::string imageName("/home/mtrn4230/lab_demo_repos/lab07_demo/aruco_detection/src/aruco1.jpg");
    cv::Mat src = cv::imread(imageName, cv::IMREAD_COLOR ); // Load an image

    // Detect the markers in the image
    cv::aruco::detectMarkers(src, dictionary, markerCorners, markerIds, parameters, rejectedCandidates);

    cv::Mat outputImage = src.clone();
    cv::aruco::drawDetectedMarkers(outputImage, markerCorners, markerIds);

    cv::imshow("detection result", outputImage);
    cv::waitKey();
}