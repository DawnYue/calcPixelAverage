#include <iostream>
#include <opencv2/opencv.hpp>  
#include"CclassDemo.h"

using namespace cv;
using namespace std;

int main()
{
	CclassDemo enDemo;
//	int res = enDemo.maxVal(100, 99);
	cv::Mat srcMat = imread("E:\\2.png",0);

	imshow("src", srcMat);
	//等待用户按键
	waitKey(0);
	return 0;
}
