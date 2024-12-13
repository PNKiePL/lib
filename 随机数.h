#pragma once
#ifndef 随机数生成器_H
#define 随机数生成器_H
// random; - number generator
//https://blog.csdn.net/caroline_wendy/article/details/17322165

#include<E:/lib/头文件 c++.h>
#include<E:/lib/数字格式.h>
#include<E:/lib/文字读取.h>

using namespace std;

///template<typename 类型>
class 随机数 {
public:
	数N分<int, 3> 数3分;
	数N分<int, 4> 数4分;
	数N分<int, 5> 数5分;
	数N分<int, 6> 数6分;
public:
public:
	template<typename 类型> 类型 ret随机生成(int 范围a, int 范围b) //2023年7月24日 \ 可以
	{
		//使用种子 创建随机数生成器
		static default_random_engine 随机数eng(time(nullptr)); //静态 一个数	o	//
		static uniform_int_distribution<类型> 范围(范围a, 范围b); //错误	C2660	“一个数的范围”: 函数不接受 1 个参数 
		return 范围(随机数eng);
	}
	default_random_engine ret随机生成() //>一群10位数
	{
		static default_random_engine 随机数eng(time(nullptr));
		return /*&*/随机数eng; //?错误	C2440	“return”: 无法从“std::default_random_engine”转换为“类型”
	}

	template<typename 类型> vector<类型> ret随机生成vec(int 范围a, int 范围b, int 个数) //vector
	{
		vector<类型> 结果vec;
		结果vec.assign(1, 0);
		switch (个数) //return 几个 数字
		{
			////case 个数 <= 0:
			////case 个数 = 0:
		case 1:
			结果vec.push_back( 随机生成<类型>(范围a, 范围b));
			///结果vec[0] = 随机生成<类型>(范围a, 范围b);
			///cout << 结果vec[0]<< endl;
			return 结果vec;
			break;
		default:
			for (size_t i = 0; i < 个数; ++i) //n个数字
			{
				结果vec.push_back( 随机生成<类型>(范围a, 范围b));
				///结果vec[i] = 随机生成<类型>(范围a, 范围b);
				cout << 结果vec[i+1]<< endl;
			}
			return 结果vec;
		}
	}

	//属实没用
	template<typename 类型> 类型 n个随机数拼接(int 范围a, int 范围b, int 个数) {
		类型 数字1 = 随机生成<类型>(0, 9); //初始化
		///数字1 = 数字1 << 8;
		类型 数字2 = 随机生成<类型>(范围a, 范围b); //第一个数字
		//>数字1 位数变多-->拼接
		数字1 *= (10 * 数3分.整数位数(数字2)); //数字1后面 加0
		数字1 += 数字2; //拼接
		switch (个数)
		{
		case 1:
			return 数字1;
			break;
		default:
			for (size_t 拼接次数 = 1; 拼接次数 < 个数; ++拼接次数)
			{
				数字2 = 随机生成<类型>(范围a, 范围b); //第2个数字
				数字1 *= (10 * 数3分.整数位数(数字2)); //数字1后面 加0
				数字1 += 数字2; //拼接
			}
			return 数字1;
		}
	}

};
//==============================================================================================================

#endif









