#pragma once
#ifndef TBWFJM_C艹_H 
#define TBWFJM_C艹_H

/**///c
////#include<unistd.h>
////#include"unistd.h"

/**///c++
///#include <algorithm>
#include<bitset>
#include<conio.h> //_getch
#include<cstdio>
#include<cstring>
#include <fstream>
#include<iomanip>
#include<iostream>
#include <memory>
#include <random>
#include <regex>
#include <stdint.h>
#include<stdio.h>
#include <string>
#include <thread>
//#include <tlhelp32.h> /*很多白字下面红色波浪线*/
#include <Ws2tcpip.h> /*网络*/
#include <process.h>
#include <time.h>
#include <sys/timeb.h>
#include <direct.h>/*_mkdir*/
#include <io.h>/*文件管理*/

//c++17
#include<filesystem> //文件路径
///#include "stdafx.h" //默认的 预编译头
//c++20


//c++23
/*?C2375`不能放在最上面*/
/**///>windows
//#include<Gdi32.lib> 
#include <windows.h>    // included for Windows Touch
#include <windowsx.h>   // included for point conversion
#include <wingdi.h>/*DISPLAYCONFIG_DEVICE_INFO_HEADER;*/
#include <winuser.h>/*displayConfigGetDeviceInfo*/
#include<atlbase.h> //reg注册表 
#include <atlstr.h>/*CString*/ 
////#include <psapi.h>/*查看占用*/
////#include <Stm.h>/*追踪TRACE*/ /*?DEBUG_TRACE*/

using namespace std;
#endif