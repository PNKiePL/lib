#pragma once
#ifndef AJ_JM_JM_CE_H
#define AJ_JM_JM_CE_H

#include  <E:\lib\cmd.h>
#include  <E:\lib\全局量.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\数字格式.h>
#include  <E:\lib\文件读写.h>
#include  <E:\lib\文字读取.h>
#include  <E:\lib\检测按键是否按下.h>
#include  <E:\lib\计算.h>
//#include  <E:\lib\按键检测的布局.cpp> //会报错 未声明的标识符

///#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
#//define 检测是否按下 check
//#define 显示文字 print_letter
//#define 长字符 gks
//#define ct VK_CONTROL
// 
//#define 四位个数 swgu
//#define 四位个数初始化 swguiuh
//#define 四位个数一帧 swguyv

//extern class 检测按键是否按下;

extern int 按下;
class 按键检测 :public 检测按键是否按下/*,public cmd*/ {
	//GetAsyncKeyState !=0 \ https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getasynckeystate
public:
	数N分<新i, 4> 数四分;
	数N分<int, 5> 数五分;
	数N分<int, 6> 数六分;
	cmd cmd1;
	class计算;
public:
	using 检测按键是否按下::多个之前和现在归零;
	using 检测按键是否按下::之前和现在批量相等;
	using 检测按键是否按下::按键按下次数初始化;
public:
	SYSTEMTIME sys;
	int cmd是否定向 = 0;//?
public:
	/**///▬通用量▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	string 当前时间;
	/**//**///▬记录按键顺序▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	string 记录按键顺序存档路径无头 = ":/PINKIE PIE/记忆/输入流存档/输入流存档.cpp";
	string 记录按键顺序存档路径无头尾 = ":/PINKIE PIE/记忆/输入流存档/";
	string 记录按键顺序存档路径;
	fstream 输入流存档;
	/**//**///▬记录按键次数▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	string 按键次数存档路径 = ":/PINKIE PIE/记忆/按键次数存档/按键次数存档.cpp";
	fstream 按键次数存档fstream;
	string 按键次数lujy = ":/PINKIE PIE/记忆/按键次数存档/按键次数存档.cpp";
	fstream 按键次数cpdh;
	/**///▬▬▬/*显示按键状态*/▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//>检测`按下

	//>设置
	int 禁止输入 = 1;
	int 数字每几位分隔 = 4
		, 按键按下刷新 = 0/*在.cpp*/
		, 按键松开刷新 = 1
		//外观
		, 夜间模式 = 0
		, 文字颜色 = 0, 按键背景颜色 = 7, 按键背景颜色_按下 = 177
		, 字符前空格数量 = 0
		, 字符后空格数量 = 2;
	string s按键和计数之间显示 = 按键和计数之间显示初始值, 按键和计数之间显示初始值 = "0" //计数= 记录按键按下次数
		, 布局末尾显示 = "";
	//>键盘布局`不用改
	COORD 之前的光标坐标;
	/*按下-->清屏`cout*/
	int 键盘布局 = 1, 回车数量 = 1
		/*不需要了*/, 区域之间留空 = 1, 区域之间空格数 = 1;
	/*<行数>*/
	/*记录右边的坐标x,cout空格*/
	template<int 行数>struct 键盘布局info {
		/*IN*/
		int 宽度;
		/*记录,OUT*/
		新vi 每行宽度;
		struct 键盘布局info() {
			每行宽度.assign(行数 + 1, 1);
		}
	};
	键盘布局info<6> 主键盘区;
	键盘布局info<6> 小键盘区;
	void /**/(按键检测::* p当前布局)() = NULL;
public:
	///检测按键按下:
	//>检测和输出是 分开的
	//!检测按键是否按下-->if按键状态有变 {按下-->刷新-->计数+1\ 松开-->刷新};
	按键检测() {
		//刷新后运行-->会一直运行
		总按下次数vec.assign(2, 0);
	}
	void 使用方法() {
		检测全部键是否按下(); 按键显示_cmd();
	}
	void setColor(int cmd颜色) {//改变输出的颜色，比system("color x")快得多
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), cmd颜色); //改背景颜色
	}
	/*
	此事来源
	https://blog.csdn.net/everlasting_20141622/article/details/52222006
	*/
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*零件*/
	void cout空格(int 空格数量) {
		switch (空格数量) {
		default:
			for (size_t i = 0; i < 空格数量; i++) {
				cout << " ";
			}
			break;
		case 0:
			cout << "";
			break;
		case 1:
			cout << " ";
			break;
		case 2:
			cout << "  ";
			break;
		}
	}
	void printf空格(int 空格数量) {
		switch (空格数量) {
		default:
			for (size_t i = 0; i < 空格数量; i++)
			{
				printf(" ");
			}
			break;
		case 0:
			printf("");
			break;
		case 1:
			printf(" ");
			break;
		case 2:
			printf("  ");
			break;
		}
	}
	//!▬▬检测 单按键▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 显示文字_示例(int c1) { //char string wchar_t
		setColor(按键背景颜色); //112 白
		printf("  %c  ", c1);
	}
	//>显示按键状态
	void GetAsyncKey键(int 键码) {
		if (GetKeyState(键码) < 0) { setColor(按键背景颜色_按下); } /*else {
			setColor(按键背景颜色);
		}*/
		printf空格(字符前空格数量);
		printf("%c", 键码);
		printf空格(字符后空格数量);
		setColor(按键背景颜色);
	}
	void GetAsyncKey键(int 键码, string 按键str) {
		if (GetKeyState(键码) & 0x8000) {
			setColor(按键背景颜色_按下);
		} /*else {
			setColor(按键背景颜色);
		}*/
		printf空格(字符前空格数量);
		cout << 按键str;
		printf空格(字符后空格数量);
		setColor(按键背景颜色);
	}
	void 按下，显示(int 键码) {
		if (现在[键码] == 1) {
			setColor(按键背景颜色_按下);
		} /*else {
			setColor(按键背景颜色);
		}*/
		printf空格(字符前空格数量);
		printf("%c", 键码);
		printf空格(字符后空格数量);
		setColor(按键背景颜色);
	};
	void 按下，显示(int 键码, string 按键str) {
		if (现在[键码] == 1) {
			setColor(按键背景颜色_按下);
		}/* else {
			setColor(按键背景颜色);
		}*/
		printf空格(字符前空格数量);
		cout << 按键str;
		printf空格(字符后空格数量);
		setColor(按键背景颜色);
	};
	/*todo 省略`转接层*/
	void GetAsyncKey键2(int 键码, string 按键str) {
		之前和现在相等(键码); //-->重新检测`现在的
		/*!2/4种情况->按键变化,2/4种情况->按键不变*/
		if (GetKeyState(键码) & 0x8000) { //if按下
			现在[键码] = 1; //按下
			if (之前[键码] == 0) {/*不同-->cout*/
				按下 = 1;
				//cmd1.取消定向cout方向();
				setColor(按键背景颜色_按下);
				retu;
			}
			if (之前[键码] == 1) {
				/*不变-->跳过*/
				//按下 = 0;等于终止
			}
		} else {
			现在[键码] = 0; //松开
			if (之前[键码] == 0) {
				/*不变*/
			}
			if (之前[键码] == 1) {
				按下 = 2;
				setColor(按键背景颜色);
				retu;
			}
		}/*else*/
		//记录按下次数(键码, 键码);
		printf空格(字符前空格数量);
		cout << 按键str;
		printf空格(字符后空格数量);
	}
	/**//**///▬控制光标▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*往右下角`变大*/
	int /*长按*/本次按下是否生效 = 0;
	//新vi /*长按*/本次按下是否生效;
	void 弹起键控制cmd光标(int 键码, int 下移, int 右移) {
		之前和现在相等(键码); //-->重新检测`现在的
		if (GetKeyState(键码) & 0x8000) { //if按下
			cmd1.get光标位置();
			cmd1.set光标位置(cmd1.cmd屏幕缓冲区信息.dwCursorPosition.Y + 下移, cmd1.cmd屏幕缓冲区信息.dwCursorPosition.X + 右移);
			if (/*长按*/之前[键码] == 1) {
			}/*if*/
		} else {
			/*!写错位置了*/
		}/*else*/
	}/*void*/
	void 弹起键控制cmd光标2(int 键码, int 下移, int 右移) {
		之前和现在相等(键码); //-->重新检测`现在的
		if (GetKeyState(键码) & 0x8000) { //if按下
			if (之前[键码] == 1) {
				cmd1.get光标位置();
				cmd1.set光标位置(cmd1.cmd屏幕缓冲区信息.dwCursorPosition.Y + 下移, cmd1.cmd屏幕缓冲区信息.dwCursorPosition.X + 右移);
				if (/*是否生效*/之前[键码] == 1) {
					cmd1.set光标位置(cmd1.cmd屏幕缓冲区信息.dwCursorPosition.Y + 下移, cmd1.cmd屏幕缓冲区信息.dwCursorPosition.X + 右移);
				}
				本次按下是否生效 = 1;
			}/*if*/
			if (之前[键码] == 1) {
				if (/*是否生效,坐标是否变化,if 现在=之前*/ cmd1.cmd屏幕缓冲区信息.dwCursorPosition.Y == 之前的光标坐标.Y) {

				}
			}/*if*/
		} else {
			/*!写错位置了*/
		}/*else*/
	}/*void*/
	void 方向键控制cmd光标(int 下移, int 右移) {
		弹起键控制cmd光标(VK_UP, -下移, 0);
		弹起键控制cmd光标(VK_DOWN, 下移, 0);
		弹起键控制cmd光标(VK_LEFT, 0, -右移);
		弹起键控制cmd光标(VK_RIGHT, 0, 右移);
	}
	void 方向键控制cmd光标() {
		方向键控制cmd光标(2, 1);
	}
	/**//**///▬控制光标`then记录坐标▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 方向键控制cmd光标then记录坐标(int 下移, int 右移) {
		//开始-->读取-->行动-->结束-->记录
		/*读取位置*/ {
			//cmd1.set光标位置(cmd1.cmd光标坐标.Y, cmd1.cmd光标坐标.X);
			cmd1.set光标位置(之前的光标坐标.Y, 之前的光标坐标.X); }
		/**/
		方向键控制cmd光标(下移, 右移);
		/*记录位置*/ {
			cmd1.get光标位置();
			//cmd1.cmd光标坐标.Y = cmd1.cmd屏幕缓冲区信息.dwCursorPosition.Y;
			//cmd1.cmd光标坐标.X = cmd1.cmd屏幕缓冲区信息.dwCursorPosition.X;
			之前的光标坐标.Y = cmd1.cmd屏幕缓冲区信息.dwCursorPosition.Y;
			之前的光标坐标.X = cmd1.cmd屏幕缓冲区信息.dwCursorPosition.X; }
	}
	void 方向键控制cmd光标then记录坐标() {
		方向键控制cmd光标then记录坐标(1, 1);
	}
	/**//**///▬显示`按键按下次数▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//>只显示, 不计算 \ 只显示数字
	void 显示计数(int 键码)
	{
		printf空格(字符前空格数量);
		数四分.cout数字(按键按下次数[键码]);
		printf空格(字符后空格数量);
	}
	void 显示计数_会亮(int 键码)
	{
		if (GetKeyState(键码) & 0x8000) {
			setColor(按键背景颜色_按下);
		} else {
			setColor(按键背景颜色);
		}
		printf空格(字符前空格数量);
		数四分.cout数字(按键按下次数[键码]);
		printf空格(字符后空格数量);
	}

	//>只显示, 不计算 \ 显示按键名和 数字
	void 字符加计数(int 键码) { //char string wchar_t
		if (GetKeyState(键码) < 0) { setColor(按键背景颜色_按下); } else {
			setColor(按键背景颜色);
		}
		//开始显示
		printf空格(字符前空格数量);
		printf("%c", 键码);
		if (s按键和计数之间显示 != 按键和计数之间显示初始值)
		{
			cout << s按键和计数之间显示;
		}
		数四分.cout数字(按键按下次数[键码]);
		//末尾
		printf空格(字符后空格数量);
	}
	void 长字符加计数(int 键码, string str) { //GetKeyState 's'
		if (GetKeyState(键码) < 0) { setColor(按键背景颜色_按下); } else {
			setColor(按键背景颜色);
		}
		//开头
		printf空格(字符前空格数量);
		printf("%s", str.c_str());
		if (s按键和计数之间显示 != 按键和计数之间显示初始值)
		{
			cout << s按键和计数之间显示;
		}
		数四分.cout数字(按键按下次数[键码]);
		//末尾
		printf空格(字符后空格数量);
	}
	void GetAsyncKey键加计数(int 键码, string 按键str) {
		if (GetKeyState(键码) & 0x8000) {
			setColor(按键背景颜色_按下);
		} else {
			setColor(按键背景颜色);
		}
		//开头
		printf空格(字符前空格数量);
		cout << 按键str;
		if (/*s!="0"=启用*/s按键和计数之间显示 != 按键和计数之间显示初始值) {
			cout << s按键和计数之间显示;
		}
		数四分.cout数字(按键按下次数[键码]);
		//末尾
		printf空格(字符后空格数量);
	}
	void 按下，显示加计数(int 键码, string 按键str) {
		if (现在[键码] == 1) {
			setColor(按键背景颜色_按下);
		} else {
			setColor(按键背景颜色);
		}
		//开头
		printf空格(字符前空格数量);
		cout << 按键str;
		if (s按键和计数之间显示 != 按键和计数之间显示初始值)
		{
			cout << s按键和计数之间显示;
		}
		数四分.cout数字(按键按下次数[键码]);
		//末尾
		printf空格(字符后空格数量);
		setColor(按键背景颜色);
	};
	//>显示按键加 按下计数 \ 显示按键状态和 按键按下次数 //>只显示, 不计算
	/*显示:*/
	void 字符和次数(int 键码) {
		字符加计数(键码);
	}
	void 长字符和次数(int 键码, string 按键名) {
		长字符加计数(键码, 按键名);
	}
	void GetAsyncKey键和次数(int 键码, string 按键名) {
		GetAsyncKey键加计数(键码, 按键名);
	}
	/**//**///▬布局,显示界面▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 工具栏() {
		int 一行有几个元素 = 10, 共有几行 = 4, 列序号 = 1;
		新vec2s v2s新列表; v2s新列表.assign(4, 新vecs(一行有几个元素, "")); //"mzyb`nzrs"/*没有内容*/
		/*输入vec*/
		//cmd1.v2s列表创建器();
	}/*void*/
	/**///▬▬实现 按键显示▬▬▬▬▬▬▬▬ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void set当前布局() {
		std::cout << format("更换布局") << endl;
		///sleep(11111); //1111实际<2s 11111可11s
		switch (键盘布局) {
		case 1:
			p当前布局 = &按键检测::键盘布局1;
			break;
		case 2:
			p当前布局 = &按键检测::键盘布局2;
			break;
		case 3:
			p当前布局 = &按键检测::键盘布局_按键加计数1;
			break;
		default:
			p当前布局 = &按键检测::键盘布局_按键加计数1;
			break;
		}
	}
	void 按键显示_cmd() {
		//>switch:卡住, 不能运行
		///>键盘布局移出后 \ 计数增加, 不显示其他的

		//>if: 计数不增加
		///>键盘布局移出后 \ 计数增加, 不显示其他的
		//if (键盘布局 == 1){
		//	键盘布局1();
		//}
		//else if (键盘布局 == 2) {
		//	键盘布局2();
		//}

		// TOdo 更换布局
							//p当前布局 = &按键检测::键盘布局1;
		按键检测::p当前布局;
		按键检测::键盘布局1();

	//键盘布局1加计数();
	}
	键盘布局信息 默认键盘布局信息;
	void get查找v中i的位置(新v2i& v2i, int v2i的行数, int v2i的列数, int  要查找的i,/*输出*/int& 行, int& 列) {
		for (size_t i = 0; i < v2i的行数; i++) {
			for (size_t i = 0; i < v2i的列数; i++) {
				if (v2i[v2i的行数][v2i的列数] == 要查找的i) {
					行 = v2i的行数;
					列 = v2i的列数;
				}
			}
		}
	}
	void get查找v中i的位置(/*输入*/键盘布局信息& 键盘信息, int  要查找的i,/*输出*/int& 行, int& 列) {
		for (size_t i = 0; i < 键盘信息.行数; i++) {
			for (size_t i = 0; i < 键盘信息.列数; i++) {
				if (键盘信息.v2i虚拟键码主键盘布局[键盘信息.行数][键盘信息.列数] == 要查找的i) {
					行 = 键盘信息.行数;
					列 = 键盘信息.列数;
				}
			}
		}
	}
	string ret查找v中i对应的s(/*输入*/键盘布局信息& 键盘信息 ,int 要查找的i ) {
		/*找v2i对应位置*/
		int 行, 列;
		get查找v中i的位置(键盘信息, 要查找的i,行, 列);
		retu 默认键盘布局信息.v2s虚拟键码主键盘布局[行][列];
	}
	void 显示v2i中的布局(键盘布局信息& 键盘信息) {
		for (size_t 行 = 1; 行 < 键盘信息.行数; 行++) {
			for (size_t 列 = 1; 列 < 键盘信息.列数; 列++) {
				GetAsyncKey键加计数(键盘信息.v2i虚拟键码主键盘布局[行][列], 键盘信息.v2s虚拟键码主键盘布局[行][列]);
			}
		}/*for*/
	}
	/*加了一层自动查找*/
	void 显示v2i中的布局_加了一层自动查找(键盘布局信息& 键盘信息) {
		for (size_t 行 = 1; 行 < 键盘信息.行数; 行++) {
			for (size_t 列 = 1; 列 < 键盘信息.列数; 列++) {
				GetAsyncKey键加计数(键盘信息.v2i虚拟键码主键盘布局[行][列], ret查找v中i对应的s(键盘信息,键盘信息.v2i虚拟键码主键盘布局[行][列]));
			}
		}/*for*/
	}
	//void 按键显示_cmd() {
	//	system("cls");//清屏
	//	//a[数字]才能运行
	//	//>显示数字, 不修改
	//	数四分.coutvec(总按下次数vec);
	//	cout << '\n';

	//	//>switch:卡住, 不能运行
	//	///>键盘布局移出后 \ 计数增加, 不显示其他的
	//	//switch (键盘布局){case 1:
	//	//	键盘布局1();
	//	//	break;
	//	//case 2:
	//	//	键盘布局2();
	//	//	break;
	//	//default:
	//	//	break;
	//	//}

	//	//>if: 计数不增加
	//	///>键盘布局移出后 \ 计数增加, 不显示其他的
	//	//if (键盘布局 == 1){
	//	//	键盘布局1();
	//	//}
	//	//else if (键盘布局 == 2) {
	//	//	键盘布局2();
	//	//}

	//	// TOdo 更换布局

	//	//键盘布局1();
	//	键盘布局_按键加计数1();
	//	//键盘布局1加计数();
	//}

	/**///▬▬窗口界面`小组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	VOID 补齐空格(键盘布局info<6>& 左边是, 新i 第几行) {
		cmd1.get屏幕缓冲区信息();
		左边是.每行宽度[第几行] =/*坐标-1*/cmd1.cmd屏幕缓冲区信息.dwCursorPosition.X - 1;
		int 差多少空格/*= 宽度-x*/ = 左边是.宽度 - 左边是.每行宽度[第几行];
		if (差多少空格 > 0) {
			/*补齐*/cout空格(差多少空格);
		}/*if*/
	}
	VOID cout光标坐标() {
		cmd1.cout光标yx(cmd1.cmd光标坐标);
	}
	/**///▬▬键盘组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void F1行();
	void 数字行();
	void Q行();
	void CAPS行();
	void SHIFT行();
	void Ctrl行();
	void 鼠标行();

	auto F1加计数行();
	auto 数字加计数行();
	auto Q加计数行();
	auto CAPS加计数行();
	auto SHIFT加计数行();
	auto Ctrl加计数行();

	auto 计数行_Fn行();
	auto 计数行_数字行();
	auto 计数行_Q行();
	auto 计数行_CAPS行();
	auto 计数行_SHIFT行();
	auto 计数行_Ctrl行();
	void 计数布局_不亮();
	void 计数布局_会亮();

	/**///>▬键盘布局▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 键盘布局1();
	void 键盘布局2();
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//>键盘布局_按键+计数
	void 键盘布局_按键加计数1();
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//>键盘布局下面 有计数
	void 键盘布局1加计数();
	////>▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬<
	//!写入 输入流
	//零件
	string ret系统时间str(string str) {
		GetLocalTime(&sys);
		str.append(to_string(sys.wYear));
		str.append(".");
		str.append(to_string(sys.wMonth));
		str.append(".");
		str.append(to_string(sys.wDay));
		str.append(" ");
		str.append(to_string(sys.wHour)); //h
		str.append(".");
		str.append(to_string(sys.wMinute)); //m
		str.append(" ");
		str.append(to_string(sys.wSecond));
		str.append(".");
		str.append(to_string(sys.wMilliseconds));
		str.append(".cpp");
		return str;
	}

	void 写入输入流存档之一个按键(fstream 输入流存档, string 存档路径) {
		//按键检测 按键检测;
		//按键检测.写入输入流存档__一个按键( 输入流存档,  存档路径);
	}

	void 写入输入流存档__一个按键(int gks, string ajjmmy) {
		//string gksstring = to_string(gks);
		//写入一个按键
		if (GetKeyState(gks) < 0) {
			输入流存档 << ajjmmy;
			输入流存档 << ";";
		}
	}
	void 写入输入流存档__一个按键(int gks) {
		//写入一个按键
		if (GetKeyState(gks) < 0) {
			输入流存档 << gks;
			输入流存档 << ";";
		}
	}
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//主体
	void 写入输入流存档__主体() {
		/*//\
	,.{0,99}["]$
		//	\
	^[0-9]{1,99}.{0,99}["]$
		//	\
	^[0-9]{0,99}$
		*/

		写入输入流存档__一个按键(VK_ESCAPE, "ESC ");
		写入输入流存档__一个按键(VK_F1, " F1");
		写入输入流存档__一个按键(VK_F2, " F2");
		写入输入流存档__一个按键(VK_F3, " F3");
		写入输入流存档__一个按键(VK_F4, " F4");
		写入输入流存档__一个按键(VK_F5, " F5");
		写入输入流存档__一个按键(VK_F6, " F6");
		写入输入流存档__一个按键(VK_F7, " F7");
		写入输入流存档__一个按键(VK_F8, " F8");
		写入输入流存档__一个按键(VK_F9, " F9");
		写入输入流存档__一个按键(VK_F10, " F10");
		写入输入流存档__一个按键(VK_F11, " F11");
		写入输入流存档__一个按键(VK_F12, " F12");
		写入输入流存档__一个按键(VK_DELETE, "DELETE");
		写入输入流存档__一个按键('0');
		写入输入流存档__一个按键('1');
		写入输入流存档__一个按键('2');
		写入输入流存档__一个按键('3');
		写入输入流存档__一个按键('4');
		写入输入流存档__一个按键('5');
		写入输入流存档__一个按键('6');
		写入输入流存档__一个按键('7');
		写入输入流存档__一个按键('8');
		写入输入流存档__一个按键('9');
		写入输入流存档__一个按键('9');
		写入输入流存档__一个按键('0');
		写入输入流存档__一个按键(VK_TAB, "TAB");
		写入输入流存档__一个按键('Q');
		写入输入流存档__一个按键('W');
		写入输入流存档__一个按键('E');
		写入输入流存档__一个按键('R');
		写入输入流存档__一个按键('T');
		写入输入流存档__一个按键('Y');
		写入输入流存档__一个按键('U');
		写入输入流存档__一个按键('I');
		写入输入流存档__一个按键('O');
		写入输入流存档__一个按键('P');
		写入输入流存档__一个按键(VK_CAPITAL, "CAPS");
		写入输入流存档__一个按键('A');
		写入输入流存档__一个按键('S');
		写入输入流存档__一个按键('D');
		写入输入流存档__一个按键('F');
		写入输入流存档__一个按键('G');
		写入输入流存档__一个按键('H');
		写入输入流存档__一个按键('J');
		写入输入流存档__一个按键('K');
		写入输入流存档__一个按键('L');
		写入输入流存档__一个按键(VK_RETURN, "RETURN");
		//写入输入流存档__一个按键(VK_SHIFT, "SHIFT");
		写入输入流存档__一个按键('Z');
		写入输入流存档__一个按键('X');
		写入输入流存档__一个按键('C');
		写入输入流存档__一个按键('V');
		写入输入流存档__一个按键('B');
		写入输入流存档__一个按键('N');
		写入输入流存档__一个按键('M');
		写入输入流存档__一个按键(VK_SHIFT, "SHIFT");
		写入输入流存档__一个按键(VK_UP, "UP");
		//写入输入流存档__一个按键(VK_CONTROL, "Ctrl");
		写入输入流存档__一个按键(VK_LWIN, "Win");
		//写入输入流存档__一个按键(VK_LMENU, "LAlt");
		写入输入流存档__一个按键(VK_MENU, "Alt");
		写入输入流存档__一个按键(VK_SPACE, "         SPACE         ");
		写入输入流存档__一个按键(VK_RWIN, "Win");
		//写入输入流存档__一个按键(VK_MENU, "Alt");
		//写入输入流存档__一个按键(VK_RMENU, "RAlt");
		写入输入流存档__一个按键(VK_CONTROL, "Ctrl");
		写入输入流存档__一个按键(VK_LEFT, "LEFT");
		写入输入流存档__一个按键(VK_DOWN, "DOWN");
		写入输入流存档__一个按键(VK_RIGHT, "RIGHT");
		写入输入流存档__一个按键(VK_PRIOR, "PRIOR");
		写入输入流存档__一个按键(VK_NEXT, "NEXT");
		写入输入流存档__一个按键(VK_HOME, "HOME");
		写入输入流存档__一个按键(VK_END, "END");
		写入输入流存档__一个按键(VK_BACK, "  BACK  ");
		写入输入流存档__一个按键(VK_DIVIDE, " /");
		写入输入流存档__一个按键(VK_MULTIPLY, " *");
		写入输入流存档__一个按键(VK_SUBTRACT, " -");
		写入输入流存档__一个按键(VK_ADD, " +");
		写入输入流存档__一个按键(VK_SEPARATOR, "SEPARATOR");
		写入输入流存档__一个按键(VK_DECIMAL, "DECIMAL");
		写入输入流存档__一个按键(VK_NUMPAD7, " N7");
		写入输入流存档__一个按键(VK_NUMPAD8, " N8");
		写入输入流存档__一个按键(VK_NUMPAD9, " N9");
		写入输入流存档__一个按键(VK_NUMPAD4, " N4");
		写入输入流存档__一个按键(VK_NUMPAD5, " N5");
		写入输入流存档__一个按键(VK_NUMPAD6, " N6");
		写入输入流存档__一个按键(VK_NUMPAD1, " N1");
		写入输入流存档__一个按键(VK_NUMPAD2, " N2");
		写入输入流存档__一个按键(VK_NUMPAD3, " N3");
		写入输入流存档__一个按键(VK_NUMPAD0, " N0");

	}
	void 写入输入流存档()
	{
		从末尾读写(输入流存档, 记录按键顺序存档路径);
		//$ 时间 \
					^ 按键
				// 
		输入流存档 << "\n";
		//输入流存档 << endl;
		输入流存档 << '$';
		输入流存档 << " ";
		GetLocalTime(&sys);

		//fprintf (fp, "%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n",
		//	sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
		//	sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);

		//年月日
		/*uijm = to_string(sys.wYear);
		输入流存档 << uijm;
			输入流存档 << ".";
		uijm = to_string(sys.wMonth);
		输入流存档 << uijm;
			输入流存档 << ".";
		uijm = to_string(sys.wDay);
		输入流存档 << uijm;
			输入流存档 << ".";*/
			//时间
		输入流存档 << to_string(sys.wHour);
		输入流存档 << ".";
		输入流存档 << to_string(sys.wMinute);
		输入流存档 << ".";
		输入流存档 << to_string(sys.wSecond);
		输入流存档 << ".";
		输入流存档 << to_string(sys.wMilliseconds);

		//输入流存档 << ".";
	//uijm = to_string(sys.wDayOfWeek);
	//输入流存档 << uijm;
		输入流存档 << '\n';
		//
		输入流存档 << '^' << " ";
		//写按键
		写入输入流存档__主体();
		//输入流存档 << '\n';
		//输入流存档 << "\n";
		//输入流存档 << endl;

		输入流存档.close();
	}
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//out输入流存档
	void cout输入流存档__一个按键(char gks, string ajjmmy)
	{
		//string gksstring= to_string(gks);
		if (GetKeyState(gks) < 0) {
			cout << ajjmmy;
			cout << ";";
		}
	}
	void cout输入流存档__一个按键(char gks)
	{
		if (GetKeyState(gks) < 0) {
			cout << gks;
			cout << ";";
		}
	}
	void cout输入流存档__主体()
	{
		cout输入流存档__一个按键(VK_ESCAPE, "ESC ");
		cout输入流存档__一个按键(VK_F1, " F1");
		cout输入流存档__一个按键(VK_F2, " F2");
		cout输入流存档__一个按键(VK_F3, " F3");
		cout输入流存档__一个按键(VK_F4, " F4");
		cout输入流存档__一个按键(VK_F5, " F5");
		cout输入流存档__一个按键(VK_F6, " F6");
		cout输入流存档__一个按键(VK_F7, " F7");
		cout输入流存档__一个按键(VK_F8, " F8");
		cout输入流存档__一个按键(VK_F9, " F9");
		cout输入流存档__一个按键(VK_F10, " F10");
		cout输入流存档__一个按键(VK_F11, " F11");
		cout输入流存档__一个按键(VK_F12, " F12");
		cout输入流存档__一个按键(VK_DELETE, "DELETE");
		cout输入流存档__一个按键('0');
		cout输入流存档__一个按键('1');
		cout输入流存档__一个按键('2');
		cout输入流存档__一个按键('3');
		cout输入流存档__一个按键('4');
		cout输入流存档__一个按键('5');
		cout输入流存档__一个按键('6');
		cout输入流存档__一个按键('7');
		cout输入流存档__一个按键('8');
		cout输入流存档__一个按键('9');
		cout输入流存档__一个按键('9');
		cout输入流存档__一个按键('0');
		cout输入流存档__一个按键(VK_TAB, "TAB");
		cout输入流存档__一个按键('Q');
		cout输入流存档__一个按键('W');
		cout输入流存档__一个按键('E');
		cout输入流存档__一个按键('R');
		cout输入流存档__一个按键('T');
		cout输入流存档__一个按键('Y');
		cout输入流存档__一个按键('U');
		cout输入流存档__一个按键('I');
		cout输入流存档__一个按键('O');
		cout输入流存档__一个按键('P');
		cout输入流存档__一个按键(VK_CAPITAL, "CAPS");
		cout输入流存档__一个按键('A');
		cout输入流存档__一个按键('S');
		cout输入流存档__一个按键('D');
		cout输入流存档__一个按键('F');
		cout输入流存档__一个按键('G');
		cout输入流存档__一个按键('H');
		cout输入流存档__一个按键('J');
		cout输入流存档__一个按键('K');
		cout输入流存档__一个按键('L');
		cout输入流存档__一个按键(VK_RETURN, "RETURN");
		cout输入流存档__一个按键(VK_SHIFT, "SHIFT");
		cout输入流存档__一个按键('Z');
		cout输入流存档__一个按键('X');
		cout输入流存档__一个按键('C');
		cout输入流存档__一个按键('V');
		cout输入流存档__一个按键('B');
		cout输入流存档__一个按键('N');
		cout输入流存档__一个按键('M');
		cout输入流存档__一个按键(VK_SHIFT, "SHIFT");
		cout输入流存档__一个按键(VK_UP, "UP");
		cout输入流存档__一个按键(VK_CONTROL, "Ctrl");
		cout输入流存档__一个按键(VK_LWIN, "Win");
		cout输入流存档__一个按键(VK_LMENU, "Alt");
		cout输入流存档__一个按键(VK_MENU, "Alt");
		cout输入流存档__一个按键(VK_SPACE, "         SPACE         ");
		cout输入流存档__一个按键(VK_RWIN, "Win");
		cout输入流存档__一个按键(VK_MENU, "Alt");
		cout输入流存档__一个按键(VK_RMENU, "Alt");
		cout输入流存档__一个按键(VK_CONTROL, "Ctrl");
		cout输入流存档__一个按键(VK_LEFT, "LEFT");
		cout输入流存档__一个按键(VK_DOWN, "DOWN");
		cout输入流存档__一个按键(VK_RIGHT, "RIGHT");
		cout输入流存档__一个按键(VK_PRIOR, "PRIOR");
		cout输入流存档__一个按键(VK_NEXT, "NEXT");
		cout输入流存档__一个按键(VK_HOME, "HOME");
		cout输入流存档__一个按键(VK_END, "END");
		cout输入流存档__一个按键(VK_BACK, "  BACK  ");
		cout输入流存档__一个按键(VK_DIVIDE, " /");
		cout输入流存档__一个按键(VK_MULTIPLY, " *");
		cout输入流存档__一个按键(VK_SUBTRACT, " -");
		cout输入流存档__一个按键(VK_ADD, " +");
		cout输入流存档__一个按键(VK_SEPARATOR, "SEPARATOR");
		cout输入流存档__一个按键(VK_DECIMAL, "DECIMAL");
		cout输入流存档__一个按键(VK_NUMPAD7, " N7");
		cout输入流存档__一个按键(VK_NUMPAD8, " N8");
		cout输入流存档__一个按键(VK_NUMPAD9, " N9");
		cout输入流存档__一个按键(VK_NUMPAD4, " N4");
		cout输入流存档__一个按键(VK_NUMPAD5, " N5");
		cout输入流存档__一个按键(VK_NUMPAD6, " N6");
		cout输入流存档__一个按键(VK_NUMPAD1, " N1");
		cout输入流存档__一个按键(VK_NUMPAD2, " N2");
		cout输入流存档__一个按键(VK_NUMPAD3, " N3");
		cout输入流存档__一个按键(VK_NUMPAD0, " N0");
	}
	void cout输入流存档()
	{
		cout << '$' << " ";
		GetLocalTime(&sys);
		printf("%4d/%02d/%02d %02d:%02d:%02d.%03d 星期%1d\n",
			sys.wYear, sys.wMonth, sys.wDay, sys.wHour, sys.wMinute,
			sys.wSecond, sys.wMilliseconds, sys.wDayOfWeek);
		//
		cout << '^' << " ";
		cout输入流存档__主体();
		cout << '\n';
	}
	//======================================================================//======================================================================





};
//----------------------------------------------------------------------//----------------------------------------------------------------------
//======================================================================//======================================================================











#endif