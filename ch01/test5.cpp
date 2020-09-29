#include <opencv2/opencv.hpp>
#include <iostream> 

using namespace cv;
using namespace std;

int main()
{
	Mat src = imread("../resources/dog.jpg", IMREAD_COLOR);
	if (src.empty()) 
	{ 
		cout << "������ ���� �� ����" << endl; 
	}
	imshow("src", src);

	while (1) 
	{
		// ����ڷκ��� Ű�� ��ٸ���.
		int key = waitKeyEx();
		cout << key << " ";
		// ����ڰ� ��q'�� ������ �����Ѵ�.
		if (key == 'q') break;
		else if (key == 2424832) 
		{
			// ������ ��ο�����.
			src -= 50;
		}
		else if (key == 2555904) 
		{
			// ������ �������.
			src += 50;
		}
		// ������ ����Ǿ����Ƿ� �ٽ� ǥ���Ѵ�.
		imshow("src", src);
	}
	return 0;
}