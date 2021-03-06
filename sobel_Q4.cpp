#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	Mat img;
	VideoCapture cap(0);
	if (!cap.isOpened())
	{
		cout << "Camera is not successfully opened" << endl;
		return -1;
	}
	namedWindow("Imagem Original", CV_WINDOW_AUTOSIZE);
	namedWindow("Imagem Modificada", CV_WINDOW_AUTOSIZE);

	while (!char(waitKey(30) == 'q') && cap.isOpened())
	{
		cap >> img;
		Mat new_image = Mat::zeros(img.size(), img.type());
		Sobel(img, new_image, -1, 1, 1); // https://www.tutorialspoint.com/opencv/opencv_sobel_operator.htm
		imshow("Imagem Modificada", new_image);
		imshow("Imagem Original", img);
	}

	destroyAllWindows();
	return 0;
}
