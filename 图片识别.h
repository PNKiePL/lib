#pragma once
#ifndef TU_PM_UI_BX_H
#define TU_PM_UI_BX_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

////#include  <E:\lib\图片识别`函数.h>

////using namespace wode;
class 图片识别 :图片属性/*识别函数*/ {
public:
	////图片识别_256色图片 tu256;
public:
	/*记录`图片结构*/
	struct 图片信息 {
		/**//*记录*/
		COORD 图片尺寸
			, 图片尺寸_隔10个点
			, 图片尺寸_隔4个点
			, 图片尺寸_隔2个点
			, 图片尺寸_隔1个点;
		新v2i v2i所有r, v2i所有g, v2i所有b
			, v2i所有r_隔10个点, v2i所有g_隔10个点, v2i所有b_隔10个点
			, v2i所有r_隔4个点, v2i所有g_隔4个点, v2i所有b_隔4个点
			, v2i所有r_隔2个点, v2i所有g_隔2个点, v2i所有b_隔2个点
			, v2i所有r_隔1个点, v2i所有g_隔1个点, v2i所有b_隔1个点
			/*名字怎么起,所有点`转换成`256色的点*/
			, v2i256色图片
			, v2i256色图片_隔10个点
			, v2i256色图片_隔4个点
			, v2i256色图片_隔2个点
			, v2i256色图片_隔1个点;
		新i 矩形数量;
		/*yx; 0123`4567=左上,左下,右上,右下; 89=长高,*/
		新v2i v2i矩形;
		图片信息() {

		}
		void 获得图片尺寸() {
			图片尺寸_隔10个点.X = 图片尺寸.X / 10;
			图片尺寸_隔10个点.Y = 图片尺寸.Y / 10;
			图片尺寸_隔4个点.X = 图片尺寸.X / 4;
			图片尺寸_隔4个点.Y = 图片尺寸.Y / 4;
			图片尺寸_隔2个点.X = 图片尺寸.X / 2;
			图片尺寸_隔2个点.Y = 图片尺寸.Y / 2;
			图片尺寸_隔1个点.X = 图片尺寸.X / 1;
			图片尺寸_隔1个点.Y = 图片尺寸.Y / 1;
		}
		/**///▬记录`颜色▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		void v的assign() {
			assign，不隔();
			assign，隔10个点();
			assign，隔4个点();
			assign，隔2个点();
			assign，隔1个点();
		}
		void assign，不隔() {
			v2i所有r.assign(图片尺寸.Y, 新vi(图片尺寸.X, 0));
			v2i所有g.assign(图片尺寸.Y, 新vi(图片尺寸.X, 0)); v2i所有b.assign(图片尺寸.Y, 新vi(图片尺寸.X, 0));
		}
		void assign，隔10个点() {
			v2i所有r_隔10个点.assign(图片尺寸_隔10个点.Y, 新vi(图片尺寸_隔10个点.X, 0));
			v2i所有g_隔10个点.assign(图片尺寸_隔10个点.Y, 新vi(图片尺寸_隔10个点.X, 0)); v2i所有b_隔10个点.assign(图片尺寸_隔10个点.Y, 新vi(图片尺寸_隔10个点.X, 0));
		}
		void assign，隔4个点() {
			v2i所有r_隔4个点.assign(图片尺寸_隔4个点.Y, 新vi(图片尺寸_隔4个点.X, 0));
			v2i所有g_隔4个点.assign(图片尺寸_隔4个点.Y, 新vi(图片尺寸_隔4个点.X, 0)); v2i所有b_隔4个点.assign(图片尺寸_隔4个点.Y, 新vi(图片尺寸_隔4个点.X, 0));
		}
		void assign，隔2个点() {
			v2i所有r_隔2个点.assign(图片尺寸_隔2个点.Y, 新vi(图片尺寸_隔2个点.X, 0));
			v2i所有g_隔2个点.assign(图片尺寸_隔2个点.Y, 新vi(图片尺寸_隔2个点.X, 0)); v2i所有b_隔2个点.assign(图片尺寸_隔2个点.Y, 新vi(图片尺寸_隔2个点.X, 0));
		}
		void assign，隔1个点() {
			v2i所有r_隔1个点.assign(图片尺寸_隔1个点.Y, 新vi(图片尺寸_隔1个点.X, 0));
			v2i所有g_隔1个点.assign(图片尺寸_隔1个点.Y, 新vi(图片尺寸_隔1个点.X, 0)); v2i所有b_隔1个点.assign(图片尺寸_隔1个点.Y, 新vi(图片尺寸_隔4个点.X, 0));
		}
		void assign，v3i所有颜色_隔10个点() {
			/*v= 高,长,i*/
		}
		void getMatTOv2i复制所有颜色(Mat& 图, int y隔几个像素, int x隔几个像素,/*输出*/新v2i v2i所有r, 新v2i v2i所有g, 新v2i v2i所有b) {
			COORD 当前点 = { 0,0 };
			for (当前点; 当前点.Y < 图片尺寸.Y; 当前点.Y += y隔几个像素) {
				for (当前点; 当前点.X < 图片尺寸.X; 当前点.X += x隔几个像素) {
					v2i所有r[当前点.Y][当前点.X] = 图.at<Vec3b>(Point(当前点.X, 当前点.Y))[2];
					v2i所有g[当前点.Y][当前点.X] = 图.at<Vec3b>(Point(当前点.X, 当前点.Y))[1];
					v2i所有b[当前点.Y][当前点.X] = 图.at<Vec3b>(Point(当前点.X, 当前点.Y))[0];
				}/*for*/
			}/*for*/
		}
		void 复制所有颜色，不隔(Mat& 图) {
			COORD 当前点 = { 0,0 };
			for (当前点; 当前点.Y < 图片尺寸.Y; 当前点.Y++) {
				for (当前点; 当前点.X < 图片尺寸.X; 当前点.X++) {
					v2i所有r[当前点.Y][当前点.X] = 图.at<Vec3b>(Point(当前点.X, 当前点.Y))[2];
					v2i所有g[当前点.Y][当前点.X] = 图.at<Vec3b>(Point(当前点.X, 当前点.Y))[1];
					v2i所有b[当前点.Y][当前点.X] = 图.at<Vec3b>(Point(当前点.X, 当前点.Y))[0];
				}/*for*/
			}/*for*/
		}
		void 复制所有颜色，隔1个点(Mat& 图) {
			getMatTOv2i复制所有颜色(图, 1, 1,/*输出*/v2i所有r_隔1个点, v2i所有g_隔1个点, v2i所有b_隔1个点);
		}
		void 复制所有颜色，隔2个点(Mat& 图) {
			getMatTOv2i复制所有颜色(图, 2, 2,/*输出*/v2i所有r_隔2个点, v2i所有g_隔2个点, v2i所有b_隔2个点);
		}
		void 复制所有颜色，隔4个点(Mat& 图) {
			getMatTOv2i复制所有颜色(图, 4, 4,/*输出*/v2i所有r_隔4个点, v2i所有g_隔4个点, v2i所有b_隔4个点);
		}
		void 复制所有颜色，隔10个点(Mat& 图) {
			getMatTOv2i复制所有颜色(图, 10, 10,/*输出*/v2i所有r_隔10个点, v2i所有g_隔10个点, v2i所有b_隔10个点);
		}
		/**///▬记录`!形状的位置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		int 两个颜色是否一样(/*输入*/新v2i v2i所有r, 新v2i v2i所有g, 新v2i v2i所有b, int Y, int X, int Y2, int X2) {
			if (v2i所有r[Y][X] == v2i所有r[Y2][X2]) {
				if (v2i所有g[Y][X] == v2i所有g[Y2][X2]) {
					if (v2i所有b[Y][X] == v2i所有b[Y2][X2]) {
						return 1;
					}/*if*/
				}/*if*/
			}/*if*/
			return 0;
		}/*int*/
		int 两个颜色是否一样_256色(/*输入*/新v2i v2i所有r, 新v2i v2i所有g, 新v2i v2i所有b, int Y, int X, int Y2, int X2) {
			if (v2i所有r[Y][X] == v2i所有r[Y2][X2]) {
				if (v2i所有g[Y][X] == v2i所有g[Y2][X2]) {
					if (v2i所有b[Y][X] == v2i所有b[Y2][X2]) {
						return 1;
					}/*if*/
				}/*if*/
			}/*if*/
			return 0;
		}/*int*/
		void get获取矩形(/*输入*/新v2i v2i所有r, 新v2i v2i所有g, 新v2i v2i所有b, int y隔几个像素, int x隔几个像素,/*输出*/新v2i v2i矩形) {
			COORD 当前点 = { 0,0 };
			for (当前点; 当前点.Y < 图片尺寸.Y; 当前点.Y += y隔几个像素) {
				for (当前点; 当前点.X < 图片尺寸.X; 当前点.X += x隔几个像素) {
					if (/*图片识别函数 tupmuibxhjuu.*/两个颜色是否一样(v2i所有r, v2i所有g, v2i所有b, 当前点.Y, 当前点.X, 当前点.Y, 当前点.X + 1) == 1) {

					}/*if*/
				}/*for*/
			}/*for*/
		}/*void*/
		void 获取矩形，不隔() {
			COORD 当前点 = { 0,0 };
			for (当前点; 当前点.Y < 图片尺寸.Y; 当前点.Y++) {
				for (当前点; 当前点.X < 图片尺寸.X; 当前点.X++) {
					////if (两个颜色是否一样(v2i所有r[当前点.Y][当前点.X], v2i所有g[当前点.Y][当前点.X], v2i所有b[当前点.Y][当前点.X]
					////	, v2i所有r[当前点.Y][当前点.X], v2i所有g[当前点.Y][当前点.X], v2i所有b[当前点.Y][当前点.X]) == 1) {
					  //
					////}/*if*/
				}/*for*/
			}/*for*/
		}
		/**///!256色
		void ret转换256色() {

		}
	}窗口信息, 一个图的颜色;
	/// 2024年2月24日
	struct cmd窗口信息 {
		string 窗口名称, 第一个字;
		COORD 窗口尺寸;
		/*点的坐标*/COORD 窗口左上角, 窗口左下角, 窗口右上角, 窗口右下角;
		新i 长方形数量, 字体大小, 字体横像素, 字体竖像素, 字数;
		新vi vi字数;/*第一行`字数=vi字数[1]*/
		新vs vs字;
		/*01=yx,左上,右下*/
		新v2i v2i长方形;
		一点颜色 背景颜色, 标题栏颜色, 字的颜色;
		/*记录*/图片信息 图片信息;
		cmd窗口信息() {

		}
	};
public:
	//>靠文字和记忆识别,颜色不重要
	图片识别() { }
	//▬0▬数字运算`杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	int ret三数挑最大(int 数1, int 数2, int 数3) {
		//>数1数2数3挑最大的, if两次. 排序要if3次
		int 最大的;
		最大的 = 数1 > 数3 ? 数1 : 数3;
		最大的 = 最大的 > 数2 ? 最大的 : 数2;
		return 最大的;
	}
	vector<int> ret三数排序(int 数1, int 数2, int 数3) {
		vector<int> 从大到小(3, 0);
		//>数1数2数3挑最大的, if两次. 排序要if3次
		if (数1 > 数3) { //>数1>数3
			if (数1 > 数2) {//数1>数2 -> 数1大
				从大到小[0] = 数1;
				if (数3 > 数2) {
					从大到小[1] = 数3;
					从大到小[2] = 数2;
				} else { //2>3
					从大到小[1] = 数2;
					从大到小[2] = 数3;
				}
				return 从大到小;
			} else {// >数1 < 数2
				if (数2 > 数3) { //>数2>数1>数3; 数2>数3
					从大到小[0] = 数2;
					从大到小[1] = 数1;
					从大到小[2] = 数3;
				} else { //数2<数3 -> 数3>数2>数1; 
					从大到小[0] = 数3;
					从大到小[1] = 数2;
					从大到小[2] = 数1;
				}
				return 从大到小;
			}
		} else { //>数3>数1
			if (数3 > 数2) {//>数3 > 数2; 3大
				从大到小[0] = 数3;
				if (数2 > 数1) { //数3>数1;数2>数1;数2<数3
					从大到小[1] = 数2;
					从大到小[2] = 数1;
				} else { //数3>数1;数2<数3;数1>2;
					从大到小[1] = 数1;
					从大到小[2] = 数2;
				}
				return 从大到小;
			} else {//>数2>数3>数1
				从大到小[0] = 数2;
				从大到小[1] = 数3;
				从大到小[2] = 数1;
				return 从大到小;
			}
		}
	}
	int ret数是否在两者间_213(int 数1, int 数2, int 数3) {
		if (数1 < 数2) {
			if (数1 > 数3) { //2>1>3
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_213_大等于(int 数1, int 数2, int 数3) {
		if (数1 <= 数2) {
			if (数1 >= 数3) { // 213
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_312_小于(int 数1, int 数2, int 数3) {
		if (数1 > 数2) {
			if (数1 < 数3) { //3>1>2
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_312_小等于(int 数1, int 数2, int 数3) {
		if (数1 >= 数2) {
			if (数1 <= 数3) { //3>=1>=2
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_大于(int 数1, int 数2, int 数3) {
		ret数是否在两者间_213(数1, 数2, 数3);
	}
	int ret两数是否相同(int uu1, int uu2, int 差的最小值) {
		//正数
		if (abs(uu1 - uu2) < 差的最小值) {
			return 1; //相同
		}
		return 0; //不相同
	}
	//▬0▬比值▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*ret保留小数*/
	float ret计算比值(int uu, int uu2) {
		///if (uu == 0) {
		///	return 0;
		///}
		/*分子不能=零*/
		if (uu2 == 0) {
			return 0;
		}
		return static_cast<float>(uu) / uu2;
	}
	int ret计算比值(int uu, int uu2, int 分子乘) {
		if (uu2 == 0) {
			return 0;
		}
		return (uu * 分子乘) / uu2;
	}
	float ret计算比值_大除以小(int uu, int uu2) {
		if (uu2 == 0) {
			return 0;
		}
		return uu > uu2 ? static_cast<float>(uu) / uu2 : static_cast<float>(uu2) / uu;
	}
	/*ret整数(*/
	int ret计算比值i(int uu, int uu2) {
		if (uu2 == 0) {
			return 0;
		}
		return uu / uu2;
	}
	int ret计算比值i_大除以小(int uu, int uu2) {
		if (uu2 == 0) {
			return 0;
		}
		return uu > uu2 ? uu / uu2 : uu2 / uu;
	}
	//▬1▬零件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	float 计算亮度(int r, int g, int b) {
		//>rgb都是亮度; 亮度=最大亮度; 亮度极差=rgb极差{ 越大越亮}. 中间值偏向哪个;
		//>rgb挑最大的, if两次. 排序要if3次
		return ret三数挑最大(r, g, b);
	}

	/**///▬2▬功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//>两点的颜色是否一样
		/*输入颜色*/
	int 两个颜色是否一样(int r, int g, int b, int r2, int g2, int b2) {
		if (r == r2) {
			if (g == g2) {
				if (b == b2) {
					return 1;
				}
			}
		}
		return 0;
	}
	int ret两点颜色是否一样(Mat& 图, int r, int g, int b, int r2, int g2, int b2, int 差的最小值) {
		if (ret两数是否相同(r, r2, 差的最小值) == 1) {
			if (ret两数是否相同(g, g2, 差的最小值) == 1) {
				if (ret两数是否相同(b, b2, 差的最小值) == 1) {
					return 1;
				}
			}
		}
		return 0;
	}
	int ret两点颜色是否一样_256色(Mat& 图, int r, int g, int b, int r2, int g2, int b2, int 差的最小值) {
		if (ret两数是否相同(r, r2, 差的最小值) == 1) {
			if (ret两数是否相同(g, g2, 差的最小值) == 1) {
				if (ret两数是否相同(b, b2, 差的最小值) == 1) {
					return 1;
				}
			}
		}
		return 0;
	}
	int 两点颜色的2个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2) { //不能用&
		//>颜色共 两个比值 种, rgb比例一样 就是一种颜色. 
		///int r值 = r;
		///int g值 = g;
		///int b值 = b;
		///int r2值 = r2;
		///int g2值 = g2;
		///int b2值 = b2;
		//!0不能/!!!!
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2);
		if (r比g == r2比g2) {
			if (g比b == g2比b2) {
				return 1; //相同
			}
		}
		return 0; //不相同
	}
	int 两点颜色的2个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例) { //不能用&
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2);
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) {
				return 1; //相同
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2) { //不能用&
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		if (r比g == r2比g2) {
			if (g比b == g2比b2) {
				if (r比b == r2比b2) {
					return 1; //相同
				}
			}
			return 0; //不相同
		}
	}
	int 两点颜色的3个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例) { //不能用&
		//>rgb比例一样 就是一种颜色. 
		//!0不能/!!!!
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		//有两个比例一样就行
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				return 1; //相同
			} else {
				if (abs(r比b - r2比b2) < 差的最小值比例) { //1=,3=
					return 1; //相同
				}
			}
		} else { //1!=,2=,3=
			if (abs(g比b - g2比b2) < 差的最小值比例) {
				if (abs(r比b - r2比b2) < 差的最小值比例) {
					return 1; //相同
				}
			}
		}
		return 0; //不相同
	}
	void coutrgb比例(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例) { //不能用&
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		cout << std::format("r比g,g比b,r比b; 点1:{},{},{}; 点2:{},{},{};\n", r比g, g比b, r比b, r2比g2, g2比b2, r2比b2);
	}
	int 两点颜色的3个比值是否一样_考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		//> r:g有几种: 255+254+...+1= 255*128=32640
		//>共有2652,97920种颜色; 0.2亿
		//> rgb比例一样 就是一种颜色. 
		//!0不能/!!!!
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		int 点1的亮度 = 计算亮度(r, g, b);
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		//有两个比例一样就行
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
					return 1; //相同
				}
			} else {
				if (abs(r比b - r2比b2) < 差的最小值比例) { //1=,3=
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //相同
					}
				}
			}
		} else { //1!=,2=,3=
			if (abs(g比b - g2比b2) < 差的最小值比例) {
				if (abs(r比b - r2比b2) < 差的最小值比例) {
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //相同
					}
				}
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_大除以小_考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		//>大/小
		float r比g = r > g ? ret计算比值(r, g) : ret计算比值(g, r), g比b = g > b ? ret计算比值(g, b) : ret计算比值(b, g), r比b = r > b ? ret计算比值(r, b) : ret计算比值(b, r)
			, r2比g2 = r2 > g2 ? ret计算比值(r2, g2) : ret计算比值(g2, r2), g2比b2 = g2 > b2 ? ret计算比值(g2, b2) : ret计算比值(b2, g2), r2比b2 = r2 > b2 ? ret计算比值(r2, b2) : ret计算比值(b2, r2);
		int 点1的亮度 = 计算亮度(r, g, b);
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		//>两个点的比例相减
		//>除法的左右顺序不同,大/小-->3个比例一样就ret1
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				if (abs(r比b - r2比b2) < 差的最小值比例) {//3=
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //3个比例一样
					}
				}
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_大除以小_考虑亮度(Mat& 图, int& ret色1, int& 色2, int& 点1的亮度, int& 点2的亮度, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		//点2不用算
		点1的亮度 = 计算亮度(r, g, b);
		//>区分亮度
		if (点1的亮度 < 71) {
			ret色1 = 0/*黑色*/;
			//>对比 "颜色区分"颜色
			if (ret色1 = 色2) {
				return 1; //都是黑色
			}
		}
		//>大/小
		float r比g = r > g ? ret计算比值(r, g) : ret计算比值(g, r), g比b = g > b ? ret计算比值(g, b) : ret计算比值(b, g), r比b = r > b ? ret计算比值(r, b) : ret计算比值(b, r)
			, r2比g2 = r2 > g2 ? ret计算比值(r2, g2) : ret计算比值(g2, r2), g2比b2 = g2 > b2 ? ret计算比值(g2, b2) : ret计算比值(b2, g2), r2比b2 = r2 > b2 ? ret计算比值(r2, b2) : ret计算比值(b2, r2);
		点1的亮度 = 计算亮度(r, g, b);
		点2的亮度 = 计算亮度(r2, g2, b2);
		//>两个点的比例相减
		//>除法的左右顺序不同,大/小-->3个比例一样就ret1
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				if (abs(r比b - r2比b2) < 差的最小值比例) {//3=
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //3个比例一样
					}
				}
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_考虑亮度(Mat& 图, int& ret色1, int& 色2, int& 点1的亮度, int& 点2的亮度, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		点1的亮度 = 计算亮度(r, g, b);
		//>点2也要算
		/*int*/ 点2的亮度 = 计算亮度(r2, g2, b2);
		///>"颜色区分"{
		//>区分亮度
		if (点1的亮度 < 71) {
			ret色1 = 0;
			//>对比 "颜色区分"颜色
			if (ret色1 = 色2) {
				return 1; //都是黑色
			}
		}
		//比值*100
		///int r比g = ret计算比值(r, g, 100), g比b = ret计算比值(g, b, 100), r比b = ret计算比值(r, b, 100), r2比g2 = ret计算比值(r2, g2, 100), g2比b2 = ret计算比值(g2, b2, 100), r2比b2 = ret计算比值(r2, b2, 100);
		//不能switch
		///float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		///float r比g乘亮度 = r比g * 点1的亮度, g比b乘亮度 = g比b * 点1的亮度, r比b乘亮度 = r比b * 点1的亮度
		///	, r2比g2乘亮度 = r2比g2 * 点2的亮度, g2比b2乘亮度 = g2比b2 * 点2的亮度, r2比b2乘亮度 = r2比b2 * 点2的亮度;
		int r比gi = ret计算比值i(r, g), g比bi = ret计算比值i(g, b), r比bi = ret计算比值i(r, b), r2比g2i = ret计算比值i(r2, g2), g2比b2i = ret计算比值i(g2, b2), r2比b2i = ret计算比值i(r2, b2);
		int r比g乘亮度i = r比gi * 点1的亮度, g比b乘亮度i = g比bi * 点1的亮度, r比b乘亮度i = r比bi * 点1的亮度
			, r2比g2乘亮度i = r2比g2i * 点2的亮度, g2比b2乘亮度i = g2比b2i * 点2的亮度, r2比b2乘亮度i = r2比b2i * 点2的亮度;
		//>区分比值
		//switch,case不能比较大小
		if (ret数是否在两者间_大于(r比g乘亮度i, 65025, 900)) { //越大越红
			//>亮度低时
			if (ret数是否在两者间_大于(g比b乘亮度i, 1.5, 0)) {
			}
			//>亮度高时
		}
		//>对比 "颜色区分"
		if (ret色1 = 色2) {
			return 1; //一样的
		}
		//>除法的左右顺序固定-->3个比例一样就ret1
		return 0; //不相同
	}
	int 两点颜色是否一样_颜色分类(Mat& 图, int& ret色1, int& 色2, int& 点1的亮度, int& 点2的亮度, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) {
		//>会不会:颜色不用分类
		///>大/小
		点1的亮度 = 计算亮度(r, g, b);
		/*int*/ 点2的亮度 = 计算亮度(r2, g2, b2);
		if (点1的亮度 < 71) {
			ret色1 = 0/*黑色*/;
			if (ret色1 = 色2) {
				return 1; //一样的
			}
		}
		//>枚举rgb的值
		if (ret数是否在两者间_大于(r, 255, 150)) { //越大越红
			if (ret数是否在两者间_大于(g, 50, 0)) {
			}
		}
		//>对比 "颜色区分"
		if (ret色1 = 色2) {
			return 1; //都是黑色
		}
		return 0; //不相同
	}
	/*输入坐标*/
	//int 两点颜色是否一样(Mat& 图, int y,int x, int x2, int y2, int 间隔, float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样) {
	int ret两点颜色是否一样(Mat& 图, int y, int x, int x2, int y2, int 差的最小值 /*float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样*/) {
		if (ret两数是否相同(图片属性::retR值(图, x, y), 图片属性::retR值(图, x2, y2), 差的最小值) == 1) {
			if (ret两数是否相同(retG值(图, x, y), retG值(图, x2, y2), 差的最小值) == 1) {
				if (ret两数是否相同(retB值(图, x, y), retB值(图, x2, y2), 差的最小值) == 1) {
					return 1;
				}
			}
		}
		return 0;
	}
	int 两点颜色是否一样(Mat& 图, 一点颜色 点1, 一点颜色 点2, int 差的最小值) {
		//>只要两个一样-->1
		int n个通道一样 = 0;
		if (ret两数是否相同(图片属性::retR值(图, 点1.x, 点1.y), 图片属性::retR值(图, 点2.x, 点2.y), 差的最小值) == 1) {
			n个通道一样 += 1;
		}
		if (ret两数是否相同(retG值(图, 点1.x, 点1.y), retG值(图, 点2.x, 点2.y), 差的最小值) == 1) {
			n个通道一样 += 1;
		}
		if (ret两数是否相同(retB值(图, 点1.x, 点1.y), retB值(图, 点2.x, 点2.y), 差的最小值) == 1) {
			n个通道一样 += 1;
		}
		if (n个通道一样 >= 2) {
			return 1;
		}
		return 0;
	}
	void get两点颜色差(Mat& 图, int y, int x, int 间隔, float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样) {

	}

	void 检测是否变化(Mat& 图, int y, int x, int 间隔, float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样)
	{
		//比较 间隔 的像素



	}
	void 检测是否变化(Mat& 图, int y, int x, int 间隔, float 全局图像差别小于此比例就是一样)
	{


	}
	void 指定的像素()
	{

	}
};
#endif
