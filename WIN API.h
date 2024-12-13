#pragma once

#ifndef WINAPI_CPP 

#define WINAPI_CPP

#include  <E:\lib\头文件 c++.h>



using namespace std;

class win {
public:
    void 将程序锁定到任务栏(string hwnd, string 程序的快捷方式的绝对路径lnk格式的)
    {
        ////        深入浅出ShellExecute（总结）\
       //     https://www.cnblogs.com/Daywei/archive/2011/03/26/1996180.html

        //ShellExecute(handle, hwnd, <程序的快捷方式的绝对路径lnk格式的>, NULL, NULL, SW_SHOWNORMAL); // 锁定程序到任务栏

        //ShellExecute(NULL, TEXT(hwnd), TEXT(程序的快捷方式的绝对路径lnk格式的), NULL, NULL, SW_SHOW); // 锁定程序到任务栏
    }

};


#endif