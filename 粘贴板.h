#pragma once
#ifndef 粘贴板_H 
#define 粘贴板_H

/*
E:\lib\预编译头文件.h
*/
//C艹头文件
#include  <E:\lib\头文件 c++.h>
///#include  <E:\lib\头文件 c++ 2.h>
#include  <E:\lib\头文件 opcv.h>
#include  <E:\lib\define.h>
#include  <E:\lib\中文define.h>
#include  <E:\lib\namespace\简写.h>
#include  <E:\lib\数字格式.h>
#include  <E:\lib\cmd.h>
#include  <E:\lib\时间.h>
#include  <E:\lib\文件读写.h>
#include  <E:\lib\文字读取.h>

class 粘贴板 {
public:
	按键检测 AnJmJmCe;
	cmd cmd1;
public:
	//▬窗口▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	int 当前页面 = 1, 页面数量 = 1, 当前工具栏 = 1, 工具栏数量 = 1
		, 当前工具栏页面 = 1, 工具栏页面数量 = 1;
	//页面{ }
	/*0=*/
	/*1=粘贴板*/
	/*2=设置*/
	/*3=*/
	/*11=*/

public:
	//▬窗口▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 刷新窗口() {

	}
	//▬粘贴板▬▬▬▬▬	\<https://www.php.cn/faq/410160.html>▬▬▬▬▬▬
	char* 读取复制内容_EmptyClipboard() {
		//#include <iostream>#include <process.h>#include <windows.h>using namespace std;int main()
		HWND hwnd粘贴板 = GetClipboardOwner(); //获取当前剪贴板所属的窗口句柄
		if (!OpenClipboard(hwnd粘贴板)) { //no打开剪贴板
			std::cout << format("OpenClipboard()失败!") << endl;
			return 0;
		}
		if (IsClipboardFormatAvailable(CF_TEXT)) {
			HANDLE hcil数据p = GetClipboardData(CF_TEXT); //>读取复制内容
			char* 数据p;	数据p = (char*)GlobalLock(hcil数据p); //>锁住
			GlobalUnlock(hcil数据p); //内存控制佝柄解锁，其他进程可以访问
			EmptyClipboard(); //>清空剪贴板，这一步才真正拥有剪贴板
			CloseClipboard(); //关闭剪贴板
			Sleep(10000);
			return 数据p;
			//return &数据p;
		}
	}
	char* 读取复制内容() {
		//#include <iostream>#include <process.h>#include <windows.h>using namespace std;int main()
		HWND hwnd粘贴板 = GetClipboardOwner(); //获取当前剪贴板所属的窗口句柄
		if (!OpenClipboard(hwnd粘贴板)) { //no打开剪贴板
			std::cout << format("OpenClipboard()失败!") << endl;
			return 0;
		}
		if (IsClipboardFormatAvailable(CF_TEXT)) {
			HANDLE hcil数据p = GetClipboardData(CF_TEXT); //>读取复制内容
			char* 数据p;	数据p = (char*)GlobalLock(hcil数据p); //>锁住
			GlobalUnlock(hcil数据p); //内存控制佝柄解锁，其他进程可以访问
			CloseClipboard(); //关闭剪贴板
			Sleep(10000);
			return 数据p;
			//return &数据p;
		}
	}
	//▬path▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 打开path(string path) { //<https://blog.csdn.net/springontime/article/details/19967243>
		//string 指令头 = "start ";
		string 指令头 = "explorer.exe ";
		string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
		system(/*(const char )*/指令.c_str()); /*system("explorer.exe     folderpath"); */
	}
	//2023年12月14日07:16:28
	int 是否是path(string path) {
		for (size_t 第几位 = 0; 第几位 < path.size(); 第几位++) {
			if (path[第几位] == ':')if (path[第几位 + 1] == '\\' || path[第几位 + 1] == '/') {
				return 1;
			}
		}
		return 0;
	}

	//?不cout
	//void 复制后打开path(int 检测的间隔ms, int 触发后的等待ms) {
	//	AnJmJmCe.之前和现在初始化(2);
	//	while (true) {
	//		//!循环{检测->打开path}
	//		AnJmJmCe.只检测是否按下(0, VK_CONTROL);
	//		AnJmJmCe.只检测是否按下(1, 'C');
	//		if (AnJmJmCe.ret之前和现在是否不同(2) == 1) {
	//			std::cout << format("按键不同()") << endl;
	//			if (AnJmJmCe.现在[0] == 1 && AnJmJmCe.现在[1] == 1) { //按下复制了
	//				//打开path
	//				std::cout << format("打开path()") << endl;
	//				打开path(读取复制内容());
	//				Sllep(触发后的等待ms);
	//			}
	//		}
	//		AnJmJmCe.之前和现在批量相等(2);
	//		Sllep(检测的间隔ms);
	//	}
	//}

	void 复制后打开path(int 检测的间隔ms, int 复制后的等待ms, int 打开path后的等待ms) {
		cmd1.set窗口名(L"粘贴板+打开文件夹 2023年12月18日");
		//cmd1.set窗口大小(16, 4);
		///cmd1.set字的大小乘(0.5,0.5);
		///cmd1.set字的大小乘(2,1); //>X没影响
		cmd1.set字的大小(14, 14); //>X没影响
		system("mode con cols=32 lines=32"); //至少8*4==方形
		std::cout << format("你好{ }") << endl;
		AnJmJmCe.之前和现在初始化(2);
		while (true) {
			//!循环{检测->打开path}
			if (GetKeyState(VK_CONTROL) & 0x8000) { //按下ctrl
				if (GetKeyState('C') & 0x8000) { //按下c
					Sleep(复制后的等待ms);
					string s复制内容 = 读取复制内容();
					std::cout << format("if(是path)") << endl;
					//>cout所有粘贴内容
					std::cout << std::format("复制的size={}\n{}\n", s复制内容.size(), s复制内容);
					//打开path
					if (是否是path(s复制内容) == 1) {
						std::cout << format("打开path()") << endl;
						打开path(s复制内容);
						Sleep(打开path后的等待ms);
					}
				}
			}
			Sleep(检测的间隔ms);
		}
	}
public:
};

int main() {
	粘贴板 VjTxBj;
	VjTxBj.复制后打开path(10, 10, 10);
	std::cout << "Hello World!\n";
}

#endif