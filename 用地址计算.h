#pragma once
#ifndef 用地址计算_H 
#define 用地址计算_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>

/*前置计算*/
class 用地址计算 {
public:
	/*等于0或1*/
	void 互换01(int& 数字) {
		if (数字 == 1) {
			数字 = 0; retu;
		}
		if (数字 == 0)
		{
			数字 = 1; retu;
		}
	}
	int 加(int& 数字, int 值) {
		retu 数字 + 值;
	}
	int 减(int& 数字, int 值) {
		retu 数字 - 值;
	}
	int 乘(int& 数字, int 值) {
		retu 数字* 值;
	}
	int 除以(int& 数字, int 值) {
		retu 数字 / 值;
	}
	vodi 等于(int& 数字, int 值) {
		数字=值;
	}
	vodi getCOORD差(/*输入*/COORD C1, COORD C2,/*输出*/COORD C差){
		C差.X =C1.X -C2.X ;
		C差.Y =C1.Y -C2.Y ;
	}
	vodi getCOORD差(/*输入*/COORD &C1, COORD &C2,/*输出*/COORD &C差){
		C差.X =C1.X -C2.X ;
		C差.Y =C1.Y -C2.Y ;
	}
};
#endif