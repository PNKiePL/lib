#pragma once
#ifndef 截图_CPP
#define 截图_CPP

#include  <E:\lib\截图.h>
//#include "截图.h"

using cv::Mat;

//?////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*
double 例子()
{
截图 jxtu;
Mat img = jxtu.ret截图x16();
Mat img2 = jxtu.ret截图x16并裁剪(1040, 132, 800, 880);
imwrite("screenshot.jpg", img);
imwrite("screenshot_part.jpg", img2);
return 0;
}
void 空函数() //截图::
{    }*/

/*
在截图之前需要获取屏幕的分辨率，一种很直观的想法就是调用 GetSystemMetrics(SM_C*SCREEN) 函数来获取宽度或者高度。
设置屏幕缩放 125% 之后，得到的值会偏小。
如果是 1920 × 1080 的分辨率，GetSystemMetrics(SM_CXSCREEN) 和 GetSystemMetrics(SM_CYSCREEN) 返回分辨率会是 (1920, 1080) / 1.25 = (1536, 864)。所以我们需要先计算屏幕的缩放率。这个任务由 Screenshot::getZoom() 完成。剩下的步骤注释中解释的很充分了，不再赘述。
*/



//pan.baidu.com/s/11PEvsDE66zoDZNmXPya0hg=
//QImage 与 cv::Mat 之间的相互转换 \ https://blog.csdn.net/liyuanbhu/article/details/46662115


//截图::win截屏::win截屏()
//{
//}
//
//截图::win截屏::~win截屏()
//{
//}

#endif // !1




