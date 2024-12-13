#pragma once
#ifndef _2通道图片_H
#define _2通道图片_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

#include  <E:\lib\图片识别.h>

////using namespace wode;
class 图片识别_2通道 /*识别函数*/ {
public:
	cmd cmd1;
	图片识别 TuPmUiBx;
	直线方程 ViXmFhIg;

public:
	/**///定量
	COORD 图片尺寸; COORD 检测的范围 = { 0,0 }; COORD v的尺寸;
	/**///记录
	/*v2i图片`的坐标*/COORD 输出图片的坐标;
	/*记录*/
	int r, g, b;
	新v3i v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20;
	新v3i v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r20g20b20;
	/**///设置
	int 大于是浅色 = 180, 小于是深色 = 76/*那中间是正常颜色*/;
public:
	图片识别_2通道() {
	}
	/**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*坐标边界检测 {x两种情况,y一种情况}*/
	int v2坐标边界检测(/*输入*/int& y, int& x) {
		if (x < (v的尺寸.X - 1)) {/*x在范围内*/
			retu 1;
		} else {/*x>=范围*/
			if (y < v的尺寸.Y - 1) {/*y没有到底*/
				retu 2;
			} else {
				/*坐标完了*/
				retu 0;/*没有改*/
			}
		}/*else*/
	}/*int*/
	int get下一个点(/*输入*/int& y, int& x) {
		if (x < v的尺寸.X - 1) {/*x在范围内*/
		} else {/*x>=范围*/
			if (y < v的尺寸.Y - 1) {/*y没有到底*/
				y++; x = 0;
				retu 1;/*改了*/
			} else {
				/*坐标完了*/
				retu 0;/*没有改*/
			}
		}/*else*/
	}/*int*/
};
#endif
