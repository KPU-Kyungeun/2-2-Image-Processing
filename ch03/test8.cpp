#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

void sub(Mat img)
{
	// ������ ��� ȭ�Ҹ� 0���� �����.
	img = Scalar(0, 0, 0);
}

int main()
{
	Mat A;
	A = imread("../resources/ch03/image1.jpg", IMREAD_COLOR);

	// �Լ� ȣ�� ���� ������ ǥ���Ѵ�. 
	imshow("before", A);
	// �Լ��� ������ �����Ѵ�. 
	sub(A);
	// �Լ� ȣ�� �Ŀ� ������ ǥ���Ѵ�. 
	imshow("after", A);

	waitKey();
	return 0;
}
