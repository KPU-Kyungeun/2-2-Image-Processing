#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	Mat A;
	A = imread("../resources/ch03/lenna.jpg", IMREAD_COLOR);

	Rect r(10, 10, 100, 100);
	// �簢���� ����Ͽ� ���� ������ �����Ѵ�. 
	Mat D = A(r);
	// ���� ������ ��� ȭ�Ұ� (0, 0, 0)�� �ȴ�. 
	D = Scalar(0, 0, 0);
	imshow("src", A);
	waitKey();
	return 0;
}