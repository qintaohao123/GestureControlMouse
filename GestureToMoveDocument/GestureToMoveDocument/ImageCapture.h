#pragma once
#include<highgui.h>
#include <cv.h>
 class  ImageCapture
{
public:
     ImageCapture(void);
	~ImageCapture(void);
	 virtual cv::Mat CaptureImg();
	 virtual int Init();

};

