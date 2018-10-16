/*#include <opencv2/opencv.hpp>
#include <iostream>
//#include <highgui.h>

using namespace cv;

/// Global Variables
const int max_filter = 100;
int gaussian_filter;
double alpha;
double beta;

/// Matrices to store images
Mat src1;
Mat src2;
Mat dst;

/**
 * @function on_trackbar
 * @brief Callback for trackbar
 *
void on_trackbar(int, void*)
{
	/*alpha = (double)gaussian_filter / max_filter;
	beta = (1.0 - alpha);

	addWeighted(src1, alpha, src2, beta, 0.0, dst);*/
	//blur(src1, src2, Size(2, 2));

	// Gaussian smoothing
	//GaussianBlur(src1, src2, Size(4, 4), 0, 0);

	/*imshow("Gaussian Filter", src2);
}

int main(int argc, char** argv)
{
	/// Read image ( same size, same type )
	src1 = imread("zebra.jpg");
	src2 = imread("zebra.jpg");

	if (!src1.data) { printf("Error loading src1 \n"); return -1; }
	if (!src2.data) { printf("Error loading src2 \n"); return -1; }
	imshow("Antes", src1);

	/// Initialize values
	gaussian_filter = 0;

	/// Create Windows
	namedWindow("Gaussian Filter", 1);

	/// Create Trackbars
	char TrackbarName[50];
	sprintf_s(TrackbarName, "gaussian x %d", max_filter);

	createTrackbar(TrackbarName, "Gaussian Filter", &gaussian_filter, max_filter, on_trackbar);

	/// Show some stuff
	
	GaussianBlur(src1, src2, Size(4, 4), 0, 0);
	//on_trackbar(gaussian_filter, 0);

	/// Wait until user press some key
	waitKey(0);
	return 0;
}*/