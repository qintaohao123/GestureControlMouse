// GestureToMoveDocument.cpp : 定义控制台应用程序的入口点。
//
#pragma once
#include "stdafx.h"
#include "ImageCapture.h"
#include "CaptureByCam.h"
#include <cv.h>
using  namespace cv;
int _tmain(int argc, _TCHAR* argv[])
{
	
	ImageCapture* capture = new CaptureByCam;
	int sign = capture->Init();
	Mat img;
	for (int i=0; i<1000; i++)
	{
		img = capture->CaptureImg();
		cv::imshow("image",img);
		cv::waitKey(1);
	}

	return 0;

}

