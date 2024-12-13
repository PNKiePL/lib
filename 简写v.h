#pragma once
#ifndef 简写V_H
#define 简写V_H
#include  <E:\lib\头文件 c++.h>
#include<E:\lib\define.h>
class 简写v {
public:
public:
	///v2
	struct 封装v2s {};
	struct 封装v2i {
		新v2i v2i;

	};
public:
	简写v() {}
	~简写v() {}
	/**///▬cout▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	template<typename 类型> void coutV(新v<类型>& v, int 行数 ) {
		for (int 序号1 = 0; 序号1 < 行数; 序号1++) {
			std::cout << v[序号1] << "\n";
		}/*for*/
	}
	void coutVi(新vi& vi, int 行数) {
		for (int 序号1 = 0; 序号1 < 行数; 序号1++) {
			std::cout << vi[序号1] << "\n";
		}/*for*/
	}
	template<typename 类型>void coutV2(新v<类型, 新v<类型>>& v2, int 行数, int 列数) {
		for (int 序号1 = 0; 序号1 < 行数; 序号1++) {
			for (int 序号2 = 0; 序号2 < 列数; 序号2++) {
				std::cout << v2[序号1][序号2] << " ";
			}/*for*/
			std::cout << "\n";
		}/*for*/
	}
	void coutV2i(新v2i& v2i, int 行数, int 列数) {
		for (int 序号1 = 0; 序号1 < 行数; 序号1++) {
			////std::cout << v2i[序号1] << "\n";
			for (int 序号2 = 0; 序号2 < 列数; 序号2++) {
				std::cout << v2i[序号1][序号2] << " ";
				//std::cout << v2i.at(序号1 ).at (序号2) << "\n";
			}/*for*/
			std::cout << "\n";
		}/*for*/
	}
private:

};

#endif

