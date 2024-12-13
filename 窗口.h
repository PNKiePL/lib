#pragma once
#ifndef 窗口_H
#define 窗口_H

#include  <E:\lib\头文件 c++.h>
//头文件1
#include  <E:\lib\define.h>
#include  <E:\lib\中文define.h>

//#include  <E:\lib\全局量.h>
#include  <E:\lib\执行.h>
#include  <E:\lib\鼠标.h>
//#include  <E:\lib\按键.h>
//#include  <E:\lib\时间.h>

using namespace std;

class 窗口{
public:
	鼠标 UuBc;
	////类型转换 vrh;/*?未知重写说明书*/
public:
	/**///   >窗口信息
	HWND 窗口hwnd;
	HDC 窗口hdc;
	HDC create窗口hdc;
	HBITMAP create窗口map;
	BITMAPINFO bitmap信息;
	COORD 鼠标坐标;

	/*
	typedef struct tagRECT
	{
	LONG    left;
	LONG    top;
	LONG    right;
	LONG    bottom;
	} RECT, *PRECT, NEAR *NPRECT, FAR *LPRECT;
	*/
	/*struct*/ tagRECT 窗口Rect{ //用 *=& 引用 \ 0, 0, 0, 0
	}; ////tagRECT.LPRECT;
	LPRECT 窗口Rect_p = &窗口Rect; //>woc \ https://stackoverflow.com/questions/10851278/i-cant-get-hold-of-lprect-structure-data-what-im-doing-wrong

	COORD 桌面分辨率;
	COORD 主屏分辨率;
	COORD 窗口分辨率;
	COORD 图片分辨率;

	//  >图片内容
	int 图片Sizei;
	char* 图片sizec_p;
	///LPVOID 截图Datalpvoid = nullptr; //LPVOID 只是 void* 的 Windows API typedef; https://stackoverflow.com/questions/1987957/difference-between-lpvoid-and-void

public:
	/**///▬胶水环节▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void get鼠标坐标ANDc鼠标坐标(){/*get坐标ANDc坐标*//*2024年11月14日09:03:17*/
		鼠标坐标 = UuBc.ret坐标();c鼠标坐标();
	}/*void*/
	void get鼠标坐标ANDc鼠标坐标(COORD  &鼠标坐标){
		鼠标坐标 = UuBc.ret坐标();c鼠标坐标();
	}/*void*/
	/**///▬窗口信息▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*hwnd-->rectANDclassName*/
	void get用hwnd得窗口info(/*输入输出*/窗口info& 窗口)/*get用hwndGet窗口info*/{/*前置变量.h-->窗口.h*/
		get窗口Rect(窗口.hwnd, 窗口.Rect);
		getclassName(窗口.hwnd, 窗口.className);
	}/*void*/
	/*hwnd-->Rect+className*/
	void get前台窗口info(窗口info& 窗口){/*前置变量.h-->窗口.h*/
		窗口.hwnd = ret前台();
		get窗口Rect(窗口.hwnd, 窗口.Rect);
		getclassName(窗口.hwnd, 窗口.className);
	}/*void*/
	/*className+windowName-->rectANDhwnd*/
	void get用className得窗口info(/*输入输出*/窗口info& 窗口)/*get用hwndGet窗口info*/{/*前置变量.h-->窗口.h*/
		get窗口hwnd((LPCSTR)窗口.className, (LPCSTR)窗口.windowName, 窗口.hwnd);
		get窗口Rect(窗口.hwnd, 窗口.Rect); 窗口.窗口尺寸y=窗口.Rect.bottom-窗口.Rect.top,窗口.窗口尺寸x=窗口.Rect.right-窗口.Rect.left;
	}/*void*/
	/**///COUT
	void c窗口info(窗口info& 窗口){
		cout3("hwnd={}", 窗口.hwnd, "\n");
		cout3("hdc={}", 窗口.hdc, "\n");
		/*className*/
		////cout3("className={}", /*vrh.TOs*/(string)T2A(窗口.className),"\n");
		//cout3("className={}", /*vrh.TOs*/string (T2A(窗口.className)),"\n");
		////::coutsf("&className={}\n", &窗口.className);
		cout3("&className=", &窗口.className,"\n");
		/*windowName*/
		////::coutsf("&windowName={}\n", &窗口.windowName);
		cout3("&windowName=", &窗口.windowName,"\n");
		/*Rect*/
		coutsf("rect{} ", "{");
		coutsf("top={}", 窗口.Rect.top);
		coutsf(" bottom={}", 窗口.Rect.bottom);
		coutsf(" left={}", 窗口.Rect.left);
		coutsf(" right={}", 窗口.Rect.right);
		coutsf(" {}\n", "}");
		coutsf("窗口尺寸y={},窗口尺寸x={}\n", 窗口.窗口尺寸y,窗口.窗口尺寸x);
		coutsf("{}\n", "");
	}/*void*/
	void get用hwnd得窗口infoTHENc(窗口info& 窗口){/*前置变量.h-->窗口.h*/
		get用hwnd得窗口info(窗口);
		c窗口info(窗口);
	}/*void*/
	/*hwnd-->Rect+className-->c*/
	void get前台窗口infoTHENc(窗口info& 窗口){/*前置变量.h-->窗口.h*/
		get前台窗口info(窗口);
		c窗口info(窗口);
	}/*void*/
	void get用className得窗口infoTHENc(/*输入输出*/窗口info& 窗口){
		get用className得窗口info(窗口);
		c窗口info(窗口);
	}/*void*/
	/**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*cout*/
	void cout窗口Rect(tagRECT& 窗口Rect){
		cout1("top= ", 窗口Rect.top);
		cout1("bottom= ", 窗口Rect.bottom);
		cout1("left= ", 窗口Rect.left);
		cout1("right= ", 窗口Rect.right);
	}/*void*/
	void c窗口Rect(tagRECT& 窗口Rect){
		cout窗口Rect(窗口Rect);
	}/*void*/
	/*ret*/
	/*不可以`0000000000000000*/
	HWND ret聚焦(){
		retu GetFocus();
	}/*HWND*/
	/*可以*/
	HWND ret前台(){
		retu GetForegroundWindow();
	}/*HWND*/
	HWND ret窗口hwnd(LPCSTR lpClassName, LPCSTR lpWindowName){
		retu  FindWindowA(lpClassName, lpWindowName);
	}/*HWND*/
	int ret是否聚焦(HWND h对比窗口){
		if( GetForegroundWindow()==h对比窗口 ){
			retu 1;
		}
	}/*int*/
	void c鼠标坐标(){
		鼠标坐标 = UuBc.ret坐标();
		couta3("鼠标坐标y=", 鼠标坐标.Y, endl);
		couta3("鼠标坐标x=", 鼠标坐标.X, endl);
	}/*void*/
	/*get*/
	COORD ret屏幕分辨率(){
		//屏幕分辨率 //GetSystemMetrics 检索指定的系统指标或系统配置设置。\ 检索到的所有维度都以像素为单位。\https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getsystemmetrics
		主屏分辨率.X = GetSystemMetrics(SM_CXSCREEN); //X
		主屏分辨率.Y = GetSystemMetrics(SM_CYSCREEN); //Y
		retu 主屏分辨率;
	}/*COORD*/
	void cout屏幕分辨率(){
		主屏分辨率 = ret屏幕分辨率();
		cout2("主屏宽= ", 主屏分辨率.X);
		cout2("主屏高= ", 主屏分辨率.Y);
	}/*void*/
	void cout窗口宽高(){
		GetWindowRect(窗口hwnd, 窗口Rect_p); //?下一句会引发异常: \ 0xC0000005: 写入位置 0x0000000000000000 时发生访问冲突。
		cout1(窗口Rect.left); //>无窗口->? \ 引发异常 //383
		cout1(窗口Rect.right);					 //	2365
		cout1(窗口Rect.top);						//	320
		cout1(窗口Rect.bottom);					//	1452
		///long a = 窗口Rect_p->left;
		///long* a = &(窗口Rect_p->left);
		////long a = 窗口Rect.RECT->left;
		///cout << a;
	}/*void*/
	void get窗口宽高(){
		GetWindowRect(窗口hwnd, 窗口Rect_p);
		窗口分辨率.Y = 窗口Rect.bottom-窗口Rect.top;
		窗口分辨率.X = 窗口Rect.right-窗口Rect.left;
	}/*void*/
	void get窗口Rect(){
		GetWindowRect(窗口hwnd, 窗口Rect_p);
		窗口分辨率.Y = 窗口Rect.bottom-窗口Rect.top;
		窗口分辨率.X = 窗口Rect.right-窗口Rect.left;
	}/*void*/
	void get窗口Rect(/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect){
		LPRECT 窗口Rect_p = &窗口Rect;
		GetWindowRect(窗口hwnd, 窗口Rect_p);
		窗口Rect_p = nullptr;
	}/*void*/
	void get窗口Rect(/*输入*/HWND 窗口hwnd){
		//get窗口Rect(窗口hwnd,窗口Rect);
		LPRECT 窗口Rect_p = &窗口Rect;
		GetWindowRect(窗口hwnd, 窗口Rect_p);
		窗口Rect_p = nullptr;
	}/*void*/
	void get窗口分辨率(/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect){
		get窗口Rect(/*输入*/ 窗口hwnd,/*输出*/ 窗口Rect);
		窗口分辨率.Y = 窗口Rect.bottom-窗口Rect.top;
		窗口分辨率.X = 窗口Rect.right-窗口Rect.left;
	}/*void*/
	void getclassName(/*输入*/HWND 窗口hwnd,/*输出*/LPTSTR& 窗口className){
		GetClassName(窗口hwnd, 窗口className, 1400);
	}/*void*/
	void get窗口hwnd(LPCSTR lpClassName, LPCSTR lpWindowName, /*输出*/HWND& hwnd){
		hwnd = FindWindowA(lpClassName, lpWindowName);
	}/*void*/
	/**/ //▬零件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 
	/**/ //窗口置顶▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*不能用*/
	void  把窗口带到前台(HWND hWnd){ /*（设为前景窗口） https://blog.csdn.net/hurryboylqs/article/details/84986590>*/
		HWND hCurWnd = ::GetForegroundWindow();
		DWORD dwMyID = ::GetCurrentThreadId();
		DWORD dwCurID = ::GetWindowThreadProcessId(hCurWnd, NULL);
		::AttachThreadInput(dwCurID, dwMyID, TRUE);
		::SetForegroundWindow(hWnd);
		::AttachThreadInput(dwCurID, dwMyID, FALSE);
	}/*void*/
	/*不能用*/
	/*将当前线程附到新的置顶线程上，再置顶 https://blog.csdn.net/weixin_45525272/article/details/116452142 */
	BOOL OnForceShow(HWND hWnd){
		HWND hForeWnd = NULL;
		DWORD dwForeID = 0;
		DWORD dwCurID = 0;
		hForeWnd = ::GetForegroundWindow();
		dwCurID = ::GetCurrentThreadId();
		dwForeID = ::GetWindowThreadProcessId(hForeWnd, NULL);
		::AttachThreadInput(dwCurID, dwForeID, TRUE);
		::ShowWindow(hWnd, SW_SHOWNORMAL);
		::SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 0, 0, SWP_NOSIZE|SWP_NOMOVE);
		::SetWindowPos(hWnd, HWND_NOTOPMOST, 0, 0, 0, 0, SWP_NOSIZE|SWP_NOMOVE);
		::SetForegroundWindow(hWnd);
		// 将前台窗口线程贴附到当前线程（也就是程序A中的调用线程）
		::AttachThreadInput(dwCurID, dwForeID, FALSE);
		return TRUE;
	}/*BOOL*/
	int set置顶(HWND hWnd){
		//HWND hWnd = ::GetForegroundWindow();
		if( OnForceShow(hWnd) ){
			return TRUE;
		}/*if*/
		::SetWindowPos(hWnd, HWND_TOPMOST, 0, 0, 100, 100, SWP_NOMOVE|SWP_NOSIZE);
		return FALSE;
	}/*int*/
	void set窗口到顶层(HWND& hwnd){
		SetWindowPos(hwnd, 0, 0, 0, 0, 0, !SWP_HIDEWINDOW/*隐藏窗口*/|SWP_NOMOVE/*位置*/|SWP_NOSIZE/*大小*/);
	}/*void*/
	void 关闭窗口(LPTSTR windowName, LPTSTR className){/*可以*/
		CloseWindow( ret窗口hwnd((LPCSTR)className, (LPCSTR)windowName) );
	}/*void*/
	void 关闭网易云广告窗口(){/*可以*/
		关闭窗口( (LPTSTR)"CloudMusic SystemHint",(LPTSTR)"SystemHintWindow");
	}/*void*/
	//▬组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 

	//▬2▬功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 

	//备份▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 

public:

public:



};


//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#endif // !1
//#include  <E:\lib\截图.cpp>
