#pragma once

#include<iostream>
#include<bitset>
#include<windows.h>
//2022.7.9
#include<cstdio>
#include<conio.h>
#include<stdio.h>

//#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
#//define 检测是否按下 check
//#define 显示文字 print_letter
//#define 长字符 gks
//#define ct VK_CONTROL
// 
//#define 四位个数 swgu
//#define 四位个数初始化 swguiuh
//#define 四位个数一帧 swguyv

using namespace std;

int 四位个数 = 1, 四位个数初始化 = 0;
int 计数[46];
int 四位个数一帧 = 1, 按下 = 0, 刷新 = 0; //计数1 = 0, 计数2 = 0, 
int 现在[1400], 之前[1400];


void 之前和现在归零(int ish) {
	之前[ish] = 0; 现在[ish] = 0;
}
void 之前和现在相等(int vqhxzxd) {
	之前[vqhxzxd] = 现在[vqhxzxd];
}

void 之前和现在初始化(int vqhxziuh) {
	for (int i = 0; i < vqhxziuh; i++) {
		之前和现在归零(i);

	}
}
void 之前和现在批量相等(int vqhxzplxd) {
	for (int i = 0; i < vqhxzplxd; i++) {
		之前和现在相等(i);

	}
}


void color(int a) {//改变输出的颜色，比system("color x")快得多
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), a);
}

//

//按键颜色 
void 显示文字(char c1) {
	if (GetKeyState(c1) < 0) { //按下
		c1->Background = "#00B194";
		c1->Foreground = "#000000";
	}
}

void 特殊键(char tuj1, string tuj2) { //符号之类
	color(7); //7
	if (_kbhit()) {
		if (_getch() == tuj1) color(177);

	}
	cout << tuj2; //printf("%s ", tuj2.c_str()); //cout << tuj2; //printf("  %s", tuj2);//"  %s",
	color(7); //窗口背景
}

//实现
void print() {
	system("cls");//清屏
	//a[数字]才能运行
	if (计数[1] >= 9999) {
		四位个数 += 1; //进位
		四位个数一帧 = 四位个数;//显示用
		//四位个数 = 四位个数一帧; <-
		计数[2] += 1;
		计数[1] = 0;
	}
	//手动
	if (四位个数 > 1) {
		//		//cout << 四位个数 << endl; 
				//cout << 计数[四位个数一帧
		cout << 计数[2] << ",";
	}

	//中间插0

	//if*3
	/*if (计数[1] < 10)cout << "0";
	if (计数[1] < 100)cout << "0";
	if (计数[1] < 1000)cout << "0";*/

	//1000的if*2 剩下的*3
	if (计数[1] < 1000)cout << "0"; 
	if (计数[1] < 100)cout << "0"; else goto skip;
	if (计数[1] < 10)		cout << "0";

	skip:cout << 计数[1] << endl;
	计数[1] += 1;

	//自动while
	//while (四位个数一帧 > 0) {
	//	cout << 四位个数 << endl; 
	//	cout << 计数[四位个数一帧]; 
	//	四位个数一帧 -= 1; //要的
	//	//cout << 计数[2];
	//}
	//cout << endl;
	//计数[1] += 1;

	////自动for
	// for(;四位个数一帧>0;四位个数一帧-=1){
	// 	//cout << 四位个数 << endl; 
	//	cout << 计数[四位个数一帧]<< ",";
	//	}
	//cout << endl;
	//计数[1] += 1000;

	//F1
	长字符(VK_ESCAPE, "ESC "); //24
	长字符(VK_F1, " F1"); //101 
	长字符(VK_F2, " F2"); //102
	长字符(VK_F3, " F3"); //103
	长字符(VK_F4, " F4"); //104
	长字符(VK_F5, " F5"); //105
	长字符(VK_F6, " F6"); //106
	长字符(VK_F7, " F7"); //107
	长字符(VK_F8, " F8"); //108
	长字符(VK_F9, " F9"); //109
	长字符(VK_F10, " F10"); //110
	长字符(VK_F11, " F11"); //111l
	长字符(VK_F12, " F12"); //112
	长字符(VK_DELETE, "DELETE"); //43
	printf("	");
	长字符(VK_PRIOR, "PRIOR"); //30
	长字符(VK_NEXT, "NEXT"); //31
	长字符(VK_HOME, "HOME"); //33
	长字符(VK_END, "END"); //32
	printf("\n\n");

	//特殊键(, " ");

	//0
	显示文字('0'); 显示文字('1'); 显示文字('2'); 显示文字('3'); 显示文字('4'); 显示文字('5'); 显示文字('6'); 显示文字('7'); 显示文字('8'); 显示文字('9'); //显示文字('9'); 显示文字('0'); 
	特殊键(45, " -"); 特殊键(95, "_"); 特殊键(61, " ="); 特殊键(43, "+");
	长字符(VK_BACK, "  BACK  "); //6
	printf("	");
	长字符(VK_DIVIDE, " /"); //100
	长字符(VK_MULTIPLY, " *"); //95
	长字符(VK_SUBTRACT, " -"); //98
	长字符(VK_ADD, " +"); //96
	//长字符(VK_SEPARATOR, "SEPARATOR"); //97
	//长字符(VK_DECIMAL, "DECIMAL"); //99
	printf("\n\n");
	//Q
	长字符(VK_TAB, "TAB"); //7
	显示文字('Q'); 显示文字('W'); 显示文字('E'); 显示文字('R'); 显示文字('T'); 显示文字('Y'); 显示文字('U'); 显示文字('I'); 显示文字('O'); 显示文字('P');
	特殊键(91, " ["); 特殊键(123, "{"); 特殊键(93, " ]");  特殊键(125, "}"); 特殊键(92, "   /"); 特殊键(124, "|");
	printf("	");
	长字符(VK_NUMPAD7, " 7"); //92
	长字符(VK_NUMPAD8, " 8"); //93
	长字符(VK_NUMPAD9, " 9"); //94
	printf("\n\n");
	//CAPS A
	长字符(VK_CAPITAL, "CAPS"); //14
	显示文字('A'); 显示文字('S'); 显示文字('D'); 显示文字('F'); 显示文字('G'); 显示文字('H'); 显示文字('J'); 显示文字('K'); 显示文字('L');
	特殊键(59, " ;"); 	特殊键(39, " '");

	长字符(VK_RETURN, "RETURN"); //9
	printf("	");
	printf("	");
	长字符(VK_NUMPAD4, " 4"); //89
	长字符(VK_NUMPAD5, " 5"); //90
	长字符(VK_NUMPAD6, " 6"); //91
	printf("\n\n");
	//SHIFT Z	
	长字符(VK_SHIFT, "SHIFT"); //10	
	显示文字('Z'); 显示文字('X'); 显示文字('C'); 显示文字('V'); 显示文字('B'); 显示文字('N'); 显示文字('M');
	特殊键(44, " ,");
	特殊键(46, "<");
	特殊键(60, " .");
	特殊键(62, ">");
	特殊键(47, " /");
	特殊键(63, "?");
	//printf(" ");
	长字符(VK_SHIFT, "SHIFT"); //10		
	printf("	");
	长字符(VK_UP, "UP"); //35
	printf("	");
	长字符(VK_NUMPAD1, " 1"); //86
	长字符(VK_NUMPAD2, " 2"); //87
	长字符(VK_NUMPAD3, " 3"); //88
	printf("\n\n");
	//Ctrl Win
	长字符(VK_CONTROL, "Ctrl"); //11
	长字符(VK_LWIN, "Win"); //81 //⊞
	//长字符(VK_LMENU, "Alt"); //132

	长字符(VK_MENU, "Alt"); //12
	长字符(VK_SPACE, "         SPACE         "); //29
	长字符(VK_RWIN, "Win"); //82 //⊞
	长字符(VK_MENU, "Alt"); //12
	长字符(14, "Fn");
	//长字符(VK_RMENU, "Alt"); //133

	长字符(VK_CONTROL, "Ctrl"); //11
	printf("	");
	//方向键
	长字符(VK_LEFT, "LEFT"); //34
	长字符(VK_DOWN, "DOWN"); //37
	长字符(VK_RIGHT, "RIGHT"); //36
	//printf("	");
	长字符(VK_NUMPAD0, " 0"); //85
//测试行
	printf("\n\n");
	长字符(VK_MBUTTON, "中键"); //3
	长字符(VK_RBUTTON, "右键"); //1 //报错
	长字符(VK_XBUTTON2, "4键"); //4
	长字符(VK_XBUTTON1, "5键"); //5
	//长字符(VK_CANCEL, "CANCEL"); //2
	//长字符(VK_CLEAR, "CLEAR"); //8
	//长字符(VK_SCROLL, "SCROLL"); //126

	//长字符(VK_OEM_MINUS, "LEFT");
/*

	printf("\n\n");


长字符(VK_PAUSE, "PAUSE"); //13
长字符(VK_KANA, "KANA"); //15
//长字符(VK_HANGUEL, "HANGUEL"); //16
长字符(VK_HANGUL, "HANGUL"); //17
	长字符(VK_IME_ON, "IME_ON"); //18
长字符(VK_JUNJA, "JUNJA"); //19
长字符(VK_FINAL, "FINAL"); //20
长字符(VK_HANJA, "HANJA"); //21
长字符(VK_KANJI, "KANJI"); //22
长字符(VK_IME_OFF, "IME_OFF"); //23
长字符(VK_CONVERT, "CONVERT"); //25
长字符(VK_NONCONVERT, "NONCONVERT"); //26
printf("\n\n");
	长字符(VK_ACCEPT, "ACCEPT"); //27
长字符(VK_MODECHANGE, "MODECHANGE"); //28


长字符(VK_SELECT, "SELECT"); //38
长字符(VK_PRINT, "PRINT"); //39
长字符(VK_EXECUTE, "EXECUTE"); //40
长字符(VK_SNAPSHOT, "SNAPSHOT"); //41
长字符(VK_INSERT, "INSERT"); //42
长字符(VK_HELP, "HELP"); //44
printf("\n\n");

长字符(VK_APPS, "APPS"); //83
长字符(VK_SLEEP, "SLEEP"); //84
长字符(VK_F13, "F13"); //113
长字符(VK_F14, "F14"); //114
长字符(VK_F15, "F15"); //115
长字符(VK_F16, "F16"); //116
	长字符(VK_F17, "F17"); //117
长字符(VK_F18, "F18"); //118
长字符(VK_F19, "F19"); //119
长字符(VK_F20, "F20"); //120
长字符(VK_F21, "F21"); //121
长字符(VK_F22, "F22"); //122
长字符(VK_F23, "F23"); //123
长字符(VK_F24, "F24"); //124
长字符(VK_NUMLOCK, "NUMLOCK"); //125
printf("\n\n");

//长字符(0x92 - 96, "0x92 - 96"); //127
长字符(VK_LSHIFT, "LSHIFT"); //128
长字符(VK_RSHIFT, "RSHIFT"); //129
长字符(VK_LCONTROL, "LCONTROL"); //130
长字符(VK_RCONTROL, "RCONTROL"); //131

长字符(VK_BROWSER_BACK, "BROWSER_BACK"); //134
	长字符(VK_BROWSER_FORWARD, "BROWSER_FORWARD"); //135
长字符(VK_BROWSER_REFRESH, "BROWSER_REFRESH"); //136
长字符(VK_BROWSER_STOP, "BROWSER_STOP"); //137
长字符(VK_BROWSER_SEARCH, "BROWSER_SEARCH"); //138
长字符(VK_BROWSER_FAVORITES, "BROWSER_FAVORITES"); //139
长字符(VK_BROWSER_HOME, "BROWSER_HOME"); //140
长字符(VK_VOLUME_MUTE, "VOLUME_MUTE"); //141
长字符(VK_VOLUME_DOWN, "VOLUME_DOWN"); //142
长字符(VK_VOLUME_UP, "VOLUME_UP"); //143
printf("\n\n");
	长字符(VK_MEDIA_NEXT_TRACK, "MEDIA_NEXT_TRACK"); //144
长字符(VK_MEDIA_PREV_TRACK, "MEDIA_PREV_TRACK"); //145
长字符(VK_MEDIA_STOP, "MEDIA_STOP"); //146
长字符(VK_MEDIA_PLAY_PAUSE, "MEDIA_PLAY_PAUSE"); //147
长字符(VK_LAUNCH_MAIL, "LAUNCH_MAIL"); //148
长字符(VK_LAUNCH_MEDIA_SELECT, "LAUNCH_MEDIA_SELECT"); //149
长字符(VK_LAUNCH_APP1, "LAUNCH_APP1"); //150
长字符(VK_LAUNCH_APP2, "LAUNCH_APP2"); //151

长字符(VK_OEM_PLUS, "+"); //153
长字符(VK_OEM_COMMA, ","); //154
长字符(VK_OEM_MINUS, "-"); //155
长字符(VK_OEM_PERIOD, "."); //156
长字符(VK_OEM_2, "/?"); //157
长字符(VK_OEM_3, "`~"); //158
长字符(VK_OEM_4, "[{"); //159
长字符(VK_OEM_5, "\|"); //160
长字符(VK_OEM_6, "]}"); //161
printf("\n\n");
	长字符(VK_OEM_7, "'"); //162
长字符(VK_OEM_8, "OEM_8"); //163
长字符(0xE1, "0xE1"); //164
长字符(VK_OEM_102, "OEM_102"); //165
//长字符(0xE3 - E4, "0xE3 - E4"); //166
长字符(VK_PROCESSKEY, "PROCESSKEY"); //167
长字符(0xE6, "0xE6"); //168
长字符(VK_PACKET, "PACKET"); //169
//长字符(0xE9 - F5, "0xE9 - F5"); //170
	长字符(VK_ATTN, "ATTN"); //171
长字符(VK_CRSEL, "CRSEL"); //172
长字符(VK_EXSEL, "EXSEL"); //173
长字符(VK_EREOF, "EREOF"); //174
长字符(VK_PLAY, "PLAY"); //175
长字符(VK_ZOOM, "ZOOM"); //176
长字符(VK_NONAME, "NONAME"); //177
长字符(VK_PA1, "PA1"); //178
长字符(VK_OEM_CLEAR, "OEM_CLEAR"); //179
printf("\n\n");
printf("\n\n  ");
*/
}

void 检测是否按下(int jcufax, char jcufax1) { //之前 现在
	if (GetKeyState(jcufax1) < 0) 现在[jcufax] = 1; else 现在[jcufax] = 0;
	if (现在[jcufax] != 之前[jcufax])
		//print();
	按下 = 1;
}
//虚拟键值表，模拟按键表
//https://developer.aliyun.com/article/332609

/*
此事来源
https://blog.csdn.net/everlasting_20141622/article/details/52222006
*/