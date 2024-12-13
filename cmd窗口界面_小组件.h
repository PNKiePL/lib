﻿#pragma once
#ifndef CMD窗口界面_小组件H 
#define CMD窗口界面_小组件H 

#include  <E:\lib\define.h>
////#include<E:\lib\namespace\简写.h>
#include  <E:\lib\cmd.h>
#include<E:\lib\头文件 c++.h>
//#include  <E:\lib\按键检测.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>
//#include  <E:\lib\键盘.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\鼠标.h>
#include  <E:\lib\用地址计算.h>

using namespace std;
class cmd窗口界面_小组件{
public:
	cmd cmd1;
	窗口 idkb;
	检测按键是否按下 jmceanjm;
	鼠标 UuBc;
	用地址计算 地址算;
public:
	/**///记录`窗口信息
	HWND 窗口hwnd;
	HDC 窗口hdc;
	HDC create窗口hdc;
	HBITMAP create窗口map;
	BITMAPINFO bitmap信息;
	COORD 鼠标坐标;
	COORD 刚才的鼠标坐标;
	/*鼠标相对于窗口*/int 左边的距离 = 0, 上边的距离 = 0;
	int 点的是不是这个窗口 = 0;
	int 鼠标是否按住 = 0;
	/*struct*/ tagRECT 窗口Rect{ //用 *=& 引用 \ 0, 0, 0, 0
	}; ////tagRECT.LPRECT;
public:
	cmd窗口界面_小组件(){
		jmceanjm.多个之前和现在归零(1400);/*初始=0, 检测是否=1*/
	}/*()*/
	/**///▬鼠标交互▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*不修改`窗口大小; 不计算输出;*/
	/*像素,鼠标坐标-窗口Rect*/
	/*输入:{ cmd窗口info.可操作范围.f上_百分比 f下_百分比 f左_百分比 f右_百分比 }*/
	/*输出的初始值=初始的`c的字数*/
	/*不包含`if按下等于1*/
	int getc能拖的进度条_显示两次(/*输入*/cmd窗口info& 窗口信息1, float 上限,float 下限 ,float retu时的系数, /*输出*/float& 输出){
		/*c符号, 最大字数=每行的长度or尺寸x*/
		/*!(float& 输出) 影响c的字数, 要c了再改*/
		/*c的字数=2*比值还原*/
		auto lamc内容 = [&]()->void{
			/*c*/
			idkb.c窗口Rect(窗口Rect);
			couta3("窗口信息1.窗口大小_像素y=", 窗口信息1.窗口大小_像素y, endl);
			couta3("窗口信息1.窗口大小_像素x=", 窗口信息1.窗口大小_像素x, endl);
			couta3("上_像素=", 窗口信息1.可操作范围.上_像素, endl);
			couta3("下_像素=", 窗口信息1.可操作范围.下_像素, endl);
			couta3("左_像素=", 窗口信息1.可操作范围.左_像素, endl);
			couta3("右_像素=", 窗口信息1.可操作范围.右_像素, endl);
			couta3("可操作范围.y=", 窗口信息1.可操作范围.y, endl);
			couta3("可操作范围.x=", 窗口信息1.可操作范围.x, endl);

			/*初始情况`输出=初始百分比; 也就是( 显示`刚才的操作结果 )*//*y坐标没有影响的*//*坐标/字宽=字数*/
			//?不能		/ /*字的大小(y*2=x)*/窗口信息1.字的大小y**/
			size_t i; for( i = 0; i < /*字数=3*比值还原/字宽*/输出 * /*感觉是*/2*窗口信息1.窗口大小_字数x; i++ ){
				//couta1("▬");
				couta1("=");
			}/*for*/
			couta1("\n");
			couta3("显示完了,字符数量=", i, "\n");
			coutsf("retu时的系数= {}\n", retu时的系数);
			/*变量*/
			couta3("左边的距离= ", 左边的距离, endl);
			couta3("上边的距离= ", 上边的距离, endl);
			coutsf("左边的距离/窗口信息1.可操作范围.x= {}/{}\n", 左边的距离, 窗口信息1.可操作范围.x);
			coutsf("输出= {}\n", 输出);
			鼠标坐标 = UuBc.ret坐标();
			/*?鼠标坐标之后的cout,闪一下清屏*/
			idkb.c鼠标坐标();
			///coutsf("测试`在(lam清屏，c内容)中的(c鼠标坐标)之后的c能否显示{}\n",输出);/*可以*/
			};
		auto lamget窗口RectANDgetcmd窗口info = [&](/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect){
			/*第一次*/
			idkb.get窗口Rect(idkb.ret前台(), 窗口Rect);
			/*get( cmd窗口info.窗口大小_像素 )*/
			窗口信息1.窗口大小_像素y = 窗口Rect.bottom - 窗口Rect.top;
			窗口信息1.窗口大小_像素x = 窗口Rect.right - 窗口Rect.left;
			/*get( cmd窗口info.可操作范围.4点 )*/
			窗口信息1.可操作范围.上_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f上_百分比;
			窗口信息1.可操作范围.下_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f下_百分比;
			窗口信息1.可操作范围.左_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f左_百分比;
			窗口信息1.可操作范围.右_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f右_百分比;
			/*ge<t( cmd窗口info.可操作范围 )*/
			/*//>这个就是`窗口尺寸*/
			/*todo 这个还没有用*/
			/*可操作范围 应该改成 窗口内容尺寸*/
			窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
			窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
			///窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
			///窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
			};
		auto lamget对比上限和下限AND修改 = [&](/*输入*/float 上限,float 下限 ,/*输出*/float &输出){
			if( 输出>上限 ){
				输出 = 上限;
			}/*if`上限*/
			if( 输出<下限 ){
				输出 = 下限;
			}/*if`下限*/
			};
		/*还原*/输出 /= retu时的系数;
		/*设置*/
		cmd1.禁止鼠标左键点ANDset字的大小(窗口信息1.字的大小y);
		/*开始*/
			if( jmceanjm.ret是否按下( ) == 1 ){
			/*鼠标点击的坐标*/
			if( jmceanjm.现在[MOUSE_MOVED] == 1 ){
				lamget窗口RectANDgetcmd窗口info(idkb.ret前台(), 窗口Rect);
				lamc内容();
				/*上下范围之内*/
				if( 鼠标坐标.Y > 窗口信息1.可操作范围.上_像素 ){
					if( 鼠标坐标.Y < 窗口信息1.可操作范围.下_像素 ){
						/*左右范围之内*/
						if( 鼠标坐标.X > 窗口信息1.可操作范围.左_像素 ){
							if( 鼠标坐标.X < 窗口信息1.可操作范围.右_像素 ){
								/*输出=进度/分母=(鼠标x-窗口.左)/窗口x*/
								左边的距离 = 鼠标坐标.X - 窗口Rect.left;
								上边的距离 = 鼠标坐标.Y - 窗口Rect.top;
								/*c*/
								 /*!c-->读取坐标-->c*/
								 /*?这里不计算=会闪一下`c好几行, 是字数*字大小, 不知道他的位置**/
								 /*输出<=1,c的字数<=2*窗口信息1.可操作范围.x*/
								输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x);
								lamget对比上限和下限AND修改(上限,下限,输出);
								/*若清屏`放在最上面*/
								lamc内容();
								cout2(R"(这里在"while( true ){"上面)", "\n");/*存在两个c*/
								/*这里就c了*/
								couta3("点击的位置是=", 输出, "\n");
								/*c了再算结果*/输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x)*retu时的系数;
								retu 1;
							}/*if`X*/
						}/*if`X*/
					}/*if`Y*/
				}/*if`Y*/
			}/*if`鼠标按下*/
		}/*if`按下*/
		retu 0;
	}/*int*/
	int getc能拖的进度条(/*输入*/cmd窗口info& 窗口信息1, float 上限,float 下限 ,float retu时的系数, /*输出*/float& 输出){
		/*c符号, 最大字数=每行的长度or尺寸x*/
		/*!(float& 输出) 影响c的字数, 要c了再改*/
		/*c的字数=2*比值还原*/
		auto lamc内容 = [&]()->void{
			/*c*/
			idkb.c窗口Rect(窗口Rect);
			couta3("窗口信息1.窗口大小_像素y=", 窗口信息1.窗口大小_像素y, endl);
			couta3("窗口信息1.窗口大小_像素x=", 窗口信息1.窗口大小_像素x, endl);
			couta3("上_像素=", 窗口信息1.可操作范围.上_像素, endl);
			couta3("下_像素=", 窗口信息1.可操作范围.下_像素, endl);
			couta3("左_像素=", 窗口信息1.可操作范围.左_像素, endl);
			couta3("右_像素=", 窗口信息1.可操作范围.右_像素, endl);
			couta3("可操作范围.y=", 窗口信息1.可操作范围.y, endl);
			couta3("可操作范围.x=", 窗口信息1.可操作范围.x, endl);

			/*初始情况`输出=初始百分比; 也就是( 显示`刚才的操作结果 )*//*y坐标没有影响的*//*坐标/字宽=字数*/
			//?不能		/ /*字的大小(y*2=x)*/窗口信息1.字的大小y**/
			size_t i; for( i = 0; i < /*字数=3*比值还原/字宽*/输出 * /*感觉是*/2*窗口信息1.窗口大小_字数x; i++ ){
				//couta1("▬");
				couta1("=");
			}/*for*/
			couta1("\n");
			couta3("显示完了,字符数量=", i, "\n");
			coutsf("retu时的系数= {}\n", retu时的系数);
			/*变量*/
			couta3("左边的距离= ", 左边的距离, endl);
			couta3("上边的距离= ", 上边的距离, endl);
			coutsf("左边的距离/窗口信息1.可操作范围.x= {}/{}\n", 左边的距离, 窗口信息1.可操作范围.x);
			coutsf("输出= {}\n", 输出);
			};
		auto lamget窗口RectANDgetcmd窗口info = [&](/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect){
			/*第一次*/
			idkb.get窗口Rect(idkb.ret前台(), 窗口Rect);
			/*get( cmd窗口info.窗口大小_像素 )*/
			窗口信息1.窗口大小_像素y = 窗口Rect.bottom - 窗口Rect.top;
			窗口信息1.窗口大小_像素x = 窗口Rect.right - 窗口Rect.left;
			/*get( cmd窗口info.可操作范围.4点 )*/
			窗口信息1.可操作范围.上_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f上_百分比;
			窗口信息1.可操作范围.下_像素 = 窗口Rect.top + 窗口信息1.窗口大小_像素y * 窗口信息1.可操作范围.f下_百分比;
			窗口信息1.可操作范围.左_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f左_百分比;
			窗口信息1.可操作范围.右_像素 = 窗口Rect.left + 窗口信息1.窗口大小_像素x * 窗口信息1.可操作范围.f右_百分比;
			/*ge<t( cmd窗口info.可操作范围 )*/
			/*//>这个就是`窗口尺寸*/
			/*todo 这个还没有用*/
			/*可操作范围 应该改成 窗口内容尺寸*/
			窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
			窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
			///窗口信息1.可操作范围.y = 窗口信息1.可操作范围.下_像素 - 窗口信息1.可操作范围.上_像素;
			///窗口信息1.可操作范围.x = 窗口信息1.可操作范围.右_像素 - 窗口信息1.可操作范围.左_像素;
			};
    /*输出不能大于上限,不能小于下限*/
		auto lamget对比上限和下限AND修改 = [&](/*输入*/float 上限,float 下限 ,/*输出*/float &输出){
			if( 输出>上限 ){
				输出 = 上限;
			}/*if`上限*/
			if( 输出<下限 ){
				输出 = 下限;
			}/*if`下限*/
			};
		/*还原*/输出 /= retu时的系数;
		/*设置*/
		cmd1.禁止鼠标左键点ANDset字的大小(窗口信息1.字的大小y);
		/*开始*/
		if( jmceanjm.ret是否按下( ) == 1 ){
			/*鼠标点击的坐标*/
			if( jmceanjm.现在[MOUSE_MOVED] == 1 ){
				lamget窗口RectANDgetcmd窗口info(idkb.ret前台(), 窗口Rect);
				////*(上次操作or已有)的结果*/lamc内容();
				idkb.get鼠标坐标ANDc鼠标坐标(鼠标坐标);/*?if没get鼠标坐标=触发不了后面的行*/
				///coutsf("测试`在(lam清屏，c内容)中的(c鼠标坐标)之后的c能否显示{}\n",输出);/*可以*/
				/*检测鼠标坐标`是否在`上下范围之内*/
				if( 鼠标坐标.Y > 窗口信息1.可操作范围.上_像素 ){
					if( 鼠标坐标.Y < 窗口信息1.可操作范围.下_像素 ){
						/*左右范围之内*/
						if( 鼠标坐标.X > 窗口信息1.可操作范围.左_像素 ){
							if( 鼠标坐标.X < 窗口信息1.可操作范围.右_像素 ){
                /*触发*/
							}/*if`X*/
               /*?if不触发,应该不修改，不应该黑屏啊*/
            }/*if`X*/
					}/*if`Y*/
				}/*if`Y*/
         /*输出=进度/分母=(鼠标x-窗口.左)/窗口x*/
        左边的距离 = 鼠标坐标.X - 窗口Rect.left;
        上边的距离 = 鼠标坐标.Y - 窗口Rect.top;
        /*c*/
        /*!c-->读取坐标-->c*/
        /*?这里不计算=会闪一下`c好几行, 是字数*字大小, 不知道他的位置**/
        /*输出<=1,c的字数<=2*窗口信息1.可操作范围.x*/
        输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x);
        lamget对比上限和下限AND修改(上限,下限,输出);
        /*若清屏`放在最上面*/
        lamc内容();
        cout2(R"(这里在"while( true ){"上面)", "\n");/*存在两个c*/
        /*这里就c了*/
        couta3("点击的位置是=", 输出, "\n");
        /*c了再算结果*/输出 = ((float)左边的距离 / 窗口信息1.可操作范围.x)*retu时的系数;
        retu 1;
			}/*if`鼠标按下*/
		}/*if`按下*/
		retu 0;
	}/*int*/
	int getc能拖的进度条(/*输入*/cmd窗口info& 窗口信息1, /*输出*/float& 输出){
		retu getc能拖的进度条(窗口信息1,1,0, 1, 输出);
	}/*void*/
	void get死循环ζcc能拖的进度条(/*输入*/cmd窗口info& 窗口信息1, float retu时的系数, /*输出*/float& 输出){
		while( true ){
			getc能拖的进度条(窗口信息1,1,0, retu时的系数, 输出);
		}/*while*/
	}/*void*/
	/**///▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/**///▬例子▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 例子_c能拖的进度条(){
		cmd窗口info cmd窗口1;	float sdr亮度 = 0;
		getc能拖的进度条(cmd窗口1,1,0,2, sdr亮度);
	};

};
#endif