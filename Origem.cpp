/*#include <opencv2/opencv.hpp>
#include <iostream>
//#include <highgui.h>

using namespace cv;

/// Global Variables
const int alpha_slider_max = 100;
int alpha_slider;
double alpha;
double beta;

/// Matrices to store images
Mat src1;
Mat src2;
Mat dst;

/**
 * @function on_trackbar
 * @brief Callback for trackbar
 
void on_trackbar(int, void*)
{
	alpha = (double)gaussian_filter / alpha_slider_max;
	beta = (1.0 - alpha);

	addWeighted(src1, alpha, src2, beta, 0.0, dst);

	imshow("Gaussian Filter", dst);
}

int main(int argc, char** argv)
{
	/// Read image ( same size, same type )
	src1 = imread("zebra.jpg");
	src2 = imread("zebra.jpg");

	if (!src1.data) { printf("Error loading src1 \n"); return -1; }
	if (!src2.data) { printf("Error loading src2 \n"); return -1; }

	/// Initialize values
	gaussian_filter = 0;

	/// Create Windows
	namedWindow("Gaussian Filter", 1);

	/// Create Trackbars
	char TrackbarName[50];
	sprintf_s(TrackbarName, "gaussian x %d", alpha_slider_max);

	createTrackbar(TrackbarName, "Gaussian Filter", &alpha_slider, alpha_slider_max, on_trackbar);

	/// Show some stuff
	on_trackbar(alpha_slider, 0);

	/// Wait until user press some key
	waitKey(0);
	return 0;
}*/