#pragma once
#ifndef 截图_H
#define 截图_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>
//头文件1
#include  <E:\lib\define.h>
#include  <E:\lib\中文define.h>

#include  <E:\lib\全局量.h>
#include  <E:\lib\执行.h>
#include  <E:\lib\鼠标.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\时间.h>

#include  <E:\lib\c++ opencv数字图像处理.h>
//#include  <E:\lib\截图.cpp>

using namespace cv;
using namespace std;

class 截图 {
public:
	初始化 初始化;
	cpp_opencv数字图像处理 opencv数字图像处理;

public:
	/**///窗口信息
	HWND 窗口hwnd;
	HDC 窗口hdc;
	HDC create窗口hdc;
	HBITMAP create窗口map;
	BITMAPINFO bitmap信息;
	/*struct*/ tagRECT 窗口Rect{ //用 *=& 引用 \ 0, 0, 0, 0
	}; ////tagRECT.LPRECT;
	LPRECT 窗口Rect_p = &窗口Rect; //>woc \ https://stackoverflow.com/questions/10851278/i-cant-get-hold-of-lprect-structure-data-what-im-doing-wrong

	int 桌面宽; //v整数
	int 桌面高;
	int 主屏宽;
	int 主屏高;
	int 窗口宽;
	int 窗口高;
	int 图片宽;
	int 图片高;

	/**///>图片内容
	int 图片Sizei;
	char* 图片sizec_p;
	///LPVOID 截图Datalpvoid = nullptr; //LPVOID 只是 void* 的 Windows API typedef; https://stackoverflow.com/questions/1987957/difference-between-lpvoid-and-void
	/**///设置
	int OpenCV类型;
public:
	// >按顺序加载
	截图() {
		get屏幕分辨率();
		// >窗口hwnd-->窗口hdc-->create窗口hdc-->create窗口map-->SelectObject-->StretchBlt复制位图
		窗口hwnd = GetDesktopWindow(); //hwnd \ 返回值是窗口窗口的句柄 \ https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getdesktopwindow
		///HDC memory设备Contexthdc = CreateCompatibleDC(0); //Createhdc 创建与指定设备兼容的内存设备上下文 (DC) \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-createcompatibledc
		截图初始化();
	}
	截图(LPCSTR lpClassName, LPCSTR lpWindowName) {
		// >get屏幕分辨率-->窗口hwnd-->初始化
		get屏幕分辨率();
		// !窗口hwnd-->窗口hdc-->create窗口hdc-->create窗口map-->SelectObject-->StretchBlt复制位图
		窗口hwnd = FindWindowA(lpClassName, lpWindowName);
		截图初始化();
	}
	//截图(LPCSTR lpClassName, LPCSTR lpWindowName, int& 图片宽, int& 图片高, int OpenCV类型);
	~截图() {
		delete[] 图片sizec_p; delete[] 窗口Rect_p;
		DeleteDC(create窗口hdc); //成功，则返回非零;https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-deletedc
		ReleaseDC(窗口hwnd, 窗口hdc); //仅释放公共 DC 和窗口 DC。它对 class 或 private DC 没有影响。https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-releasedc
	}
	/**///零件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 
		//用不到吧 \ 缩放变大 分辨率变小
	double static ret缩放() {
	// 获取窗口当前显示的监视器
		HWND hWnd = GetDesktopWindow(); //检索窗口句柄 hWnd = \https://learn.microsoft.com/en-us/windows/apps/develop/ui-input/retrieve-hwnd
		//GetDesktopWindow \https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getdesktopwindow
		// (桌面, MONITOR_DEFAULT TO NEAREST)
		HMONITOR hMonitor = MonitorFromWindow(hWnd, MONITOR_DEFAULTTONEAREST); //the Device Context \ 每个物理显示器都由HMONITOR类型的监视器句柄表示。
		//https://learn.microsoft.com/en-us/windows/win32/gdi/hmonitor-and-the-device-context
		// 获取监视器逻辑宽度
		MONITORINFOEX 屏幕Infoex{}; //监控信息 \https://learn.microsoft.com/en-us/windows/win32/api/winuser/ns-winuser-monitorinfoexa
		/*
		typedef struct tagMONITORINFO {
		DWORD cbSize;
		RECT  rcMonitor;
		RECT  rcWork;
		DWORD dwFlags;
		} MONITORINFO, * LPMONITORINFO;
		*/
		屏幕Infoex.cbSize = sizeof(屏幕Infoex); //
		GetMonitorInfo(hMonitor, &屏幕Infoex);
		//逻辑 = right- left
		int cxLogical = (屏幕Infoex.rcMonitor.right - 屏幕Infoex.rcMonitor.left);

		// 获取监视器物理宽度
		DEVMODE dm{};
		dm.dmSize = sizeof(dm);
		dm.dmDriverExtra = 0;
		EnumDisplaySettings(屏幕Infoex.szDevice, ENUM_CURRENT_SETTINGS, &dm); //
		//物理
		int cxPhysical = dm.dmPelsWidth;

		return cxPhysical * 1.0 / cxLogical; // 转换int为double \https://stackoverflow.com/questions/18626147/what-does-1-0-do-in-this-code\
																								 在num*1.0,num被提升为doublefirst，所以结果是 adouble然后传递给double sqrt(double)。否则，您可能需要使用sqrt(static_cast<double>(num)).
	}
	void get屏幕分辨率() {
		///m_宽 = 初始化.屏幕总显示范围x1;
		///m_高 = 初始化.屏幕总显示范围y1;
		double zoom = ret缩放(); //return cxPhysical (double)
		//屏幕分辨率
		//GetSystemMetrics 检索指定的系统指标或系统配置设置。\ 检索到的所有维度都以像素为单位。\https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getsystemmetrics
		主屏宽 = GetSystemMetrics(SM_CXSCREEN) * zoom; //X
		主屏高 = GetSystemMetrics(SM_CYSCREEN) * zoom; //Y
		简写::cou<int>("主屏宽= ", 主屏宽);
		简写::cou<int>("主屏高= ", 主屏高);
		///窗口宽 = 主屏宽; //X
		///窗口高 = 主屏高; //Y
	}
	void cout窗口宽高() {
		GetWindowRect(窗口hwnd, 窗口Rect_p); //?下一句会引发异常: \ 0xC0000005: 写入位置 0x0000000000000000 时发生访问冲突。
		简写::cou<LONG>(窗口Rect.left); //>无窗口->? \ 引发异常 //383
		简写::cou<LONG>(窗口Rect.right);					 //	2365
		简写::cou<LONG>(窗口Rect.top);						//	320
		简写::cou<LONG>(窗口Rect.bottom);					//	1452
		///long a = 窗口Rect_p->left;
		///long* a = &(窗口Rect_p->left);
		////long a = 窗口Rect.RECT->left;
		///cout << a;
	}
	void get窗口宽高() {
		/*
		typedef struct tagRECT
		{
		LONG    left;
		LONG    top;
		LONG    right;
		LONG    bottom;
		} RECT, *PRECT, NEAR *NPRECT, FAR *LPRECT;
		*/
		GetWindowRect(窗口hwnd, 窗口Rect_p);
		窗口高 = 窗口Rect_p->bottom - 窗口Rect_p->top;
		窗口宽 = 窗口Rect_p->right - 窗口Rect_p->left;
	}
	/**///▬主要功能`截图▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 
	//>截图x16
	void 截图x16初始化();
	void BitBltTOGetBitmapBits() {
		BitBlt(create窗口hdc, 0, 0,
			窗口宽, 窗口高,
			窗口hdc,
			0, 0,
			SRCCOPY); /* https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-bitblt
		BOOL BitBlt(
		[in] HDC   hdc,     目标
		[in] int   x,       目标矩形左上角的 x 坐标（以逻辑单位表示）。
		[in] int   y,
		[in] int   cx,      源矩形和目标矩形的宽度（以逻辑单位表示）。
		[in] int   cy,
		[in] HDC   hdcSrc,  源设备上下文的句柄。
		[in] int   x1,      源矩形左上角的 x 坐标（以逻辑单位表示）。
		[in] int   y1,
		[in] DWORD rop
		);
		*/
		GetBitmapBits(create窗口map,
			窗口宽 * 窗口高 * 4,
			图片sizec_p);
		/* 提供此功能仅是为了与 16 位版本的 Windows 兼容 https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-getbitmapbits
		LONG GetBitmapBits(
		[in]  HBITMAP hbit,     设备相关位图的句柄。
		[in]  LONG    cb,       从位图复制到缓冲区的字节数。
		[out] LPVOID  lpvBits   指向缓冲区以接收位图位的指针。这些位存储为字节值数组。
		);
		如果函数成功，则返回值是复制到缓冲区的字节数。
		如果函数失败，则返回值为零。
		*/
	}
	//>截图x16
	Mat ret截图x16(int OpenCV类型)	{
		BitBltTOGetBitmapBits();
		Mat 截图(窗口高, 窗口宽, OpenCV类型, 图片sizec_p);
		return 截图;
	}
	Mat ret截图x16()	{
		return ret截图x16(CV_8UC4);
	}
	Mat ret截图x16(int OpenCV类型, int waitKey时间)  	{
		Mat 结果; 结果 = ret截图x16();
		在新线程打开mat图片(结果, waitKey时间);
		return 结果;
	}
	Mat ret截图x16并裁剪(int y, int x, int width, int height) {
		// 得到位图的数据
		//BitBlt(m_兼容性DC, 0, 0, width, height, m_屏幕DC, x, y, SRCCOPY);
		////BitBlt(create窗口hdc, 0, 0, width, height, 窗口hdc, 0, 0, SRCCOPY);
		////GetBitmapBits(create窗口map, width * height * 4, 图片sizec_p);
		////// 创建图像
		////Mat 截图(height, width, CV_8UC4, 图片sizec_p);
		////return 截图;
		Mat 截图 = ret截图x16();
		return 截图(cv::Rect(x, y, width, height));
	}
	void get截图x16(Mat& 结果, int OpenCV类型) {
		BitBltTOGetBitmapBits();
		结果 = Mat(窗口高, 窗口宽, OpenCV类型, 图片sizec_p);
	}
	void get截图x16(Mat& 结果, int OpenCV类型, int waitKey时间) {
		BitBltTOGetBitmapBits();
		结果 = Mat(窗口高, 窗口宽, OpenCV类型, 图片sizec_p);
		在新线程打开mat图片(结果, waitKey时间);
	}
	void get截图x16并裁剪(Mat& 结果, int y, int x, int 宽, int 高);
	/**///杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 
	void cout窗口Rect(tagRECT& 窗口Rect) {
		简写::cou<int>("top= ", 窗口Rect.top);
		简写::cou<int>("bottom= ", 窗口Rect.bottom);
		简写::cou<int>("left= ", 窗口Rect.left);
		简写::cou<int>("right= ", 窗口Rect.right);
	}
	/*imshow*/
	void 打开mat图片(Mat& 图, int 等待时间) {
		imshow("打开mat图片", 图);
		waitKey(等待时间);
		destroyWindow("打开mat图片");
	}
	/*imshow*/
	void 在新线程打开mat图片(Mat& 图, int waitKey时间) {
		auto lambda打开mat图片 = [&](Mat& 图, int waitKey时间) -> void {
			打开mat图片(图, waitKey时间);
			};
		std::thread 打开mat图片lambdathread(lambda打开mat图片, ref(图), waitKey时间);
		打开mat图片lambdathread.join();
	}
	void 在新线程打开mat图片(Mat& 图1, Mat& 图2, int waitKey时间) {
		auto lambda打开mat图片 = [&](Mat& 图, int waitKey时间) -> void {
			打开mat图片(图, waitKey时间);
			};
		std::thread thread打开mat图片1(lambda打开mat图片, ref(图1), waitKey时间);
		std::thread thread打开mat图片2(lambda打开mat图片, ref(图2), waitKey时间);
		thread打开mat图片1.join();
		thread打开mat图片2.join();
	}
	void 在新线程打开mat图片(Mat& 图1, Mat& 图2, Mat& 图3, int waitKey时间) {
		auto lambda打开mat图片 = [&](Mat& 图, int waitKey时间) -> void {
			打开mat图片(图, waitKey时间);
			};
		std::thread thread打开mat图片1(lambda打开mat图片, ref(图1), waitKey时间);
		std::thread thread打开mat图片2(lambda打开mat图片, ref(图2), waitKey时间);
		std::thread thread打开mat图片3(lambda打开mat图片, ref(图3), waitKey时间);
		thread打开mat图片1.join();
		thread打开mat图片2.join();
		thread打开mat图片3.join();
	}
	void 在新线程打开mat图片和onMouse(Mat& 图, int waitKey时间) {
		auto lambda打开mat图片 = [&](Mat& 图, int waitKey时间) -> void {
			imshow("打开mat图片", 图);
			//setMouseCallback("打开mat图片", opencv数字图像处理.onMouse, reinterpret_cast<void*>(&图)); //关联图像显示窗口和onMouse函数
			waitKey(waitKey时间);
			destroyWindow("打开mat图片");
			};
		std::thread 打开mat图片lambdathread(lambda打开mat图片, ref(图), waitKey时间);
		打开mat图片lambdathread.join();
	}
	void 在新线程打开mat图片和onMouse(Mat& 图1, Mat& 图2, Mat& 图3, int waitKey时间) {
		auto lambda打开mat图片 = [&](Mat& 图, int waitKey时间) -> void {
			imshow("打开mat图片", 图);
			waitKey(waitKey时间);
			destroyWindow("打开mat图片");
			};
		std::thread thread打开mat图片1(lambda打开mat图片, ref(图1), waitKey时间);
		std::thread thread打开mat图片2(lambda打开mat图片, ref(图2), waitKey时间);
		std::thread thread打开mat图片3(lambda打开mat图片, ref(图3), waitKey时间);
		thread打开mat图片1.join();
		thread打开mat图片2.join();
		thread打开mat图片3.join();
	}

	Mat ret裁剪(Mat& 图1, int y, int x, int width, int height) {
		return 图1(cv::Rect(x, y, height, width));
	}
	void get裁剪(Mat& 图1, Mat& 图2, int y, int x, int width, int height) {
		图2 = 图1(cv::Rect(x, y, height, width));
	}
};


#endif 
