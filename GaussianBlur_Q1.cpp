#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat imagem_borrada;
int slider = 0;
int kernel_size = 3;
float sigma = 0.3 *((kernel_size - 1)*0.5 - 1) + 0.8;

void on_Trackbar(int, void *)
{
	kernel_size = 2 * slider + 1;
	sigma = 0.3 *((kernel_size - 1)*0.5 - 1) + 0.8;
}
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
	namedWindow("Imagem Borrada", CV_WINDOW_AUTOSIZE);
	createTrackbar("kernel", "Imagem Borrada", &slider, 21, on_Trackbar);

	while (!char(waitKey(30) == 'q') && cap.isOpened())
	{
		cap >> img;
		GaussianBlur(img, imagem_borrada, Size(kernel_size, kernel_size), sigma);
		imshow("Imagem Borrada", imagem_borrada);
		imshow("Imagem Original", img);
	}

	destroyAllWindows();
	return 0;
}
 
 
