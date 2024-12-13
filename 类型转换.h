#pragma once
//c++
#ifndef 类型转换_H
#define 类型转换_H

#include  <E:\lib\头文件 c++.h>
class 类型转换 {
public:
public:
public:
	//▬全写,TO+小写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬


	//▬简写,to+大写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	char toC(string 输入) {
		const char* cc输入 = 输入.c_str();
		return (char)(cc输入);
	}
	char toC(const char* 输入) {
		return (char)输入;
	}
	//▬简写,TO+小写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	char TOc(string 输入) {
		const char* cc输入 = 输入.c_str();
		return (char)(cc输入);
	}
	char TOc(const char* 输入) {
		return (char)输入;
	}
	char TOc(int 输入) {/*https://blog.csdn.net/qq_33726635/article/details/107292795 >*/
		return (char)输入 + '0';
	}
	/*cc,不知道*/
	const char TOcc(string 输入) {
		return (新cc)输入.c_str();
	}
	const char TOcc(char 输入) {
		return (const char)输入;
	}
	/*ccp*/
	const char* TOccp(string 输入) {
		return 输入.c_str();
	}
	const char* TOccp(char 输入) {
		return (const char*)输入;
	}
	const char* TOccp(int 输入) {
		新s s;
		s = TOs(输入);
		return s.c_str();
	}
	void TOccp(char 输入, const char*& 输出) {
		输出 = (const char*)输入;
	}
	char const* TOcharCp(string 输入) {
	}
	char const* TOcharCp(char 输入) {
		return (char const*)输入;
	}
	string TOs(char C) {
		return to_string(C);
	}
	string TOs(const char* CC) {
		return to_string((char)CC);
	}
	string TOs(int I) {
		return to_string(I);
	}
	/*TCHAR=LPTSTR*//*****************************************
	Function:        TCHAR2STRING
	Description:     TCHAR转string
	Input:           str:待转化的TCHAR*类型字符串
	Return:          转化后的string类型字符串
	*****************************************/
  /*?2024年11月18日13:56:28`异常,读取访问冲突{ exe 中)引发的异常: 0xC0000005: 读取位置 0xFFFFFFFFFFFFFFFF }*/
	string TOs(TCHAR* pTCHAR) {/*https://blog.csdn.net/sylsjane/article/details/80868671 */
		string s结果;
		try {
			int iLen = WideCharToMultiByte(CP_ACP, 0, pTCHAR, -1, NULL, 0, NULL, NULL);
			char* chRtn = new char[iLen * sizeof(char)];
			WideCharToMultiByte(CP_ACP, 0, pTCHAR, -1, chRtn, iLen, NULL, NULL);
			s结果 = chRtn;
		} catch (exception e) {
		}/*try`catch*/
		return s结果;
	}/*string*/
	string TOs(CString cs) {/*https://blog.csdn.net/u014801811/article/details/90439888 */
	std::string s(CW2A(cs.GetString()));		return s;
	}/*string*/
	/*CString*/
	CString TOCstr(string str) {/*TOCstr ToCstring TOCstring TOcstring TOCSTRING ToCSTRING*//*https://blog.csdn.net/dycljj/article/details/110529484 */
		return CString(str.c_str());
	}/*CString*/
	int TOi(char c) {
		switch (c) {
		case '0':return 0; break;
		case '1':return 1; break;
		case '2':return 2; break;
		case '3':return 3; break;
		case ' 4':return 4; break;
		case '5':return 5; break;
		case '6':return 6; break;
		case '7':return 7; break;
		case '8':return 8; break;
		case '9':return 9; break;
		default:retu - 1; break;
		}
	}
	int TOi(const char* cC) {
		return atoi(cC);
	}
	int TOi(string S) {
		return stoi(S);
	}
	//▬简写,T+小写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	char Tc(string 输入) {
		return TOc(输入);
	}
	char Tc(const char* 输入) {
		return TOc(输入);
	}
	/*cc,不知道*/const char Tcc(string 输入) {
		return TOcc(输入);
	}
	const char Tcc(char 输入) {
		return TOcc(输入);
	}
	/*ccp*/const char* Tccp(string 输入) {
		return TOccp(输入);
	}
	const char* Tccp(char 输入) {
		return TOccp(输入);
	}
	string Ts(char C) {
		return TOs(C);
	}
	string Ts(const char* CC) {
		return TOs(CC);
	}
	string Ts(int I) {
		return TOs(I);
	}
	int Ti(char cC) {
		return TOi(cC);
	}
	int Ti(char* cC) {
		return TOi(cC);
	}
	int Ti(const char* cC) {
		return TOi(cC);
	}
	int Ti(string S) {
		return TOi(S);
	}



public:
};

#endif


