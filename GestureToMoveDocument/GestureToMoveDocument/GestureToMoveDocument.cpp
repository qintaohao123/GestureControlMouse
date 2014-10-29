// GestureToMoveDocument.cpp : 定义控制台应用程序的入口点。
//
#pragma once
#include "stdafx.h"
#include "ImageCapture.h"
#include "CaptureByCam.h"

int _tmain(int argc, _TCHAR* argv[])
{
	
	ImageCapture* capture = new CaptureByCam;
	int sign = capture->Init();
	
	return 0;
}

