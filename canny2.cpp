/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat imagem_modificada;
Mat contours;


int main() {

	Mat img;

	VideoCapture cap(0);
	if (!cap.isOpened())
	{
		cout << "Camera is not successfully opened" << endl;
		return -1;
	}
	namedWindow("Imagem Original", CV_WINDOW_AUTOSIZE);
	namedWindow("Imagem Modificada - CANNY", CV_WINDOW_AUTOSIZE);
	//createTrackbar("kernel", "Imagem Borrada", &slider, 21, on_Trackbar);
	


	while (!char(waitKey(30) == 'q') && cap.isOpened())
	{
		cap >> img;
		std::vector<cv::Mat> channels;
		Mat hsv;
		cvtColor(img, hsv, CV_RGB2HSV);
		split(hsv, channels);
		Canny(img, contours, 10, 350);

		namedWindow("Image");
		imshow("Image", img);
		namedWindow("Canny");
		imshow("Canny", contours);
		//imshow("Imagem modificada", imagem_modificada);
		//imshow("Imagem Original", img);
	}

	destroyAllWindows();
	return 0;



	//namedWindow("Gray");
	//imshow("Gray", gray_image);

	waitKey(0);
}*/