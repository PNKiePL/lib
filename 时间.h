#pragma once
#ifndef UI_JM_H
#define UI_JM_H

#include<iostream>
#include <chrono>
////#include  <E:\lib\全局量.cpp>
////#include  <E:\lib\namespace\简写.h> 
#include  <E:\lib\数字格式.h>
#include  <E:\lib\文件读写.h>
using namespace std;
using namespace chrono;

class 时间 {
public:
	//数N分<int, 3> 数3分i;
	数N分<int, 4> 数4分i;
	数N分<int, 5> 数5分i;

public:
	////newenmu输入的时间类型;
public:
	//▬0▬数接数▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	///from 测试 截图 性能 2022.9.27 - Microsoft Visual Studio
	//>位数不够, 前加零
	template< typename 类型>	void get整数位数(类型& a, int& 位数, int 最小位数) {
		位数 = 数5分i.ret整数位数(a);
		if (位数 < 最小位数) {
			位数 = 最小位数;
		}
	}
	//todo 结果只能10位数
	//> 数字"结果"接a接b \ int*位数个10+ intb
	template< typename 类型>	void get数字接a接b(类型& 结果, 类型& a, 类型& b, int 最小位数) {
		int 位数a = 0, 位数b = 0;
		///位数a = to_string(a).size();
		get整数位数<类型>(a, 位数a, 最小位数);
		get整数位数<类型>(b, 位数b, 最小位数);
		//>结果+a的位数-->结果接a-->结果+b的位数, a加b的位数-->结果接b
		for (size_t i = 0; i < 位数a; i++) { //结果+a的位数
			结果 *= 10;
		}/*for*/
		结果 += a;
		for (size_t i = 0; i < 位数b; i++) { //结果+ b的位数; a不用管了
			结果 *= 10;
    }/*for*/
		结果 += b;
	}/*template< typename 类型>	void*/
	template< typename 类型ab, typename 类型结果>	void get数字接a接b(类型结果& 结果, 类型ab& a, 类型ab& b, int 最小位数) {
		int 位数a = 0, 位数b = 0;
		///位数a = to_string(a).size();
		get整数位数<类型ab>(a, 位数a, 最小位数);
		get整数位数<类型ab>(b, 位数b, 最小位数);
		//>结果+a的位数-->结果接a-->结果+b的位数, a加b的位数-->结果接b
		for (size_t i = 0; i < 位数a; i++) { //结果+a的位数
			结果 *= 10;
		}
		结果 += a;
		for (size_t i = 0; i < 位数b; i++) { //结果+ b的位数
			结果 *= 10;
		}
		结果 += b;
	}/*template< typename 类型ab, typename 类型结果>	void */
	//> 数字"结果"接a
	template< typename ab类型, typename 结果类型>	void get数字接a(/*输入&&输出*/结果类型& 结果, /*输入*/ab类型& a, int 最小位数) {
		int 位数a = 0;
		get整数位数<ab类型>(a, 位数a, 最小位数);
		//>结果+ a的位数个0-->结果接a
		for (size_t i = 0; i < 位数a; i++) { //结果+ a的位数
			结果 *= 10;
		}/*for*/
		结果 += a;
	}/*template< typename ab类型, typename 结果类型>	void*/
	//> 数字a接b
	template< typename 类型ab, typename 类型结果>	void get数字a接b(/*输入&&输出*/类型结果& 结果, /*输入SS*/类型ab& a, 类型ab& b, int 最小位数) {
		结果 = a;
		//>a加b的位数-->a接b
		get数字接a <类型ab, 类型结果>(结果, b, 最小位数);
	}
	//▬0▬隔开▬输出str▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	template< typename 类型ab> void get数字接a接b并隔开(string& 结果str, 类型ab& a, 类型ab& b, string 隔开) { //>(string 隔开 )是填空, 不能&
	///类型ab 数字接a接b的结果=0; get数字接a接b<类型ab, 类型ab>(a, b, 最小位数, 数字接a接b的结果);
	//>结果接a-->分隔-->结果接b
		结果str.append(隔开)
			.append(to_string(a))
			.append(隔开)
			.append(to_string(b));
	}
	template< typename 类型ab> void get数字接a接b并隔开(string& 结果str, 类型ab& a, 类型ab& b, string 隔开, int 最小位数) {
		//>str+隔开+a+隔开+b
		结果str.append(隔开);
		int 位数a = 0, 位数b = 0;
		get整数位数<类型ab>(a, 位数a, 0);
		get整数位数<类型ab>(b, 位数b, 0);
		//>位数不够,用0补齐
		for (size_t i = 位数a; i < 最小位数; i++)
		{
			结果str.append("0");
		}
		结果str.append(to_string(a)).append(隔开);
		for (size_t i = 位数b; i < 最小位数; i++)
		{
			结果str.append("0");
		}
		结果str.append(to_string(b));
	}
public:
	/**/ //▬SYSTEMTIME 时间 计时▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	SYSTEMTIME 系统时间, 系统时间2;
	///SYSTEMTIME 系统时间_开始;
	string 系统时间_开始str;
	int 系统时间_开始i = 0, 系统时间i = 0, 上个系统时间i = 0;
	long l系统时间_开始 = 0, l系统时间 = 0, 上个l系统时间 = 0;
	string 系统时间str;

	/**/ //▬简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 读取系统时间() {
		GetLocalTime(&系统时间);
	}
	auto get系统时间(SYSTEMTIME& 输入) {
		GetLocalTime(&输入);
	}
	void cout系统时间HtoMs() {
		GetLocalTime(&系统时间);
		cout << 系统时间.wHour
			<< 系统时间.wMinute
			<< 系统时间.wSecond
			<< 系统时间.wMilliseconds
			<< "\n";
	}
	auto ret系统时间() {
		GetLocalTime(&系统时间);
		return (&系统时间);
	}
	//cout
	/*todo 对，应该减不了*/
	/**///时间差▬●█▓▞▟▜▙▛▖▘
	int retSYSTEMTIMEwhour是否一样(SYSTEMTIME SYSTEMTIME1, SYSTEMTIME SYSTEMTIME2) {
		if (SYSTEMTIME1.wHour == SYSTEMTIME2.wHour) {
			/*相同*/retu 1;
		}/*if*/
		retu 0;
	}/*int*/
	/*时间2- 时间1*/
	int retSYSTEMTIMEwhour的差(SYSTEMTIME SYSTEMTIME1, SYSTEMTIME SYSTEMTIME2) {
		retu SYSTEMTIME2.wHour - SYSTEMTIME1.wHour;
	}/*int*/
	void c距系统时间已经过去了多久() {
		GetLocalTime(&系统时间2);
	}
	void cout时间i减开始时间i() { //>时间to时间i--> 时间2- 时间1
		getSYSTEMTIMETO数字(系统时间, l系统时间, HMSMs);
		//系统时间- 系统时间_开始
		///cout1(stoi(系统时间str) - stoi(系统时间str));
		cout << "系统时间-系统时间_开始= ";
		cout1((l系统时间 - l系统时间_开始));
	}   //                                  ///    /     saZZ*
	void cout时间i减上个时间i() //>时间to时间i--> 时间2- 时间1
	{
		上个l系统时间 = l系统时间; //没覆盖呢
		getSYSTEMTIMETO数字(系统时间, l系统时间, HMSMs);
		//系统时间- 系统时间_开始
		///cout1(stoi(系统时间str) - stoi(系统时间str));
		cout << "系统时间-上个系统时间= ";
		cout1((l系统时间 - 上个l系统时间));
	}
	void 写入时间i减上个时间i(string 书签, string 路径) //>时间to时间i--> 时间2- 时间1
	{
		fstream 文件;
		从末尾写入(文件, 路径);
		上个l系统时间 = l系统时间; //没覆盖
		getSYSTEMTIMETO数字(系统时间, l系统时间, HMSMs);
		文件 << 书签 << "\n";
		文件 << "系统时间- 上个系统时间= ";
		文件 << (l系统时间 - 上个l系统时间) << "\n";
		文件.close();
	}
	// 2 用法
	void 计时开始() {
		getSYSTEMTIMETO数字(系统时间, l系统时间_开始, 4567);
		上个l系统时间 = l系统时间_开始; //?"上个l系统时间"总是=0
		//>"上个l系统时间"总是=0, 所以要
		cout << "计时= "; cout时间i减上个时间i();
	}
	//用法 例子
	void 例子getSYSTEMTIMETOiThenCout时间i减上个时间i() {
		时间 uijm;
		uijm.计时开始();
		cout << std::format("开始的时间={}\n", uijm.l系统时间_开始);
		cout << "\n";
		cout << "计时= "; cout时间i减上个时间i();
	}
	/**/ //▬格式转换▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void get接系统时间str(string& str, string 后缀) {
		GetLocalTime(&系统时间);
		str.append(to_string(系统时间.wYear));
		str.append(".");
		str.append(to_string(系统时间.wMonth));
		str.append(".");
		str.append(to_string(系统时间.wDay));
		str.append(" ");
		str.append(to_string(系统时间.wHour)); //h
		str.append(".");
		str.append(to_string(系统时间.wMinute)); //m
		str.append(" ");
		str.append(to_string(系统时间.wSecond));
		str.append(".");
		str.append(to_string(系统时间.wMilliseconds));
		str.append(后缀);
	}
	void get接系统时间str_年到毫秒(string& str, string 后缀) {
		GetLocalTime(&系统时间);
		str.append(to_string(系统时间.wYear));
		str.append("年");
		str.append(to_string(系统时间.wMonth));
		str.append("月");
		str.append(to_string(系统时间.wDay));
		str.append("日");
		str.append(to_string(系统时间.wHour));
		str.append("时");
		str.append(to_string(系统时间.wMinute));
		str.append("分");
		str.append(to_string(系统时间.wSecond));
		str.append("秒");
		str.append(to_string(系统时间.wMilliseconds));
		str.append(后缀);
	}
  void get在s后接系统时间s年月日时_年到毫秒(string& str, string 后缀) {/*2024年11月17日20:06:16*/
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日");
    str.append(to_string(系统时间.wHour));
    str.append("时");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(":");
    str.append(to_string(系统时间.wMilliseconds));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日空格时_年到毫秒(string& str, string 后缀) {
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日 ");
    str.append(to_string(系统时间.wHour));
    str.append("时");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(":");
    str.append(to_string(系统时间.wMilliseconds));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日_年到毫秒(string& str, string 后缀) {
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日");
    str.append(to_string(系统时间.wHour));
    str.append(":");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(":");
    str.append(to_string(系统时间.wMilliseconds));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日空格_年到毫秒(string& str, string 后缀) {
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日 ");
    str.append(to_string(系统时间.wHour));
    str.append(":");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(":");
    str.append(to_string(系统时间.wMilliseconds));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日时_年到秒(string& str, string 后缀) {/*2024年11月17日20:06:16*/
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日");
    str.append(to_string(系统时间.wHour));
    str.append("时");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日空格时_年到秒(string& str, string 后缀) {
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日 ");
    str.append(to_string(系统时间.wHour));
    str.append("时");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日_年到秒(string& str, string 后缀) {
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日");
    str.append(to_string(系统时间.wHour));
    str.append(":");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(后缀);
  }/*void*/
  void get在s后接系统时间s年月日空格_年到秒(string& str, string 后缀) {/*2024年11月17日20:10:11*/
    GetLocalTime(&系统时间);
    str.append(to_string(系统时间.wYear));
    str.append("年");
    str.append(to_string(系统时间.wMonth));
    str.append("月");
    str.append(to_string(系统时间.wDay));
    str.append("日 ");
    str.append(to_string(系统时间.wHour));
    str.append(":");
    str.append(to_string(系统时间.wMinute));
    str.append(":");
    str.append(to_string(系统时间.wSecond));
    str.append(后缀);
  }/*void*/
  string ret系统时间str(string 后缀) {
		string str;
		GetLocalTime(&系统时间);
		str.append(to_string(系统时间.wYear));
		str.append(".");
		str.append(to_string(系统时间.wMonth));
		str.append(".");
		str.append(to_string(系统时间.wDay));
		str.append(" ");
		str.append(to_string(系统时间.wHour)); //h
		str.append(".");
		str.append(to_string(系统时间.wMinute)); //m
		str.append(" ");
		str.append(to_string(系统时间.wSecond));
		str.append(".");
		str.append(to_string(系统时间.wMilliseconds));
		str.append(后缀);
		return str;
	}
	string ret系统时间str_年到毫秒(string 后缀) { //ret系统时间str_年to毫秒 //ret系统时间年到毫秒str
		string str;
		GetLocalTime(&系统时间);
		str.append(to_string(系统时间.wYear));
		str.append("年");
		str.append(to_string(系统时间.wMonth));
		str.append("月");
		str.append(to_string(系统时间.wDay));
		str.append("日");
		str.append(to_string(系统时间.wHour));
		str.append("时");
		str.append(to_string(系统时间.wMinute));
		str.append("分");
		str.append(to_string(系统时间.wSecond));
		str.append("秒");
		str.append(to_string(系统时间.wMilliseconds));
		str.append("毫秒");
		str.append(后缀);
		return str;
	}
	string ret系统时间str_年到秒(string 后缀) { //ret系统时间str_年to毫秒 //ret系统时间年到毫秒str
		string str;
		GetLocalTime(&系统时间);
		str.append(to_string(系统时间.wYear));
		str.append("年");
		str.append(to_string(系统时间.wMonth));
		str.append("月");
		str.append(to_string(系统时间.wDay));
		str.append("日");
		str.append(to_string(系统时间.wHour));
		str.append("时");
		str.append(to_string(系统时间.wMinute));
		str.append("分");
		str.append(to_string(系统时间.wSecond));
		str.append("秒");
		str.append(后缀);
		return str;
	}
	string ret系统时间str() {
		return ret系统时间str_年到秒("");
	}
	const char* ret系统时间char(string 后缀) {
		string 截图文件名str = ret系统时间str(后缀);
		const char* 截图文件名cchar_p = (截图文件名str).c_str(); //>葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺= 没有数据
		return 截图文件名cchar_p; //葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺
		return ret系统时间str(后缀).c_str(); //葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺葺
	}
	/**/ //时间TO数字`LONG
	void getSYSTEMTIMETO数字(SYSTEMTIME& 输入, long& 输出, int 输入的时间类型) {
		/*todo 改成vec, 数字的第一个零不显示的*/
		输出 = 0;
		///GetLocalTime(&输入);
		//todo 判断ab是什么-->拼接
		switch (输入的时间类型) {
		case YMoDHMSMs:
			get数字接a<WORD, long>(输出, 输入.wYear, 4);
			get数字接a<WORD, long>(输出, 输入.wMonth, 2);
			get数字接a<WORD, long>(输出, 输入.wDay, 2);
			get数字接a<WORD, long>(输出, 输入.wHour, 2);
			get数字接a<WORD, long>(输出, 输入.wMinute, 2);
			get数字接a<WORD, long>(输出, 输入.wSecond, 2);
			get数字接a<WORD, long>(输出, 输入.wMilliseconds, 3);
			break;
		case MoDHMSMs:
			get数字接a<WORD, long>(输出, 输入.wMonth, 2);
			get数字接a<WORD, long>(输出, 输入.wDay, 2);
			get数字接a<WORD, long>(输出, 输入.wHour, 2);
			get数字接a<WORD, long>(输出, 输入.wMinute, 2);
			get数字接a<WORD, long>(输出, 输入.wSecond, 2);
			get数字接a<WORD, long>(输出, 输入.wMilliseconds, 3);
			break;
		case DHMSMs:
			get数字接a<WORD, long>(输出, 输入.wDay, 2);
			get数字接a<WORD, long>(输出, 输入.wHour, 2);
			get数字接a<WORD, long>(输出, 输入.wMinute, 2);
			get数字接a<WORD, long>(输出, 输入.wSecond, 2);
			get数字接a<WORD, long>(输出, 输入.wMilliseconds, 3);
			break;
		case HMSMs:
			get数字接a<WORD, long>(输出, 输入.wHour, 2);
			get数字接a<WORD, long>(输出, 输入.wMinute, 2);
			get数字接a<WORD, long>(输出, 输入.wSecond, 2);
			get数字接a<WORD, long>(输出, 输入.wMilliseconds, 3);
			///简写::cou <long>(输出);
			break;
		default:
			break;
		}/*switch*/
	}
	long retSYSTEMTIMETO数字(/*输入*/SYSTEMTIME& 输入) {
		long 结果 = 0;
		getSYSTEMTIMETO数字(输入, 结果);
		return  结果;
	}
	long retSYSTIMETO数字(/*输入*/SYSTEMTIME& 输入) {
		return retSYSTEMTIMETO数字(输入);
	}
	long retSYSTEMTIMETO数字(/*输入*/SYSTEMTIME& 输入, long 输入的时间类型) {
		long 结果 = 0;
		getSYSTEMTIMETO数字(输入, 结果, 输入的时间类型);
		return  结果;
	}
	void get系统时间TO数字(SYSTEMTIME& 系统时间, long& i, int 输入的时间类型) {
		getSYSTEMTIMETO数字(系统时间, i, 输入的时间类型);
	}
	/*getSYSTEMTIMETOlong*/
	void getSYSTEMTIMETO数字(SYSTEMTIME& 输入, long& 输出) {
		输出 = 0;
		GetLocalTime(&输入);
		get数字接a<WORD, long>(输出, 输入.wYear, 4);
		get数字接a<WORD, long>(输出, 输入.wMonth, 2);
		get数字接a<WORD, long>(输出, 输入.wDay, 2);
		get数字接a<WORD, long>(输出, 输入.wHour, 2);
		get数字接a<WORD, long>(输出, 输入.wMinute, 2);
		get数字接a<WORD, long>(输出, 输入.wSecond, 2);
		get数字接a<WORD, long>(输出, 输入.wMilliseconds, 3);
		///简写::cou <long>(输出);
	}
	void get系统时间TO数字(SYSTEMTIME& 输入, long& 输出) {
		getSYSTEMTIMETO数字(系统时间, 输出);
	}
	/**/ //▬算▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	auto ret系统分钟() {
		GetLocalTime(&系统时间);
		return 系统时间.wMinute;
	}
	/**/ //!时间差
	/*时间2-时间1*/
	void get时间差_结果可以是负数(/*输入*/SYSTEMTIME& 时间1, SYSTEMTIME& 时间2, int 输入的时间类型,/*输出*/时间info& 两个时间的差) {
		/*一共有4+2+2+2+2+2+3=17位,前四位是年,两位是月,两位十日,两位是十,两位是分,两问是秒*/
		时间info 时间1的七个值;
		时间info 时间2的七个值;
		auto lamGet时间TO时间的七个值 = [&](/*输入*/ SYSTEMTIME& 时间,/*输出*/时间info& 时间的七个值)->void {
			long l时间;
			get系统时间TO数字(时间, l时间, 输入的时间类型);
			时间的七个值.数字有几位 = 数4分i.ret数字有几位(l时间);
			if (时间的七个值.数字有几位 == 7) {/*0点,3+2+2=7*/
				时间的七个值.小时 = 0;/*失去七位数,3+2+2*/
				时间的七个值.分 = l时间 / 100000;/*实去五位数,3+2*/
				时间的七个值.秒 = l时间 % 100000 / 1000;/*失去三位数,3*/
				时间的七个值.毫秒 = l时间 % 100000 % 1000;/*剩下的就是毫秒*/
			}/*if*/
			if (时间的七个值.数字有几位 == 8) {/*1~9点*/
				///时间的七个值.小时 = l时间 / 10000000;/*失去8位数*/
				///时间的七个值.分 = l时间 % 10000000 / 100000;/*实去6位数*/
				///时间的七个值.秒 = l时间 % 100000 / 1000;/*失去4位数*/
				///时间的七个值.毫秒 = l时间 % 100000 % 1000;/*失去4未数剩下的*/
				/*前1位是小时*/
				时间的七个值.小时 = l时间 / 10000000;/*失去7位数,1后面7个零*/
				时间的七个值.分 = l时间 % 10000000 / 100000;/*实去5位数*/
				时间的七个值.秒 = l时间 % 100000 / 1000;/*失去3位数*/
				时间的七个值.毫秒 = l时间 % 100000 % 1000;/*失去3未数剩下的*/
			}/*if*/
			if (时间的七个值.数字有几位 == 9) {/*10~23点*/
				/*前两位是小时*/
				时间的七个值.小时 = l时间 / 10000000;/*失去7位数,1后面7个零*/
				时间的七个值.分 = l时间 % 10000000 / 100000;/*实去5位数*/
				时间的七个值.秒 = l时间 % 100000 / 1000;/*失去3位数*/
				时间的七个值.毫秒 = l时间 % 100000 % 1000;/*失去3未数剩下的*/
			}/*if*/
			};/*lam*/

		switch (输入的时间类型) {
		case YMoDHMSMs:
			break;
		case MoDHMSMs:
			break;
		case HMSMs:
			lamGet时间TO时间的七个值(时间1, 时间1的七个值);
			lamGet时间TO时间的七个值(时间2, 时间2的七个值);
			 /*c*/
			 ///cout2("l时间1=",l时间1); coutEndl;
			 ///cout2("l时间2=",l时间2); coutEndl;
			 ///cout1("时间1={ }");	coutEndl;
			 ///cout2("小时=", 时间1的七个值.小时);	coutEndl;
			 ///cout2("分=", 时间1的七个值.分);	coutEndl;
			 ///cout2("秒=", 时间1的七个值.秒);	coutEndl;
			 ///cout2("毫秒=", 时间1的七个值.毫秒);	coutEndl;
			 ///cout1("时间2={ }");	coutEndl;
			 ///cout2("小时=", 时间2的七个值.小时);	coutEndl;
			 ///cout2("分=", 时间2的七个值.分);	coutEndl;
			 ///cout2("秒=", 时间2的七个值.秒);	coutEndl;
			 ///cout2("毫秒=", 时间2的七个值.毫秒);	coutEndl;
			两个时间的差.小时 = 时间2的七个值.小时 - 时间1的七个值.小时;
			两个时间的差.分 = 时间2的七个值.分 - 时间1的七个值.分;
			两个时间的差.秒 = 时间2的七个值.秒 - 时间1的七个值.秒;
			两个时间的差.毫秒 = 时间2的七个值.毫秒 - 时间1的七个值.毫秒;
			break;
		default:
			break;
		}/*switch*/
		///sleep2000;
	}
	/*把负数纠正为正数*/
	void get时间差(/*输入*/SYSTEMTIME& 时间1, SYSTEMTIME& 时间2, int 输入的时间类型,/*输出*/时间info& 两个时间的差) {
		/*一共有4+2+2+2+2+2+3=17位,前四位是年,两位是月,两位十日,两位是十,两位是分,两问是秒*/
		时间info 时间1的七个值;
		时间info 时间2的七个值;
		auto lamGet时间TO时间的七个值 = [&](/*输入*/ SYSTEMTIME& 时间,/*输出*/时间info& 时间的七个值)->void {
			long l时间;
			get系统时间TO数字(时间, l时间, 输入的时间类型);
			时间的七个值.数字有几位 = 数4分i.ret数字有几位(l时间);
			if (时间的七个值.数字有几位 == 7) {/*0点,3+2+2=7*/
				时间的七个值.小时 = 0;/*失去七位数,3+2+2*/
				时间的七个值.分 = l时间 / 100000;/*实去五位数,3+2*/
				时间的七个值.秒 = l时间 % 100000 / 1000;/*失去三位数,3*/
				时间的七个值.毫秒 = l时间 % 100000 % 1000;/*剩下的就是毫秒*/
			}/*if*/
			if (时间的七个值.数字有几位 == 8) {/*1~9点*/
				///时间的七个值.小时 = l时间 / 10000000;/*失去8位数*/
				///时间的七个值.分 = l时间 % 10000000 / 100000;/*实去6位数*/
				///时间的七个值.秒 = l时间 % 100000 / 1000;/*失去4位数*/
				///时间的七个值.毫秒 = l时间 % 100000 % 1000;/*失去4未数剩下的*/
				/*前1位是小时*/
				时间的七个值.小时 = l时间 / 10000000;/*失去7位数,1后面7个零*/
				时间的七个值.分 = l时间 % 10000000 / 100000;/*实去5位数*/
				时间的七个值.秒 = l时间 % 100000 / 1000;/*失去3位数*/
				时间的七个值.毫秒 = l时间 % 100000 % 1000;/*失去3未数剩下的*/
			}/*if*/
			if (时间的七个值.数字有几位 == 9) {/*10~23点*/
				/*前两位是小时*/
				时间的七个值.小时 = l时间 / 10000000;/*失去7位数,1后面7个零*/
				时间的七个值.分 = l时间 % 10000000 / 100000;/*实去5位数*/
				时间的七个值.秒 = l时间 % 100000 / 1000;/*失去3位数*/
				时间的七个值.毫秒 = l时间 % 100000 % 1000;/*失去3未数剩下的*/
			}/*if*/
			};/*lam*/
		auto lamGet时间差 = [&](/*输入*/ int i, int 最大值)->void {
			/*正负转换*/
			if (两个时间的差.vi值[i] < 0) {/*是负数*/
				两个时间的差.vi值[i] += 最大值;/*转换成正数*/
			}/*if*/
			};/*lam*/
		switch (输入的时间类型) {
		case YMoDHMSMs:
			break;
		case MoDHMSMs:
			break;
		case HMSMs:
			lamGet时间TO时间的七个值(时间1, 时间1的七个值);
			lamGet时间TO时间的七个值(时间2, 时间2的七个值);
			/*c*/
			///cout2("l时间1=",l时间1); coutEndl;
			///cout2("l时间2=",l时间2); coutEndl;
			///cout1("时间1={ }");	coutEndl;
			///cout2("小时=", 时间1的七个值.小时);	coutEndl;
			///cout2("分=", 时间1的七个值.分);	coutEndl;
			///cout2("秒=", 时间1的七个值.秒);	coutEndl;
			///cout2("毫秒=", 时间1的七个值.毫秒);	coutEndl;
			///cout1("时间2={ }");	coutEndl;
			///cout2("小时=", 时间2的七个值.小时);	coutEndl;
			///cout2("分=", 时间2的七个值.分);	coutEndl;
			///cout2("秒=", 时间2的七个值.秒);	coutEndl;
			///cout2("毫秒=", 时间2的七个值.毫秒);	coutEndl;

			两个时间的差.vi值[3] = 时间2的七个值.小时 - 时间1的七个值.小时;
			两个时间的差.vi值[4] = 时间2的七个值.分 - 时间1的七个值.分;
			两个时间的差.vi值[5] = 时间2的七个值.秒 - 时间1的七个值.秒;
			两个时间的差.vi值[6] = 时间2的七个值.毫秒 - 时间1的七个值.毫秒;
			lamGet时间差(3, 24);
			lamGet时间差(4, 60);
			lamGet时间差(5, 60);
			lamGet时间差(6, 1000);
			两个时间的差.小时 = 两个时间的差.vi值[3];
			两个时间的差.分 = 两个时间的差.vi值[4];
			两个时间的差.秒 = 两个时间的差.vi值[5];
			两个时间的差.毫秒 = 两个时间的差.vi值[6];
			break;
		default:
			break;
		}/*switch*/
		 ///sleep2000;
	}
	auto ret时间差(SYSTEMTIME& 时间1, SYSTEMTIME& 时间2) {
		/*没做完*/
		/*long*//*int*/long 		l时间1, l时间2;
		get系统时间TO数字(时间1, l时间1);
		get系统时间TO数字(时间2, l时间2);
		/*一共有4+2+2+2+2+2+3=17位,前四位是年,两位是月,两位十日,两位是十,两位是分,两问是秒*/
		struct 时间info {
			int// Y,Mo,D,H,Mi, S, Ms
				年 = 1, 月 = 2, 日 = 3
				, 时 = 4, 小时 = 4
				, 分 = 5, 分钟 = 5
				, 秒 = 6, 毫秒 = 7;
		};
		时间info 时间1的七个值;
		时间info 时间2的七个值;
		cout1(l时间1); coutEndl;
		时间1的七个值.年 = l时间1 / 1000000000000;
		cout1(时间1的七个值.年);	coutEndl;
		return 时间2.wMinute;
	}
	auto ret时间差(/*输入*/SYSTEMTIME& 时间1, SYSTEMTIME& 时间2, int 输入的时间类型) {
		时间info 时间差;
		get时间差(时间1, 时间2, 输入的时间类型, 时间差);
		retu 时间差;
	}
public:
	/**///!时间计时▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	///C++11 新的计时方法——std::chrono 大法好 \ https://blog.csdn.net/u013390476/article/details/50209603
	///C++11标准库chrono库使用 \ https://blog.csdn.net/c_base_jin/article/details/79266022
public:
	//设置
	int 设置1 = 0;
public:
	//!时间转换▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	template <typename 类型, int 目标单位>
	///class 时转 : public 时间 {
	class 时转 {
	public:
		//using 时间::输入的时间类型;
		时间 uijm;
	public:
	public:
		//>零件 
		//输入= 年
		类型 年to(int 目标单位, 类型& 时间) {
			类型 结果 = 0;
			switch (目标单位)
			{
			case 年:
				return 时间;
				break;
			case 月:
				return 时间 * 12;
				break;
			case 日:
				return 时间 * 365;
				break;
			case 时:
				return 时间 * 365 * 24;
				break;
			case 分:
				return 时间 * 365 * 1440;
				break;
			case 秒:
				return 时间 * 365 * 86400;
				break;
			case 毫秒:
				return 时间 * 365 * 86400 * 1000;
				break;
			default:
				return 结果;
				break;
			}
		}
		类型 月to(int 目标单位, 类型& 时间)
		{
			类型 结果 = 0;
			switch (目标单位)
			{
			case 年:
				return 时间 / 12;
				break;
			case 月:
				return 时间;
				break;
			case 日:
				return 时间 * 365 / 12;
				break;
			case 时:
				return 时间 * 365 * 2;
				break;
			case 分:
				return 时间 * 365 * 120;
				break;
			case 秒:
				return 时间 * 365 * 7200;
				break;
			case 毫秒:
				return 时间 * 365 * 7200 * 1000;
				break;
			default:
				return 结果;
				break;
			}
		}
		类型 日to(int 目标单位, 类型& 时间)
		{
			return 年to(时间) / 365;
		}
		类型 时to(int 目标单位, 类型& 时间)
		{
			return 年to(时间) / 365 / 24;
		}
		类型 分to(int 目标单位, 类型& 时间)
		{
			类型 结果 = 0; //外面要有类型
			switch (目标单位)
			{
			case 年:
				return 时间 / 365 / 1440;
				break;
			case 月:
				return 时间 / 12 / 1440;
				break;
			case 日:
				return 时间 / 1440;
				break;
			case 时:
				return 时间 / 60;
				break;
			case 分:
				return 时间;
				break;
			case 秒:
				return 时间 * 60;
				break;
			case 毫秒:
				return 时间 * 60 * 1000;
				break;
			default:
				return 结果;
				break;
			}
		}
		类型 秒to(int 目标单位, 类型& 时间)
		{
			return 分to(时间) / 60;
		}
		//>时间转换
		///template < typename 类型, int 输入单位, int 目标单位> 
		///template <int 输入单位> 类型 时间转换(类型& 时间)
		类型 时间转换(int 输入单位, int 目标单位, 类型 时间)
		{
			////类型 = float; //C1001 内部编译错误
			////类型 类型1 = float; //C1001
			类型 结果 = 0;
			switch (输入单位)
			{
			case 年:
				return 年to(目标单位, 时间);
				break;
			case 月:
				return 月to(目标单位, 时间);
				break;
			case 日:
				return 日to(目标单位, 时间);
				break;
			case 小时:
				return 时to(目标单位, 时间);
				break;
			case 分:
				return 分to(目标单位, 时间);
				break;
			case 秒:
				return 秒to(目标单位, 时间);
				break;
			default:
				结果 = 0;
				return 结果;
				break;
			}
		}
		类型 时间转换(int 输入单位, 类型& 时间)
		{
			return 时间转换(输入单位, 目标单位, 时间);
		}
		template < int 输入单位> 类型 时间转换(类型 时间范围) {
			return 时间转换(输入单位, 目标单位, 时间);
		}
		///2023年7月13日
		///> 排列组合
		//>函数内部template
		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//>函数外部, class开头的template(typename类型)
		//类型 年to(类型& 时间) {
		//	类型 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间;
		//		break;
		//	case 月:
		//		return 时间 * 12;
		//		break;
		//	case 日:
		//		return 时间 * 365;
		//		break;
		//	case 时:
		//		return 时间 * 365 * 24;
		//		break;
		//	case 分:
		//		return 时间 * 365 * 1440;
		//		break;
		//	case 秒:
		//		return 时间 * 365 * 86400;
		//		break;
		//	case 毫秒:
		//		return 时间 * 365 * 86400 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//类型 月to(类型& 时间)
		//{
		//	类型 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间 / 12;
		//		break;
		//	case 月:
		//		return 时间;
		//		break;
		//	case 日:
		//		return 时间 * 365 / 12;
		//		break;
		//	case 时:
		//		return 时间 * 365 * 2;
		//		break;
		//	case 分:
		//		return 时间 * 365 * 120;
		//		break;
		//	case 秒:
		//		return 时间 * 365 * 7200;
		//		break;
		//	case 毫秒:
		//		return 时间 * 365 * 7200 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//类型 日to(类型& 时间)
		//{
		//	return 年to< 类型, 目标单位>(时间) / 365;
		//}
		//类型 时to(类型& 时间)
		//{
		//	return 年to< 类型, 目标单位>(时间) / 365 / 24;
		//}
		//类型 分to(类型& 时间)
		//{
		//	类型 结果 = 0; //外面要有类型
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间 / 365 / 1440;
		//		break;
		//	case 月:
		//		return 时间 / 12 / 1440;
		//		break;
		//	case 日:
		//		return 时间 / 1440;
		//		break;
		//	case 时:
		//		return 时间 / 60;
		//		break;
		//	case 分:
		//		return 时间;
		//		break;
		//	case 秒:
		//		return 时间 * 60;
		//		break;
		//	case 毫秒:
		//		return 时间 * 60 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//类型 秒to(类型& 时间)
		//{
		//	return 分to< 类型, 目标单位>(时间) / 60;
		//}
		//template < int 输入单位> 类型 时间转换(类型& 时间)
		//{
		//	类型 结果 = 0;
		//	switch (输入单位)
		//	{
		//	case 年:
		//		return 年to< 类型, 目标单位>(时间);
		//		break;
		//	case 月:
		//		return 月to< 类型, 目标单位>(时间);
		//		break;
		//	case 日:
		//		return 日to< 类型, 目标单位>(时间);
		//		break;
		//	case 小时:
		//		return 时to< 类型, 目标单位>(时间);
		//		break;
		//	case 分:
		//		return 分to< 类型, 目标单位>(时间);
		//		break;
		//	case 秒:
		//		return 秒to< 类型, 目标单位>(时间);
		//		break;
		//	default:
		//		结果 = 0;
		//		return 结果;
		//		break;
		//	}
		//}
		//float 时间转换(int 输入单位, int 目标单位, float 时间)
		//{
		//	类型 结果 = 0;
		//	switch (输入单位)
		//	{
		//	case 年:
		//		return 年to< 类型, 目标单位>(时间);
		//		break;
		//	case 月:
		//		return 月to< 类型, 目标单位>(时间);
		//		break;
		//	case 日:
		//		return 日to< 类型, 目标单位>(时间);
		//		break;
		//	case 小时:
		//		return 时to< 类型, 目标单位>(时间);
		//		break;
		//	case 分:
		//		return 分to< 类型, 目标单位>(时间);
		//		break;
		//	case 秒:
		//		return 秒to< 类型, 目标单位>(时间);
		//		break;
		//	default:
		//		结果 = 0;
		//		return 结果;
		//		break;
		//	}
		//}
		//template < int 输入单位> float 时间转换(float 时间范围) {
		//	return 时间转换 < float, 输入单位, 目标单位 >(时间范围);
		//}
		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//>float类型 <int 目标单位> nto
		//template <int 目标单位> float 年to(float& 时间) {
		//	float 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间;
		//		break;
		//	case 月:
		//		return 时间 * 12;
		//		break;
		//	case 日:
		//		return 时间 * 365;
		//		break;
		//	case 时:
		//		return 时间 * 365 * 24;
		//		break;
		//	case 分:
		//		return 时间 * 365 * 1440;
		//		break;
		//	case 秒:
		//		return 时间 * 365 * 86400;
		//		break;
		//	case 毫秒:
		//		return 时间 * 365 * 86400 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//template <int 目标单位> float 月to(float& 时间)
		//{
		//	float 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间 / 12;
		//		break;
		//	case 月:
		//		return 时间;
		//		break;
		//	case 日:
		//		return 时间 * 365 / 12;
		//		break;
		//	case 时:
		//		return 时间 * 365 * 2;
		//		break;
		//	case 分:
		//		return 时间 * 365 * 120;
		//		break;
		//	case 秒:
		//		return 时间 * 365 * 7200;
		//		break;
		//	case 毫秒:
		//		return 时间 * 365 * 7200 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//template <int 目标单位> float 日to(float& 时间)
		//{
		//	return 年to<目标单位>(时间) / 365;
		//}
		//template <int 目标单位> float 时to(float& 时间)
		//{
		//	return 年to<目标单位>(时间) / 365 / 24;
		//}
		//template <int 目标单位> float 分to(float& 时间)
		//{
		//	float 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间 / 365 / 1440;
		//		break;
		//	case 月:
		//		return 时间 / 12 / 1440;
		//		break;
		//	case 日:
		//		return 时间 / 1440;
		//		break;
		//	case 时:
		//		return 时间 / 60;
		//		break;
		//	case 分:
		//		return 时间;
		//		break;
		//	case 秒:
		//		return 时间 * 60;
		//		break;
		//	case 毫秒:
		//		return 时间 * 60 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//template <int 目标单位> float 秒to(float& 时间)
		//{
		//	return 分to<目标单位>(时间) / 60;
		//}
		//▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
		//>float类型 nto( 目标单位, 时间值)
		//float 年to(int 目标单位, float& 时间) {
		//	float 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间;
		//		break;
		//	case 月:
		//		return 时间 * 12;
		//		break;
		//	case 日:
		//		return 时间 * 365;
		//		break;
		//	case 时:
		//		return 时间 * 365 * 24;
		//		break;
		//	case 分:
		//		return 时间 * 365 * 1440;
		//		break;
		//	case 秒:
		//		return 时间 * 365 * 86400;
		//		break;
		//	case 毫秒:
		//		return 时间 * 365 * 86400 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//float 月to(int 目标单位, float& 时间)
		//{
		//	float 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间 / 12;
		//		break;
		//	case 月:
		//		return 时间;
		//		break;
		//	case 日:
		//		return 时间 * 365 / 12;
		//		break;
		//	case 时:
		//		return 时间 * 365 * 2;
		//		break;
		//	case 分:
		//		return 时间 * 365 * 120;
		//		break;
		//	case 秒:
		//		return 时间 * 365 * 7200;
		//		break;
		//	case 毫秒:
		//		return 时间 * 365 * 7200 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//float 日to(int 目标单位, float& 时间)
		//{
		//	return 年to(目标单位, 时间) / 365;
		//}
		//float 时to(int 目标单位, float& 时间)
		//{
		//	return 年to(目标单位, 时间) / 365 / 24;
		//}
		//float 分to(int 目标单位, float& 时间)
		//{
		//	float 结果 = 0;
		//	switch (目标单位)
		//	{
		//	case 年:
		//		return 时间 / 365 / 1440;
		//		break;
		//	case 月:
		//		return 时间 / 12 / 1440;
		//		break;
		//	case 日:
		//		return 时间 / 1440;
		//		break;
		//	case 时:
		//		return 时间 / 60;
		//		break;
		//	case 分:
		//		return 时间;
		//		break;
		//	case 秒:
		//		return 时间 * 60;
		//		break;
		//	case 毫秒:
		//		return 时间 * 60 * 1000;
		//		break;
		//	default:
		//		return 结果;
		//		break;
		//	}
		//}
		//float 秒to(int 目标单位, float& 时间)
		//{
		//	return 分to(目标单位, 时间) / 60;
		//}
	};
	//时转* 时间转;

};








#endif
