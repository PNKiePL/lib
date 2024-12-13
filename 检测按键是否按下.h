#pragma once
#ifndef 检测按键是否按下_H
#define 检测按键是否按下_H

#include  <E:\lib\全局变量.h>
#include  <E:\lib\cmd.h>
//#include  <E:\lib\全局量.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\数字格式.h>
#include  <E:\lib\文件读写.h>
#include  <E:\lib\文字读取.h>
#include  <E:\lib\计算.h>


//extern int 按下;
//extern 
class 检测按键是否按下{
	//GetAsyncKeyState !=0 \ https://learn.microsoft.com/en-us/windows/win32/api/winuser/nf-winuser-getasynckeystate
public:
public:
	//>检测`按下
	int 按下 = 0;/*0=不变,1=按下,2=弹起*/ //>按下= 1: 按下, 按下= 2: 放开d
	//int/*新vi*/ 
	vector<int>现在, 之前, 按键按下次数;
	vector<int> 总按下次数vec;
	int i同时按下的键 = 0;
	/*设置*/
	int 按键按下计数 = 0
		, 按键松开计数 = 1;
	struct 键盘布局信息{
		int 行数 = 7, 列数 = 14;
		/*todo 六行=6种,一行一个*/
		//新vec2i v2i主键盘布局, v2i小键盘布局;
		//新vec2s v2s主键盘布局, v2s小键盘布局;
		新vec2i v2i虚拟键码主键盘布局, v2i虚拟键码小键盘布局;
		新vec2s v2s虚拟键码主键盘布局, v2s虚拟键码小键盘布局;
		新vec2s v2sAhk主键盘布局, v2sAhk小键盘布局;
		新vecs 字母, 符号, 快捷键/*4个*/, 功能键/*home*/, 其他功能键/*播放键*/
			,/*快捷键*/ win, shift, ctrl, alt
			,/*左边*/ win左, shift左, ctrl左, alt左
			,/*右边*/ win右, shift右, ctrl右, alt右
			, f键, 数字键;
		/*, win_左
		, win_右
		*/
		键盘布局信息(){
			v2i虚拟键码主键盘布局.assign(行数, 新vi(列数, 0));
			v2s虚拟键码主键盘布局.assign(行数, 新vs(列数, ""));
			v2i虚拟键码主键盘布局[1] = { VK_ESCAPE,VK_F1,VK_F2,VK_F3,VK_F4,VK_F5,VK_F6,VK_F7,VK_F8,VK_F9,VK_F10,VK_F11,VK_F12,VK_DELETE }
				, v2i虚拟键码主键盘布局[2] = { VK_OEM_3, '1','2','3','4','5','6','7','8','9','0',VK_OEM_MINUS,VK_OEM_PLUS,VK_BACK }
				, v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_OEM_5 }
				, v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
				, v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_OEM_PERIOD,VK_OEM_2,VK_RSHIFT,		VK_UP }/*13*/
			, v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,/*\*/VK_OEM_102,VK_RWIN,VK_RMENU,VK_RCONTROL,	VK_LEFT,VK_DOWN,VK_RIGHT };
			v2s虚拟键码主键盘布局[1] = { "VK_ESCAPE","VK_F1","VK_F2","VK_F3","VK_F4","VK_F5","VK_F6","VK_F7","VK_F8","VK_F9","VK_F10","VK_F11","VK_F12","VK_DELETE" }
				, v2s虚拟键码主键盘布局[2] = { "VK_OEM_3", "1","2","3","4","5","6","7","8","9","0","VK_OEM_MINUS","VK_OEM_PLUS","VK_BACK" }
				, v2s虚拟键码主键盘布局[3] = { "VK_TAB","Q","W","E","R","T","Y","U","I","O","P","VK_OEM_4","VK_OEM_6","VK_OEM_5" }
				, v2s虚拟键码主键盘布局[4] = { "VK_CAPITAL","A", "S", "D", "F", "G", "H", "J", "K", "L","VK_OEM_1","VK_OEM_7","VK_RETURN" }
				, v2s虚拟键码主键盘布局[5] = { "VK_LSHIFT", "Z", "X", "C", "V", "B", "N", "M", "VK_OEM_COMMA","VK_OEM_PERIOD",	"VK_OEM_2","VK_RSHIFT" }
			, v2s虚拟键码主键盘布局[6] = { "VK_LCONTROL","VK_LWIN","VK_LMENU","VK_SPACE",/*\*/"VK_OEM_102","VK_RWIN","VK_RMENU","VK_RCONTROL","VK_LEFT","VK_DOWN","VK_RIGHT" };
			v2i虚拟键码小键盘布局.assign(行数, 新vi(列数, 0));
			v2s虚拟键码小键盘布局.assign(行数, 新vs(列数, ""));
			v2i虚拟键码小键盘布局[1] = { VK_PRIOR,VK_NEXT,VK_HOME,VK_END, }
				, v2i虚拟键码小键盘布局[2] = { VK_DIVIDE,					VK_MULTIPLY,					VK_SUBTRACT,VK_ADD }
				, v2i虚拟键码小键盘布局[3] = { VK_NUMPAD7,VK_NUMPAD8,VK_NUMPAD9 }
				, v2i虚拟键码小键盘布局[4] = { VK_NUMPAD4,VK_NUMPAD5,VK_NUMPAD6 }
				, v2i虚拟键码小键盘布局[5] = { VK_NUMPAD1,VK_NUMPAD2,VK_NUMPAD3 }
			, v2i虚拟键码小键盘布局[6] = { VK_NUMPAD0, VK_DECIMAL };
			v2sAhk主键盘布局.assign(行数, 新vs(列数, ""));
			v2sAhk主键盘布局[1] = {}
				, v2sAhk主键盘布局[2] = { "``", "1","2","3","4","5","6","7","8","9","0","VK_OEM_MINUS","VK_OEM_PLUS","BS" }
				, v2sAhk主键盘布局[3] = { "Tab","Q","W","E","R","T","Y","U","I","O","P","`[","`]","`\\" }
				, v2sAhk主键盘布局[4] = { "CapsLock","A", "S", "D", "F", "G", "H", "J", "K", "L","`;","`'","RETURN" }
				, v2sAhk主键盘布局[5] = { "<+", "Z", "X", "C", "V", "B", "N", "M", "`,","`.",	"`/",">+" }
			, v2sAhk主键盘布局[6] = { "<^","<#","<!","Space",">#",">!",">#",">^","VK_LEFT","VK_DOWN","VK_RIGHT" };

		}
		void v的resize(){
			v2i虚拟键码主键盘布局.resize(行数, 新vi(列数, 0));
			v2s虚拟键码主键盘布局.resize(行数, 新vs(列数, ""));
			v2i虚拟键码小键盘布局.resize(行数, 新vi(列数, 0));
			v2s虚拟键码小键盘布局.resize(行数, 新vs(列数, ""));
			v2sAhk主键盘布局.resize(行数, 新vs(列数, ""));
		}
	};
	键盘布局信息 GT75键盘布局;
	键盘布局信息 GT75修改的键盘布局;
	键盘布局信息 GPDWM2键盘布局;
	键盘布局信息 GPDWM2修改的键盘布局;
	键盘布局信息 BOW24cm键盘布局;
	键盘布局信息 BOW24cm修改的键盘布局;/*BOW9Dm7Ug24cm修改的键盘布局*/
public:
	检测按键是否按下(){
		//刷新后运行-->会一直运行
		现在 = vector<int>(1400, 0), 之前 = vector<int>(1400, 0), 按键按下次数 = vector<int>(1400, 0);
		总按下次数vec.assign(2, 0);
		填入键盘布局信息();
	}
	void 填入键盘布局信息(){
		GT75键盘布局.行数 = 8;
		GT75键盘布局.v的resize();
		GT75键盘布局.v2i虚拟键码主键盘布局[1] = { VK_ESCAPE,VK_F1,VK_F2,VK_F3,VK_F4,VK_F5,VK_F6,VK_F7,VK_F8,VK_F9,VK_F10,VK_F11,VK_F12,VK_DELETE }
			, GT75键盘布局.v2i虚拟键码主键盘布局[2] = { VK_OEM_3, '1','2','3','4','5','6','7','8','9','0',VK_OEM_MINUS,VK_OEM_PLUS,VK_BACK }
			, GT75键盘布局.v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_OEM_5 }
			, GT75键盘布局.v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
			, GT75键盘布局.v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_OEM_PERIOD,VK_OEM_2,VK_RSHIFT }/*12*/
			, GT75键盘布局.v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,/*\*/VK_OEM_102,VK_RWIN,VK_RMENU,VK_RCONTROL,/*方向键*/VK_UP }
		, GT75键盘布局.v2i虚拟键码主键盘布局[7] = { VK_LEFT,VK_DOWN,VK_RIGHT };
		GT75修改的键盘布局.行数 = 8;
		GT75修改的键盘布局.v的resize();
		GT75修改的键盘布局.v2i虚拟键码主键盘布局[1] = { VK_ESCAPE,VK_F1,VK_F2,VK_F3,VK_F4,VK_F5,VK_F6,VK_F7,VK_F8,VK_F9,VK_F10,VK_F11,VK_F12,VK_DELETE }
			, GT75修改的键盘布局.v2i虚拟键码主键盘布局[2] = { VK_OEM_MINUS,VK_OEM_PLUS, '1','2','3','4','5','6','7','8','9','0',VK_OEM_3,VK_BACK }
			, GT75修改的键盘布局.v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_DELETE }
			, GT75修改的键盘布局.v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
			, GT75修改的键盘布局.v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_UP,VK_OEM_2,VK_RSHIFT }
			, GT75修改的键盘布局.v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,/*方向键*/VK_LEFT,VK_DOWN,VK_RIGHT,VK_RCONTROL,/*这里替换了*/VK_OEM_PERIOD }
		, GT75修改的键盘布局.v2i虚拟键码主键盘布局[7] = {/*\*/VK_OEM_102,VK_RWIN,VK_RMENU };

		BOW24cm键盘布局.v2i虚拟键码主键盘布局[1] = { VK_ESCAPE }
			, BOW24cm键盘布局.v2i虚拟键码主键盘布局[2] = { VK_OEM_3, '1','2','3','4','5','6','7','8','9','0',VK_OEM_MINUS,VK_OEM_PLUS,VK_BACK }
			, BOW24cm键盘布局.v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_OEM_5 }
			, BOW24cm键盘布局.v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
			, BOW24cm键盘布局.v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_OEM_PERIOD,VK_OEM_2,VK_RSHIFT }
		, BOW24cm键盘布局.v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,VK_RWIN,VK_RMENU,	/*方向键在右下角*/VK_LEFT,VK_UP,VK_DOWN,VK_RIGHT };
		BOW24cm修改的键盘布局.v2i虚拟键码主键盘布局[1] = { VK_ESCAPE }
			, BOW24cm修改的键盘布局.v2i虚拟键码主键盘布局[2] = { VK_OEM_3, '1','2','3','4','5','6','7','8','9','0',VK_OEM_MINUS,VK_OEM_PLUS,VK_BACK }
			, BOW24cm修改的键盘布局.v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_DELETE }
			, BOW24cm修改的键盘布局.v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
			, BOW24cm修改的键盘布局.v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_OEM_PERIOD,VK_OEM_2,VK_RCONTROL,		VK_UP }/*13*/
		, BOW24cm修改的键盘布局.v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,VK_RSHIFT,VK_RMENU,/*方向键在右下角*/VK_LEFT,VK_UP,VK_DOWN,VK_RIGHT };

		GPDWM2键盘布局.v2i虚拟键码主键盘布局[1] = { VK_ESCAPE,VK_F1,VK_F2,VK_F3,VK_F4,VK_F5,VK_F6,VK_F7,VK_F8,VK_F9,VK_F10,VK_F11,VK_F12,VK_DELETE }
			, GPDWM2键盘布局.v2i虚拟键码主键盘布局[2] = { VK_OEM_3, '1','2','3','4','5','6','7','8','9','0',VK_OEM_MINUS,VK_OEM_PLUS,VK_BACK }
			, GPDWM2键盘布局.v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_OEM_5 }
			, GPDWM2键盘布局.v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
			, GPDWM2键盘布局.v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_OEM_PERIOD,VK_OEM_2,VK_RSHIFT, }/*12*/
		, GPDWM2键盘布局.v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,VK_RMENU,VK_RCONTROL,/*方向键在右下角*/VK_LEFT,VK_UP,VK_DOWN,VK_RIGHT };
		GPDWM2修改的键盘布局.v2i虚拟键码主键盘布局[1] = { VK_ESCAPE,VK_F1,VK_F2,VK_F3,VK_F4,VK_F5,VK_F6,VK_F7,VK_F8,VK_F9,VK_F10,VK_F11,VK_F12,VK_DELETE }
			, GPDWM2修改的键盘布局.v2i虚拟键码主键盘布局[2] = { VK_OEM_3, '1','2','3','4','5','6','7','8','9','0',VK_OEM_MINUS,VK_OEM_PLUS,VK_BACK }
			, GPDWM2修改的键盘布局.v2i虚拟键码主键盘布局[3] = { VK_TAB,'Q','W','E','R','T','Y','U','I','O','P',VK_OEM_4,VK_OEM_6,VK_DELETE }
			, GPDWM2修改的键盘布局.v2i虚拟键码主键盘布局[4] = { VK_CAPITAL,'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L',VK_OEM_1,VK_OEM_7,VK_RETURN }
			, GPDWM2修改的键盘布局.v2i虚拟键码主键盘布局[5] = { VK_LSHIFT, 'Z', 'X', 'C', 'V', 'B', 'N', 'M', VK_OEM_COMMA,VK_OEM_PERIOD,VK_OEM_2,VK_RSHIFT,		VK_UP }/*13*/
		, GPDWM2修改的键盘布局.v2i虚拟键码主键盘布局[6] = { VK_LCONTROL,	VK_LWIN,VK_LMENU,VK_SPACE,/*\*/VK_OEM_102,VK_RWIN,VK_RMENU,VK_RCONTROL,	VK_LEFT,VK_DOWN,VK_RIGHT };
	}
	void 从代码读取键码(){
		新fs fs; 新s s;
		从头读取(fs, "E:/lib/按键检测的布局.cpp");
		while( true ){
			fs >> s;
		}
	}
	void 读取键盘布局(新s path){
		新fs fs;
		从头读取(fs, path);
		while( true ){
			//v[行数][第几个键] = s读取;
		}
	}
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//>检测`按下
	//单个
	void 之前和现在归零(int ish){
		之前[ish] = 0; 现在[ish] = 0;
	}
	void 之前和现在相等(int vqhxzxd){
		之前[vqhxzxd] = 现在[vqhxzxd];
	}
	//多个
	void 多个之前和现在归零(int vqhxziuh){
		for( int i = 0; i < vqhxziuh; i++ ){
			之前和现在归零(i);
		}
	}
	void 之前和现在批量相等(int vqhxzplxd){
		for( int i = 0; i < vqhxzplxd; i++ ){
			之前和现在相等(i);
		}i同时按下的键 = 0;
	}
	void 按键按下次数初始化(int 数量){
		for( size_t i = 0; i < 数量; i++ ){
			按键按下次数[i] = 0;
		}
	}/*void*/
	 /*变成了这3个*/
	 /*现在[] != 之前[] && 现在[]= 1*/
	int 是否按下(int 键码){
		if( (现在[键码] != 之前[键码]) && 现在[键码] == 1 ){
			return 1;
		}
		return 0;
	}/*int*/
	int 是否弹起(int 键码){
		if( (现在[键码] != 之前[键码]) && 现在[键码] == 0 ){
			return 1;
		}
		return 0;
	}/*int*/
	int 是否不变(int 键码){
		if( 现在[键码] == 之前[键码] ){
			return 1;
		}
		return 0;
	}/*int*/
	/**//**///▬按键检测▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/**///▬按键检测▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/**///▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*零件*///> 检测按键是否按下-->记录按下次数
	void 检测是否按下(int 键码){
		//记录按下次数(键码);
		if( GetKeyState(键码) & 0x8000 ){ //if按下
			现在[键码] = 1; //按下
			i同时按下的键++;/*不检测`变化*/
		} else{
			现在[键码] = 0; //松开
		}
		if( 现在[键码] != 之前[键码] ){ //按键`变化
			if( 现在[键码] == 1 ){ //>按下
				按下 = 1;
			}
			if( 现在[键码] == 0 ){ //!松开
				按下 = 2;
			}
		}
	}/*void*/
	void 检测全部键是否按下(){
		//正则\
		[检测是否按下2][(][0-9]{1,3}[,]
		检测是否按下(VK_RBUTTON);
		检测是否按下(VK_CANCEL);
		检测是否按下(VK_MBUTTON);
		检测是否按下(VK_XBUTTON1);
		检测是否按下(VK_XBUTTON2);
		检测是否按下(VK_BACK);
		检测是否按下(VK_TAB);
		检测是否按下(VK_CLEAR);
		检测是否按下(VK_RETURN);
		检测是否按下(VK_SHIFT);
		检测是否按下(VK_CONTROL);
		检测是否按下(VK_MENU);
		检测是否按下(VK_PAUSE);
		检测是否按下(VK_CAPITAL);
		检测是否按下(VK_KANA);
		检测是否按下(VK_HANGUL);
		检测是否按下(VK_IME_ON);
		检测是否按下(VK_JUNJA);
		检测是否按下(VK_FINAL);
		检测是否按下(VK_HANJA);
		检测是否按下(VK_KANJI);
		检测是否按下(VK_IME_OFF);
		检测是否按下(VK_ESCAPE);
		检测是否按下(VK_CONVERT);
		检测是否按下(VK_NONCONVERT);
		检测是否按下(VK_ACCEPT);
		检测是否按下(VK_MODECHANGE);
		检测是否按下(VK_SPACE);
		检测是否按下(VK_PRIOR);
		检测是否按下(VK_NEXT);
		检测是否按下(VK_END);
		检测是否按下(VK_HOME);
		检测是否按下(VK_LEFT);
		检测是否按下(VK_UP);
		检测是否按下(VK_RIGHT);
		检测是否按下(VK_DOWN);
		检测是否按下(VK_SELECT);
		检测是否按下(VK_PRINT);
		检测是否按下(VK_EXECUTE);
		检测是否按下(VK_SNAPSHOT);
		检测是否按下(VK_INSERT);
		检测是否按下(VK_DELETE);
		检测是否按下(VK_HELP);
		检测是否按下('0');
		检测是否按下('1');
		检测是否按下('2');
		检测是否按下('3');
		检测是否按下('4');
		检测是否按下('5');
		检测是否按下('6');
		检测是否按下('7');
		检测是否按下('8');
		检测是否按下('9');
		检测是否按下('A');
		检测是否按下('B');
		检测是否按下('C');
		检测是否按下('D');
		检测是否按下('E');
		检测是否按下('F');
		检测是否按下('G');
		检测是否按下('H');
		检测是否按下('I');
		检测是否按下('J');
		检测是否按下('K');
		检测是否按下('L');
		检测是否按下('M');
		检测是否按下('N');
		检测是否按下('O');
		检测是否按下('P');
		检测是否按下('Q');
		检测是否按下('R');
		检测是否按下('S');
		检测是否按下('T');
		检测是否按下('U');
		检测是否按下('V');
		检测是否按下('W');
		检测是否按下('X');
		检测是否按下('Y');
		检测是否按下('Z');
		检测是否按下(VK_LWIN);
		检测是否按下(VK_RWIN);
		检测是否按下(VK_APPS);
		检测是否按下(VK_SLEEP);
		检测是否按下(VK_NUMPAD0);
		检测是否按下(VK_NUMPAD1);
		检测是否按下(VK_NUMPAD2);
		检测是否按下(VK_NUMPAD3);
		检测是否按下(VK_NUMPAD4);
		检测是否按下(VK_NUMPAD5);
		检测是否按下(VK_NUMPAD6);
		检测是否按下(VK_NUMPAD7);
		检测是否按下(VK_NUMPAD8);
		检测是否按下(VK_NUMPAD9);
		检测是否按下(VK_MULTIPLY);
		检测是否按下(VK_ADD);
		检测是否按下(VK_SEPARATOR);
		检测是否按下(VK_SUBTRACT);
		检测是否按下(VK_DECIMAL);
		检测是否按下(VK_DIVIDE);
		检测是否按下(VK_F1);
		检测是否按下(VK_F2);
		检测是否按下(VK_F3);
		检测是否按下(VK_F4);
		检测是否按下(VK_F5);
		检测是否按下(VK_F6);
		检测是否按下(VK_F7);
		检测是否按下(VK_F8);
		检测是否按下(VK_F9);
		检测是否按下(VK_F10);
		检测是否按下(VK_F11);
		检测是否按下(VK_F12);
		检测是否按下(VK_F13);
		检测是否按下(VK_F14);
		检测是否按下(VK_F15);
		检测是否按下(VK_F16);
		检测是否按下(VK_F17);
		检测是否按下(VK_F18);
		检测是否按下(VK_F19);
		检测是否按下(VK_F20);
		检测是否按下(VK_F21);
		检测是否按下(VK_F22);
		检测是否按下(VK_F23);
		检测是否按下(VK_F24);
		检测是否按下(VK_NUMLOCK);
		检测是否按下(VK_SCROLL);
		检测是否按下(VK_LSHIFT);
		检测是否按下(VK_RSHIFT);
		检测是否按下(VK_LCONTROL);
		检测是否按下(VK_RCONTROL);
		检测是否按下(VK_LMENU);
		检测是否按下(VK_RMENU);
		检测是否按下(VK_BROWSER_BACK);
		检测是否按下(VK_BROWSER_FORWARD);
		检测是否按下(VK_BROWSER_REFRESH);
		检测是否按下(VK_BROWSER_STOP);
		检测是否按下(VK_BROWSER_SEARCH);
		检测是否按下(VK_BROWSER_FAVORITES);
		检测是否按下(VK_BROWSER_HOME);
		检测是否按下(VK_VOLUME_MUTE);
		检测是否按下(VK_VOLUME_DOWN);
		检测是否按下(VK_VOLUME_UP);
		检测是否按下(VK_MEDIA_NEXT_TRACK);
		检测是否按下(VK_MEDIA_PREV_TRACK);
		检测是否按下(VK_MEDIA_STOP);
		检测是否按下(VK_MEDIA_PLAY_PAUSE);
		检测是否按下(VK_LAUNCH_MAIL);
		检测是否按下(VK_LAUNCH_MEDIA_SELECT);
		检测是否按下(VK_LAUNCH_APP1);
		检测是否按下(VK_LAUNCH_APP2);
		检测是否按下(VK_OEM_1);
		检测是否按下(VK_OEM_PLUS);
		检测是否按下(VK_OEM_COMMA);
		检测是否按下(VK_OEM_MINUS);
		检测是否按下(VK_OEM_PERIOD);
		检测是否按下(VK_OEM_2);
		检测是否按下(VK_OEM_3);
		检测是否按下(VK_OEM_4);
		检测是否按下(VK_OEM_5);
		检测是否按下(VK_OEM_6);
		检测是否按下(VK_OEM_7);
		检测是否按下(VK_OEM_8);
		检测是否按下(VK_OEM_102);
		检测是否按下(VK_PROCESSKEY);
		检测是否按下(VK_PACKET);
		检测是否按下(VK_ATTN);
		检测是否按下(VK_CRSEL);
		检测是否按下(VK_EXSEL);
		检测是否按下(VK_EREOF);
		检测是否按下(VK_PLAY);
		检测是否按下(VK_ZOOM);
		检测是否按下(VK_NONAME);
		检测是否按下(VK_PA1);
		检测是否按下(VK_OEM_CLEAR);
		检测是否按下(VK_OEM_PLUS);
		检测是否按下(VK_OEM_MINUS);
		检测是否按下(VK_OEM_COMMA);
		检测是否按下(VK_OEM_PERIOD);
		检测是否按下(VK_OEM_2);
		检测是否按下(VK_OEM_3);
		检测是否按下(VK_OEM_4);
		检测是否按下(VK_OEM_5);
		检测是否按下(VK_OEM_6);
		检测是否按下(VK_OEM_7);
		检测是否按下(VK_OEM_8); //11个VK_OEM
		检测是否按下(MOUSE_MOVED);
		检测是否按下(0x6E); //VK_DECIMAL= Numpad .
	}/*void*/

	void 检测是否按下，记录按下次数(int 键码){
		if( GetKeyState(键码) & 0x8000 ){ //if按下
			现在[键码] = 1; //按下
		} else{
			现在[键码] = 0; //松开
		}
		if( 现在[键码] != 之前[键码] ){ //按键变化
			if( 现在[键码] == 1 ){ //>按下
				按下 = 1;
				if( 按键按下计数 == 1 ){
					按键按下次数[键码] += 1; //>检测按下-->这个数+1
				}
			}
			if( 现在[键码] == 0 ){ //松开
				按下 = 2;
				if( 按键松开计数 == 1 ){
					按键按下次数[键码] += 1;
				}
			}
		}
	}/*void*/
	/**///▬按键检测`的功能分离出来了▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	int ret是否按下(){
    if( 按下==1 ){
      retu 1;
    }/*if*/
    if( 按下==2 ){
      retu 2;
    }/*if*/
		retu 0;
	}/*int */
	void 检测键按的开头(){
		检测按键是否按下::多个之前和现在归零(1400);
	}/*void */
	void 检测键按的开头AND检测键按(){
		检测按键是否按下::多个之前和现在归零(1400);
		检测按键是否按下::检测全部键是否按下();/*-->按下=1*/
	}/*void */
	/*太懒了不好吧,但我有时候记不住名字*/
	void 检测键按(){
		检测全部键是否按下();/*-->按下=1*/
	}/*void */
	int ret检测键按AND是否按下_没有多余检测(){
		int 结果 = 0;
		检测全部键是否按下();/*-->按下=1*/
		if( 按下 == 1 ){
			结果 = 1;
		}/*if*/
		retu 结果;
	}/*int */
	int ret检测键按AND是否按下AND按下等于0之前和现在批量相等_没有多余检测(){
		int 结果 = 0;
		检测全部键是否按下();/*-->按下=1*/
		if( 按下 == 1 ){
			结果 = 1;
		}/*if*/
		按下 = 0;
		之前和现在批量相等(200);/*-->重新检测*/
		retu 结果;
	}/*int */
	/*没用. 可以使用`jmceanjm.现在[]*/
	新vi ret检测键按AND是否按下_retveci_不检测(){
		检测全部键是否按下();/*-->按下=1*/
		retu 现在;
	}/*int */
	int ret检测键按AND是否按下(){
		retu ret检测键按AND是否按下_没有多余检测();
	}/*int */
	/*if按下-->ret按了哪个键; reti{ 现在[ retu ]=1 }*/
	/*todo 没用,只能返回最后一个检测的*/
	int ret是否按下_按了哪个键(){
		int 结果 = 0;
		检测全部键是否按下();/*-->按下=1*/
		if( 按下 == 1 ){
			结果=1400;
			/*鼠标点击的坐标*/
			if( 现在[MOUSE_MOVED] == 1 ){
				结果=MOUSE_MOVED;
			}/*if*/
			 /*todo 分为{ 全局检测 聚焦时检测 }*/
			if( 现在[VK_RETURN] == 1 ){
				结果=VK_RETURN;
			}/*if*/
		}/*if*/
		按下 = 0;
		之前和现在批量相等(200);/*-->重新检测*/
		retu 结果;
	}/*int */
	/*这个没法用,这两个不在一个括号内. 但我不想`也可以都放在最后*/
	void 检测键按的结尾(){
		检测按键是否按下::按下 = 0;
		检测按键是否按下::之前和现在批量相等(200);/*-->重新检测*/
	}/*void*/
	/**///▬结尾▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//虚拟键值表，模拟按键表 \ https://developer.aliyun.com/article/332609
	/*
	 此事来源
	 https://blog.csdn.net/everlasting_20141622/article/details/52222006
	*/
	void 用法(){
		检测按键是否按下::多个之前和现在归零(1400);
		检测按键是否按下::检测全部键是否按下();/*-->按下=1*/
		if( 按下 >0 ){
			if( 按下== 1 ){
			}/*if*/
			if( 按下== 2 ){
			}/*if*/
			检测按键是否按下::按下 = 0;
		}/*if*/
		检测按键是否按下::之前和现在批量相等(200);/*-->重新检测*/
	}
};





#endif