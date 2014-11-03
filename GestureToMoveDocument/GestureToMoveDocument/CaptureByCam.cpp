#include "CaptureByCam.h"


CaptureByCam::CaptureByCam(void)
{
	VideoCapture cap(0);
	this->cap = cap;
}


CaptureByCam::~CaptureByCam(void)
{
}



