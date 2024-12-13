#pragma once
#ifndef 图片压缩_H
#define 图片压缩_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

#include  <E:\lib\图片识别.h>

////using namespace wode;
class 图片压缩{
public:
	cmd cmd1;
	图片识别 TuPmUiBx;
	直线方程 ViXmFhIg;

public:
	/**/ //>记录
	/**///定量ζξ
	COORD 图片尺寸ζ输入; COORD 图片尺寸ζ输出; COORD 检测的范围 = { 0,0 }; COORD v的尺寸;
	/**///变量
	/*v2i图片`的坐标*/COORD 输出图片的坐标;
	int r, g, b;
	float f记录;
	新v3i v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20;
	新v3i v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r20g20b20;
	/**///设置
	int 大于是浅色 = 180, 小于是深色 = 76/*那中间是正常颜色*/;
public:
	图片压缩(){}/*()*/
	~图片压缩(){}/*~()*/
	/**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		/*单通道<uchar>*/
	auto 图片缩小_cv8uc1TOcv8uc1_uchar(Mat& m, 新M& m2, int y下个点加几个像素, int x下个点加几个像素){/*CV_8UC4到CV_8UC1*/
		图片尺寸ζ输入.Y = m.rows; 图片尺寸ζ输入.X = m.cols;
		m2=Mat(图片尺寸ζ输入.Y/y下个点加几个像素,图片尺寸ζ输入.X/x下个点加几个像素,CV_8UC1);
		图片尺寸ζ输出.Y = m2.rows; 图片尺寸ζ输出.X = m2.cols;
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<图片尺寸ζ输入.Y,y序号ζ输出<图片尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素,y序号ζ输出 +=1){/*行*/
		for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<图片尺寸ζ输入.X,x序号ζ输出<图片尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素,x序号ζ输出 +=1){/*列*/
				m2.at<uchar>(Point(x序号ζ输出, y序号ζ输出)) = m.at<uchar>(Point(x序号ζ输入, y序号ζ输入));
			}/*for*/
		}/*for*/
	}/*auto*/
	 /*多通道<vec4b>*/
	auto 图片缩小_cv8uc4TOcv8uc4_Vec4b(Mat& m, 新M& m2, int y下个点加几个像素, int x下个点加几个像素){/*CV_8UC4到CV_8UC1*/
		图片尺寸ζ输入.Y = m.rows; 图片尺寸ζ输入.X = m.cols;
		m2=Mat(图片尺寸ζ输入.Y/y下个点加几个像素,图片尺寸ζ输入.X/x下个点加几个像素,CV_8UC4);
		图片尺寸ζ输出.Y = m2.rows; 图片尺寸ζ输出.X = m2.cols;
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<图片尺寸ζ输入.Y,y序号ζ输出<图片尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素,y序号ζ输出 +=1){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<图片尺寸ζ输入.X,x序号ζ输出<图片尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素,x序号ζ输出 +=1){/*列*/
				m2.at<Vec4b>(Point(x序号ζ输出, y序号ζ输出))[0] = m.at<Vec4b>(Point(x序号ζ输入, y序号ζ输入))[0];
				m2.at<Vec4b>(Point(x序号ζ输出, y序号ζ输出))[1] = m.at<Vec4b>(Point(x序号ζ输入, y序号ζ输入))[1];
				m2.at<Vec4b>(Point(x序号ζ输出, y序号ζ输出))[2] = m.at<Vec4b>(Point(x序号ζ输入, y序号ζ输入))[2];
			}/*for*/
		}/*for*/
	}/*auto*/
};
#endif