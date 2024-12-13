#pragma once
#ifndef OPENCV_CPP 
#define OPENCV_CPP

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

//头文件1
#include  <E:\lib\define.h>
#include  <E:\lib\全局量.h>
#include  <E:\lib\中文关键词.h>

using namespace cv;
using namespace std;

class opencv_2022930{
public:
	// void op打开图片(string 路径)
	// {
	//         Mat image;      //创建一个空图像image
	//         image = imread(路径);

	//         namedWindow("IMAGE", WINDOW_NORMAL);
	//         imshow("IMAGE", image);  //在窗口显示图像
	// }

	// void op_qt打开图片(string 路径)
	// {

	// }

	uint8_t* Mat_to_array(const cv::Mat input){
		int height = input.rows;
		int width = input.cols;
		uint8_t* pRgb = new uint8_t[height * width * 3];
		for (int i = 0; i < height; i++)		{
			for (int j = 0; j < width; j++)   			{
				for (int k = 0; k < 3; k++)				{ 
					pRgb[i * width * 3 + j * 3 + k] = input.at<cv::Vec3b>(i, j)[k];
				}
			}
		}
		return pRgb;
	}

	/*
	Array -> Mat
	输入：
	uint8_t pRgb[]，Rgb图片数据
	uint32_t width，表示Rgb图片对应宽度
	uint32_t height，表示Rgb图片对应高度
	uint32_t sizeYuv，表示pRgb数组大小
	*/
	Mat array_to_Mat(uint8_t* pRgb, uint32_t width, uint32_t height, uint32_t sizeRgb)	{
		Mat rgbImg;
		rgbImg.create(height, width, CV_8UC3);
		memcpy(rgbImg.data, pRgb, sizeRgb);
		return rgbImg;
	}

	/*
	这里sizeRgb = width * height * 3, 还有CV_8UC3这个参数要注意，是三通道。
	如果是yuv数据的话就是CV_8UC1.而且height 要乘上3/2.
	cv::Mat yuvImg;
	yuvImg.create(height * 3 / 2, width, CV_8UC1);
	memcpy(yuvImg.data, pYuv, sizeYuv);
	//sizeYuv = yuvWidth * yuvHeight = rgbWidth * rgbHeight * 3/2(Yuv是单通道）。
	*/

	//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 检测 形状 图案
	//检测圆形
	vector<Vec3f> circles;
	double dp = 2; //
	double minDist = 10;  //两个圆心之间的最小距离
	double  param1 = 100;  //Canny边缘检测的较大阈值
	double  param2 = 100;  //累加器阈值
	int min_radius = 20;  //圆形半径的最小值
	int max_radius = 100;  //圆形半径的最大值
	//HoughCircles(gray, circles, HOUGH_GRADIENT, dp, minDist, param1, param2,
	//        min_radius, max_radius);

	//=========================================================================================
















};

#endif