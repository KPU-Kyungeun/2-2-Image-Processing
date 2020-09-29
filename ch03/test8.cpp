#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void sub(Mat img)
{
	// 영상의 모든 화소를 0으로 만든다.
	img = Scalar(0, 0, 0);
}

int main()
{
	Mat A;
	A = imread("../resources/ch03/image1.jpg", IMREAD_COLOR);

	// 함수 호출 전에 영상을 표시한다. 
	imshow("before", A);
	// 함수에 영상을 전달한다. 
	sub(A);
	// 함수 호출 후에 영상을 표시한다. 
	imshow("after", A);

	waitKey();
	return 0;
}
