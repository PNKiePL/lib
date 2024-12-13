#pragma once

#ifndef AJ_JM_CPP 

#define AJ_JM_CPP

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
#include  <E:\lib\类型转换.h>

using namespace std;

class 按键 {
public:
	类型转换 lzxvrhr;
public:
	int ret识别ascii键码(string STR输入) {
		if (STR输入 == " ") {
			return VK_SPACE;
		}
	}
	int ret识别ascii键码(char C输入) {
		if (C输入 == ' ') {
			return VK_SPACE;
		}
	}
	int ret识别键码(string STR输入) {
		if (STR输入 == " ") {
			return VK_SPACE;
		}
	}
	int ret识别键码(char C输入) {
		if (C输入 == ' ') {
			return VK_SPACE;
		}
	}
	/*retCtoASCII键码*/	 /*RETcTOascii键码*/ /*retcTOascii键码*/int RETcTOascii键码(char C输入) {
		//>修饰键
		//if (C输入 == '') { return 7; }
		/*BackSpace=8*/ /*Tab=9*/
		if (C输入 == 'Tab') { return 9; }
		if (C输入 == '\n') { return 10; }
		/*Enter=13*/
		if (C输入 == 'Clea') { return 12; }
		if (C输入 == '\n') { return 13; }
		//if (C输入 == '') { return 14; }
		if (C输入 == 'Shif') { return 16; }
		if (C输入 == 'Cont') { return 17; }
		if (C输入 == 'Alt') { return 18; }
		if (C输入 == 'Caps') { return 20; }
		if (C输入 == 'Esc') { return 27; }
		//>小键盘
		if (C输入 == '0') { return 96; } //0
		if (C输入 == '1') { return 97; }
		if (C输入 == '2') { return 98; }
		if (C输入 == '3') { return 99; }
		if (C输入 == '4') { return 100; }
		if (C输入 == '5') { return 101; }
		if (C输入 == '6') { return 102; }
		if (C输入 == '7') { return 103; }
		if (C输入 == '8') { return 104; }
		if (C输入 == '9') { return 105; } //9
		if (C输入 == '*') { return 106; }
		if (C输入 == '+') { return 107; }
		/*小键盘enter=108*/
		if (C输入 == '-') { return 109; }
		if (C输入 == '.') { return 110; }
		if (C输入 == '/') { return 111; }
		if (C输入 == 'PgUp') { return 33; }
		if (C输入 == 'PgDw') { return 34; }
		if (C输入 == 'End') { return 35; }
		if (C输入 == 'Home') { return 36; }
		if (C输入 == 'LfAr') { return 37; }
		if (C输入 == 'UpAr') { return 38; }
		if (C输入 == 'RiAr') { return 39; }
		if (C输入 == 'DwAr') { return 40; }
		//>F?
		if (C输入 == 'F1') { return 112; }
		if (C输入 == 'F2') { return 113; }
		if (C输入 == 'F3') { return 114; }
		if (C输入 == 'F4') { return 115; }
		if (C输入 == 'F5') { return 116; }
		if (C输入 == 'F6') { return 117; }
		if (C输入 == 'F7') { return 118; }
		if (C输入 == 'F8') { return 119; }
		if (C输入 == 'F9') { return 120; }
		if (C输入 == 'F10') { return 121; }
		if (C输入 == 'F11') { return 122; }
		if (C输入 == 'F12') { return 123; }
		//>数字,字母
		if (C输入 == ' ') { return 32; }
		if (C输入 == '0') { return 48; } //0
		if (C输入 == '1') { return 49; }
		if (C输入 == '2') { return 50; }
		if (C输入 == '3') { return 51; }
		if (C输入 == '4') { return 52; }
		if (C输入 == '5') { return 53; }
		if (C输入 == '6') { return 54; }
		if (C输入 == '7') { return 55; }
		if (C输入 == '8') { return 56; }
		if (C输入 == '9') { return 57; } //9
		if (C输入 == 'A') { return 65; } //A
		if (C输入 == 'B') { return 66; }
		if (C输入 == 'C') { return 67; }
		if (C输入 == 'D') { return 68; }
		if (C输入 == 'E') { return 69; }
		if (C输入 == 'F') { return 70; }
		if (C输入 == 'G') { return 71; }
		if (C输入 == 'H') { return 72; }
		if (C输入 == 'I') { return 73; }
		if (C输入 == 'J') { return 74; }
		if (C输入 == 'K') { return 75; }
		if (C输入 == 'L') { return 76; }
		if (C输入 == 'M') { return 77; }
		if (C输入 == 'N') { return 78; }
		if (C输入 == 'O') { return 79; }
		if (C输入 == 'P') { return 80; }
		if (C输入 == 'Q') { return 81; }
		if (C输入 == 'R') { return 82; }
		if (C输入 == 'S') { return 83; }
		if (C输入 == 'T') { return 84; }
		if (C输入 == 'U') { return 85; }
		if (C输入 == 'V') { return 86; }
		if (C输入 == 'W') { return 87; }
		if (C输入 == 'X') { return 88; }
		if (C输入 == 'Y') { return 89; }
		if (C输入 == 'Z') { return 90; } //Z
		if (C输入 == 'a') { return 65; } //a
		if (C输入 == 'b') { return 66; }
		if (C输入 == 'c') { return 67; }
		if (C输入 == 'd') { return 68; }
		if (C输入 == 'e') { return 69; }
		if (C输入 == 'f') { return 70; }
		if (C输入 == 'g') { return 71; }
		if (C输入 == 'h') { return 72; }
		if (C输入 == 'i') { return 73; }
		if (C输入 == 'j') { return 74; }
		if (C输入 == 'k') { return 75; }
		if (C输入 == 'l') { return 76; }
		if (C输入 == 'm') { return 77; }
		if (C输入 == 'n') { return 78; }
		if (C输入 == 'o') { return 79; }
		if (C输入 == 'p') { return 80; }
		if (C输入 == 'q') { return 81; }
		if (C输入 == 'r') { return 82; }
		if (C输入 == 's') { return 83; }
		if (C输入 == 't') { return 84; }
		if (C输入 == 'u') { return 85; }
		if (C输入 == 'v') { return 86; }
		if (C输入 == 'w') { return 87; }
		if (C输入 == 'x') { return 88; }
		if (C输入 == 'y') { return 89; }
		if (C输入 == 'z') { return 90; } //z
		//>字符
		if (C输入 == ';') { return 186; }
		//if (C输入 == ':') { return 186; }
		//if (C输入 == '<') { return 60; }
		//if (C输入 == '=') { return 61; }
		//if (C输入 == '>') { return 62; }
		//if (C输入 == '?') { return 63; }
		//if (C输入 == '@') { return 64; }
		if (C输入 == ',') { return 188; }
		//if (C输入 == '-') { return 189; }
		if (C输入 == '_') { return 189; }
		if (C输入 == '[') { return 219; }
		//if (C输入 == '{') { return 219; }
		if (C输入 == (char)'\\') { return 220; }
		//if (C输入 == '|') { return 220; }
		if (C输入 == ']') { return 221; }
		if (C输入 == '}') { return 221; }
		if (C输入 == (char)"'") { return 222; }
		if (C输入 == '`') { return 192; }
		//if (C输入 == '~') { return 192; }
	}
	int RETcTOascii键码(string S输入) {
		//>修饰键
		//if (S输入 == '') { return 7; }
		/*BackSpace=8*/ /*Tab=9*/
		if (S输入 == "Tab") { return 9; }
		if (S输入 == "\n") { return 10; }
		/*Enter=13*/
		if (S输入 == "Clea"/*n*/) { return 12; }
		if (S输入 == "\n") { return 13; }
		//if (S输入 == ") { return 14; }
		if (S输入 == "Shif"/*t*/) { return 16; }
		if (S输入 == "Cont"/*rol*/) { return 17; }
		if (S输入 == "Alt") { return 18; }
		if (S输入 == "Caps"/*Lock*/) { return 20; }
		if (S输入 == "Esc") { return 27; }
		//>小键盘
		if (S输入 == "0") { return 96; } //0
		if (S输入 == "1") { return 97; }
		if (S输入 == "2") { return 98; }
		if (S输入 == "3") { return 99; }
		if (S输入 == "4") { return 100; }
		if (S输入 == "5") { return 101; }
		if (S输入 == "6") { return 102; }
		if (S输入 == "7") { return 103; }
		if (S输入 == "8") { return 104; }
		if (S输入 == "9") { return 105; } //9
		if (S输入 == "*") { return 106; }
		if (S输入 == "+") { return 107; }
		/*小键盘enter=108*/
		if (S输入 == "-") { return 109; }
		if (S输入 == ".") { return 110; }
		if (S输入 == "/") { return 111; }
		if (S输入 == "PgUp") { return 33; }
		if (S输入 == "PgDw") { return 34; }
		if (S输入 == "End") { return 35; }
		if (S输入 == "Home") { return 36; }
		if (S输入 == "LfAr") { return 37; }
		if (S输入 == "UpAr") { return 38; }
		if (S输入 == "RiAr") { return 39; }
		if (S输入 == "DwAr") { return 40; }
		//>F?
		if (S输入 == "F1") { return 112; }
		if (S输入 == "F2") { return 113; }
		if (S输入 == "F3") { return 114; }
		if (S输入 == "F4") { return 115; }
		if (S输入 == "F5") { return 116; }
		if (S输入 == "F6") { return 117; }
		if (S输入 == "F7") { return 118; }
		if (S输入 == "F8") { return 119; }
		if (S输入 == "F9") { return 120; }
		if (S输入 == "F10") { return 121; }
		if (S输入 == "F11") { return 122; }
		if (S输入 == "F12") { return 123; }
		//>数字,字母
		if (S输入 == " ") { return 32; }
		if (S输入 == "0") { return 48; } //0
		if (S输入 == "1") { return 49; }
		if (S输入 == "2") { return 50; }
		if (S输入 == "3") { return 51; }
		if (S输入 == "4") { return 52; }
		if (S输入 == "5") { return 53; }
		if (S输入 == "6") { return 54; }
		if (S输入 == "7") { return 55; }
		if (S输入 == "8") { return 56; }
		if (S输入 == "9") { return 57; } //9
		if (S输入 == "A") { return 65; } //A
		if (S输入 == "B") { return 66; }
		if (S输入 == "C") { return 67; }
		if (S输入 == "D") { return 68; }
		if (S输入 == "E") { return 69; }
		if (S输入 == "F") { return 70; }
		if (S输入 == "G") { return 71; }
		if (S输入 == "H") { return 72; }
		if (S输入 == "I") { return 73; }
		if (S输入 == "J") { return 74; }
		if (S输入 == "K") { return 75; }
		if (S输入 == "L") { return 76; }
		if (S输入 == "M") { return 77; }
		if (S输入 == "N") { return 78; }
		if (S输入 == "O") { return 79; }
		if (S输入 == "P") { return 80; }
		if (S输入 == "Q") { return 81; }
		if (S输入 == "R") { return 82; }
		if (S输入 == "S") { return 83; }
		if (S输入 == "T") { return 84; }
		if (S输入 == "U") { return 85; }
		if (S输入 == "V") { return 86; }
		if (S输入 == "W") { return 87; }
		if (S输入 == "X") { return 88; }
		if (S输入 == "Y") { return 89; }
		if (S输入 == "Z") { return 90; } //Z
		if (S输入 == "a") { return 65; } //a
		if (S输入 == "b") { return 66; }
		if (S输入 == "c") { return 67; }
		if (S输入 == "d") { return 68; }
		if (S输入 == "e") { return 69; }
		if (S输入 == "f") { return 70; }
		if (S输入 == "g") { return 71; }
		if (S输入 == "h") { return 72; }
		if (S输入 == "i") { return 73; }
		if (S输入 == "j") { return 74; }
		if (S输入 == "k") { return 75; }
		if (S输入 == "l") { return 76; }
		if (S输入 == "m") { return 77; }
		if (S输入 == "n") { return 78; }
		if (S输入 == "o") { return 79; }
		if (S输入 == "p") { return 80; }
		if (S输入 == "q") { return 81; }
		if (S输入 == "r") { return 82; }
		if (S输入 == "s") { return 83; }
		if (S输入 == "t") { return 84; }
		if (S输入 == "u") { return 85; }
		if (S输入 == "v") { return 86; }
		if (S输入 == "w") { return 87; }
		if (S输入 == "x") { return 88; }
		if (S输入 == "y") { return 89; }
		if (S输入 == "z") { return 90; } //z
		//>字符
		if (S输入 == ";") { return 186; }
		//if (S输入 == ":") { return 186; }
		//if (S输入 == "<") { return 60; }
		//if (S输入 == "=") { return 61; }
		//if (S输入 == ">") { return 62; }
		//if (S输入 == "?") { return 63; }
		//if (S输入 == "@") { return 64; }
		if (S输入 == ",") { return 188; }
		//if (S输入 == "-") { return 189; }
		if (S输入 == "_") { return 189; }
		if (S输入 == "[") { return 219; }
		//if (S输入 == "{") { return 219; }
		if (S输入 == "\\") { return 220; }
		//if (S输入 == "|") { return 220; }
		if (S输入 == "]") { return 221; }
		if (S输入 == "}") { return 221; }
		if (S输入 == "'") { return 222; }
		if (S输入 == "`") { return 192; }
		//if (S输入 == "~") { return 192; }
	}
	/*retASCII码*/ int RETascii码(char C输入) {
		//if (C输入 == '') { return 0; }
		if (C输入 == '') { return 1; }
		if (C输入 == '') { return 2; }
		if (C输入 == '') { return 3; }
		if (C输入 == '') { return 4; }
		if (C输入 == '') { return 5; }
		if (C输入 == '') { return 6; }
		//if (C输入 == '') { return 7; }
		/*BackSpace=8*/ /*Tab=9*/
						//if (C输入 == '  ') { return 9; }
		if (C输入 == '\n') { return 10; }
		if (C输入 == '') { return 11; }
		if (C输入 == '') { return 12; }
		/*Enter=13*/
		//if (C输入 == '') { return 14; }
		if (C输入 == '') { return 15; }
		if (C输入 == '') { return 16; }
		if (C输入 == '') { return 17; }
		if (C输入 == '') { return 18; }
		if (C输入 == '') { return 19; }
		if (C输入 == '') { return 20; }
		if (C输入 == '') { return 21; }
		if (C输入 == '') { return 22; }
		if (C输入 == '') { return 23; }
		if (C输入 == '') { return 24; }
		if (C输入 == '') { return 25; }
		/*Esc=27*/
		if (C输入 == '') { return 28; }
		if (C输入 == '') { return 29; }
		if (C输入 == '') { return 30; }
		if (C输入 == '') { return 31; }
		if (C输入 == ' ') { return 32; }
		if (C输入 == '!') { return 33; }
		if (C输入 == '"') { return 34; }
		if (C输入 == '#') { return 35; }
		if (C输入 == '$') { return 36; }
		if (C输入 == '%') { return 37; }
		if (C输入 == '&') { return 38; }
		if (C输入 == (char)"'") { return 39; }
		if (C输入 == '(') { return 40; }
		if (C输入 == ')') { return 41; }
		if (C输入 == '*') { return 42; }
		if (C输入 == '+') { return 43; }
		if (C输入 == ',') { return 44; }
		if (C输入 == '-') { return 45; }
		if (C输入 == '.') { return 46; }
		if (C输入 == '/') { return 47; }
		if (C输入 == '0') { return 48; }
		if (C输入 == '1') { return 49; }
		if (C输入 == '2') { return 50; }
		if (C输入 == '3') { return 51; }
		if (C输入 == '4') { return 52; }
		if (C输入 == '5') { return 53; }
		if (C输入 == '6') { return 54; }
		if (C输入 == '7') { return 55; }
		if (C输入 == '8') { return 56; }
		if (C输入 == '9') { return 57; } //9
		if (C输入 == ':') { return 58; }
		if (C输入 == ';') { return 59; }
		if (C输入 == '<') { return 60; }
		if (C输入 == '=') { return 61; }
		if (C输入 == '>') { return 62; }
		if (C输入 == '?') { return 63; }
		if (C输入 == '@') { return 64; }
		if (C输入 == 'A') { return 65; } //A
		if (C输入 == 'B') { return 66; }
		if (C输入 == 'C') { return 67; }
		if (C输入 == 'D') { return 68; }
		if (C输入 == 'E') { return 69; }
		if (C输入 == 'F') { return 70; }
		if (C输入 == 'G') { return 71; }
		if (C输入 == 'H') { return 72; }
		if (C输入 == 'I') { return 73; }
		if (C输入 == 'J') { return 74; }
		if (C输入 == 'K') { return 75; }
		if (C输入 == 'L') { return 76; }
		if (C输入 == 'M') { return 77; }
		if (C输入 == 'N') { return 78; }
		if (C输入 == 'O') { return 79; }
		if (C输入 == 'P') { return 80; }
		if (C输入 == 'Q') { return 81; }
		if (C输入 == 'R') { return 82; }
		if (C输入 == 'S') { return 83; }
		if (C输入 == 'T') { return 84; }
		if (C输入 == 'U') { return 85; }
		if (C输入 == 'V') { return 86; }
		if (C输入 == 'W') { return 87; }
		if (C输入 == 'X') { return 88; }
		if (C输入 == 'Y') { return 89; }
		if (C输入 == 'Z') { return 90; }
		if (C输入 == '[') { return 91; }
		if (C输入 == (char)'\\') { return 92; }
		///if (C输入 == (char)"\\") { return 92; }
		if (C输入 == ']') { return 93; }
		if (C输入 == '^') { return 94; }
		if (C输入 == '_') { return 95; }
		if (C输入 == '`') { return 96; }
		if (C输入 == 'a') { return 97; } //a
		if (C输入 == 'b') { return 98; }
		if (C输入 == 'c') { return 99; }
		if (C输入 == 'd') { return 100; }
		if (C输入 == 'e') { return 101; }
		if (C输入 == 'f') { return 102; }
		if (C输入 == 'g') { return 103; }
		if (C输入 == 'h') { return 104; }
		if (C输入 == 'i') { return 105; }
		if (C输入 == 'j') { return 106; }
		if (C输入 == 'k') { return 107; }
		if (C输入 == 'l') { return 108; }
		if (C输入 == 'm') { return 109; }
		if (C输入 == 'n') { return 110; }
		if (C输入 == 'o') { return 111; }
		if (C输入 == 'p') { return 112; }
		if (C输入 == 'q') { return 113; }
		if (C输入 == 'r') { return 114; }
		if (C输入 == 's') { return 115; }
		if (C输入 == 't') { return 116; }
		if (C输入 == 'u') { return 117; }
		if (C输入 == 'v') { return 118; }
		if (C输入 == 'w') { return 119; }
		if (C输入 == 'x') { return 120; }
		if (C输入 == 'y') { return 121; }
		if (C输入 == 'z') { return 122; }
		if (C输入 == '{') { return 123; }
		if (C输入 == '|') { return 124; }
		if (C输入 == '}') { return 125; }
		if (C输入 == '~') { return 126; }
		if (C输入 == '') { return 127; }
		if (C输入 == '€') { return 128; }
		if (C输入 == '') { return 18446744073709551615; }
		/*
		if (C输入 == '') { return 18446744073709551487; }
		if (C输入 == '~') { return 18446744073709551486; }
		if (C输入 == '}') { return 18446744073709551485; }
		if (C输入 == '|') { return 18446744073709551484; }
		if (C输入 == '{') { return 18446744073709551483; }
		if (C输入 == 'z') { return 18446744073709551482; }
		if (C输入 == 'y') { return 18446744073709551481; }
		if (C输入 == 'x') { return 18446744073709551480; }
		if (C输入 == 'w') { return 18446744073709551479; }
		if (C输入 == 'v') { return 18446744073709551478; }
		if (C输入 == 'u') { return 18446744073709551477; }
		if (C输入 == 't') { return 18446744073709551476; }
		if (C输入 == 's') { return 18446744073709551475; }
		if (C输入 == 'r') { return 18446744073709551474; }
		if (C输入 == 'q') { return 18446744073709551473; }
		if (C输入 == 'p') { return 18446744073709551472; }
		if (C输入 == 'o') { return 18446744073709551471; }
		if (C输入 == 'n') { return 18446744073709551470; }
		if (C输入 == 'm') { return 18446744073709551469; }
		if (C输入 == 'l') { return 18446744073709551468; }
		if (C输入 == 'k') { return 18446744073709551467; }
		if (C输入 == 'j') { return 18446744073709551466; }
		if (C输入 == 'i') { return 18446744073709551465; }
		if (C输入 == 'h') { return 18446744073709551464; }
		if (C输入 == 'g') { return 18446744073709551463; }
		if (C输入 == 'f') { return 18446744073709551462; }
		if (C输入 == 'e') { return 18446744073709551461; }
		if (C输入 == 'd') { return 18446744073709551460; }
		if (C输入 == 'c') { return 18446744073709551459; }
		if (C输入 == 'b') { return 18446744073709551458; }
		if (C输入 == 'a') { return 18446744073709551457; }
		if (C输入 == '`') { return 18446744073709551456; }
		if (C输入 == '_') { return 18446744073709551455; }
		if (C输入 == '^') { return 18446744073709551454; }
		if (C输入 == ']') { return 18446744073709551453; }
		if (C输入 == '\\') {return 18446744073709551452;}
		if (C输入 == '[') { return 18446744073709551451; }
		if (C输入 == 'Z') { return 18446744073709551450; }
		if (C输入 == 'Y') { return 18446744073709551449; }
		if (C输入 == 'X') { return 18446744073709551448; }
		if (C输入 == 'W') { return 18446744073709551447; }
		if (C输入 == 'V') { return 18446744073709551446; }
		if (C输入 == 'U') { return 18446744073709551445; }
		if (C输入 == 'T') { return 18446744073709551444; }
		if (C输入 == 'S') { return 18446744073709551443; }
		if (C输入 == 'R') { return 18446744073709551442; }
		if (C输入 == 'Q') { return 18446744073709551441; }
		if (C输入 == 'P') { return 18446744073709551440; }
		if (C输入 == 'O') { return 18446744073709551439; }
		if (C输入 == 'N') { return 18446744073709551438; }
		if (C输入 == 'M') { return 18446744073709551437; }
		if (C输入 == 'L') { return 18446744073709551436; }
		if (C输入 == 'K') { return 18446744073709551435; }
		if (C输入 == 'J') { return 18446744073709551434; }
		if (C输入 == 'I') { return 18446744073709551433; }
		if (C输入 == 'H') { return 18446744073709551432; }
		if (C输入 == 'G') { return 18446744073709551431; }
		if (C输入 == 'F') { return 18446744073709551430; }
		if (C输入 == 'E') { return 18446744073709551429; }
		if (C输入 == 'D') { return 18446744073709551428; }
		if (C输入 == 'C') { return 18446744073709551427; }
		if (C输入 == 'B') { return 18446744073709551426; }
		if (C输入 == 'A') { return 18446744073709551425; }
		if (C输入 == '@') { return 18446744073709551424; }
		if (C输入 == '?') { return 18446744073709551423; }
		if (C输入 == '>') { return 18446744073709551422; }
		if (C输入 == '=') { return 18446744073709551421; }
		if (C输入 == '<') { return 18446744073709551420; }
		if (C输入 == ';') { return 18446744073709551419; }
		if (C输入 == ':') { return 18446744073709551418; }
		if (C输入 == '9') { return 18446744073709551417; }
		*/
	}
	/**///
	void 按下(char a) {
		keybd_event(a, 0, 0, 0);
	}/*void*/
	void 弹起(char a) {
		keybd_event(a, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	/**///单击
	//◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼
	//◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚◚
	/**///每次`按一个键`弹起`顺序倒过来
	void 单击(string S) {
		char c = RETcTOascii键码(S); //转换
		keybd_event(c, 0, 0, 0);
		keybd_event(c, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	void 单击(char c) {
		c = RETcTOascii键码(c); //转换
		keybd_event(c, 0, 0, 0);
		keybd_event(c, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	void 单击(int i) {
		keybd_event(i, 0, 0, 0);
		keybd_event(i, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	/*每次`按多个键*/
	void 单击(int i, int i2) {
		keybd_event(i, 0, 0, 0);
		keybd_event(i2, 0, 0, 0);
		keybd_event(i2, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(i, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	void 单击(int i, int i2, int i3) {
		keybd_event(i, 0, 0, 0);
		keybd_event(i2, 0, 0, 0);
		keybd_event(i3, 0, 0, 0);
		keybd_event(i3, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(i2, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(i, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	/**///顺序不变
	void 顺序单击(int i, int i2) {
		keybd_event(i, 0, 0, 0);
		keybd_event(i2, 0, 0, 0);
		keybd_event(i, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(i2, 0, KEYEVENTF_KEYUP, 0);
	}/*void*/
	/**///sendinput◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼◼■■■■■■■▰▰▰▰▰▰●●●●●
	/*顺序不变*/
	void sendinput顺序单击(int sendinput1, int sendinput2) {
		INPUT input[4];
		ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = input[2].type = input[3].type = INPUT_KEYBOARD;  //设置键盘模式
		input[0].ki.wVk = input[2].ki.wVk = sendinput1;
		input[1].ki.wVk = input[3].ki.wVk = sendinput2;
		input[2].ki.dwFlags = input[3].ki.dwFlags = KEYEVENTF_KEYUP; //012|3 45
		SendInput(4, input, sizeof(INPUT));
	}/*void*/
	void sendinput顺序单击(int sendinput1, int sendinput2, int sendinput3) {
		INPUT input[6];
		ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = input[2].type = input[3].type = input[4].type = input[5].type = INPUT_KEYBOARD;  //设置键盘模式
		input[0].ki.wVk = input[3].ki.wVk = sendinput1;
		input[1].ki.wVk = input[4].ki.wVk = sendinput2;
		input[2].ki.wVk = input[5].ki.wVk = sendinput3;
		input[4].ki.dwFlags = input[3].ki.dwFlags = input[5].ki.dwFlags = KEYEVENTF_KEYUP; //012|3 45
		SendInput(6, input, sizeof(INPUT));
	}/*void*/
	/*弹起`顺序倒过来*/
	void sendinput简写(int sendinput1) {
		INPUT input[2];
		//memset(input, 0, sizeof(input));
		ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = INPUT_KEYBOARD;  //设置键盘模式
		input[0].ki.wVk = input[1].ki.wVk = sendinput1;
		input[1].ki.dwFlags = KEYEVENTF_KEYUP; //012|3 45
		SendInput(2, input, sizeof(INPUT));
	}/*void*/
	void sendinput简写(int sendinput1, int sendinput2) {
		INPUT input[4];
		ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = input[2].type = input[3].type = INPUT_KEYBOARD;  //设置键盘模式
		input[0].ki.wVk = input[2].ki.wVk = sendinput1;
		input[1].ki.wVk = input[3].ki.wVk = sendinput2;
		input[2].ki.dwFlags = input[3].ki.dwFlags = KEYEVENTF_KEYUP; //012|3 45
		SendInput(4, input, sizeof(INPUT));
	}/*void*/
	void sendinput简写(int sendinput1, int sendinput2, int sendinput3) {
		INPUT input[6];
		ZeroMemory(input, sizeof(input));
		input[0].type = input[1].type = input[2].type = input[3].type = input[4].type = input[5].type = INPUT_KEYBOARD;  //设置键盘模式
		input[0].ki.wVk = input[5].ki.wVk = sendinput1;
		input[1].ki.wVk = input[4].ki.wVk = sendinput2;
		input[2].ki.wVk = input[3].ki.wVk = sendinput3;
		input[4].ki.dwFlags = input[3].ki.dwFlags = input[5].ki.dwFlags = KEYEVENTF_KEYUP; //012|3 45
		SendInput(6, input, sizeof(INPUT));
	}





	/**///不知道
	void 双击(char C) {
		keybd_event(C, 0, 0, 0);
		keybd_event(C, 0, KEYEVENTF_KEYUP, 0);
		keybd_event(C, 0, 0, 0);
		keybd_event(C, 0, KEYEVENTF_KEYUP, 0);
	}
	/**///
	void 一个一个按/*Str*/(string str输入字符, int 间隔ms) {
		char C输入字符 = lzxvrhr.TOc(str输入字符);
		///char* 输入字符c = const_cast<char*>(cc输入字符);
		/*按下每一个字*/for (size_t i = 0; i < str输入字符.length(); i++) {
			单击(RETcTOascii键码(str输入字符[i]));
			sleep(间隔ms);
		}
	}/*void*/
	void 一个一个按/*Cc*/(const char* cc输入字符, int 间隔ms, int cc输入字符length) {
		char 输入字符c = (char)(cc输入字符);
		/*按下每一个字*/for (size_t i = 0; i < cc输入字符length; i++) {
			if (!cc输入字符[i]) { break; }
			单击(RETcTOascii键码(cc输入字符[i]));
			sleep(间隔ms);
		}
	}

	void 从文件读取操作行为() {
		string 按键 = "", 按键状态 = "";
		if (按键状态 == "Uh") {}
		if (按键状态 == "Xw") {}
	}




};




#endif