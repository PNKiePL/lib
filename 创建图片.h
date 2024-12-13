#pragma once
#ifndef 创建图片_H
#define 创建图片_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>
#include  <E:\lib\define.h>

class 创建图片 {
public:
public:
	COORD 图片大小;

public:
	创建图片() {
	}
	~创建图片() {
	}
	int cout没什么用(Mat& m) { //https://blog.csdn.net/qq_44785013/article/details/119146270
		if (m.empty()) {
			cout << "读取错误" << endl;
			return -1;
		}
		imshow("m", m);  //显示图像；
		cout << "图像的行数为： " << m.rows << endl;  //获取图像的高度，行数；
		cout << "图像的列数为： " << m.cols << endl;  //获取图像的宽度，列数；
		cout << "图像的通道数为： " << m.channels() << endl;  //获取图像的通道数，彩色图=3，灰度图=1；
		cout << "图像的尺寸为： " << m.size << endl;  //获取图像的尺寸，行*列；
		waitKey(0);  //暂停，保持图像显示，等待按键结束
		return 0;
	}
	int cout通道数(Mat& m) {
		cout << "图像的行数为： " << m.rows << endl;  //获取图像的高度，行数；
		cout << "图像的列数为： " << m.cols << endl;  //获取图像的宽度，列数；
		cout << "图像的通道数为： " << m.channels() << endl;  //获取图像的通道数，彩色图=3，灰度图=1；
		cout << "图像的尺寸为： " << m.size << endl;  //获取图像的尺寸，行*列；
		waitKey(0);  //暂停，保持图像显示，等待按键结束
		return 0;
	}
	/**///新建Mat
	void 新建Mat(Mat& m, int 图片y, int 图片x, int 数据类型) {
		m.create(图片x, 图片y, 数据类型);
		//m.resize(m,m,Size(100, 70),100, 100, INTER_AREA);
	}
	Mat ret新建Mat(int 图片y, int 图片x, int 数据类型) {
		Mat m(图片x, 图片y, 数据类型);
		retu m;
	}
	Mat ret新建Mat(int 图片y, int 图片x, int 数据类型, int 初始值) {
		Mat m(图片x, 图片y, 数据类型, 初始值);
		retu m;
	}
	Mat ret新建Mat(int 图片y, int 图片x, int 数据类型, int r, int g, int b) {
		Mat m(图片x, 图片y, 数据类型, Scalar(b, g, r));
		retu m;
	}





private:

};

#endif
