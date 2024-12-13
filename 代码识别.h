#pragma once

#include<iostream>
#include<bitset>
#include<windows.h>
#include<cstdio>
#include<conio.h>
#include<stdio.h>
#include <fstream>
#include<cstring>
#include <string>
#include <regex>

#include <E:\lib\文字读取.h>

using namespace std;

class 代码识别
{
public:
	int 前小括号数量 = 0,
		后小括号数量 = 0,
		前中括号数量 = 0,
		后中括号数量 = 0,
		前大括号数量 = 0,
		后大括号数量 = 0;
public:
	auto 是否中断(char 当前内容) {
		int a = 前小括号数量 - 后小括号数量; // =1 没有 不完整 ()
		if (a == 1) {
			if (当前内容 == ',')
				return 1;
		}
	}
	//括号内内容
	auto 读取按键(string 当前内容) { //, auto 括号下标
		//思维方式
		//int 正在做 = 0;
		//char 正在做 = '0';
		string 正在做 = "0";
		string 下标;
		string 结果, 前小括号 = "(: ", 后小括号 = "): ", 逗号 = ",: ", 分号 = ";: ";
		文本 文本;
		size_t 当前内容的字符数量 = 文本.字数(当前内容);
		for (auto i = 0; i < 当前内容的字符数量; i++)
		{
			下标 = i;
			//输出数组 拿到数组再判断 再打印
			if (当前内容[i] == '(') {
				前小括号数量 += 1;
				前小括号.append(下标 + " ");
				continue;
			}
			//cout << 当前内容[i] << '\n';
			//(str1, 2, 2)

			if (前小括号数量 > 0)
				if (当前内容[i] == ')') {
					后小括号数量 += 1;
					后小括号.append(下标 + " ");

				}
			if (是否中断(当前内容[i]) == 1) {
				逗号.append(下标 + " ");
				continue;
			}
			//语句完
			if (当前内容[i] == ';') {
				分号.append(下标 + " ");
				结果.append(" " + 前小括号 + 后小括号 + 逗号 + 分号 + "\n");
				前小括号 = "(: ", 后小括号 = "): ", 逗号 = ",: ", 分号 = ";: ";
				continue;
			}
			//switch (正在做) {
			//case "0": break;
			//case "应该输入": break;
			//case 1: break;
			//default:
			//}
			结果.append(当前内容, i);
		}
		结果.append(" " + 前小括号 + 后小括号 + 逗号 + 分号 + "\n");
		return 结果;
	}

};
























//class {
//public:
//     
//};