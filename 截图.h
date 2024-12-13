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
		cout1("主屏宽= ", 主屏宽);
		cout1("主屏高= ", 主屏高);
		///窗口宽 = 主屏宽; //X
		///窗口高 = 主屏高; //Y
	}
	void cout窗口宽高() {
		GetWindowRect(窗口hwnd, 窗口Rect_p); //?下一句会引发异常: \ 0xC0000005: 写入位置 0x0000000000000000 时发生访问冲突。
		cout1(窗口Rect.left); //>无窗口->? \ 引发异常 //383
		cout1(窗口Rect.right);					 //	2365
		cout1(窗口Rect.top);						//	320
		cout1(窗口Rect.bottom);					//	1452
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
	//>截图
	/*createHdc,map*/
	void 截图初始化() { ///createhdctoStretchBlt 或 createhdcto复制位图
		///SetCapture(窗口hwnd); //没用
		get窗口宽高();
		图片宽 = 窗口宽;
		图片高 = 窗口高;
		//>图片尺寸/内容
		图片Sizei = 窗口宽 * 窗口高 * 4L;
		图片sizec_p = new char[图片Sizei];
		图片sizec_p = new char[窗口宽 * 窗口高 * 4];
		///memset(截图Datalpvoid, 0, 窗口宽); //复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符 \ https://zh.cppreference.com/w/cpp/string/byte/memset
		cout1("窗口宽= ", 窗口宽); //1982
		cout1("窗口高= ", 窗口高); //1132
		//>窗口hwnd-->窗口hdc-->create窗口hdc-->create窗口map-->SelectObject-->StretchBlt复制位图
		窗口hdc = GetDC(窗口hwnd); //无= 图片是纯灰色
		// >截图 的 范围
		//创建位图 全屏幕 \捕获图像 https://learn.microsoft.com/en-us/windows/win32/gdi/capturing-an-image
		create窗口hdc = CreateCompatibleDC(窗口hdc);
		create窗口map = CreateCompatibleBitmap(窗口hdc, 窗口宽, 窗口高);
		SelectObject(create窗口hdc, create窗口map); //选择?到指定的设备上下文(DC)中 \ HGDIOBJ SelectObject( [in] HDC hdc, [in] HGDIOBJ h); \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-selectobject
	}
	void StretchBltTOGetDIBits() {
		StretchBlt(create窗口hdc, 0, 0, 窗口宽, 窗口高
			, 窗口hdc, 0, 0, 窗口宽, 窗口高, SRCCOPY); //将位图从源矩形复制到目标矩形，并根据需要拉伸或压缩位图以适合目标矩形的尺寸 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-stretchblt
		/*
		[in] xDest
		目标矩形左上角的 x 坐标（以逻辑单位表示）。
		[in] yDest
		目标矩形左上角的 y 坐标（以逻辑单位表示）。
		[in] wDest
		目标矩形的宽度（以逻辑单位表示）。
		[in] hDest
		目标矩形的高度（以逻辑单位表示）。

		[in] hdcSrc
		源设备上下文的句柄。
		[in] xSrc
		源矩形左上角的 x 坐标（以逻辑单位表示）。
		[in] ySrc
		源矩形左上角的 y 坐标（以逻辑单位表示）。
		[in] wSrc
		源矩形的宽度（以逻辑单位表示）。
		[in] hSrc
		源矩形的高度（以逻辑单位表示）
		*/
		bitmap信息.bmiHeader.biSize = sizeof(bitmap信息.bmiHeader);
		bitmap信息.bmiHeader.biWidth = 窗口宽;
		bitmap信息.bmiHeader.biHeight = 窗口高;
		bitmap信息.bmiHeader.biPlanes = 1;
		bitmap信息.bmiHeader.biBitCount = 32;
		bitmap信息.bmiHeader.biCompression = 0;
		bitmap信息.bmiHeader.biSizeImage = 0;
		GetDIBits(create窗口hdc, create窗口map
			, 0, 窗口高, 图片sizec_p
			, &bitmap信息, DIB_RGB_COLORS); //GetDIBits函数检索指定兼容位图的位，并使用指定格式将它们作为 DIB 复制到缓冲区中。 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-getdibits
		/* GetDIBits函数检索指定兼容位图的位，并使用指定格式将它们作为 DIB 复制到缓冲区中。 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-getdibits
		int GetDIBits(
		[in]      HDC          hdc,     设备上下文的句柄。
		[in]      HBITMAP      hbm,     位图句柄。这必须是兼容的位图 (DDB)。
		[in]      UINT         start,   要检索的第一条扫描线。
		[in]      UINT         cLines,  要检索的扫描行数。
		[out]     LPVOID       lpvBits, 指向缓冲区以接收位图数据的指针。如果此参数为NULL，则函数将位图的尺寸和格式传递给lpbi参数指向的BITMAPINFO结构。
		[in, out] LPBITMAPINFO lpbmi,   指向指定 DIB 数据所需格式的BITMAPINFO结构的指针。
		[in]      UINT         usage    BITMAPINFO结构的bmiColors成员的格式。它必须是以下值之一。
		);
		*/
	}
	//>截图
	Mat ret截图(int OpenCV类型) { /*CV_32FC4*/ /*CV_8UC4*/
		StretchBltTOGetDIBits();
		//>Mat \ https://blog.csdn.net/guyuealian/article/details/70159660
		Mat 结果(窗口高, 窗口宽, OpenCV类型, 图片sizec_p); //图片sizec_p->Mat
		//>翻转
		Mat 结果2;
		{
			flip(结果, 结果2, 0);//上下翻转
		}
		return 结果2;
	}
	Mat ret截图() {
		return ret截图(CV_8UC4);
	}
	void get截图(Mat& 结果, int OpenCV类型) {
		StretchBltTOGetDIBits();
		//>Mat \ https://blog.csdn.net/guyuealian/article/details/70159660
		///截图=Mat(1,1, CV_64F, 0.0); //0值填充
		//>翻转
		flip(Mat(窗口高, 窗口宽, OpenCV类型, 图片sizec_p), 结果, 0);//上下翻转
	}
	void get截图(Mat& 结果, int OpenCV类型, int waitKey时间) {
		StretchBltTOGetDIBits();
		//>翻转
		flip(Mat(窗口高, 窗口宽, OpenCV类型, 图片sizec_p), 结果, 0);//上下翻转
		在新线程打开mat图片(结果, waitKey时间);
	}
	/*截图窗口*/
	void get截图(/*输入*/HWND hwnd,Mat& 结果, int OpenCV类型) {
		窗口hwnd = hwnd; get截图(结果, OpenCV类型);
	}
	void get截图(/*输入*/HWND hwnd,Mat& 结果, int OpenCV类型, int waitKey时间) {
		窗口hwnd = hwnd; get截图(结果, OpenCV类型,waitKey时间);
	}
	cv::Mat ret截图并裁剪(int y, int x, int 宽, int 高);
	/**///杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 
	void cout窗口Rect(tagRECT& 窗口Rect) {
		cout1("top= ", 窗口Rect.top);
		cout1("bottom= ", 窗口Rect.bottom);
		cout1("left= ", 窗口Rect.left);
		cout1("right= ", 窗口Rect.right);
	}
	/*imshow*/
	void 打开mat图片(Mat& 图, int 等待时间) {
		imshow("打开mat图片", 图);
		waitKey(等待时间);
		destroyWindow("打开mat图片");
	}
	void 循环imshowANDwaitKey(Mat& 图, int 等待时间) {
		while (true)		{
			imshow("打开mat图片", 图);
			waitKey(等待时间);
		}/*while*/
	}
	void imshowANDwaitKey(Mat& 图, int 等待时间) {
		imshow("打开mat图片", 图);
		waitKey(等待时间);
	}
	void 简写imshow(Mat& 图) {
		imshow("打开mat图片", 图);
	}
	void 简写imshow(Mat& 图, int 等待时间) {
		imshow("打开mat图片", 图);
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

	/**///备份▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ 
	Mat 单屏截图2023年8月9日();
	Mat ret窗口截图2023年8月9日(LPCSTR lpClassName, LPCSTR lpWindowName, int& 图片宽, int& 图片高, int OpenCV类型, int waitKey时间);
	Mat ret窗口截图2023年8月9日(LPCSTR lpClassName, LPCSTR lpWindowName, int& 图片宽, int& 图片高, int OpenCV类型);
	Mat ret窗口截图2023年8月9日(LPCSTR lpClassName, LPCSTR lpWindowName);
	Mat get窗口截图2023年8月9日(Mat& 结果, LPCSTR lpClassName, LPCSTR lpWindowName, int& 图片宽, int& 图片高, int OpenCV类型, int waitKey时间);
	Mat get窗口截图2023年8月9日(Mat& 结果, LPCSTR lpClassName, LPCSTR lpWindowName, int& 图片宽, int& 图片高, int OpenCV类型);
	Mat get窗口截图2023年8月9日(Mat& 结果, LPCSTR lpClassName, LPCSTR lpWindowName);
};
Mat 截图::单屏截图2023年8月9日(/*int y,int x, int width, int height*/) {
	get屏幕分辨率();
	窗口hwnd = GetDesktopWindow(); //hwnd \ 返回值是窗口窗口的句柄 \ https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getdesktopwindow
	get窗口宽高();
	图片宽 = 窗口宽;
	图片高 = 窗口高;
	//>图片尺寸/内容
	图片Sizei = 窗口宽 * 窗口高 * 4L;
	图片sizec_p = new char[图片Sizei];
	图片sizec_p = new char[窗口宽 * 窗口高 * 4];
	///memset(截图Datalpvoid, 0, 窗口宽); //复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符 \ https://zh.cppreference.com/w/cpp/string/byte/memset
	cout1("窗口宽= ", 窗口宽); //1982
	cout1("窗口高= ", 窗口高); //1132
	//>窗口hwnd-->窗口hdc-->create窗口hdc-->create窗口map-->SelectObject-->StretchBlt复制位图
	窗口hdc = GetDC(窗口hwnd); //无= 图片是纯灰色
	// >截图 的 范围
	//创建位图 全屏幕 \捕获图像 https://learn.microsoft.com/en-us/windows/win32/gdi/capturing-an-image
	create窗口hdc = CreateCompatibleDC(窗口hdc);
	create窗口map = CreateCompatibleBitmap(窗口hdc, 窗口宽, 窗口高);
	SelectObject(create窗口hdc, create窗口map); //选择?到指定的设备上下文(DC)中 \ HGDIOBJ SelectObject( [in] HDC hdc, [in] HGDIOBJ h); \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-selectobject
	cout窗口Rect(窗口Rect);
	StretchBlt(create窗口hdc, 0, 0, 窗口宽, 窗口高
		, 窗口hdc, 窗口Rect_p->left, 窗口Rect_p->top, 窗口宽, 窗口高, SRCCOPY); //将位图从源矩形复制到目标矩形，并根据需要拉伸或压缩位图以适合目标矩形的尺寸 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-stretchblt
	bitmap信息.bmiHeader.biSize = sizeof(bitmap信息.bmiHeader);
	bitmap信息.bmiHeader.biWidth = 窗口宽;
	bitmap信息.bmiHeader.biHeight = 窗口高;
	bitmap信息.bmiHeader.biPlanes = 1;
	bitmap信息.bmiHeader.biBitCount = 32;
	bitmap信息.bmiHeader.biCompression = 0;
	bitmap信息.bmiHeader.biSizeImage = 0;
	GetDIBits(create窗口hdc, create窗口map
		, 0, 窗口高, 图片sizec_p
		, &bitmap信息, DIB_RGB_COLORS); //GetDIBits函数检索指定兼容位图的位，并使用指定格式将它们作为 DIB 复制到缓冲区中。 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-getdibits
	Mat 结果(窗口高, 窗口宽, CV_8UC4, 图片sizec_p); //图片sizec_p->Mat

	//return 截图;
	/**///>末尾
		//>翻转
	Mat 结果2;
	flip(结果, 结果2, 0);//上下翻转
	//flip(截图, 截图2, 1);//左右翻转
	//flip(截图, 截图2, -1);//上下，左右同时翻转

	//>打开图片
	auto 打开mat图片lambda2 = [&](Mat& 图, int waitKey时间) -> void {
		打开mat图片(图, waitKey时间);
		};
	std::thread t8(打开mat图片lambda2, ref(结果2), 1);
	t8.join();

	return 结果2;
}
Mat 截图::ret窗口截图2023年8月9日(LPCSTR lpClassName, LPCSTR lpWindowName, int& 图片宽, int& 图片高, int OpenCV类型, int waitKey时间) {
	get屏幕分辨率();
	//! 窗口hwnd-->窗口hdc-->create窗口hdc-->create窗口map-->SelectObject-->StretchBlt复制位图
	窗口hwnd = FindWindowA(lpClassName, lpWindowName);
	get窗口宽高();
	///图片宽 = 窗口宽;
	///图片高 = 窗口高;
	//>图片尺寸/内容
	图片Sizei = 图片宽 * 图片高 * 4L;
	图片sizec_p = new char[图片Sizei];
	///memset(截图Datalpvoid, 0, 窗口宽); //复制字符 c（一个无符号字符）到参数 str 所指向的字符串的前 n 个字符 \ https://zh.cppreference.com/w/cpp/string/byte/memset
	cout1("窗口宽= ", 窗口宽); //1982
	cout1("窗口高= ", 窗口高); //1132
	//>窗口hwnd-->窗口hdc-->create窗口hdc-->create窗口map-->SelectObject-->StretchBlt复制位图
	窗口hdc = GetDC(窗口hwnd); //无= 图片是纯灰色
	// >截图 的 范围
	//创建位图 全屏幕 \捕获图像 https://learn.microsoft.com/en-us/windows/win32/gdi/capturing-an-image
	create窗口hdc = CreateCompatibleDC(窗口hdc);
	create窗口map = CreateCompatibleBitmap(窗口hdc, 图片宽, 图片高);
	SelectObject(create窗口hdc, create窗口map); //选择?到指定的设备上下文(DC)中 \ HGDIOBJ SelectObject( [in] HDC hdc, [in] HGDIOBJ h); \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-selectobject

	cout窗口Rect(窗口Rect);
	StretchBlt(create窗口hdc, /*窗口Rect_p->left, 窗口Rect_p->top*/0, 0, 图片宽, 图片高 //>目标窗口
		, 窗口hdc, /*窗口Rect.left, 窗口Rect.top*/ /*和0,0一样: 窗口Rect_p->left, 窗口Rect_p->top*/ /*相反:窗口Rect_p->top, 窗口Rect_p->left*/ 0, 0, 窗口宽, 窗口高, SRCCOPY); //将位图从源矩形复制到目标矩形，并根据需要拉伸或压缩位图以适合目标矩形的尺寸 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-stretchblt
	//>2023年8月14日17时: 原来是 原/源窗口上的坐标, 所以是0,0 和 0,0
	bitmap信息.bmiHeader.biSize = sizeof(bitmap信息.bmiHeader);
	bitmap信息.bmiHeader.biWidth = 图片宽;
	bitmap信息.bmiHeader.biHeight = 图片高;
	bitmap信息.bmiHeader.biPlanes = 1;
	bitmap信息.bmiHeader.biBitCount = 32;
	bitmap信息.bmiHeader.biCompression = 0;
	bitmap信息.bmiHeader.biSizeImage = 0;
	GetDIBits(create窗口hdc, create窗口map
		, 0 /*窗口Rect.top*/ /*窗口Rect.left*/ //>源窗口
		, 图片高, 图片sizec_p
		, &bitmap信息, DIB_RGB_COLORS); //GetDIBits函数检索指定兼容位图的位，并使用指定格式将它们作为 DIB 复制到缓冲区中。 \ https://learn.microsoft.com/en-us/windows/win32/api/wingdi/nf-wingdi-getdibits
	///, &bitmap信息, DIB_PAL_COLORS);
	Mat 结果;
	结果 = Mat(图片高, 图片宽, OpenCV类型, 图片sizec_p); //图片sizec_p->Mat
	////结果 = Mat(主屏高, 主屏宽, CV_8UC4, 图片sizec_p); //>(主屏!=窗口)==分辨率/尺寸不同-->报错; 图片sizec_p不对

	/**///>末尾
	//>不更改
		//return 结果; 
	//>翻转
	Mat 结果2;
	flip(结果, 结果2, 0);//上下翻转
	//>打开图片
	auto 打开mat图片lambda2 = [&](Mat& 图, int waitKey时间) -> void {
		打开mat图片(图, waitKey时间);
		};
	std::thread t8(打开mat图片lambda2, ref(结果2), waitKey时间);
	t8.join();
	return 结果2;
}
Mat 截图::ret窗口截图2023年8月9日(LPCSTR lpClassName, LPCSTR lpWindowName) {
	return ret窗口截图2023年8月9日(lpClassName, lpWindowName, 图片宽, 图片高, CV_8UC4, 0);
}

#endif 
