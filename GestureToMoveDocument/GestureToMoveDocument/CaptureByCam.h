#pragma once
#include "..\ImageCapture.h"
#include <cv.h>
#include <highgui.hpp>
using namespace cv;
class CaptureByCam:public ImageCapture
{
public:
	CaptureByCam(void);
	~CaptureByCam(void);

     VideoCapture cap;

	 cv::Mat CaptureImg()
	 {
		 Mat frame;
		 cap>>frame;
		 return frame;

	 }

	 int Init()
	 {
		 if (!cap.isOpened())
		 {
			 return -1;	
		 }

		 return 1;
	 }
};


