#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	// 웹캠인 경우
	// VideoCapture cap(0);
	// 동영상 파일인 경우
	VideoCapture cap("../resources/ch01/trailer.mp4");

	if (!cap.isOpened())
	{
		cout << "동영상을 읽을 수 없음" << endl;
	}

	// 윈도우 생성
	namedWindow("frame", 1);
	for (;;)
	{
		Mat frame;
		try
		{
			cap >> frame; // 동영상에서 하나의 프레임을 추출한다.
			imshow("frame", frame);
		}
		catch (exception ex)
		{

		}
		if (waitKey(30) >= 0)
			break;
	}
	return 0;
}