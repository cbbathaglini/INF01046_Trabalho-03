/*
#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {

	Mat image = imread("zebra.jpg");
	Mat contours;
	Mat gray_image;

	std::vector<cv::Mat> channels;
	Mat hsv;
	cvtColor(image, hsv, CV_RGB2HSV);
	split(hsv, channels);
	gray_image = channels[0];

	Canny(image, contours, 10, 350);

	namedWindow("Image");
	imshow("Image", image);

	namedWindow("Gray");
	imshow("Gray", gray_image);

	namedWindow("Canny");
	imshow("Canny", contours);
	waitKey(0);
} 
*/