#pragma once
#ifndef 图片属性_CPP 
#define 图片属性_CPP

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>
#include  <E:\lib\前置变量.h>

class 图片属性 {
public:
public:
public:
	图片属性() = default;
	//中间的坐标

	//>用Mat&转换Mat* 不转换 
	auto 用Mat指针retB值(Mat &图, int y,int x) //param= 图片名 Mat名 //void* param
	{
		Mat* 图_p =&图; //转换 https://zhuanlan.zhihu.com/p/33040213
		return 图_p->at<Vec3b>(Point(x, y))[0];
	}
	auto 用Mat指针retG值(Mat &图, int y,int x)
	{
		Mat* 图_p =&图; //图_p= 之前的图片
		return 图_p->at<Vec3b>(Point(x, y))[1];
	}
	auto 用Mat指针retR值(Mat &图, int y,int x)	{
		Mat* 图_p =&图; //图_p= 之前的图片
		return 图_p->at<Vec3b>(Point(x, y))[2];
	}
	auto 用Mat指针retRGB值(Mat &图, int y,int x)
	{
		Mat* 图_p =&图; //图_p= 之前的图片
		return (图_p->at<Vec3b>(Point(x, y))[2],
			图_p->at<Vec3b>(Point(x, y))[1],
			图_p->at<Vec3b>(Point(x, y))[0]);
	}
	auto 用Mat指针retBGR值(Mat &图, int y,int x)
	{
		Mat* 图_p =&图; //图_p= 之前的图片
		return (图_p->at<Vec3b>(Point(x, y))[0],
			图_p->at<Vec3b>(Point(x, y))[1],
			图_p->at<Vec3b>(Point(x, y))[2]);
	}

	//>用Mat& 不转换 \ 耗时都差不多
	auto retB值(Mat &图, int y,int x) {
		return 图.at<Vec3b>(Point(x, y))[0];
	}
	auto retG值(Mat &图, int y,int x) {
		return 图.at<Vec3b>(Point(x, y))[1];
	}
	int retR值(Mat &图, int y,int x) {
		return 图.at<Vec3b>(Point(x, y))[2];
	}
	auto retRGB值(Mat &图, int y,int x) {
		return (图.at<Vec3b>(Point(x, y))[2],
			图.at<Vec3b>(Point(x, y))[1],
			图.at<Vec3b>(Point(x, y))[0]);
	}
	auto retBGR值(Mat &图, int y,int x) {
		return (图.at<Vec3b>(Point(x, y))[0],
			图.at<Vec3b>(Point(x, y))[1],
			图.at<Vec3b>(Point(x, y))[2]);
	}

	//>用mat& 不转换
	auto retB值(Mat& 图, 一点颜色 点) {
		return 图.at<Vec3b>(Point(点.x, 点.y))[0];
	}
	auto retG值(Mat& 图, 一点颜色 点) {
		return 图.at<Vec3b>(Point(点.x, 点.y))[1];
	}
	int retR值(Mat& 图, 一点颜色 点) {
		return 图.at<Vec3b>(Point(点.x, 点.y))[2];
	}
	auto retRGB值(Mat& 图, 一点颜色 点) {
		return (图.at<Vec3b>(Point(点.x, 点.y))[2],
			图.at<Vec3b>(Point(点.x, 点.y))[1],
			图.at<Vec3b>(Point(点.x, 点.y))[0]);
	}
	auto retBGR值(Mat& 图, 一点颜色 点) {
		return (图.at<Vec3b>(Point(点.x, 点.y))[0],
			图.at<Vec3b>(Point(点.x, 点.y))[1],
			图.at<Vec3b>(Point(点.x, 点.y))[2]);
	}

};





/*
	//显示图像像素值

	if (static_cast<int>(图_p->channels()) == 1) //灰度图像
	{
		//若图像为灰度图像，则显示鼠标点击的坐标以及灰度值
		cout << "at (" << x << ", " << y << " ) value is: " << static_cast<int>(图_p->at<uchar>(Point(x, y))) << endl;
	}
	*/


#endif
