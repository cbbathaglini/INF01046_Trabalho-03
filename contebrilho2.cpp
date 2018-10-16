/*#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

Mat imagem_borrada;
int slider1 = 0.1,slider2 =0;
double alpha; //< Simple contrast control 
int beta;  // Simple brightness control 

void on_TrackbarContrast(int, void *)
{
	alpha = slider1+0.05;
}
void on_TrackbarBrightness(int, void *)
{
	beta = slider2;
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
	namedWindow("Imagem Modificada", CV_WINDOW_AUTOSIZE);
	createTrackbar("brilho", "Imagem Modificada", &slider2, 100, on_TrackbarBrightness);
	createTrackbar("contraste", "Imagem Modificada", &slider1, 10, on_TrackbarContrast);

	while (!char(waitKey(30) == 'q') && cap.isOpened())
	{
		cap >> img;
		Mat new_image = Mat::zeros(img.size(), img.type());
		img.convertTo(new_image, -1, alpha, beta);
		imshow("Imagem Modificada", new_image);
		imshow("Imagem Original", img);
	}

	destroyAllWindows();
	return 0;
}

*/

