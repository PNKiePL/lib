#pragma once
#ifndef DEFINE_H
#define DEFINE_H

//namespace wode {
//}
/**///▬关键词▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define mian main
#define wihle while
#define wijle while
//#define vec vector
//#define sw switch
//#define au auto
//#define vo void
//#define stri string		//可以
//#define st string
#define sleep Sleep
#define sllep Sleep
#define Sllep Sleep
//#define mat Mat			//改成小写是和qt重名的
///#define min min //覆盖define
///#define max max
#define cstr c_str()
////#define c_str c_str()
#define retu return
////#define s:: std::
#define bre break
#define breakwhile break
#define breakWhile break
#define breakfor break
#define breakFor break
#define breakif break
#define breakIf break
#define continu continue
#define continuewhile continue
#define continueWhile continue
#define continuefor continue
/*SYSTEMTIME*/
#define SYSTEMTIME小时 wHour
#define SYSTEMTIME分 wMinute
#define SYSTEMTIME秒 wSecond
#define SYSTEMTIME毫秒 wMilliseconds
//▬类型名▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 新a auto
#define AUTO auto
#define 新s string
#define 新str string
#define 新sv string_view
#define 新c char
#define 新cp char*
#define 新cc const char
#define 新ccp const char*
#define 新i int
#define itn int
#define 新ip int*
#define intp int*
#define 新f float
#define 新ostst ostringstream 
#define 新M Mat
/*结构`类型*/
#define 新vo vo
#define vodi void
/*v*/
#define 新v vector
#define 新va vector<auto>
#define 新veca vector<auto>
#define 新vc vector<char>
#define 新vecc vector<char>
#define 新vs vector<string>
#define 新vecs vector<string>
#define 新vi vector<int>
#define 新vip vector<int*>
#define 新veci vector<int>
#define 新vecip vector<int*>
#define 新vl vector<long>
#define 新vf vector<float>
#define 新vll vector<long long>
#define 新vd vector<double>
#define 新vlll vector<long long long>
/*v2*/
#define 新v2 vector<vector
#define 新v2a vector<vector<auto>>
#define 新vec2a vector<vector<auto>>
#define 新v2c vector<vector<char>>
#define 新v2s vector<vector<string>>
#define 新vec2s vector<vector<string>>
#define 新二维vecs vector<vector<string>>
#define 新v2i vector<vector<int>>
#define 新vec2i vector<vector<int>>
#define 新pv2i vector<vector<int*>>
#define 新v2ip vector<vector<int*>>
#define 新vec2ip vector<vector<int*>>
#define 新v2l vector<vector<long>>
#define 新v2f vector<vector<float>>
#define 新v2d vector<vector<double>>
/*v3*/
#define 新v3a vector<vector<vector<auto>>>
#define 新v3c vector<vector<vector<char>>>
#define 新v3s vector<vector<vector<string>>>
#define 新v3i vector< vector < vector<int> > > 
#define 新v3l vector< vector < vector<long> > > 
#define 新v3f vector< vector < vector<float> > > 
/*v4*/
#define 新v4a vector<vector<vector<vector<auto>>>>
#define 新v4c vector<vector<vector<vector<char>>>>
#define 新v4s vector<vector<vector<vector<string>>>>
#define 新v4i vector<vector<vector<vector<int>>>>
#define 新v4l vector<vector<vector<vector<long>>>>
#define 新v4f vector<vector<vector<vector<float>>>>
/*v5*/
#define 新v5a vector<vector<vector<vector<vector<auto>>>>>
#define 新v5c vector<vector<vector<vector<vector<char>>>>>
#define 新v5s vector<vector<vector<vector<vector<string>>>>>
#define 新v5i vector<vector<vector<vector<vector<int>>>>>
#define 新v5l vector<vector<vector<vector<vector<long>>>>>
#define 新v5f vector<vector<vector<vector<vector<float>>>>>
/*fstream*/
#define 新fs fstream
#define 新fst fstream
#define 新ifs ifstream
#define 新ofs ofstream
///读取(默认文档, "E:\\库\\头文件\\按键检测.cpp");
#define 从头读取(a, b) (a.open(b, ios::in))   
#define 从头写入(a, b) (a.open(b, ios::out))
#define 从末尾写入(a, b) (a.open(b, ios::app))
#define 二进制读取(a, b) (a.open(b, ios::binary))
#define 定位到末尾(a, b) (a.open(b, ios::ate))
#define 覆盖(a, b) (a.open(b, ios::trunc)) //没用
/*读写*/
#define 从头覆盖写入(a, b) (a.open(b, ios::out| ios::trunc))
#define 从头覆盖读写(a, b) (a.open(b, ios::in | ios::out | ios::trunc))
#define 从头读写(a, b) (a.open(b, ios::in | ios::out))
#define 从末尾读写(a, b) (a.open(b, ios::in | ios::out|ios::app))


//▬方法▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define 两值中_返回大的(a,b) (a< b) ? b : a
#define 两值中_返回小的(a,b) (a< b) ? a : b
//▬结构的简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/*//#define 左右大括号(函数名) 函数名(){}
////#define 左大括号(函数名) 函数名(){
////#define 右大括号(函数名) 函数名()}*/
//#define 新void(函数名) void 函数名
//#define 新auto(函数名) auto 函数名
//#define 新str(函数名) string 函数名
//#define 新int(函数名) int 函数名
/**///▬函数`简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define cmdret 		exit(0);
#define cmdRet 		exit(0);
#define cmdbreake 		exit(0);
#define cmdbre 		exit(0);
#define cmdBre 		exit(0);
///#define cmdret system(R"(exit)")
///#define cmdRet system(R"(exit)")
///#define cmdbreake system(R"(exit)")
///#define cmdbre system(R"(exit)")
///#define cmdBre system(R"(exit)")
#define sleep1 Sleep(1)
#define sleep3 Sleep(3)
#define sleep4 Sleep(4)
#define sleep5 Sleep(5)
#define sleep10 Sleep(10)
#define sleep14 Sleep(14)
#define sleep100 Sleep(100)
#define sleep1000 Sleep(1000)
#define sleep1400 Sleep(1400)
#define sleep2000 Sleep(2000)
#define sleep3000 Sleep(3000)
#define sleep5000 Sleep(5000)
#define sleep14000 Sleep(14000)
#define sleep50000 Sleep(50000)
#define sleep140000 Sleep(140000)
#define v行数 size()
#define v元素数 size()
#define v长度 size()
#define v的长度 size()
/*COUT*/
#define COUT cout
#define cEndl cout<<endl
#define coutEndl cout<<endl
#define cEnd cout<<endl
#define coutEnd cout<<endl
#define cout1(a) cout<<a
#define cout2(a,b) cout<<a<<b
#define cout3(a,b,c) cout<<a<<b<<c
#define cout4(a,b,c,d) cout<<a<<b<<c<<d
#define cout5(a,b,c,d,e) cout<<a<<b<<c<<d<<e
#define cout6(a,b,c,d,e,f) cout<<a<<b<<c<<d<<e<<f
#define cout7(a,b,c,d,e,f,g) cout<<a<<b<<c<<d<<e<<f<<g
#define cout8(a,b,c,d,e,f,g,h) cout<<a<<b<<c<<d<<e<<f<<g<<h
#define cout9(a,b,c,d,e,f,g,h,i) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i
#define cout10(a,b,c,d,e,f,g,h,i,j) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j
#define cout11(a,b,c,d,e,f,g,h,i,j,k) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k
#define cout12(a,b,c,d,e,f,g,h,i,j,k,l) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l
/*这两种一样的*/
#define couta1(a) cout<<a
#define couta2(a,b) cout<<a<<b
#define couta3(a,b,c) cout<<a<<b<<c
#define couta4(a,b,c,d) cout<<a<<b<<c<<d
#define couta5(a,b,c,d,e) cout<<a<<b<<c<<d<<e
#define couta6(a,b,c,d,e,f) cout<<a<<b<<c<<d<<e<<f
#define couta7(a,b,c,d,e,f,g) cout<<a<<b<<c<<d<<e<<f<<g
#define couta8(a,b,c,d,e,f,g,h) cout<<a<<b<<c<<d<<e<<f<<g<<h
#define couta9(a,b,c,d,e,f,g,h,i) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i
#define couta10(a,b,c,d,e,f,g,h,i,j) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j
#define couta11(a,b,c,d,e,f,g,h,i,j,k) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k
#define couta12(a,b,c,d,e,f,g,h,i,j,k,l) cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l
///#define c颜色1(cmd1,i1,a) cmd1.set颜色(i1);cout<<a;
#define c颜色1(i1,a,i2) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);
#define c颜色2(i1,a,i2,b,i3) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);cout<<b;cmd1.set颜色(i3);
#define c颜色3(i1,a,i2,b,i3,c,i4) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);cout<<b;cmd1.set颜色(i3);cout<<c;cmd1.set颜色(i4);
#define c颜色4(i1,a,i2,b,i3,c,i4,d,i5) cmd1.set颜色(i1);cout<<a;cmd1.set颜色(i2);cout<<b;cmd1.set颜色(i3);cout<<c;cmd1.set颜色(i4);cout<<d;cmd1.set颜色(i5);
#define c颜色5(i1,a,i2,b,i3,c,i4,d,i5,e,i6)  cmd1.set颜色(i1);cout<<a; cmd1.set颜色(i2);cout<<b; cmd1.set颜色(i3);cout<<c; cmd1.set颜色(i4);cout<<d; cmd1.set颜色(i5);cout<<e; cmd1.set颜色(i6);
#define c颜色1_不需要cmd1(i1,a,i2) set颜色(i1);cout<<a;set颜色(i2);
#define c颜色2_不需要cmd1(i1,a,i2,b,i3) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);
#define c颜色3_不需要cmd1(i1,a,i2,b,i3,c,i4) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);cout<<c;set颜色(i4);
#define c颜色4_不需要cmd1(i1,a,i2,b,i3,c,i4,d,i5) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);cout<<c;set颜色(i4);cout<<d;set颜色(i5);
#define c颜色5_不需要cmd1(i1,a,i2,b,i3,c,i4,d,i5,e,i6) set颜色(i1);cout<<a;set颜色(i2);cout<<b;set颜色(i3);cout<<c;set颜色(i4);cout<<d;set颜色(i5);cout<<e;set颜色(i6);
/*cout`format*/
#define coutf cout<<format/*(*/
#define coutf0(a) cout<<format(a)
#define coutf1(a,b) cout<<format(a,b)
#define coutf2(a,b,c) cout<<format(a,b,c)
#define coutf3(a,b,c,d) cout<<format(a,b,c,d)
#define coutf4(a,b,c,d,e) cout<<format(a,b,c,d,e)
#define coutf5(a,b,c,d,e,f) cout<<format(a,b,c,d,e,f)
#define coutf6(a,b,c,d,e,f,g) cout<<format(a,b,c,d,e,f,g)
#define coutf7(a,b,c,d,e,f,g,h) cout<<format(a,b,c,d,e,f,g,h)
#define coutsf cout<<std::format
#define coutsf0(a) cout<<std::format(a)
#define coutsf1(a,b) cout<<std::format(a,b)
#define coutsf2(a,b,c) cout<<std::format(a,b,c)
#define coutsf3(a,b,c,d) cout<<std::format(a,b,c,d)
#define coutsf4(a,b,c,d,e) cout<<std::format(a,b,c,d,e)
#define coutsf5(a,b,c,d,e,f) cout<<std::format(a,b,c,d,e,f)
#define coutsf6(a,b,c,d,e,f,g) cout<<<std::format(a,b,c,d,e,f,g)
#define coutsf7(a,b,c,d,e,f,g,h) cout<<<std::format(a,b,c,d,e,f,g,h)
/*fst<<sf*/
#define 写入sf0(a) <<std::format(a)
#define 写入sf1(a,b) <<std::format(a,b)
#define 写入sf2(a,b,c) <<std::format(a,b,c)
#define 写入sf3(a,b,c,d) <<std::format(a,b,c,d)
#define 写入sf4(a,b,c,d,e) <<std::format(a,b,c,d,e)
#define 写入sf5(a,b,c,d,e,f) <<std::format(a,b,c,d,e,f)
#define 写入sf6(a,b,c,d,e,f,g) <<<std::format(a,b,c,d,e,f,g)
#define 写入sf7(a,b,c,d,e,f,g,h) <<<std::format(a,b,c,d,e,f,g,h)
/**///▬变量含值▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
///2023年7月18日
#define newenmu时间单位 enum 时间单位 {\
	年 = 1, 月 = 2, 日 = 3\
	, 时 = 4, 小时 = 4\
	, 分 = 5, 分钟 = 5\
, 秒 = 6, 毫秒 = 7\
/*2023年8月2日*/\
,YMoDHMSMs = 1234567\
,Y=1,Mo=2,D=3\
,MoDHMSMs=234567\
,DHMSMs=34567\
, H = 4, HM = 45, HMS = 456, HMSMs = 4567,HS=46,HMs=47\
,MS = 56,MSMs=567,MMs=57}
#define newenmu256色 enum _256色 {\
Black=0,Maroon=1,Green=2,Olive=3,Navy=4,Purple=5,Teal=6,Silver=7,Grey=8,Red=9,Lime=10,Yellow=11,Blue=12,Fuchsia=13,Aqua=14,White=15,Grey0=16,NavyBlue=17,DarkBlue=18,Blue3=19,Blue1=21,DarkGreen=22,DeepSkyBlue4=23,DodgerBlue3=26,DodgerBlue2=27,Green4=28,SpringGreen4=29,Turquoise4=30,DeepSkyBlue3=31,DodgerBlue1=33,Green3=34,SpringGreen3=35,DarkCyan=36,LightSeaGreen=37,DeepSkyBlue2=38,DeepSkyBlue1=39,SpringGreen2=42,Cyan3=43,DarkTurquoise=44,Turquoise2=45,Green1=46,SpringGreen1=48,MediumSpringGreen=49,Cyan2=50,Cyan1=51,DarkRed=52,DeepPink4=53,Purple4=54,Purple3=56,BlueViolet=57,Orange4=58,Grey37=59,MediumPurple4=60,SlateBlue3=61,RoyalBlue1=63,Chartreuse4=64,DarkSeaGreen4=65,PaleTurquoise4=66,SteelBlue=67,SteelBlue3=68,CornflowerBlue=69,Chartreuse3=70,CadetBlue=72,SkyBlue3=74,SteelBlue1=75,PaleGreen3=77,SeaGreen3=78,Aquamarine3=79,MediumTurquoise=80,Chartreuse2=82,SeaGreen2=83,SeaGreen1=84,Aquamarine1=86,DarkSlateGray2=87,DarkMagenta=90,DarkViolet=92,LightPink4=95,Plum4=96,MediumPurple3=97,SlateBlue1=99,Yellow4=100,Wheat4=101,Grey53=102,LightSlateGrey=103,MediumPurple=104,LightSlateBlue=105,DarkOliveGreen3=107,DarkSeaGreen=108,LightSkyBlue3=109,SkyBlue2=111,DarkSeaGreen3=115,DarkSlateGray3=116,SkyBlue1=117,Chartreuse1=118,LightGreen=119,PaleGreen1=121,DarkSlateGray1=123,Red3=124,MediumVioletRed=126,Magenta3=127,DarkOrange3=130,IndianRed=131,HotPink3=132,MediumOrchid3=133,MediumOrchid=134,MediumPurple2=135,DarkGoldenrod=136,LightSalmon3=137,RosyBrown=138,Grey63=139,MediumPurple1=141,Gold3=142,DarkKhaki=143,NavajoWhite3=144,Grey69=145,LightSteelBlue3=146,LightSteelBlue=147,Yellow3=148,DarkSeaGreen2=151,LightCyan3=152,LightSkyBlue1=153,GreenYellow=154,DarkOliveGreen2=155,DarkSeaGreen1=158,PaleTurquoise1=159,DeepPink3=161,Magenta2=165,HotPink2=169,Orchid=170,MediumOrchid1=171,Orange3=172,LightPink3=174,Pink3=175,Plum3=176,Violet=177,LightGoldenrod3=179,Tan=180,MistyRose3=181,Thistle3=182,Plum2=183,Khaki3=185,LightGoldenrod2=186,LightYellow3=187,Grey84=188,LightSteelBlue1=189,Yellow2=190,DarkOliveGreen1=191,Honeydew2=194,LightCyan1=195,Red1=196,DeepPink2=197,DeepPink1=198,Magenta1=201,OrangeRed1=202,IndianRed1=203,HotPink=205,DarkOrange=208,Salmon1=209,LightCoral=210,PaleVioletRed1=211,Orchid2=212,Orchid1=213,Orange1=214,SandyBrown=215,LightSalmon1=216,LightPink1=217,Pink1=218,Plum1=219,Gold1=220,NavajoWhite1=223,MistyRose1=224,Thistle1=225,Yellow1=226,LightGoldenrod1=227,Khaki1=228,Wheat1=229,Cornsilk1=230,Grey100=231,Grey3=232,Grey7=233,Grey11=234,Grey15=235,Grey19=236,Grey23=237,Grey27=238,Grey30=239,Grey35=240,Grey39=241,Grey42=242,Grey46=243,Grey50=244,Grey54=245,Grey58=246,Grey62=247,Grey66=248,Grey70=249,Grey74=250,Grey78=251,Grey82=252,Grey85=253,Grey89=254,Grey93=255\
	}
#define 回车 (string)"\n"
#define c回车  '\n'
#define 换行符  "\n"
#define c行开始符 '^'
#define c行结束符 '&'
#define s文档末尾标记 "WfDhJxWz"
/*用这个*/#define s文档结尾 "WfDhJxWz"
#define s这行没有 "VeHhMzYb"
/*别用了*/#define s文档结束 "wfdhjxuu"
#define s文档结束_声母大写 "WfDhJxUu"
#define s文档结束_韵母大写 "wFdHjXuU"
#define s文档结束_有重音符 "wfdh`jxuu"
#define s文档结束_声母大写_有重音符 "WfDh`JxUu"
#define s文档结束_韵母大写_有重音符 "wFdH`jXuU"
////#define if a > b if( a > b)
//#define def define

////#include <iostream>
////using namespace std;
////namespace first_space
////{
////	void func()
////	{
////		cout << "Inside first_space" << endl;
////	}
////}

//#define

//constexpr auto
//▬class调用`简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
#define class调用1 类型转换 vrh;按键检测 按键检测1;时间 uijm;cmd cmd1;窗口 IdKb;文件读写 wfjmduxx;
#define class简写1 class调用1
#define class类型转换 类型转换 vrh
#define classvrh 类型转换 vrh
#define classVrh 类型转换 vrh
#define classvhr 类型转换 vrh
#define class按键检测 按键检测 按键检测1
#define class时间 时间 uijm
#define classcmd cmd cmd1 
#define class窗口 窗口 IdKb
#define class文件读写 文件读写 wfjmduxx 
#define classwfjmduxx 文件读写 wfjmduxx
#define class计算 计算 jisr
#define classjisr 计算 jisr
#define class地址算 用地址计算 地址计算;

#define cla简写1 class调用1
#define cla类型转换 类型转换 vrh
#define clavrh 类型转换 vrh
#define claVrh 类型转换 vrh
#define cla按键检测 按键检测 按键检测1
#define cla时间 时间 uijm
#define clacmd cmd cmd1 
#define cla窗口 窗口 IdKb
#define cla文件读写 文件读写 wfjmduxx
#define cla计算 计算 jisr
#define clajisr 计算 jisr

/**/ //>▬OpenCV▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
/**///量▬▬▬▬▬▬▬▬▬▬▬▬▬
#define CV8UC1 CV_8UC1
#define CV8UC2 CV_8UC2
#define CV8UC3 CV_8UC3
#define CV8UC4 CV_8UC4


#endif