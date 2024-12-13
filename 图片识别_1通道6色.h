#pragma once
#ifndef _1通道6色图片_H
#define _1通道6色图片_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

#include  <E:\lib\图片识别.h>

////using namespace wode;
class 图片识别_1通道6色/*!256/50=6色*/{
public:
	前置cout 前置c;/*前置cout1*/
	cmd cmd1;
	直线方程 ViXmFhIg;
	窗口 idkb;
	/*OpenCV*/
	截图 jxtu;
	图片识别 TuPmUiBx;
public:
	/**/ //>记录
	/**///定量
	COORD CoMat尺寸ζ输入, /*CoMat尺寸,Co图片尺寸*/CoMat尺寸ζ输出 /**/; COORD 检测的范围 = { 0,0 }; COORD CoV的尺寸;
	/**///变量
	/*v2i图片`的坐标*/COORD 输出图片的坐标;
	int r, g, b;
	float f记录;
	/*图片转换成这个, v2i记录图片所有信息, 每个点`就有那个点*/
	新v2i v2iMatUchar除10, v2iMatUchar除50;
	图片info 单通道6色图片/*0~5是六种颜色*/;
	/**///设置
	int 大于是浅色 = 180, 小于是深色 = 76/*那中间是正常颜色*/;
public:
	图片识别_1通道6色(){}/*()*/
	~图片识别_1通道6色(){}/*~()*/
	/**///转换`V2i单通道灰度图
	/*todo 没做完*/
	/*v2i*/
	auto getMatTOV2i_MatUchar除(/*输入*/Mat& m, int y下个点加几个像素, int x下个点加几个像素, int i值的除数,/*输出*/新v2i& v2i){
		v2i.assign(m.rows/y下个点加几个像素, 新vi(m.cols/x下个点加几个像素, 0));
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		CoMat尺寸ζ输出.Y = m.rows/y下个点加几个像素; CoMat尺寸ζ输出.X = m.cols/x下个点加几个像素;
		/*for( y){ for( x){ V2i[y][x]= m.at<uchar>(Point(x, y))/i值的除数; } }*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<CoMat尺寸ζ输入.Y&&y序号ζ输出<CoMat尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素, y序号ζ输出 += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<CoMat尺寸ζ输入.X&&x序号ζ输出<CoMat尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/ ///cout11("MatTOV2i","v2i[",y序号ζ输出,"][",x序号ζ输出,"]=Mat(",y序号ζ输入, ",",x序号ζ输入,");", "\n");
				v2i[y序号ζ输出][x序号ζ输出] = m.at<uchar>(Point(x序号ζ输入, y序号ζ输入))/i值的除数;
			}/*for*/
		}/*for*/
	}/*auto*/
	/*info*/
	auto getMatTOV2i_MatUchar除AND图片info初始化(/*输入*/Mat& m, int y下个点加几个像素, int x下个点加几个像素, int i值的除数,/*输出*/图片info& 图片){
		图片info初始化(图片,m,y下个点加几个像素,  x下个点加几个像素,i值的除数);
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		CoMat尺寸ζ输出.Y = m.rows/y下个点加几个像素; CoMat尺寸ζ输出.X = m.cols/x下个点加几个像素;
		图片info初始化(图片);
		/*for( y){ for( x){ V2i[y][x]= m.at<uchar>(Point(x, y))/i值的除数; } }*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<CoMat尺寸ζ输入.Y&&y序号ζ输出<CoMat尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素, y序号ζ输出 += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<CoMat尺寸ζ输入.X&&x序号ζ输出<CoMat尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/ ///cout11("MatTOV2i","图片.v2i灰度图片除50[",y序号ζ输出,"][",x序号ζ输出,"]=Mat(",y序号ζ输入, ",",x序号ζ输入,");", "\n");
				图片.v2i灰度图片除50[y序号ζ输出][x序号ζ输出] = m.at<uchar>(Point(x序号ζ输入, y序号ζ输入))/i值的除数;
			}/*for*/
		}/*for*/
	}/*auto*/
	auto getMatTOV2i_MatUchar除50AND图片info初始化(/*输入*/Mat& m, int y下个点加几个像素, int x下个点加几个像素,/*输出*/图片info& 图片){
		图片info初始化(图片,m,y下个点加几个像素,  x下个点加几个像素,50);
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		CoMat尺寸ζ输出.Y = m.rows/y下个点加几个像素; CoMat尺寸ζ输出.X = m.cols/x下个点加几个像素;
		/*for( y){ for( x){ V2i[y][x]= m.at<uchar>(Point(x, y))/i值的除数; } }*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<CoMat尺寸ζ输入.Y&&y序号ζ输出<CoMat尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素, y序号ζ输出 += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<CoMat尺寸ζ输入.X&&x序号ζ输出<CoMat尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/ ///cout11("MatTOV2i","图片.v2i灰度图片除50[",y序号ζ输出,"][",x序号ζ输出,"]=Mat(",y序号ζ输入, ",",x序号ζ输入,");", "\n");
				图片.v2i灰度图片除50[y序号ζ输出][x序号ζ输出] = m.at<uchar>(Point(x序号ζ输入, y序号ζ输入))/50;
			}/*for*/
		}/*for*/
		/*todo*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<CoMat尺寸ζ输入.Y&&y序号ζ输出<CoMat尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素, y序号ζ输出 += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<CoMat尺寸ζ输入.X&&x序号ζ输出<CoMat尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/ ///cout11("MatTOV2i","图片.v2i灰度图片除50[",y序号ζ输出,"][",x序号ζ输出,"]=Mat(",y序号ζ输入, ",",x序号ζ输入,");", "\n");
				图片.v2i灰度图片除50[y序号ζ输出][x序号ζ输出] = m.at<uchar>(Point(x序号ζ输入, y序号ζ输入))/50;
			}/*for*/
		}/*for*/
	}/*auto*/
	/*图片info里面有好几个v2i, 无法判断,只能手动*/
	/*todo if 除=50 v2i除50*/
	/*v2i-->M灰度图`Mat<uchar>. M尺寸放大缩小功能{ yx下个点加几个像素<1=M放大, 应该没意义. <1=( M缩小,v会跳过 ); };*/
	auto getV2iTOMat_MatUchar除(/*输入*/新v2i& v2i, int y下个点加几个像素, int x下个点加几个像素, int i值的除数,/*输出*/Mat& m){
		if( y下个点加几个像素==1 and x下个点加几个像素==1 ){
			/*长和宽设定成v2i的-->v2i把数据*?填到里面*/
			m = Mat(v2i.size(), v2i[0].size(), CV_8UC1);

			retu;
		}/*if*/
		/*长和宽设定成v2i/间隔的-->v2i把数据*?填到里面*/
		m = Mat(v2i.size()/y下个点加几个像素, v2i[0].size()/x下个点加几个像素, CV_8UC1);
		CoMat尺寸ζ输出.Y = m.rows; CoMat尺寸ζ输出.X = m.cols;
		/*for( y){ for( x){ m.at<uchar>(Point(x, y))=V2i[y][x]*i值的除数; } }*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<v2i.size()&&y序号ζ输出<CoMat尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素, y序号ζ输出 += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<v2i[0].size()&&x序号ζ输出<CoMat尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/
				m.at<uchar>(Point(x序号ζ输出, y序号ζ输出)) = v2i[y序号ζ输入][x序号ζ输入]*i值的除数;
			}/*for*/
		}/*for*/
	}/*auto*/
	auto getV2iTOMat_MatUchar除50(/*输入*/图片info& 图片, int y下个点加几个像素, int x下个点加几个像素,/*输出*/Mat& m){
		/*长和宽设定成v2i的-->v2i把数据*10填到里面*/
		m = Mat(图片.v2i灰度图片除50.size(), 图片.v2i灰度图片除50[0].size(), CV_8UC1);
		CoMat尺寸ζ输出.Y = m.rows; CoMat尺寸ζ输出.X = m.cols;
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<图片.v2i灰度图片除50.size()&&y序号ζ输出<CoMat尺寸ζ输出.Y; y序号ζ输入 += y下个点加几个像素, y序号ζ输出 += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<图片.v2i灰度图片除50[0].size()&&x序号ζ输出<CoMat尺寸ζ输出.X; x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/
				m.at<uchar>(Point(x序号ζ输出, y序号ζ输出)) = 图片.v2i灰度图片除50[y序号ζ输入][x序号ζ输入]*50;
			}/*for*/
		}/*for*/
	}/*auto*/
	/*1个灰度值-->Mat; v的一些坐标-->Mat*/
	auto get1个灰度值TOMat_MatUchar除(/*输入*/新v2i& v2i, int iV2i的灰度值/*v2i[灰度值][0]*/, int i值的除数, int y下个点加几个像素, int x下个点加几个像素,/*输出*/Mat& m){
		/*长和宽设定成v2i的-->v2i把数据*i值的除数`填到m里面*/
		m = Mat(v2i.size(), v2i[0].size(), 0, CV_8UC1);
		CoMat尺寸ζ输出.Y = m.rows; CoMat尺寸ζ输出.X = m.cols;
		/*for v的xy, m的尺寸要>v的*/
		/*for( y){ for( x){ if(m.at颜色=灰度值)m.at<uchar>(Point(x, y))=V2i[y][x]*i值的除数; } }*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<v2i.size(); y序号ζ输入/*v*/ += y下个点加几个像素, y序号ζ输出/*m*/ += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<v2i[0].size(); x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/
				if( v2i[y序号ζ输入][x序号ζ输入]/*v图片`颜色是否是*/==iV2i的灰度值 ){
					m.at<uchar>(Point(x序号ζ输出, y序号ζ输出)) = v2i[y序号ζ输入][x序号ζ输入]*i值的除数;
				}/*if*/
			}/*for*/
		}/*for*/
	}/*auto*/
	auto get1个灰度值TOMat_MatUchar除50(/*输入*/图片info& 图片, int iV2i的灰度值, int i值的除数,/*输出*/Mat& m){
		/*长和宽设定成v2i的-->v2i把数据*i值的除数`填到m里面*/
		///get1个灰度值TOMat_MatUchar除(图片.v2i灰度图片除50,1,1,5,50,m);
		get1个灰度值TOMat_MatUchar除(图片.v2i灰度图片除50, iV2i的灰度值, 50, 1, 1, m);
	}/*auto*/
	auto get多个灰度值TOMat_MatUchar除(/*输入*/新v2i& v2i, 新vi vi灰度值/*v2i[1`2`3]*/, int i值的除数, int y下个点加几个像素, int x下个点加几个像素,/*输出*/Mat& m){
		/*长和宽设定成v2i的-->v2i把数据*i值的除数`填到m里面*/
		m = Mat(v2i.size(), v2i[0].size(), 0, CV_8UC1);
		CoMat尺寸ζ输出.Y = m.rows; CoMat尺寸ζ输出.X = m.cols;
		/*for v的xy, m的尺寸要>v的*/
		/*for( y){ for( x){ if(m.at颜色=灰度值)m.at<uchar>(Point(x, y))=V2i[y][x]*i值的除数; } }*/
		for( size_t y序号ζ输入 = 0, y序号ζ输出 = 0; y序号ζ输入<v2i.size(); y序号ζ输入/*v*/ += y下个点加几个像素, y序号ζ输出/*m*/ += 1 ){/*行*/
			for( size_t x序号ζ输入 = 0, x序号ζ输出 = 0; x序号ζ输入<v2i[0].size(); x序号ζ输入 += x下个点加几个像素, x序号ζ输出 += 1 ){/*列*/
				for( auto val:vi灰度值 ){
					if( v2i[y序号ζ输入][x序号ζ输入]/*v图片`颜色是否是*/==val ){
						m.at<uchar>(Point(x序号ζ输出, y序号ζ输出)) = v2i[y序号ζ输入][x序号ζ输入]*i值的除数;
					}/*if*/
				}/*for*/
			}/*for*/
		}/*for*/
	}/*auto*/
	/**///>图片识别
	/*文件结构:
	//>v2i线属性:
	*               x0 x1 x2 x3  x4   x5               x6   x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
	* y0 线两端的坐标(y1 x1 y2 x2) 线长 方向(横0竖1斜\2/3) 颜色
	* y1
	* y2
	//>v2i点对应线: //在坐标上填`线的属性的y序号
	*    x0              x1 x2 x3 x4 x5 x6
	* y0 v2i线属性[][]的y y  y  y
	* y1 y				  y
	* y2 y               y
	v3i线属性:开销太大了`空的位置太多了
	v2i图片的点是否已识别线:
	//>v2i单通道图颜色属性:
	//yx是第1第2个通道,y是颜色,x是成员;
	*    x0  x1          x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
	* y0 数量 起始像素坐标
	* y1 数量
	* y2 数量
	//>v5i4通道图颜色属性:
	//v的4个通道,通道对应rgb透明度; yx是第四第5个通道,y是颜色,x是成员;
	*    x0  x1 x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
	* y0
	* y1
	* y2
	//>v2i每种颜色的像素数量:
	//v的1个通道,通道对应灰度值; 第2个通道是`成员;
	*    x0
	* y0 像素数量
	* y1 像素数量
	//vi每种颜色的像素数量:
	* y0 像素数量
	* y1 像素数量
	//>v5i每种颜色的像素的数量:
	//v的4个通道,通道对应rgb透明度; 第四第五个通道是`颜色and成员;
	*     五0     五1 五2 五3 五4 五5 五6 五7 五8 五9 五0 五11 五12 五13
	* 四0 像素数量 测试
	* 四1 像素数量
	* 四2 像素数量
	*/
	/*图片.v2i灰度图片除50.size()=M.size-->*/
	void 图片info初始化( /*输入输出*/图片info& 图片){
		coutsf("图片info初始化{ }\n");
		/*todo 顺序要优化*/
		/*Co=m--> v.size=m--> Co=v.size*/
		/*todo 三角水果/删掉这个*/CoMat尺寸ζ输入.Y = 图片.v2i灰度图片除50.size(); CoMat尺寸ζ输入.X = 图片.v2i灰度图片除50[0].size();
		图片.像素数y = 图片.v2i灰度图片除50.size(); 图片.像素数x = 图片.v2i灰度图片除50[0].size();
		图片.总像素数量 = 图片.像素数y*图片.像素数x;
		/*等同于`v2i图片`的尺寸*/
		图片.v2i每种颜色的像素数量.assign(6, 新vi(1, 0));
		图片.vi每种颜色的像素数量.assign(6, 0);
		图片.vf每种颜色的像素数量除以总像素数量.assign(6, 1.5555555555);
		图片.v2i该点是否已识别线.assign(图片.v2i灰度图片除50.size(), 新vi(图片.v2i灰度图片除50[0].size(), 0));
		///图片.v5i.assign(图片.v2i灰度图片除50.size(), 新vi(图片.v2i灰度图片除50[0].size(), 0));
		前置c.cvecSize("v2i灰度图片除50", 图片.v2i灰度图片除50);
		前置c.cvecSize("v2i该点是否已识别线", 图片.v2i该点是否已识别线);
	}/*void*/
	 /*M.size-->图片.v2i灰度图片除50.size()*/
	void 图片info初始化( /*输入输出*/图片info& 图片,/*输入*/Mat& M, int y下个点加几个像素, int x下个点加几个像素, int 除数){
		coutsf("图片info初始化{ }\n");
		/*todo 顺序要优化*/
		/*Co=m--> v.size=m--> Co=v.size*/
		switchV2i灰度图片除几的assign(图片,/*输入*/M, y下个点加几个像素, x下个点加几个像素, 除数);
		/*不是 M.rows M.cols*/
		/*边长*/图片.像素数y = 图片.v2i灰度图片除50.size(); 图片.像素数x =图片.v2i灰度图片除50[0].size(); /*面积*/图片.总像素数量 = 图片.像素数y*图片.像素数x;
		/*等同于`v2i图片`的尺寸*/
		图片.v2i每种颜色的像素数量.assign(6, 新vi(1, 0));
		图片.vi每种颜色的像素数量.assign(6, 0);
		图片.vf每种颜色的像素数量除以总像素数量.assign(6, 1.5555555555);
		图片.v2i该点是否已识别线.assign(图片.像素数y, 新vi(图片.像素数x, 0));
		///图片.v5i.assign(图片.像素数y, 新vi(图片.像素数x, 0));
		前置c.cvecSize("v2i灰度图片除50", 图片.v2i灰度图片除50);
		前置c.cvecSize("v2i该点是否已识别线", 图片.v2i该点是否已识别线);
	}/*void*/
	auto 在v2i中是否找到此灰度值_v的每一行坐标就是灰度值(/*输入*/新v2i& v2i, int& i灰度值){
		下标info /*跨度是1*/下标ζ输入;
		for( 下标ζ输入.一 = 0; 下标ζ输入.一<v2i.size(); 下标ζ输入.一 += 1 ){/*行*/
			///for( 下标ζ输入.二 = 0; 下标ζ输入.二<v2i[0].size(); 下标ζ输入.二 += 1 ){/*列*/
			if( i灰度值==v2i[下标ζ输入.一][0] ){
				retu 1;
			}/*if*/
		///}/*for*/
		}/*for*/
		retu 0;
	}/*auto*/
	auto get每种颜色的像素数量( /*输入输出*/图片info& 图片, /*输入*/int y下个点加几个像素, int x下个点加几个像素){
		/*coord; for{ for{}} */
		COORD /*跨度可变*/CoV2i图ζ输入, /*跨度是1*/CoV2i像素数量ζ输入;
		int i灰度值 = 0;
		/*if 步进是一,就不需要两套坐标*/
		for( CoV2i图ζ输入.Y = 0, CoV2i像素数量ζ输入.Y = 0; CoV2i图ζ输入.Y<CoMat尺寸ζ输入.Y; CoV2i图ζ输入.Y += y下个点加几个像素, CoV2i像素数量ζ输入.Y += 1 ){/*行*/
			for( CoV2i图ζ输入.X, CoV2i像素数量ζ输入.X = 0, CoV2i图ζ输入.X = 0; CoV2i图ζ输入.X<CoMat尺寸ζ输入.X; CoV2i图ζ输入.X += x下个点加几个像素, CoV2i像素数量ζ输入.X += 1 ){/*列*/
				/*当前颜色*/i灰度值 = 图片.v2i灰度图片除50[CoV2i图ζ输入.Y][CoV2i图ζ输入.X];
				/*统计颜色数量*/图片.v2i每种颜色的像素数量[i灰度值][0]++;
				/// /*if v2i[灰度值][0]`像素数量*/if(图片.v2i单通道图颜色属性除50[i灰度值][0]==0/*第一次遇到这个颜色*/ ){}/*if*/
				/*和右边对比*/if( 图片.v2i灰度图片除50[CoV2i图ζ输入.Y][CoV2i图ζ输入.X]==图片.v2i灰度图片除50[CoV2i图ζ输入.Y][CoV2i图ζ输入.X += x下个点加几个像素] ){
					/*这是一条线*/
				}/*if*/
			}/*for*/
		}/*for*/
		c每种颜色的像素数量(图片);
	}/*auto*/
	void c每种颜色的像素数量( /*输入*/图片info& 图片){
		下标info /*跨度是1*/下标ζ输入;
		for( 下标ζ输入.一 = 0; 下标ζ输入.一<图片.v2i每种颜色的像素数量.size(); 下标ζ输入.一 += 1 ){/*行*/
			coutsf("灰度值{}有{}个\n", 下标ζ输入.一, 图片.v2i每种颜色的像素数量[下标ζ输入.一][0]);
		}/*for*/
	}/*void*/
	/*get比值*/
	void getvf每种颜色的像素数量除以总像素数量色(/*输入*/图片info& 图片){
		for( size_t y1 = 0; y1<图片.vf每种颜色的像素数量除以总像素数量.size(); y1++ ){
			图片.vf每种颜色的像素数量除以总像素数量[y1] = 图片.vi每种颜色的像素数量[y1]/图片.总像素数量;
		}/*for*/
	}/*void*/
	/*1通道Mat, get好几个灰度值*/
	float get判断前景色背景色(/*输入*/图片info& 图片,/*输出*/新vi vi前景色, 新vi vi背景色){
		/*if 比值<10*/
		float 比值;
		for( size_t y1 = 0; y1<图片.vf每种颜色的像素数量除以总像素数量.size(); y1++ ){
			比值 = 图片.vf每种颜色的像素数量除以总像素数量[y1];
			if( 比值>0.9 ){/*这是背景色,其他的全是前景色*/
				vi背景色[y1] = y1;
				for( size_t y2 = 0; y2<图片.vi每种颜色的像素数量.size(); y2++ ){
					if( y2==y1 ){
						continu;
					}/*if*/
					vi前景色[y2] = y2;/*除50`颜色=下标*/
				}/*for*/
				retu 0.1;/*分界线*/
			} else{/*比值<=0.1*/
				vi前景色[y1] = y1;
				vi背景色[y1] = y1;
			}/*else*/
		}/*for*/
		retu 0;/*没有符合条件(<0.1)的数*/
	}/*float*/
	/**///>get图片所有线
	// /*只用了.X, 没用.Y*/
	auto get向右查找同一颜色( /*输入*/图片info& 图片, COORD Co当前点){
		COORD Co起始点 = Co当前点, Co刚才点 = Co当前点;
		while( true ){
			/*对比颜色-->读取坐标*/ /*读取坐标-->对比颜色*/
			if( get右边的点的坐标(Co当前点, CoMat尺寸ζ输入)==1/*右边有点*/ ){
				if( /*左右两点颜色一样*/图片.v2i灰度图片除50[Co刚才点.Y][Co刚才点.X]==图片.v2i灰度图片除50[Co当前点.Y][Co当前点.X] ){
					Co刚才点 = Co当前点;
					continue;
				}/*if*/
			}/*if*/
			/*结束while*/
			if( Co刚才点.X==Co起始点.X ){/*没匹配到*/
				retu;
			}/*if*/
			if( Co刚才点.X>Co起始点.X ){/*X=线的右端*/
				////*线的右端的坐标*/图片.v3i线属性[图片][] = Co刚才点.X
				retu;
				/*坐标`标记为已读取*/
				for( size_t i = Co起始点.X; i<Co刚才点.X; i++ ){
					/*Co刚才点 一定是`有结果的*/
					图片.v2i该点是否已识别线[Co刚才点.Y][Co刚才点.X] = 1;
				}/*for*/
			}/*if*/
		}/*while*/
	}/*auto*/
	auto /*get整理图片所有颜色`get记录图片形状*/get图片所有线(/*输入输出*/图片info& 图片, /*输入*/int y下个点加几个像素, int x下个点加几个像素){
		/*遍历m的像素{ 读取颜色-->(if新的颜色-->记录颜色)-->if右边的颜色一样-->找线的右端-->途经像素标记为已识别};*/
		/*为什么需要两个坐标? v2i图片所有颜色 转换成`v2i线的属性*/
		COORD CoV2i图ζ输入, CoV2i线ζ输出
			, CoV2i单通道图颜色属性ζ输入;
		int i灰度值 = 0;
		/*if 步进是一,就不需要两套坐标*/
		for( CoV2i图ζ输入.Y = 0, CoV2i线ζ输出.Y = 0; CoV2i图ζ输入.Y<CoMat尺寸ζ输入.Y&&CoV2i线ζ输出.Y<CoMat尺寸ζ输出.Y; CoV2i图ζ输入.Y += y下个点加几个像素, CoV2i线ζ输出.Y += 1 ){/*行*/
			for( CoV2i图ζ输入.X = 0, CoV2i线ζ输出.X = 0; CoV2i图ζ输入.X<CoMat尺寸ζ输入.X&&CoV2i线ζ输出.X<CoMat尺寸ζ输出.X; CoV2i图ζ输入.X += x下个点加几个像素, CoV2i线ζ输出.X += 1 ){/*列*/
				/*当前颜色*/i灰度值 = 图片.v2i灰度图片除50[CoV2i图ζ输入.Y][CoV2i图ζ输入.X];
				/*统计颜色数量*/图片.v2i灰度图颜色属性除50[i灰度值][0]++;
				/// /*if v2i[灰度值][0]`像素数量*/if(图片.v2i单通道图颜色属性除50[i灰度值][0]==0/*第一次遇到这个颜色*/ ){}/*if*/
				/*和右边对比*/if( 图片.v2i灰度图片除50[CoV2i图ζ输入.Y][CoV2i图ζ输入.X]==图片.v2i灰度图片除50[CoV2i图ζ输入.Y][CoV2i图ζ输入.X += x下个点加几个像素] ){
					/*这是一条线*/
				}/*if*/
			}/*for*/
		}/*for*/
	}/*auto*/
	auto get图片所有线(/*输入*/Mat& m, COORD Co起始点,/*输出*/新v2i& v2i){

	}/*auto*/
	auto get图片所有线(/*输入输出*/图片info& 图片/*输入*/ /*输出*/){
		COORD Co图片范围;
		//Co图片范围.Y=
	}/*auto*/
	auto get任务栏所有线_2024年9月29日230211(/*输入输出*/图片info& 图片/*输入*/ /*输出*/){
		COORD Co图片范围;
		Co图片范围.Y = 2160, Co图片范围.X = 141;
		/*for(范围){v2i灰度图的前景色`看思维导图嘛}*/
		for( size_t 行序 = 0; 行序<Co图片范围.Y; 行序++ ){
			for( size_t 列序 = 0; 列序<Co图片范围.X; 列序++ ){
				//图片.v2i灰度图片除50();
			}/*for*/
		}/*for*/
	}/*auto*/
	auto get任务栏所有线_2024年10月15日193901(/*输入输出*/图片info& 图片/*输入*/ /*输出*/){
		窗口info 任务栏1; get任务栏hwnd(任务栏1);
		COORD Co图片范围;
		Co图片范围.Y = 任务栏1.窗口尺寸y, Co图片范围.X = 任务栏1.窗口尺寸x;
		下标info 像素下标;
		for( 像素下标.一/*y*/ = 0; 像素下标.一 < Co图片范围.Y; 像素下标.一++ ){
			for( 像素下标.二/*x*/ = 0; 像素下标.二 < Co图片范围.X; 像素下标.二++ ){
				单通道6色图片.v2i灰度图片除50[像素下标.一][像素下标.二];
			}/*for*/
		}/*for*/
	}/*auto*/
	/**///测试`图片识别
	auto 根据坐标c线属性(){

	}/*auto*/
	/**/ //▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬ ▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*单通道<uchar>*/
	auto c一个通道的值_uchar(Mat& m, int y, int x){
		f记录 = m.at<uchar>(Point(x, y));
		/*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
		coutsf2("第{}行`第{}列=", y, x);
		couta1("{ ");
		couta2(f记录, " }\n");
	}/*template auto*/
	auto c对角线的一个通道的值_uchar(/*输入*/Mat& m, int x下个点是加几个像素){
		/*输入`记录图片信息*/
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		size_t y = 0;/*行*/
		for( size_t x = 0; x<CoMat尺寸ζ输入.X; x += x下个点是加几个像素 ){
			y = x;
			if( y<CoMat尺寸ζ输入.Y ){
				c一个通道的值_uchar(m, y, x);
			}/*if*/
		}/*for*/
	}/*template auto*/
	auto c所有点的一个通道的值_uchar(/*输入*/Mat& m, int y下个点是加几个像素, int x下个点是加几个像素){
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		for( size_t y = 0; y<CoMat尺寸ζ输入.Y; y += y下个点是加几个像素 ){/*行*/
			for( size_t x = 0; x<CoMat尺寸ζ输入.X; x += x下个点是加几个像素 ){
				c一个通道的值_uchar(m, y, x);
			}/*for*/
		}/*for*/
	}/*auto*/
	/*多通道<vec4b>*/
	template<typename at类型>
	auto c第0通道(Mat& m, int y, int x){
		f记录 = m.at<at类型>(Point(x, y))[0];
		/*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
		coutsf2("第{}行`第{}列=", y, x);
		couta1("{ ");
		couta2(f记录, " }\n");
	}/*template auto*/
	template<typename at类型>
	auto c第1通道(Mat& m, int y, int x){
		f记录 = m.at<at类型>(Point(x, y))[1];
		/*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
		coutsf2("第{}行`第{}列=", y, x);
		couta1("{ ");
		couta2(f记录, " }\n");
	}/*template auto*/
	template<typename at类型>
	auto c第2通道(Mat& m, int y, int x){
		f记录 = m.at<at类型>(Point(x, y))[2];
		/*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
		coutsf2("第{}行`第{}列=", y, x);
		couta1("{ ");
		couta2(f记录, " }\n");
	}/*template auto*/
	template<typename at类型>
	auto c一个通道的值(Mat& m, int i第几个通道, int y, int x){
		switch( i第几个通道 ){
		default:
			break;
		case(0):
			c第0通道<at类型>(m, y, x);
			break;
		case(1):
			c第1通道<at类型>(m, y, x);
			break;
		case(2):
			c第2通道<at类型>(m, y, x);
			break;
		}/*switch*/
	}/*template auto*/
	 /*左上角到`右下角*/
	template<typename at类型>
	auto c对角线的一个通道的值(/*输入*/Mat& m, int i第几个通道, int x下个点是加几个像素){
		/*输入`记录图片信息*/
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		size_t y = 0;/*行*/
		for( size_t x = 0; x<CoMat尺寸ζ输入.X; x += x下个点是加几个像素 ){
			y = x;
			if( y<CoMat尺寸ζ输入.Y ){
				c一个通道的值<at类型>(m, i第几个通道, y, x);
			}/*if*/
		}/*for*/
	}/*template auto*/
	template<typename at类型>
	auto c所有点的一个通道的值(/*输入*/Mat& m, int i第几个通道, int y下个点是加几个像素, int x下个点是加几个像素){
		CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
		for( size_t y = 0; y<CoMat尺寸ζ输入.Y; y += y下个点是加几个像素 ){/*行*/
			for( size_t x = 0; x<CoMat尺寸ζ输入.X; x += x下个点是加几个像素 ){
				c一个通道的值<at类型>(m, i第几个通道, y, x);
			}/*for*/
		}/*for*/
	}/*template auto*/
	 /*用v2i*/
	 ///template<typename at类型>
	 ///auto c对角线的一个通道的值(/*输入*/Mat& m, 新v2i& v2i256色图, int x下个点是加几个像素) {
	 ///	/*输入`记录图片信息*/
	 ///	CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
	 ///	size_t y = 0;/*行*/
	 ///	for (size_t x = 0; x < CoMat尺寸ζ输入.X; x += x下个点是加几个像素) {
	 ///		y = x;
	 ///		if (y < CoMat尺寸ζ输入.Y) {
	 ///			cRgb<at类型>(v2i256色图, y, x);
	 ///		}/*if*/
	 ///	}/*for*/
	 ///}/*template auto*/
	 ///template<typename at类型>
	 ///auto c所有点的一个通道的值(Mat& m, int y下个点是加几个像素, int x下个点是加几个像素) {
	 ///	CoMat尺寸ζ输入.Y = m.rows; CoMat尺寸ζ输入.X = m.cols;
	 ///	for (size_t y = 0; y < CoMat尺寸ζ输入.Y; y += y下个点是加几个像素) {/*行*/
	 ///		for (size_t x = 0; x < CoMat尺寸ζ输入.X; x += x下个点是加几个像素) {
	///			cRgb<at类型>(m, y, x);
	///		}/*for*/
	///	}/*for*/
	///}/*template auto*/

	/*坐标边界检测 {x两种情况,y一种情况}*/
	int v2坐标边界检测(/*输入*/int& y, int& x, COORD CoV的尺寸){
		if( x<(CoV的尺寸.X-1) ){/*x在范围内*/
			retu 1;/*可以向右, 这个`没改, 下面那个是`向右移动了*/
		} else{/*x>=范围*/
			if( y<CoV的尺寸.Y-1 ){/*y没有到底*/
				retu 2;/*需要向下*/
			} else{
				/*坐标完了*/
				retu 0;/*读取完了*/
			}/*else*/
		}/*else*/
	}/*int*/
	int get下一个点(/*输入输出*/int& y, int& x, COORD CoV的尺寸){
		if( x<CoV的尺寸.X-1 ){/*x在范围内*/
			x++;
			retu 1;/*改了*/
		} else{/*x>=范围*/
			if( y<CoV的尺寸.Y-1 ){/*y没有到底*/
				y++; x = 0;
				retu 2;/*换行*/
			} else{/*y是最下面一行*/
				/*坐标完了*/retu 0;/*没有改*/
			}/*else*/
		}/*else*/
	}/*int*/
	int get下一个点的坐标(/*输入输出*/COORD Co点坐标,/*输入*/COORD CoV的尺寸){
		if( Co点坐标.X<CoV的尺寸.X-1 ){/*x在范围内*/
			Co点坐标.X++;
			retu 1;/*改了*/
		} else{/*x>=范围*/
			if( Co点坐标.Y<CoV的尺寸.Y-1 ){/*y没有到底*/
				Co点坐标.Y++; Co点坐标.X = 0;
				retu 2;/*这行`到最右边*/
			} else{/*y是最下面一行*/
				/*坐标完了*/retu 0;/*没有改*/
			}/*else*/
		}/*else*/
	}/*int*/
	int get右边的点的坐标(/*输入输出*/COORD Co点坐标,/*输入*/COORD CoV的尺寸){
		if( Co点坐标.X<CoV的尺寸.X-1 ){/*x在范围内*/
			Co点坐标.X++;
			retu 1;/*改了*/
		} else{/*x>=范围*/
			if( Co点坐标.Y<CoV的尺寸.Y-1 ){/*y没有到底*/
				retu 2;/*这行`到最右边*/
			} else{/*y是最下面一行*/
				/*坐标完了*/retu 0;/*没有改*/
			}/*else*/
		}/*else*/
	}/*int*/

	void get任务栏hwnd(窗口info& 窗口1 /*HWND &hwnd*/){
		/*getHwnd*/
		窗口1.className = (LPTSTR)"Shell_trayWnd";
		窗口1.windowName = (LPTSTR)"";
		idkb.get用className得窗口infoTHENc(窗口1);
	}/*void*/

	void switchV2i灰度图片除几的assign(图片info& 图片,/*输入*/Mat& M, int y下个点加几个像素, int x下个点加几个像素, int 除数){
		switch( 除数 ){
		default:break;
		case(50): 图片.v2i灰度图片除50.assign(M.rows/y下个点加几个像素, 新vi(M.cols/x下个点加几个像素, 0));			break;
		case(1): 图片.v2i灰度图片.assign(M.rows/y下个点加几个像素, 新vi(M.cols/x下个点加几个像素, 0));			break;
		case(5): 图片.v2i灰度图片除5.assign(M.rows/y下个点加几个像素, 新vi(M.cols/x下个点加几个像素, 0));			break;
		case(15): 图片.v2i灰度图片除15.assign(M.rows/y下个点加几个像素, 新vi(M.cols/x下个点加几个像素, 0));			break;
		}/*switch*/
	}/*void*/

	void 例子_截图转换v2i(){
		int 图片类型, 图片类型2; int 除数 = 1;
		Mat M, M灰度;
		jxtu.get截图(M, 图片类型/*, 10000*/);
		/*转换>`单通道图片*/cv::cvtColor(M, M灰度, cv::COLOR_BGR2GRAY);
		getMatTOV2i_MatUchar除(M灰度, 1, 1, 除数, 单通道6色图片.v2i灰度图片除50);
		getV2iTOMat_MatUchar除(单通道6色图片.v2i灰度图片除50, 1, 1, 除数, M灰度);
	}/*void*/
	void 例子_for所有像素(){
		下标info 像素下标;
		for( 像素下标.一/*y*/ = 0; 像素下标.一 < 0; 像素下标.一++ ){
			for( 像素下标.二/*x*/ = 0; 像素下标.二 < 0; 像素下标.二++ ){
				单通道6色图片.v2i灰度图片除50[像素下标.一][像素下标.二];
			}/*for*/
		}/*for*/
	}/*void*/













};
#endif