#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat img, roi;
// ���콺�� ������ �簢���� ��ǥ
int mx1, my1, mx2, my2;
// �簢�� ���� ������ ��Ÿ���� �÷��� ����
bool cropping = false;

// ���콺 �̺�Ʈ�� �߻��ϸ� ȣ��Ǵ� �ݹ� �Լ��̴�. 
void onMouse(int event, int x, int y, int flags, void* param)
{
	// ���콺�� ���� ��ư�� ������
	if (event == EVENT_LBUTTONDOWN)
	{
		// �簢���� ���� ��� ��ǥ ����
		mx1 = x;
		my1 = y;
		cropping = true;
	}
	// ���콺�� ���� ��ư���� ���� ����
	else if (event == EVENT_LBUTTONUP)
	{
		// �簢���� ���� �ϴ� ��ǥ ����
		mx2 = x;
		my2 = y;
		cropping = false;
		rectangle(img, Rect(mx1, my1, mx2 - mx1, my2 - my1), Scalar(0, 255, 0), 2);
		imshow("image", img);
	}
}

int main()
{
	img = imread("../resources/ch03/lenna.jpg");
	imshow("image", img);
	// ���纻�� �����д�.
	Mat clone = img.clone();

	setMouseCallback("image", onMouse);

	while (1)
	{
		int key = waitKey(100);
		// ����ڰ� ��q���� ������ ����
		if (key == 'q')
			break;
		// ����ڰ� ��c���� ������ ���ɿ����� ���Ϸ� ����
		else if (key == 'c')
		{
			roi = clone(Rect(mx1, my1, mx2 - mx1, my2 - my1));
			imwrite("../resources/out-image/result.jpg", roi);
		}
	}
	return 0;
}