﻿#pragma once
#ifndef CMD窗口界面_H 
#define CMD窗口界面_H

//#include<E:\lib\预编译头文件 无其他.h>

#include  <E:\lib\define.h>
#include<E:\lib\namespace\简写.h>
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
class cmd窗口界面 :cmd {
public:
		用地址计算 地址算;
public:
	const string 原行开始符 = "^";
	const string 原行结束符 = "&";
	string 行开始符 = "^";
	string 行结束符 = "&";
	string 行开始符跟0 = "^0";
	string 行开始符跟1 = "^1";
	string 行开始符跟2 = "^2";
	string 行开始符跟3 = "^3";
	string 行开始符跟4 = "^4";
	string 行开始符跟5 = "^5";
	string 行开始符跟6 = "^6";
	string 行开始符跟7 = "^7";
	string 行开始符跟8 = "^8";
	string 行开始符跟9 = "^9";
	/*外观▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*/
	_COORD cmd光标坐标{ 0,0 };/*set用*/
	_CONSOLE_SCREEN_BUFFER_INFO cmd屏幕缓冲区信息{
	};
	/**///▬输出`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	ostringstream ostst;
	/*定向*/std::streambuf* pOldBuf;
	/*cmd界面▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*/
	新vi v各v占用的行数; //todo 相当于小组件拼起来一个界面
	struct 界面显示列表 {
		int 行数;
		int 起始行数;
		新vec2s v2s列表;/*；*/
	};
	int 没用的行;
public:
	/*static*/ const char* ccCr_lf = "\r\n";
public:
	/**///▬cmd实现窗口UI▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*将如何操作,解析*/
	int 操作类型解析(新vec2s& v2s, int v的元素的行) {
		新s 操作类型 = v2s[v的元素的行][3];
		if (操作类型 == /*(新s)*/"cmd") {
			禁止鼠标左键点();
			system(vrh.TOccp(v2s[v的元素的行][3]));
			禁止鼠标左键点();
		}
		if (操作类型 == "cmd`uwxn"/*`刷新*/) {
			刷新();
		}
		if (操作类型 == "lxbc") {
			system(vrh.TOccp(v2s[v的元素的行][3]));
		}
		if (操作类型 == "xqgl`bmld"/*修改变量*/) {
			system(vrh.TOccp(v2s[v的元素的行][3]));
		}
		/*不存在这种s*/
		////MessageBox(NULL, L"不存在这种代码", L"2024年1月30日", MB_OK | MB_ICONASTERISK);/*https://blog.csdn.net/LCR2025/article/details/129223538>*/

		ret 0;
	}
	int 检测cmd光标then操作(int& 是否按下, stru界面的列表& 列表) {/*检测cmd光标Then操作,检测cmd光标THEN操作*/
		int 列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y + 1;
		if (是否按下 >= 1) {
			列表.是否已按过按键 = 1;
			if ((现在[VK_SPACE] == 1) && (现在['L'] == 1)) {
				地址算.互换01(列表.方向键输入);
			}
			if (列表.方向键输入 == 1) {
				if (列表.多线程了按键功能 != 1) {
					if ((现在[VK_SHIFT] == 1) || (现在['Z'] == 1)) {/*todo 停不下*/
						/*加速*/方向键控制cmd光标(1, 1);
					} else { 方向键控制cmd光标(1, 1); }
					/*return;*/
				}
			}
			if (列表.启用左键操作 == 1) {
				//>按下左键-->get这一行的序号-->跳转
				if (现在[MOUSE_MOVED] == 1) {
					get光标位置();
					/*行动类型解析then行动*/
					列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y + 1;
					if (/*!越界*/列表Y < 列表.v2s列表.v行数) {
						ret 列表Y;
						/*跳转*/操作类型解析(列表, 列表Y);
					}
				}/*if`2*/
			}/*if*/
			if (列表.启用键盘操作 == 1) {
				if (现在[VK_RETURN] == 1) {
					get光标位置();
					/*行动类型解析then行动*/
					列表Y = /*坐标y+1*/cmd屏幕缓冲区信息.dwCursorPosition.Y + 1;
					if (/*!越界*/列表Y < 列表.v2s列表.v行数) {
						ret 列表Y;
						/*跳转*/操作类型解析(列表, 列表Y);
					}
				}/*if`2*/
			}/*if*/
		}/*if*/
		ret 0;
		auto lam换算Y = [&]() {
			};
		/*这是直接-; 读取内容也行,序号是显示出来的*/
		auto lam减算v的行 = [&](int cmd第几行, 新vec2s& v2s列表) {
			ret cmd第几行 - /*列表`从第几行开始显示*/vrh.TOi(v2s列表[0][0]);
			};
		/*不行*/
		auto lam读取v的行 = [&]() {
			//设置位置-->读取`最左边的序号
			set光标位置yx(cmd屏幕缓冲区信息.dwCursorPosition.Y, 0);
			auto 结果 = ret读取(cmd屏幕缓冲区信息.dwCursorPosition.Y, 4);
			cout << vrh.TOs(结果) << c回车;
			ret 结果;
			};
		while (true) {
			get光标位置();
			coutf "点击了{}的{}\n", cmd屏幕缓冲区信息.dwCursorPosition.Y, 列表.v2s列表[cmd屏幕缓冲区信息.dwCursorPosition.Y][1]/*标题*/);
			/*跳转*/操作类型解析(列表, cmd屏幕缓冲区信息.dwCursorPosition.Y);
			//>cout列表
			//新i /*序号*/列 = 1;
			//for (列; 列 < 共有几行; 列++) {
			//	cout << std::format("{} {} {}\n", v2s新列表[列][0]/*序号*/, v2s新列表[列][1]/*标题*/, v2s新列表[列][2]/*内容*/);
			//}/*for*/
			breakwhile;
		}
	}
	int 检测cmd光标then操作(stru界面的列表& 列表) {
		检测cmd光标then操作(按下, 列表);
	}
	void 检测cmd光标then操作(界面显示列表& 列表) {
		//>按下左键-->get这一行的序号-->跳转
		if (GetKeyState(MOUSE_MOVED) & 0x8000) {
			while (true) {
				get光标位置();
				/*行动类型解析then行动*/
				/*跳转*/操作类型解析(列表.v2s列表, cmd屏幕缓冲区信息.dwCursorPosition.Y);
			}/*while*/
		}/*if*/
	}
	/*显示: 序号or标记->标题->内容*/
	/**///▬cmd工具栏菜单▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

	/**///▬cmd列表`!写入,!从文件读取▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*创建vec-->写入文件--读取vec,3个lam*/
	void 列表s写入器(新ofs& ofs列表写入器, 新i 列序号, 新s s标题, 新s s内容, 新s 操作类型, 新s 操作步骤数, 新s 操作的内容, 新s 操作的内容2
		, 新s 操作的内容3
		, 新s 操作的内容4
		, 新s 操作的内容5) {
		新s 行结束符1 = 行结束符;
		ofs列表写入器 << 行开始符跟0 << " " << 列序号
			<< " " << 行开始符跟1 << " " << s标题
			<< " " << 行开始符跟2 << " " << s内容
			<< " " << 行开始符跟3 << " " << 操作类型
			<< " " << 行开始符跟4 << " " << 操作步骤数 /*5*/
			<< " " << 行开始符跟5 << " " << 操作的内容
			<< " " << 行开始符跟6 << " " << 操作的内容2
			<< " " << 行开始符跟7 << " " << 操作的内容3
			<< " " << 行开始符跟8 << " " << 操作的内容4
			<< " " << 行开始符跟9 << " " << 操作的内容5 /*10*/
			<< " " << 行结束符1.append(vrh.TOs(列序号)) << c回车;
		行结束符1 = 行结束符;
	};/*void*/
	/*填""=跳过,列序号自动+1*/
	void 列表v2s填空器(新vec2s& v2s写入列表, 新i& 列序号, 新s s标题, 新s s内容, 新s 操作类型
		, 新s 操作步骤数, 新s 操作的内容
		, 新s 操作的内容2
		, 新s 操作的内容3
		, 新s 操作的内容4
		, 新s 操作的内容5) {
		v2s写入列表[列序号][0] = vrh.Ts(列序号);
		if (s标题 != "") { v2s写入列表[列序号][1] = s标题; }
		if (s内容 != "") { v2s写入列表[列序号][2] = s内容; }
		if (操作类型 != "") { v2s写入列表[列序号][3] = 操作类型; }
		if (操作步骤数 != "") { v2s写入列表[列序号][4] = 操作步骤数; }
		if (操作的内容 != "") { v2s写入列表[列序号][5] = 操作的内容; }
		if (操作的内容2 != "") { v2s写入列表[列序号][6] = 操作的内容2; }
		if (操作的内容3 != "") { v2s写入列表[列序号][7] = 操作的内容3; }
		if (操作的内容4 != "") { v2s写入列表[列序号][8] = 操作的内容4; }
		if (操作的内容5 != "") { v2s写入列表[列序号][9] = 操作的内容5; }
		列序号++;
	};/*void*/
	void v2s列表写入文件(新s path, 新vec2s& v2s要写入的) {
		wfjmduxx.没有就新建(path);
		新ofs ofs列表写入器/*写入*/;
		从头覆盖写入(ofs列表写入器, path);
		//>写入文件
		/*功能的标记,s标题,s内容,cc操作类型*/
		新i /*序号*/列 = 1;
		//>写入
		for (列; 列 <= 1; 列++) {
			列表s写入器(ofs列表写入器, 列, v2s要写入的[列][1], v2s要写入的[列][2]/*s内容*/, v2s要写入的[列][3]/*操作类型*/, v2s要写入的[列][4], v2s要写入的[列][5]
				, v2s要写入的[列][6]
				, v2s要写入的[列][7]
				, v2s要写入的[列][8]
				, v2s要写入的[列][9]
			);
		}
		ofs列表写入器 << s文档结束;/*写入`完*/
		ofs列表写入器.close();
	}
	/*用法*/
	void 写入第一个列表_2024年1月29日(新s path) {
		//>创建vec
		int 一种列表有几个类 = 10, 列序号 = 1;
		新vec2s v2s写入列表; v2s写入列表.assign(1400, 新vecs(10, "")); //"mzyb`nzrs"/*没有内容*/
		/*填入vec*/
		列表v2s填空器(v2s写入列表, 列序号, "打开列表", ""
			, "lxbc", "0", "", ""
			, "", "", "");
		//>创建文件
		v2s列表写入文件(path, v2s写入列表);
		//>cout
		读取文件thenCout列表(path);
	}/*void*/
	void 创建第一个列表_2024年1月30日() {
		//>创建vec
		int 一行有几个元素 = 10, 共有几行 = 4, 列序号 = 1;
		新vec2s v2s新列表; v2s新列表.assign(4, 新vecs(一行有几个元素, "")); //"mzyb`nzrs"/*没有内容*/
		/*输入vec*/
		列表v2s填空器(v2s新列表, 列序号, "刷新界面", ""
			, "cmd`uwxn", "", "", ""
			, "", "", "");
		列表v2s填空器(v2s新列表, 列序号, "打开列表", ""
			, "lxbc", "", "", ""
			, "", "", "");

		列表v2s填空器(v2s新列表, 列序号, "修改字的大小", ""
			, "cmd`set`zide`daxc", "", "", ""
			, "", "", "");
		//>cout列表
		新i /*序号*/列 = 1;
		for (列; 列 < 共有几行; 列++) {
			cout << std::format("{} {} {}\n", v2s新列表[列][0]/*序号*/, v2s新列表[列][1]/*标题*/, v2s新列表[列][2]/*内容*/);
		}/*for*/
		while (true) {
			//>点击的功能
			检测cmd光标then操作(v2s新列表);
		}/*while*/
	}/*void*/
	/**///▬列表`读取▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*show列表*/
	void 读取文件thenCout列表(新s path) { //读取-->显示
		新ifs ifs列表读取器; 新s s读取;
		界面显示列表 界面列表;
		int 行开始符后的数字 = 0;/*^0,1,2*/ //行结束符后的数字 = 列;/*&0,1,2*/
		界面列表.v2s列表.assign(1400, 新vecs(10, ""/*0000000*/));
		从头读取(ifs列表读取器, path);
		/*读取*/
		//>while {读取s有2种: ^`or`内容 {^-->再读取==continuewhile; 内容-->`s>>v} }
		auto lambdaS列表读取器 = [&](新i i行的初始值) -> void {
			新i i行 = i行的初始值, 是元素的第一个s = 1;
			行开始符后的数字 = 0;
			/*读取v[][]中一行的s*/
			while (true) {
				ifs列表读取器 >> s读取;
				if (/*匹配-->结束*/s读取 == s文档结束) { breakWhile; }/*if*/
				if (/*匹配^*/(s读取[0] = c行开始符) && (s读取[1]/*只能`个位数*/ == 行开始符后的数字)) {
					/*读取后面的元素*/行开始符后的数字++; 是元素的第一个s = 1;
					continuewhile;
				}/*if*/
				if (/*匹配&*/(s读取[0] = c行结束符) && (s读取[1]/*只能`个位数*/ == i行)) {
					/*读取后面的行*/行开始符后的数字 = 0; i行++;
					continuewhile;
				}/*if*/
				if/*^后的第一个s*/ (是元素的第一个s == 1) {
					界面列表/*s>>v*/.v2s列表[i行][行开始符后的数字].append(s读取);
					是元素的第一个s = 2;
				} else {/*第二个s*/
					界面列表/*s>>v*/.v2s列表[i行][行开始符后的数字].append(" ").append(s读取);
				}/*else*/
			}/*while*/
			};/*lam*/
		//!读取v2s
		lambdaS列表读取器(1);
		//>cout
		新i /*序号*/i行 = 1;
		for (i行; i行 < 2; i行++) {
			cout << std::format("{} {} {}\n", 界面列表.v2s列表[i行][0]/*序号*/, 界面列表.v2s列表[i行][1]/*标题*/, 界面列表.v2s列表[i行][2]/*内容*/);
		}/*for*/
		 //>点击的功能
		检测cmd光标then操作(界面列表.v2s列表);
	}/*void*/
	 /**///▬小组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void cout光标yx(COORD COORD1) {
		cout << std::format("光标 Y={},X={}\n", COORD1.Y, COORD1.X);
	}
	void cout光标yx() {
		get光标位置(); cout << std::format("光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.Y, cmd屏幕缓冲区信息.dwCursorPosition.X);
	}
	void cout光标xy() {
		get光标位置(); cout << std::format("光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.X, cmd屏幕缓冲区信息.dwCursorPosition.Y);
	}
	/**///▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

	/**///▬我不知道▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

};




#endif