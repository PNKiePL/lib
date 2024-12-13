#pragma once
#ifndef _16色图片_H
#define _16色图片_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

#include  <E:\lib\图片识别.h>

////using namespace wode;
class 图片识别_16色 /*识别函数*/ {
public:
	cmd cmd1;
	图片识别 TuPmUiBx;
	直线方程 ViXmFhIg;

public:
	/**///定量
	COORD 图片尺寸; COORD 检测的范围 = { 0,0 }; COORD v的尺寸;
	/**///记录
	/*v2i图片`的坐标*/COORD 输出图片的坐标;
	/*记录*/
	int r, g, b;
	新v3i v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20;
	新v3i v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r20g20b20;
	/**///设置
	int 大于是浅色 = 180, 小于是深色 = 76/*那中间是正常颜色*/;
public:
	图片识别_16色() {
		v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20.assign(26, 新v2i(26, 新vi(13, 0)));
		v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r20g20b20.assign(13, 新v2i(13, 新vi(13, 0)));
		/*下面填入数据啊*/
		/*todo 手动填吧*/
		//v3iRgbTO16色_颜色对照表_行是r列是g纵是bY是rX是gZ是b
		/*第一部分,r=0,g+10,b+20                                0   1   2   3   4   5   6   7   8   9  10  11  12 */
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][0] = { 黑色,深蓝,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][1] = { 深绿,深蓝,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][2] = { 深绿,深青,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][3] = { 深绿,深绿,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][4] = { 深绿,深绿,深青,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][5] = { 深绿,深绿,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][6] = { 绿色,绿色,绿色,深青,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][7] = { 绿色,绿色,绿色,绿色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][8] = { 绿色,绿色,绿色,绿色,深青,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][9] = { 绿色,绿色,绿色,绿色,绿色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		/*                                                      0   1   2   3   4   5   6   7   8   9  10  11  12 */
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][10] = { 绿色,绿色,绿色,绿色,绿色,深青,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][11] = { 绿色,绿色,绿色,绿色,绿色,绿色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[0][12] = { 绿色,绿色,绿色,绿色,绿色,绿色,深青,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		/*第二部分,r=10,g+10,b+20                               0   1   2   3   4   5   6   7   8   9  10  11  12 */
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][0] = { 深红,深蓝,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色, };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][1] = { 深紫,深蓝,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][2] = { 深绿,深青,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][3] = { 深绿,深绿,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][4] = { 深绿,深绿,深青,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][5] = { 深绿,深绿,深蓝,深蓝,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][6] = { 绿色,绿色,绿色,深青,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][7] = { 绿色,绿色,绿色,绿色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][8] = { 绿色,绿色,绿色,绿色,深青,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
		///v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[1][9] = { 绿色,绿色,绿色,绿色,绿色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色,蓝色 };
	}
	/**///▬输入图片▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		/*i-->s*/
	void getITOs43色转换(int 输入, string& 输出) {
		switch (输入) {
		default: break;
		case 0:	 输出 = "黑色  ";	   break;
		case 1:	 输出 = "灰色  ";	   break;
		case 2:	 输出 = "浅灰  ";	   break;
		case 3:	 输出 = "白色  ";	   break;
		case 4:	 输出 = "深红  ";	   break;
		case 5:	 输出 = "红色  ";	   break;
		case 6:	 输出 = "浅红  ";	   break;
		case 7:	 输出 = "深绿  ";	   break;
		case 8:	 输出 = "绿色  ";	   break;
		case 9:	 输出 = "浅绿  ";	   break;
		case 10:	 输出 = "深蓝  ";  break;
		case 11:	 输出 = "蓝色  ";  break;
		case 12:	 输出 = "浅蓝  ";  break;
		case 13:	 输出 = "深黄  ";  break;
		case 14:	 输出 = "黄色  ";  break;
		case 15:	 输出 = "浅黄  ";  break;
		case 16:	 输出 = "深红黄";  break;
		case 17:	 输出 = "红黄";  break;
		case 18:	 输出 = "浅红黄";  break;
		case 19:	 输出 = "深绿黄";  break;
		case 20:	 输出 = "绿黄";  break;
		case 21:	 输出 = "浅绿黄";  break;
		case  22:	 输出 = "深青  ";  break;
		case  23:	 输出 = "青色  ";  break;
		case  24:	 输出 = "浅青  ";  break;
		case  25:	 输出 = "深绿青";  break;
		case  26:	 输出 = "绿青";  break;
		case  27:	 输出 = "浅绿青";  break;
		case  28:	 输出 = "深蓝青";  break;
		case  29:	 输出 = "蓝青";  break;
		case  30:	 输出 = "浅蓝青";  break;
		case 31:	 输出 = "深紫  ";  break;
		case 32:	 输出 = "紫色  ";  break;
		case 33:	 输出 = "浅紫  ";  break;
		case  34:	 输出 = "深红紫";  break;
		case  35:	 输出 = "红紫色";  break;
		case  36:	 输出 = "浅红紫";  break;
		case  37:	 输出 = "深蓝紫";  break;
		case  38:	 输出 = "蓝紫色";  break;
		case  39:	 输出 = "浅蓝紫";  break;
		case 40:	 输出 = "深粉  ";  break;
		case 41:	 输出 = "粉红  ";  break;
		case 42:	 输出 = "浅粉  ";  break;
		}/*switch*/
	}
	string retITOs43色转换(int 输入) {
		switch (输入) {
		default: break;
		case 0:	    retu "黑色  ";	   break;
		case 1:	    retu "灰色  ";	   break;
		case 2:	    retu "浅灰  ";	   break;
		case 3:	    retu "白色  ";	   break;
		case 4:	    retu "深红  ";	   break;
		case 5:	    retu "红色  ";	   break;
		case 6:	    retu "浅红  ";	   break;
		case 7:	    retu "深绿  ";	   break;
		case 8:	    retu "绿色  ";	   break;
		case 9:	    retu "浅绿  ";	   break;
		case 10:	retu "深蓝  ";  break;
		case 11:	retu "蓝色  ";  break;
		case 12:	retu "浅蓝  ";  break;
		case 13:	retu "深黄  ";  break;
		case 14:	retu "黄色  ";  break;
		case 15:	retu "浅黄  ";  break;
		case 16:	retu "深红黄";  break;
		case 17:	retu "红黄";  break;
		case 18:	retu "浅红黄";  break;
		case 19:	retu "深绿黄";  break;
		case 20:	retu "绿黄";  break;
		case 21:	retu "浅绿黄";  break;
		case  22:	retu "深青  ";  break;
		case  23:	retu "青色  ";  break;
		case  24:	retu "浅青  ";  break;
		case  25:	retu "深绿青";  break;
		case  26:	retu "绿青";  break;
		case  27:	retu "浅绿青";  break;
		case  28:	retu "深蓝青";  break;
		case  29:	retu "蓝青";  break;
		case  30:	retu "浅蓝青";  break;
		case 31:	retu "深紫  ";  break;
		case 32:	retu "紫色  ";  break;
		case 33:	retu "浅紫  ";  break;
		case  34:	retu "深红紫";  break;
		case  35:	retu "红紫色";  break;
		case  36:	retu "浅红紫";  break;
		case  37:	retu "深蓝紫";  break;
		case  38:	retu "蓝紫色";  break;
		case  39:	retu "浅蓝紫";  break;
		case 40:	retu "深粉  ";  break;
		case 41:	retu "粉红  ";  break;
		case 42:	retu "浅粉  ";  break;
		}/*switch*/
	}
	void rgb等于3个数(/*输入*/int& r, int& g, int& b, int i1, int i2, int i3) {
		r = i1, g = i2, b = i3;
	}
	/*i-->rgb*/
	void get43色TORgb(/*输入*/int 输入,/*输出*/int& r, int& g, int& b) {
		/*不知道哪种好看,两个值还没确定*/
		///int 浅色 = 大于是浅色, 深色 = 小于是深色, 中间 = 128;
		///int 浅色 = 220, 深色 = 36, 中间 = 128;
		int 浅色 = 240, 深色 = 76, 中间 = 158;
		switch (输入) {
		/**/default: break;
		/* "黑色  "*/case 0:	 r = 0, g = 0, b = 0;				  break;
		/* "深灰  "*/case 1:	  r = 76, g = 76, b = 76;			  break;
		/* "灰色  "*/case 2:	  r = 76, g = 76, b = 76;			  break;
		/* "浅灰  "*/case 3       :	  r = 176, g = 176, b = 176;         break;
		/* "白色  "*/case 4      :	  r = 255, g = 255, b = 255;         break;
		/* "深红  "*/case 5      :	 rgb等于3个数(r, g, b, 深色, 0, 0);   break;
		/* "红色  "*/case 6      :	  rgb等于3个数(r, g, b, 中间, 0, 0);  break;
		/* "浅红  "*/case 7      :	  rgb等于3个数(r, g, b, 浅色, 0, 0);  break;
		/* "深绿  "*/case 8      :	  rgb等于3个数(r, g, b, 0, 深色, 0);  break;
		/* "绿色  "*/case 9      :	  rgb等于3个数(r, g, b, 0, 中间, 0);  break;
		/* "浅绿  "*/case 10     :	  rgb等于3个数(r, g, b, 0, 浅色, 0);  break;
		/* "深蓝  "*/case 11      :     rgb等于3个数(r, g, b, 0, 0, 深色);  break;
		/* "蓝色  "*/case 12      :     rgb等于3个数(r, g, b, 0, 0, 中间);  break;
		/* "浅蓝  "*/case 13      :     rgb等于3个数(r, g, b, 0, 0, 浅色);  break;
		/* "深黄  "*/case 14      :     rgb等于3个数(r, g, b, 深色, 深色, 0);  break;
		/* "黄色  "*/case 15      :     rgb等于3个数(r, g, b, 中间, 中间, 0);  break;
		/* "浅黄  "*/case 16      :     rgb等于3个数(r, g, b, 浅色, 浅色, 0);  break;
		/* "深红黄"*/case 17      :     rgb等于3个数(r, g, b, 中间, 深色, 0);  break;
		/* "红黄"*/case   18    :     rgb等于3个数(r, g, b, 浅色, 中间, 0);  break;
		/* "浅红黄"*/case 19      :     rgb等于3个数(r, g, b, 255, 浅色, 0);  break;
		/* "深绿黄"*/case  20      :     rgb等于3个数(r, g, b, 深色, 中间, 0);  break;
		/* "绿黄"*/case    21    :     rgb等于3个数(r, g, b, 中间, 浅色, 0);  break;
		/* "浅绿黄"*/case   22    :     rgb等于3个数(r, g, b, 浅色, 255, 0);  break;
		/* "深青  "*/case   23     :     rgb等于3个数(r, g, b, 0, 深色, 深色);  break;
		/* "青色  "*/case   24     :    rgb等于3个数(r, g, b, 0, 中间, 中间);  break;
		/* "浅青  "*/case   25     :    rgb等于3个数(r, g, b, 0, 浅色, 浅色);  break;
		/* "深绿青"*/case 26       :    rgb等于3个数(r, g, b, 0, 中间, 深色);  break;
		/* "绿青"*/case     27   :    rgb等于3个数(r, g, b, 0, 浅色, 中间);  break;
		/* "浅绿青"*/case   28     :    rgb等于3个数(r, g, b, 0, 255, 浅色);  break;
		/* "深蓝青"*/case 29       :    rgb等于3个数(r, g, b, 0, 深色, 中间);  break;
		/* "蓝青"*/case     30   :    rgb等于3个数(r, g, b, 0, 中间, 浅色);  break;
		/* "浅蓝青"*/case  31      :    rgb等于3个数(r, g, b, 0, 浅色, 255);  break;
		/* "深紫  "*/case  32     :    rgb等于3个数(r, g, b, 深色, 0, 深色);  break;
		/* "紫色  "*/case  33     :    rgb等于3个数(r, g, b, 中间, 0, 中间);  break;
		/* "浅紫  "*/case   34    :    rgb等于3个数(r, g, b, 浅色, 0, 浅色);  break;
		/* "深红紫"*/case   35     :    rgb等于3个数(r, g, b, 中间, 0, 深色);  break;
		/* "红紫色"*/case   36     :    rgb等于3个数(r, g, b, 浅色, 0, 中间);  break;
		/* "浅红紫"*/case   37     :    rgb等于3个数(r, g, b, 255, 0, 浅色);  break;
		/* "深蓝紫"*/case   38     :    rgb等于3个数(r, g, b, 深色, 0, 中间);  break;
		/* "蓝紫色"*/case   39     :    rgb等于3个数(r, g, b, 中间, 0, 浅色);  break;
		/* "浅蓝紫"*/case  40      :    rgb等于3个数(r, g, b, 浅色, 0, 255);  break;
		/* "深粉  "*/case  41     :    rgb等于3个数(r, g, b, 255, 179, 167);  break;
		/* "粉红  "*/case  42     :    rgb等于3个数(r, g, b, 255, 179, 167);  break;
		/* "浅粉  "*/case  43   :    rgb等于3个数(r, g, b, 255, 179, 167);  break;
		}/*switch*/
	}
	/**/ //s-->rgb

		 /**/ //rgb-->i
	int retRgbTO16色_用v比对(int r, int g, int b) { //rgb-->i,颜色转换
		//制作v`for的时候, 行 + 10, 列 + 10, 纵 + 20. 所以r/=10,g,b/=20
		/*我肉眼判断7400次就行了*/
		r /= 10, g /= 10, b /= 20;
		retu v3iRgbTO16色_颜色对照表_行是r列是g纵是b_跨度r10g10b20[r][g][b];
	}
	/*输入前,r除以20g除以20b除以20*/
	int retRgbTO16色_不考虑r的不等式排除法_跨度r20g20b20(int r, int g, int b) {
		auto lamRet = [&]()->void {
			};/*lam*/
		if (r == 0 && g == 0 && b == 0) { retu 黑色; }/*if*/
		if (r == 12 && g == 12 && b == 12) { retu 白色; }/*if*/
		/*rgb`一样*/if (r == g && r == b) {
			if (g > 大于是浅色) {
				retu 浅灰;
			}/*if*/
			if (g < 小于是深色) {
				retu 灰色;
			}/*if*/
			retu 灰色;
		}/*if*/
		if (g < r) {

		}/*if*/
		 /*!if`r=0,g>=2b=绿色,g<2b=蓝色*/
		 /*先是两边,再是中间,派出法*/
		 /*线下面是蓝色,上面是绿色*/
		/*斜线`向右移动,y=x-r*/
		if (ViXmFhIg.ret直线方程y是否大于x(g, b, 1, -r) == 1) {/*不等于,等于的是`青色色*/
			/*绿色和`绿青*/
			if (ViXmFhIg.ret直线方程y是否大等于x(g, b, 2, -r) == 1) {
				/*g大于2b: g>2r=绿色,g>r=绿黄,g<r=红黄,2g<r=橙色
				g大于b: g>2r=绿色,g>r=绿黄,g<r=红黄,2g<r=橙色
			g=b: 粉色吧
			g<b: g>2r=绿色,g>r=绿黄,g<r=红黄,2g<r=紫色
			2g<b: g>2r=绿色,g>r=绿黄,g<r=红黄,2g<r=紫色*/
				if (g > 2 * r) {
					if (g > 大于是浅色) {
						retu 浅绿;
					}/*if*/
					if (g < 小于是深色) {
						retu 深绿;
					}/*if*/
					retu 绿色;
				}/*绿色*/
				if (g > r) {
					if (g > 大于是浅色) {
						retu 浅绿黄;
					}/*if*/
					if (g < 小于是深色) {
						retu 深绿黄;
					}/*if*/
					retu 绿黄;
				}/*绿黄*/
				if (g < r) {
					if (g > 大于是浅色) {
						retu 浅红黄;
					}/*if*/
					if (g < 小于是深色) {
						retu 深红黄;
					}/*if*/
					retu 红黄;
				}/*红黄*/
				if (2 * g < r) {
					if (r > 大于是浅色) {
						retu 浅黄;
					}/*if*/
					if (r < 小于是深色) {
						retu 深黄;
					}/*if*/
					retu 黄色;
				}/*黄色*/
			}/*if`绿*/
			if (ViXmFhIg.ret直线方程y是否大等于x(g, b, 1, -r) == 1) {
				if (g > 2 * r) {
					if (g > 大于是浅色) {
						retu 浅绿青;
					}/*if*/
					if (g < 小于是深色) {
						retu 深绿青;
					}/*if*/
					retu 绿青;
				}/*if`绿青*/
				/*todo 到这儿了*/
				if (g > r) {
					if (g > 大于是浅色) {
						retu 浅绿黄;
					}/*if*/
					if (g < 小于是深色) {
						retu 深绿黄;
					}/*if*/
					retu 绿黄;
				}/*绿黄*/
				if (g < r) {
					if (g > 大于是浅色) {
						retu 浅红黄;
					}/*if*/
					if (g < 小于是深色) {
						retu 深红黄;
					}/*if*/
					retu 红黄;
				}/*红黄*/
				if (2 * g < r) {
					if (r > 大于是浅色) {
						retu 浅黄;
					}/*if*/
					if (r < 小于是深色) {
						retu 深黄;
					}/*if*/
					retu 黄色;
				}/*黄色*/
			}/*if*/
		}/*if`g*/
		 /*下面2g<=b*/
		if (ViXmFhIg.ret直线方程y是否小于x(g, b, 1, -r) == 1) {/*不等于,等于的是`青色色*/
			/*蓝色和`蓝青*/
			if (ViXmFhIg.ret直线方程y是否小于x(g, b, 2, -r) == 1) {/*不等于,等于的是`青色色*/
				if (b > 大于是浅色) {
					retu 浅蓝;
				}/*if*/
				if (b < 小于是深色) {
					retu 深蓝;
				}/*if*/
				retu 蓝色;
			}/*if`蓝*/
			 /*b>g*/
			if (ViXmFhIg.ret直线方程y是否小于x(g, b, 1, -r) == 1) {/*不等于,等于的是`青色色*/
				if (b > 大于是浅色) {
					retu 浅蓝青;
				}/*if*/
				if (b < 小于是深色) {
					retu 深蓝青;
				}/*if*/
				retu 蓝青;
			}/*if`蓝青*/
		}/*if`g*/
		if (r == 0) {
		}/*if`r*/
	}
	int retRgb除以20TO16色_不考虑r的不等式排除法_跨度r20g20b20(int r, int g, int b) { //rgb-->i,颜色转换
		retu retRgbTO16色_不考虑r的不等式排除法_跨度r20g20b20(r / 20, g / 20, b / 20);
	}
	/**///▬转换`Mat▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void getMatTO16色的assign(/*输入*/Mat& 图, /*输出*/新v2i& v2i16色) {
		图片尺寸.Y = 图.rows; 图片尺寸.X = 图.cols;
		v2i16色.assign(图片尺寸.Y, 新vi(图片尺寸.X, 0));
	}
	void getMatTO16色的assign(/*输入*/Mat& 图, int  y下个点是加几个像素, int x下个点是加几个像素,/*输出*/新v2i& v2i16色) {
		/*输入图片的*/
		图片尺寸.Y = 图.rows; 图片尺寸.X = 图.cols;
		//图片尺寸.Y = 图.cols; 图片尺寸.X = 图.rows; //直接异常
		/*输出图片的*/输出图片的坐标.Y = 0; 输出图片的坐标.X = 0;
		/*像素数量`向大取整*/
		v2i16色.assign((图片尺寸.Y % y下个点是加几个像素 > 0) ? (图片尺寸.Y / y下个点是加几个像素 + 1) : (图片尺寸.Y / y下个点是加几个像素), 新vi((图片尺寸.X % x下个点是加几个像素 > 0) ? (图片尺寸.X / x下个点是加几个像素) + 1 : (图片尺寸.X / x下个点是加几个像素), 0));
	}/*void*/
	/*复制数据,Mat-->v2i*/
	template<typename at类型>
	void getMatTO16色_不考虑r的不等式排除法_跨度r20g20b20(/*输入*/Mat& 图,/*输出*/新v2i& v2i16色) {
		getMatTO16色的assign(图, v2i16色);
		for (size_t 行 = 0; 行 < 图片尺寸.Y; 行++) {/*行*/
			for (size_t 列 = 0; 列 < 图片尺寸.X; 列++) {
				v2i16色[行][列] = retRgb除以20TO16色_不考虑r的不等式排除法_跨度r20g20b20(图.at<at类型>(Point(列, 行))[2], 图.at<at类型>(Point(列, 行))[1], 图.at<at类型>(Point(列, 行))[0]);
			}/*for*/
		}/*for*/
	}/*template void*/
	 /*从左上角,隔几个像素,复制数据,Mat-->v2i*/
	template<typename at类型>
	void getMatTO16色_不考虑r的不等式排除法_跨度r20g20b20(/*输入*/Mat& 图, int y下个点是加几个像素, int x下个点是加几个像素,/*输出*/新v2i& v2i16色) {
		getMatTO16色的assign(图, y下个点是加几个像素, x下个点是加几个像素, v2i16色);
		int c了几行 = 0;
		getMatTO16色的assign(图, v2i16色);
		for (size_t 行 = 0; 行 < 图片尺寸.Y; 行 += y下个点是加几个像素, 输出图片的坐标.X = 0, 输出图片的坐标.Y++) {/*行*/
			for (size_t 列 = 0; 列 < 图片尺寸.X; 列 += x下个点是加几个像素, 输出图片的坐标.X++) {
				/*//>v的坐标是连着的,图片的坐标是隔开的*/
				v2i16色[输出图片的坐标.Y][输出图片的坐标.X] = retRgb除以20TO16色_不考虑r的不等式排除法_跨度r20g20b20(图.at<at类型>(Point(列, 行))[2], 图.at<at类型>(Point(列, 行))[1], 图.at<at类型>(Point(列, 行))[0]);
			}/*for*/
		}/*for*/
		/*这是`复制一下属性*/v的尺寸.Y = v2i16色.size(); v的尺寸.X = v2i16色[0].size();
	}/*template void*/
	template<typename at类型>
	vodi getV2i16色图TOMat(/*输入*/新v2i& v2i256色的图片,/*输出*/Mat& m) {
		int r, g, b;
		for (size_t y = 0; y < 图片尺寸.Y; y++) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x++) {
				get43色TORgb(v2i256色的图片[y][x], r, g, b);
				m.at<at类型>(Point(x, y))[0] = b;
				m.at<at类型>(Point(x, y))[1] = g;
				m.at<at类型>(Point(x, y))[2] = r;
			}/*for*/
		}/*for*/
	}/*template void*/
	/**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		/*这都是从`256`抄过来的*/
		/**/ //forC所有点的颜色▬▬▬▬▬▬▬▬▬▬▬▬▬
			 /**/ /*c`m`点的`颜色名称*/
	template<typename at类型>
	auto cRgb(Mat& m, int y, int x) {
		b = m.at<at类型>(Point(x, y))[0];
		g = m.at<at类型>(Point(x, y))[1];
		r = m.at<at类型>(Point(x, y))[2];
		/*rgb-->int-->s*/ //m的颜色, 数字又转换为颜色,变成名称
		coutsf3("第{}行`第{}列={}", y, x, retITOs43色转换(retRgb除以20TO16色_不考虑r的不等式排除法_跨度r20g20b20(r, g, b)));
		couta1(" {");
		couta2("r=", r);
		couta2("g=", g);
		couta3("b=", b, "}\n");
	}/*template auto*/
	template<typename at类型>
	auto cBgr(Mat& m, int y, int x) {
		b = m.at<at类型>(Point(x, y))[0];
		g = m.at<at类型>(Point(x, y))[1];
		r = m.at<at类型>(Point(x, y))[2];
		coutsf3("第{}行`第{}列={}", y, x, retITOs43色转换(retRgb除以20TO16色_不考虑r的不等式排除法_跨度r20g20b20(r, g, b)));
		couta1(" {");
		couta2("b=", b);
		couta2("g=", g);
		couta3("r=", r, "}\n");
	}/*template auto*/
	 /**/ /*c`v2i`点的`颜色名称*/
	template<typename at类型>
	auto cRgb(/*输入*/新v2i& v2i256色图, int y, int x) {
		/*int-->s*/
		coutsf3("第{}行`第{}列={}", y, x, retITOs43色转换(v2i256色图[y][x]));
		get43色TORgb(v2i256色图[y][x], r, g, b);
		couta1(" {");
		couta2("r=", r);
		couta2("g=", g);
		couta3("b=", b, "}\n");
	}/*template auto*/
	 /**/ /*c`m`点的`颜色名称*/
	template<typename at类型>
	auto c对角线的rgb(Mat& m, int x下个点是加几个像素) {
		/*输入`记录图片信息*/
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		size_t y = 0;/*行*/
		for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
			y = x;
			if (y < 图片尺寸.Y) {
				cRgb<at类型>(m, y, x);
			}/*if*/
		}/*for*/
	}/*template auto*/
	 /**/ /*c`v2i`点的`颜色名称*/
	template<typename at类型>
	auto c对角线的rgb(/*输入*/Mat& m, 新v2i& v2i256色图, int x下个点是加几个像素) {
		/*输入`记录图片信息*/
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		size_t y = 0;/*行*/
		for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
			y = x;
			if (y < 图片尺寸.Y) {
				cRgb<at类型>(v2i256色图, y, x);
			}/*if*/
		}/*for*/
	}/*template auto*/
	template<typename at类型>
	auto c所有点的rgb(Mat& m, int y下个点是加几个像素, int x下个点是加几个像素) {
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		for (size_t y = 0; y < 图片尺寸.Y; y += y下个点是加几个像素) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
				cRgb<at类型>(m, y, x);
			}/*for*/
		}/*for*/
	}/*template auto*/
	template<typename at类型>
	auto c所有点的rgb(Mat& m, 新v2i& v2i256色图, int y下个点是加几个像素, int x下个点是加几个像素) {
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		for (size_t y = 0; y < 图片尺寸.Y; y += y下个点是加几个像素) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
				cRgb<at类型>(m, v2i256色图, y, x);
			}/*for*/
		}/*for*/
	}/*template auto*/
	/*坐标边界检测 {x两种情况,y一种情况}*/
	int v2坐标边界检测(/*输入*/int& y, int& x) {
		if (x < (v的尺寸.X - 1)) {/*x在范围内*/
			retu 1;
		} else {/*x>=范围*/
			if (y < v的尺寸.Y - 1) {/*y没有到底*/
				retu 2;
			} else {
				/*坐标完了*/
				retu 0;/*没有改*/
			}
		}/*else*/
	}
	int get下一个点(/*输入*/int& y, int& x) {
		if (x < v的尺寸.X - 1) {/*x在范围内*/
		} else {/*x>=范围*/
			if (y < v的尺寸.Y - 1) {/*y没有到底*/
				y++; x = 0;
				retu 1;/*改了*/
			} else {
				/*坐标完了*/
				retu 0;/*没有改*/
			}
		}/*else*/
	}
};
#endif
