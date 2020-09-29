#include "opencv2/opencv.hpp"
#include <iostream>

using namespace std;
using namespace cv;

int main()
{
	// ��ķ�� ���
	// VideoCapture cap(0);
	// ������ ������ ���
	VideoCapture cap("../resources/ch01/trailer.mp4");

	if (!cap.isOpened())
	{
		cout << "�������� ���� �� ����" << endl;
	}

	// ������ ����
	namedWindow("frame", 1);
	for (;;)
	{
		Mat frame;
		try
		{
			cap >> frame; // �����󿡼� �ϳ��� �������� �����Ѵ�.
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