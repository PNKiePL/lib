#pragma once
#ifndef 直线方程_H
#define 直线方程_H

class 直线方程 {
public:
	时间 UiJm;
	cmd cmd1;
	窗口 idkb;
	检测按键是否按下 jmceanjm;
	鼠标 UuBc;
	用地址计算 地址算;
	数N分<int, 4> 数4分i;
public:
	/**/ //记录`窗口信息
	HWND 窗口hwnd;
	HDC 窗口hdc;
	HDC create窗口hdc;
	HBITMAP create窗口map;
	BITMAPINFO bitmap信息;
	COORD 鼠标坐标;

	/**/ //记录
	int i;
	新v2i v2i;
	//cout(v2i[行][列],"\n");
public:
	/**/ //用法:
	/*循环一遍,看看y的结果*/
	int ret直线方程y是否大于x(/*输入*/ float y, float x, float 最大x, float 因数, float 加数) {
		for (x; x < 最大x; x++) {
			if (y > 因数 * x + 加数) {
			} else {/*小鱼或等于*/
				retu 0;
			}/*else*/
		}/*for*/
		retu 1;
	}
	/*循环一遍,看看y的结果*/
	int ret直线方程y是否小于x(/*输入*/ float y, float x, float 最大x, float 因数, float 加数) {
		for (x; x < 最大x; x++) {
			if (y < 因数 * x + 加数) {/*小猿*/
			} else {/*>=*/
				retu 0;
			}/*else*/
		}/*for*/
		retu 1;
	}
	/*循环一遍,看看y的结果*/
	int ret直线方程y是否大等于x(/*输入*/ float y, float x, float 最大x, float 因数, float 加数) {
		for (x; x < 最大x; x++) {
			if (y >= 因数 * x + 加数) {
			} else {/*小鱼或等于*/
				retu 0;
			}/*else*/
		}/*for*/
		retu 1;
	}
	/*循环一遍,看看y的结果*/
	int ret直线方程y是否小等于x(/*输入*/ float y, float x, float 最大x, float 因数, float 加数) {
		for (x; x < 最大x; x++) {
			if (y <= 因数 * x + 加数) {/*小猿*/
			} else {/*>=*/
				retu 0;
			}/*else*/
		}/*for*/
		retu 1;
	}
	/*y是否>算出来的值*/
	int ret直线方程y是否大于x(/*输入*/ float y, float x, float 因数, float 加数) {
		if (y > 因数 * x + 加数) {
		} else {/*小鱼或等于*/
			retu 0;
		}/*else*/
		retu 1;
	}
	/*y是否<算出来的值*/
	int ret直线方程y是否小于x(/*输入*/ float y, float x, float 因数, float 加数) {
		if (y < 因数 * x + 加数) {/*小猿*/
		} else {/*>=*/
			retu 0;
		}/*else*/
		retu 1;
	}
	/*看一个点的情况*/
	int ret直线方程y是否大等于x(/*输入*/ float y, float x, float 因数, float 加数) {
		if (y >= 因数 * x + 加数) {
		} else {/*小鱼或等于*/
			retu 0;
		}/*else*/
		retu 1;
	}
	/*看一个点的情况*/
	int ret直线方程y是否小等于x(/*输入*/ float y, float x, float 因数, float 加数) {
		if (y <= 因数 * x + 加数) {/*小猿*/
		} else {/*>=*/
			retu 0;
		}/*else*/
		retu 1;
	}
	/**/ //▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
};

#endif