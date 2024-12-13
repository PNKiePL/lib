#pragma once
#ifndef 小学数学_H 
#define 小学数学_H

#include<E:\lib\头文件 c++.h>

class 模板 {
public:
	void 数列知1求全_加法(vector<float>& vecf, int 已知序号, float 已知值, vector<float>& 差vecf) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] + 差vecf[n + 1];
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] - 差vecf[n];
		}
	}
	template<typename 类型, typename 类型2>void 数列知1求全_加法(vector<类型>& vecf, int 已知序号, 类型 已知值, vector<类型2>& 差vecf) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] + 差vecf[n + 1];
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] - 差vecf[n];
		}
	}
	void 数列知1求全_等差(vector<float>& vecf, int 已知序号, float 已知值, float 等差) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] + 等差;
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] - 等差;
		}
	}
	template<typename 类型>void 数列知1求全_等差(vector<类型>& vecf, int 已知序号, 类型 已知值, 类型 等差) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] + 等差;
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] - 等差;
		}
	}
	void 数列知1求全_乘法(vector<float>& vecf, int 已知序号, float 已知值, vector<float> 比值/*后比前*/) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] * 比值[n + 1];
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] / 比值[n];
		}
	}
	template<typename 类型, typename 类型2>void 数列知1求全_乘法(vector<类型>& vecf, int 已知序号, 类型 已知值, vector<类型2> 比值/*后比前*/) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] * 比值[n + 1];
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] / 比值[n];
		}
	}
	void 数列知1求全_等比(vector<float>& vecf, int 已知序号, float 已知值, float 比值/*后比前*/) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] * 比值;
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] / 比值;
		}
	}
	template<typename 类型>void 数列知1求全_等比(vector<类型>& vecf, int 已知序号, 类型 已知值, 类型 比值/*后比前*/) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = vecf[n] * 比值;
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = vecf[n] / 比值;
		}
	}
	template<typename 类型, typename 转换为>void 数列知1求全_等比(vector<类型>& vecf, int 已知序号, 类型 已知值, 类型 比值/*后比前*/) {
		vecf[已知序号] = 已知值;
		for (size_t n = 已知序号; n < vecf.size() - 1; n++) { //求[n +1]
			vecf[n + 1] = (转换为)vecf[n] * 比值;
		}
		for (size_t n = 已知序号; n > 0; n--) { //求[n - 1]
			vecf[n - 1] = (转换为)vecf[n] / 比值;
		}
	}


};

#endif