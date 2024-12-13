#pragma once
#ifndef CMD窗口OPENCV_H 
#define CMD窗口OPENCV_H 

#include<E:\lib\define.h>
#include  <E:\lib\前置变量.h>
#include  <E:\lib\前置计算.h>
////#include<E:\lib\namespace\简写.h>
#include  <E:\lib\cmd.h>
#include<E:\lib\头文件 c++.h>
//#include  <E:\lib\按键检测.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>
//#include  <E:\lib\键盘.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\鼠标.h>

using namespace std;
class cmd窗口opencv{/*cmdUiOpencv*/
public:
	cmd cmd1;

public:
	/**/ //记录: 
		 /*
		 //>v2iUi当前文字颜色:
		 当前颜色 当前颜色 当前颜色
		 //>v3iUi文字颜色属性:
		 y代表一行,x一个词.
		 三0          三1          三2		  三3
		 二0 是否是默认颜色 是否是触发状态 平常的颜色 触发的颜色
		 //>v2sUi文字:
		 y代表一行,x一个词.
		 //>v2iUi字数:
		 // //todo 这个以后再说
		 二0  二1  二2
		 一0 字数 字数 字数
		 //>v2iUi字数属性:
		 二0         二1        二2
		 一0 总字数
		 一1 第0行的字数  第1行的字数 第2行的字数
		 */
	新v2i v2iUi当前文字颜色;
	新v3i v3iUi文字颜色属性;
	新v2s v2sUi文字;
	新v2i /*几种`字数*/v2iUi字数/*汉字是一个字,主观`图片识别*/, v2iUi字数属性
		, v2iUiVecSize;
	cmd窗口info cmd窗口1;
	/*我写了多少字`最大下标. 把v显示完是`显示不完的*/
	下标info 显示几个v的s;
public:
	cmd窗口opencv(){

	}/*( )*/
	void class开始(){
		cmd1.禁止鼠标左键点();
		cmd窗口1.字的大小y = 15;
		cmd窗口1.窗口大小_字数y = 50;
		cmd窗口1.窗口大小_字数x = 50;
		set窗口尺寸();
		变量初始化();
		填入V2iUi();
		cV2iUi();
	}/*void*/
	void set窗口尺寸(){
		cmd1.set字的大小(cmd窗口1.字的大小y);
		cmd1.set窗口大小(cmd窗口1.窗口大小_字数y, 2*cmd窗口1.窗口大小_字数x);
	}/*void*/
	void 变量初始化(){
		显示几个v的s.一 = cmd窗口1.窗口大小_字数y/2/*显示文字的行数*/;
		显示几个v的s.二 = cmd窗口1.窗口大小_字数x/2/*列*/;
		v2iUi当前文字颜色.assign(显示几个v的s.一, 新vi(显示几个v的s.二, 7));
		v3iUi文字颜色属性.assign(显示几个v的s.一, 新v2i(显示几个v的s.二, 新vi(4, 1)));
		v2sUi文字.assign(显示几个v的s.一, 新vs(显示几个v的s.二, ""));
		v2iUiVecSize.assign(显示几个v的s.一, 新vi(显示几个v的s.二, 0));
	}/*void*/
	void 填入V2iUi(){/*在这里写内容*/
		/*v颜色和v文字`两个v的size应该一样; > v.size 会outOfSub*/
		显示几个v的s.一 = 6/*显示文字的行数*/;
		显示几个v的s.二 = 8/*列*/;
		v2iUi当前文字颜色[0] = { 7,7,7,7,7,7, 7,7,7 };
		v2sUi文字[0] = { "按键"," ","Caps"," ","Ctrl"," ","→"," "};
		v2iUi当前文字颜色[1] = { 7,7,7,176 };
		v2sUi文字[1] = { "                ","OR" };
		v2iUi当前文字颜色[2] = { 7,7,7 };
		///v2iUi当前文字颜色[2].resize(显示几个v的s.二, 1);
		v2sUi文字[2] = { "cin 1/*左键点击,截图这个坐标的窗口*/", };/*={ }相当于assign, 覆盖的*/
		v2sUi文字[2].resize(显示几个v的s.二, "");
		v2iUi当前文字颜色[3] = { 7,7,7,7,7,7 };
		v2sUi文字[3] = { "0","0","0","0","0","0", };
		v2iUi当前文字颜色[3] = { 7,7,7,7,7,7 };
		v2sUi文字[4] = { "0","0","0","0","0","0", };
	}/*void*/
	void cV2iUi_不小于vsize(){
		int 一 = 0, 二 = 0;
		for( 一 = 0; 一<显示几个v的s.一; 一++ ){
			coutsf("新行{}", "\n");
			for( 二 = 0; 二<显示几个v的s.二; 二++ ){
				if( v3iUi文字颜色属性[一][二][0]==0 ){/*不指定颜色*/
					/*默认颜色*/
					if( v3iUi文字颜色属性[一][二][1]==0 ){/*是睡眠颜色*/
						cmd1.set颜色(cmd窗口1.默认色);
					}/*if`不是触发状态*/else{
						cmd1.set颜色(cmd窗口1.默认触发色);
					}/*else*/
				}/*if`不指定颜色*/else{
					cmd1.set颜色(v2iUi当前文字颜色[一][二]);
				}/*else*/
				coutsf("{}", v2sUi文字[一][二]);
			}/*for*/
			coutsf("\n");
		}/*for*/
	}/*void*/
	void cV2iUi(){
		int 一 = 0, 二 = 0, 行数 = 0;
		for( 一 = 0; 一<v2sUi文字.size(); 一++ ){
			///coutsf("第{}行{}",行数,"\n");
			for( 二 = 0; 二<v2sUi文字[一].size(); 二++ ){
				if( v3iUi文字颜色属性[一][二][0]==0 ){/*不指定颜色*/
					/*默认颜色*/
					if( v3iUi文字颜色属性[一][二][1]==0 ){/*是睡眠颜色*/
						cmd1.set颜色(cmd窗口1.默认色);
					}/*if`不是触发状态*/else{
						cmd1.set颜色(cmd窗口1.默认触发色);
					}/*else*/
				}/*if`不指定颜色*/else{
					cmd1.set颜色(v2iUi当前文字颜色[一][二]);
				}/*else*/
				coutsf("{}", v2sUi文字[一][二]);
			}/*for*/
			行数++;
			coutsf("\n");
		}/*for*/
	}/*void*/
	 /**/ //>操作变量
		  /*v2s文字的`字数; v2iUiVecSiz*/
	void 计算v2iUiVecSize(){
		int 一 = 0, 二 = 0;
		for( 一 = 0; 一<显示几个v的s.一; 一++ ){
			for( 二 = 0; 二<显示几个v的s.二; 二++ ){
				v2iUiVecSize[一][二] = v2sUi文字[一][二].size();
			}/*for*/
			coutsf("\n");
		}/*for*/
	}/*void*/
	void cV2iUiVecSize(){
		int 一 = 0, 二 = 0;
		for( 一 = 0; 一<显示几个v的s.一; 一++ ){
			for( 二 = 0; 二<显示几个v的s.二; 二++ ){
				coutsf("v2iUiVecSize[{}][{}]={}/**/{}", 一, 二, v2iUiVecSize[一][二], "\n");
			}/*for*/
			coutsf("\n");
		}/*for*/
	}/*void*/
	void 计算ANDcV2iUiVecSize(){
		计算v2iUiVecSize();
		cV2iUiVecSize();
	}/*void*/
	 /**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
};
#endif