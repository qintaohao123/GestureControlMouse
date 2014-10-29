#include "ImageCapture.h"

ImageCapture::ImageCapture(void)
{

}


ImageCapture::~ImageCapture(void)
{
}


cv::Mat ImageCapture::CaptureImg()
{
	cv::Mat img(100,100,CV_8UC1);
	return img;
}	
int ImageCapture::Init()
{
	return 1;
}


