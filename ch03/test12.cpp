#include "opencv2/opencv.hpp"
#include <iostream>

using namespace cv;
using namespace std;

Mat img, roi;
// 마우스로 지정한 사각형의 좌표
int mx1, my1, mx2, my2;
// 사각형 선택 중임을 나타내는 플래그 변수
bool cropping = false;

// 마우스 이벤트가 발생하면 호출되는 콜백 함수이다. 
void onMouse(int event, int x, int y, int flags, void* param)
{
	// 마우스의 왼쪽 버튼을 누르면
	if (event == EVENT_LBUTTONDOWN)
	{
		// 사각형의 좌측 상단 좌표 저장
		mx1 = x;
		my1 = y;
		cropping = true;
	}
	// 마우스의 왼쪽 버튼에서 손을 떼면
	else if (event == EVENT_LBUTTONUP)
	{
		// 사각형의 우측 하단 좌표 저장
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
	// 복사본을 만들어둔다.
	Mat clone = img.clone();

	setMouseCallback("image", onMouse);

	while (1)
	{
		int key = waitKey(100);
		// 사용자가 ‘q’를 누르면 종료
		if (key == 'q')
			break;
		// 사용자가 ‘c’를 누르면 관심영역을 파일로 저장
		else if (key == 'c')
		{
			roi = clone(Rect(mx1, my1, mx2 - mx1, my2 - my1));
			imwrite("../resources/out-image/result.jpg", roi);
		}
	}
	return 0;
}