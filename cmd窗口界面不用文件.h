﻿#pragma once
#ifndef CMD窗口界面不用文件_H 
#define CMD窗口界面不用文件_H

//#include<E:\lib\预编译头文件 无其他.h>

#include  <E:\lib\define.h>
///#include<E:\lib\namespace\简写.h>
#include<E:\lib\头文件 c++.h>
//#include  <E:\lib\按键检测.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\鼠标.h>
#include  <E:\lib\cmd.h>
#include  <E:\lib\计算.h>
#include  <E:\lib\用地址计算.h>

using namespace std;
//extern int 按下;
class cmd窗口界面不用文件 :public cmd{
public:
	//using
public:
	//classjisr;
	用地址计算 地址算;
public:
	/*cmd界面▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*/
	struct 布局info{
		//todo 太难
	};
	struct 简易布局info{
		新i 工具栏是否展开;
	};
	新vi v各v占用的行数; //todo 相当于小组件拼起来一个界面
	struct stru界面的列表{
		SYSTEMTIME 现在时间{}, 开始时间;
		int 行数, 操作步骤数;
		int 起始行数;
		//>创建vec
		int 一行有几个元素 = 10/*0~9*/, 共有几行;
		新vec2s v2s列表;/*；*/
		新vip vip变量;
		新vec2i v2i数值;
		新vi vi空变量;
		/**//*设置*/
		int 方向键输入 = 1, 启用左键操作 = 0, 启用键盘操作 = 1, 是否关闭列表，退出循环 = 0
		/*界面`开关*/
			, 展开顶栏
			/*记录*/
			, 多线程了按键功能 = 0, 是否已按过按键 = 0, 是否已使用选项 = 0, 是否已展开过顶栏;
		stru界面的列表(){
			vi空变量.assign(14, 0);
		}
	};
	int 没用的行;
	新vi v无作用的变量;
	/**//*设置`限制输入▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*/
	struct 光标限制{
		int 开关 = 0
			/*x,y  x1,y
			x,y1 x1,y1*/
			, x, x1, y, y1;
	};
public:
	/*static*/ const char* ccCr_lf = "\r\n";
public:
	cmd窗口界面不用文件(){
		v无作用的变量.assign(26, 0);
	}
	/**///▬cmd实现窗口UI▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	int 多线程了按键功能 = 0, 是否关闭列表，退出循环 = 0;
	//脑抽了
	/*
	空变量[1] = 0;
	空变量[2] = 0;
	空变量[3] = 0;
	空变量[4] = 0;
	空变量[5] = 0;
	空变量[6] = 0;
	空变量[7] = 0;
	空变量[8] = 0;
	空变量[9] = 0;
	空变量[10] = 0;
	空变量[11] = 0;
	空变量[12] = 0;
	空变量[13] = 0;
	空变量[14] = 0;
	空变量[15] = 0;
	空变量[16] = 0;
	空变量[17] = 0;
	空变量[18] = 0;
	空变量[19] = 0;
	空变量[20] = 0;
	空变量[21] = 0;
	空变量[22] = 0;
	空变量[23] = 0;
	空变量[24] = 0;
	空变量[25] = 0;
	*/
	/*//!v的说明
	v列表填入器( 新vec2s& 列表.v2s列表, 0 新i& 列序号, 1 新s s标题, 新s s内容, 3 新s 操作类型
	,4 新s 操作类型2, 5 新s 操作的内容
	,6 新s 操作的内容2
	,7 新s 操作的内容3
	,8 新s 操作的内容4
	,9 新s 操作的内容5)*/
	/*将如何操作,解析-->行动*/

	//2024年2月8日17:39:31
	/*todo 没办法区分,写成一个*/
	int 操作类型解析(cmd窗口界面不用文件::stru界面的列表& 列表, int v的元素的行){
		新s* s标题 = &列表.v2s列表[v的元素的行][1], * s内容 = &列表.v2s列表[v的元素的行][2], * 操作类型 = &列表.v2s列表[v的元素的行][3], * 操作类型2 = &列表.v2s列表[v的元素的行][4]
			, * s操作的内容 = &列表.v2s列表[v的元素的行][5]
			, * s操作的内容2 = &列表.v2s列表[v的元素的行][6]
			, * s操作的内容3 = &列表.v2s列表[v的元素的行][7]
			, * s操作的内容4 = &列表.v2s列表[v的元素的行][8]
			, * s操作的内容5 = &列表.v2s列表[v的元素的行][9];
		新i* i操作的内容 = &列表.v2i数值[v的元素的行][1]
			, * i操作的内容2 = &列表.v2i数值[v的元素的行][2]
			, * i操作的内容3 = &列表.v2i数值[v的元素的行][3]
			, * i操作的内容4 = &列表.v2i数值[v的元素的行][4]
			, * i操作的内容5 = &列表.v2i数值[v的元素的行][5];
		列表.是否已使用选项 = 1;
		//判列`表断
		if( *操作类型=="grbi`lxbc"/*关闭列表*/ ){
			列表.是否关闭列表，退出循环 = 1;
			retu 1;
		}
		if( *操作类型=="lxbc" ){}
		//>cmd
		if( *操作类型== /*(新s)*/"cmd" ){
			system(vrh.TOccp(列表.v2s列表[v的元素的行][5]));
			retu 1;
		}
		if( *操作类型=="cmd`uwxn"/*`刷新*/ ){
			刷新();
			retu 1;
		}
		/*set`字的大小*/
		if( *操作类型=="cmd`set`zide`daxc" ){
			if(/*cin*/*s操作的内容=="uuru`igfa"/*乘法*/ ){
				int 倍数;
				cin>>倍数;
				set字的大小乘(倍数);
				retu 1;
			}
			if(/*cin*/*s操作的内容=="uuru"/*输入*/ ){
				int 大小;
				cin>>大小;
				set字的大小(大小);
				retu 1;
			}
			/*内容=数字*/set字的大小(*i操作的内容);
			retu 1;
		}
		if( *操作类型=="cmd`set`zide`daxc`igfa" ){
			if(/*cin*/*s操作的内容=="uuru"/*输入*/ ){
				int 倍数; cin>>倍数; set字的大小乘(倍数);
				retu 1;
			}
			/*数字*/set字的大小乘(*i操作的内容);
			retu 1;
		}
		if( *操作类型=="cmd`set`zide`daxc`iufa" ){
			if(/*cin*/*s操作的内容=="uuru"/*输入*/ ){
				int 倍数; cin>>倍数; set字的大小除以(倍数);
				retu 1;
			}
			/*数字*/set字的大小除以(*i操作的内容);
			retu 1;
		}
		//>/*修改变量*/
		/*指针,不能*/
		if( *操作类型=="xqgl`bmld"/*修改`变量*/ ){
			if( *操作类型2=="int" ){
				地址算.等于(*列表.vip变量[*i操作的内容], *i操作的内容2); retu 1;
			}
			if( *操作类型2=="1" ){
				新i _1 = 1;
				////地址算.等于(*列表.vip变量[*i操作的内容], _1);retu 1;
				地址算.加(*列表.vip变量[*i操作的内容], 1); retu 1;
			}
			retu 1;
		}
		/*修改`空变量*/
		if( *操作类型=="xqgl`ksbmld" ){
			if( *i操作的内容<列表.vi空变量.size() ){
				列表.vi空变量[*i操作的内容] = *i操作的内容2;
			}
			retu 1;
		}
		if( *操作类型=="xqgl`zidlde`ksbmld"/*修改`自带的`空变量*/ ){
			if( *i操作的内容<v无作用的变量.size() ){
				v无作用的变量[*i操作的内容] = *i操作的内容2;
			}
			retu 1;
		}
		/*不存在这种s*/
		///MessageBox(NULL, L"不存在这种代码", L"2024年1月30日", MB_OK | MB_ICONASTERISK);/*https://blog.csdn.net/LCR2025/article/details/129223538>*/
		retu 0;
	}
	//>不用改 todo
	int 检测cmd光标then操作(int& 是否按下, stru界面的列表& 列表){/*检测cmd光标Then操作,检测cmd光标THEN操作*/
		int 列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y+1;
		if( 是否按下>=1 ){
			列表.是否已按过按键 = 1;
			if( (现在[VK_SPACE]==1)&&(现在['L']==1) ){
				地址算.互换01(列表.方向键输入);
			}
			if( 列表.方向键输入==1 ){
				if( 列表.多线程了按键功能!=1 ){
					if( (现在[VK_SHIFT]==1)||(现在['Z']==1) ){/*todo 停不下*/
						/*加速*/方向键控制cmd光标(1, 1);
					} else{ 方向键控制cmd光标(1, 1); }
					/*return;*/
				}
			}
			if( 列表.启用左键操作==1 ){
				//>按下左键-->get这一行的序号-->跳转
				if( 现在[MOUSE_MOVED]==1 ){
					get光标位置();
					/*行动类型解析then行动*/
					列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y+1;
					if(/*!越界*/列表Y<列表.v2s列表.v行数 ){
						retu 列表Y;
						/*跳转*/操作类型解析(列表, 列表Y);
					}
				}/*if`2*/
			}/*if*/
			if( 列表.启用键盘操作==1 ){
				if( 现在[VK_RETURN]==1 ){
					get光标位置();
					/*行动类型解析then行动*/
					列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y+1;
					if(/*!越界*/列表Y<列表.v2s列表.v行数 ){
						retu 列表Y;
						/*跳转*/操作类型解析(列表, 列表Y);
					}
				}/*if`2*/
			}/*if*/
		}/*if*/
		retu 0;
		auto lam换算Y = [&](){
			};
		/*这是直接-; 读取内容也行,序号是显示出来的*/
		auto lam减算v的行 = [&](int cmd第几行, 新vec2s& v2s列表){
			retu cmd第几行- /*列表`从第几行开始显示*/vrh.TOi(v2s列表[0][0]);
			};
		/*不行*/
		auto lam读取v的行 = [&](){
			//设置位置-->读取`最左边的序号
			set光标位置yx(cmd屏幕缓冲区信息.dwCursorPosition.Y, 0);
			auto 结果 = ret读取(cmd屏幕缓冲区信息.dwCursorPosition.Y, 4);
			cout<<vrh.TOs(结果)<<c回车;
			retu 结果;
			};
		while( true ){
			get光标位置();
			coutf("点击了{}的{}\n", cmd屏幕缓冲区信息.dwCursorPosition.Y, 列表.v2s列表[cmd屏幕缓冲区信息.dwCursorPosition.Y][1]/*标题*/);
			/*跳转*/操作类型解析(列表, cmd屏幕缓冲区信息.dwCursorPosition.Y);
			//>cout列表
			//新i /*序号*/列 = 1;
			//for (列; 列 < 共有几行; 列++) {
			//	cout << std::format("{} {} {}\n", v2s新列表[列][0]/*序号*/, v2s新列表[列][1]/*标题*/, v2s新列表[列][2]/*内容*/);
			//}/*for*/
			breakwhile;
		}
	}
	int 检测cmd光标then操作(stru界面的列表& 列表){
		检测cmd光标then操作(按下, 列表);
	}
	/*显示: 序号or标记->标题->内容*/
	/**///▬cmd工具栏菜单▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		/*全是s,填""=跳过,列序号自动+1*/
	void v列表填入器(stru界面的列表& 列表, 新i& 列序号, 新s s标题, 新s s内容, 新s 操作类型, 新s 操作类型2
		, 新s 操作的内容
		, 新s 操作的内容2
		, 新s 操作的内容3
		, 新s 操作的内容4
		, 新s 操作的内容5){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		if( 操作的内容!="" ){ 列表.v2s列表[列序号][5] = 操作的内容; }
		if( 操作的内容2!="" ){ 列表.v2s列表[列序号][6] = 操作的内容2; }
		if( 操作的内容3!="" ){ 列表.v2s列表[列序号][7] = 操作的内容3; }
		if( 操作的内容4!="" ){ 列表.v2s列表[列序号][8] = 操作的内容4; }
		if( 操作的内容5!="" ){ 列表.v2s列表[列序号][9] = 操作的内容5; }
		列序号++;/*!+1了*/
	};/*void*/
	/*全是s,填""=跳过,列序号自动+1*/
	void v列表填入器(stru界面的列表& 列表, 新i& 列序号, 新s s标题, 新s s内容, 新s 操作类型, 新s 操作类型2
		, 新s 操作的内容
	){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		if( 操作的内容!="" ){ 列表.v2s列表[列序号][5] = 操作的内容; }
		列序号++;/*!+1了*/
	};/*void*/
	/*三种v,sip*/
	void v列表填入器(stru界面的列表& 列表,/*新vecip*/int* /*vp填入变量*/p变量1, int& 变量1,/*0*/新i& 列序号, 新s s标题, 新s s内容, /*3*/新s 操作类型, 新s 操作类型2
		, 新s 操作的内容
		, 新s 操作的内容2
		, 新s 操作的内容3
		, 新s 操作的内容4
		, 新s 操作的内容5){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		if( 操作的内容!="" ){ 列表.v2s列表[列序号][5] = 操作的内容; }
		if( 操作的内容2!="" ){ 列表.v2s列表[列序号][6] = 操作的内容2; }
		if( 操作的内容3!="" ){ 列表.v2s列表[列序号][7] = 操作的内容3; }
		if( 操作的内容4!="" ){ 列表.v2s列表[列序号][8] = 操作的内容4; }
		if( 操作的内容5!="" ){ 列表.v2s列表[列序号][9] = 操作的内容5; }
		列序号++;/*!+1了*/
		p变量1 = &变量1;
	};/*void*/
	/*2种v,si*/
	void v列表填入器(stru界面的列表& 列表, 新i& 列序号, 新s s标题, 新s s内容, 新s 操作类型, 新s 操作类型2
		, 新i 操作的内容){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		列表.v2i数值[列序号][1] = 操作的内容;
		列序号++;/*!+1了*/
	};/*void*/
	void v列表填入器(stru界面的列表& 列表, 新i& 列序号, 新s s标题, 新s s内容, 新s 操作类型, 新s 操作类型2
		, 新i 操作的内容
		, 新i 操作的内容2
		, 新i 操作的内容3
		, 新i 操作的内容4
		, 新i 操作的内容5){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		列表.v2i数值[列序号][1] = 操作的内容;
		列表.v2i数值[列序号][2] = 操作的内容2;
		列表.v2i数值[列序号][3] = 操作的内容3;
		列表.v2i数值[列序号][4] = 操作的内容4;
		列表.v2i数值[列序号][5] = 操作的内容5;
		列序号++;/*!+1了*/
	};/*void*/

	//>有指针
	/* vp,有指针,三种v,sip*/
	void v列表填入器(stru界面的列表& 列表,/*新vecip*/int* /*vp填入变量*/p变量1, int& 变量1,/*0*/新i& 列序号, 新s s标题, 新s s内容, /*3*/新s 操作类型, 新s 操作类型2
		, 新i& vp的序号){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		列表.v2i数值[列序号][1] = vp的序号;
		/*vp的序号++*/ vp的序号++;
		列序号++;/*!+1了*/
		p变量1 = &变量1;
	};/*void*/
	void v列表填入器(stru界面的列表& 列表,/*新vecip*/int* /*vp填入变量*/p变量1, int& 变量1,/*0*/新i& 列序号, 新s s标题, 新s s内容, /*3*/新s 操作类型, 新s 操作类型2
		, 新i& vp的序号
		, 新i 操作的内容2){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		列表.v2i数值[列序号][1] = vp的序号;
		列表.v2i数值[列序号][2] = 操作的内容2;
		列序号++;/*!+1了*/
		/*vp的序号++*/ vp的序号++;
		p变量1 = &变量1;
	};/*void*/
	void v列表填入器(stru界面的列表& 列表,/*新vecip*/int* /*vp填入变量*/p变量1, int& 变量1,/*0*/新i& 列序号, 新s s标题, 新s s内容, /*3*/新s 操作类型, 新s 操作类型2
		, 新i& vp的序号
		, 新i 操作的内容2
		, 新i 操作的内容3
		, 新i 操作的内容4
		, 新i 操作的内容5){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		列表.v2i数值[列序号][1] = vp的序号;
		列表.v2i数值[列序号][2] = 操作的内容2;
		列表.v2i数值[列序号][3] = 操作的内容3;
		列表.v2i数值[列序号][4] = 操作的内容4;
		列表.v2i数值[列序号][5] = 操作的内容5;
		列序号++;/*!+1了*/
		/*vp的序号++*/ vp的序号++;
		p变量1 = &变量1;
	};/*void*/
	void v列表填入器(stru界面的列表& 列表,/*新vecip*/int* /*vp填入变量*/p变量1, int& 变量1,/*0*/新i& 列序号, 新s s标题, 新s s内容, /*3*/新s 操作类型, 新s 操作类型2
		, 新s 操作的内容
		, 新i 操作的内容2
		, 新i 操作的内容3
		, 新i 操作的内容4
		, 新i 操作的内容5){
		列表.v2s列表[列序号][0] = vrh.Ts(列序号);
		if( s标题!="" ){ 列表.v2s列表[列序号][1] = s标题; }
		if( s内容!="" ){ 列表.v2s列表[列序号][2] = s内容; }
		if( 操作类型!="" ){ 列表.v2s列表[列序号][3] = 操作类型; }
		if( 操作类型2!="" ){ 列表.v2s列表[列序号][4] = 操作类型2; }
		if( 操作的内容!="" ){ 列表.v2s列表[列序号][5] = 操作的内容; }
		列表.v2i数值[列序号][2] = 操作的内容2;
		列表.v2i数值[列序号][3] = 操作的内容3;
		列表.v2i数值[列序号][4] = 操作的内容4;
		列表.v2i数值[列序号][5] = 操作的内容5;
		列序号++;/*!+1了*/
		p变量1 = &变量1;
	};/*void*/
};

//void 显示(stru界面的列表& 列表) {/*检测cmd光标Then操作,检测cmd光标THEN操作*/
//	int 列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y + 1;
//	auto lam换算Y = [&]() {
//		};
//	检测全部键是否按下();



#endif