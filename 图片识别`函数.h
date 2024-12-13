#pragma once
#ifndef TU_PM_UI_BX函数_H
#define TU_PM_UI_BX函数_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>
#include  <E:\lib\图片属性.h>

class 图片识别函数 :图片属性 {
public:
public:
public:
	//>靠文字和记忆识别,颜色不重要
	图片识别函数() = default;
	int ret转换256色(int r, int g, int b) { //rgb-->i,颜色转换
		int 颜色 = 0;
		if (r <= 0) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = Black; }
				if (b <= 95) { 颜色 = NavyBlue; }
				if (b <= 128) { 颜色 = Navy; }
				if (b <= 135) { 颜色 = DarkBlue; }
				if (b <= 175) { 颜色 = Blue3; }
				if (b <= 215) { 颜色 = 20; }
				if (b <= 255) { 颜色 = Blue; }
			}
			if (g <= 95) {
				if (b <= 0) { 颜色 = DarkGreen; }
				if (b <= 95) { 颜色 = DeepSkyBlue4; }
				if (b <= 135) { 颜色 = 24; }
				if (b <= 175) { 颜色 = 25; }
				if (b <= 215) { 颜色 = DodgerBlue3; }
				if (b <= 255) { 颜色 = DodgerBlue2; }
			}
			if (g <= 128) {
				if (b <= 0) { 颜色 = Green; }
				if (b <= 128) { 颜色 = Teal; }
			}
			if (g <= 135) {
				if (b <= 0) { 颜色 = Green4; }
				if (b <= 95) { 颜色 = SpringGreen4; }
				if (b <= 135) { 颜色 = Turquoise4; }
				if (b <= 175) { 颜色 = DeepSkyBlue3; }
				if (b <= 215) { 颜色 = 32; }
				if (b <= 255) { 颜色 = DodgerBlue1; }
			}
			if (g <= 175) {
				if (b <= 0) { 颜色 = Green3; }
				if (b <= 95) { 颜色 = SpringGreen3; }
				if (b <= 135) { 颜色 = DarkCyan; }
				if (b <= 175) { 颜色 = LightSeaGreen; }
				if (b <= 215) { 颜色 = DeepSkyBlue2; }
				if (b <= 255) { 颜色 = DeepSkyBlue1; }
			}
			if (g <= 215) {
				if (b <= 0) { 颜色 = 40; }
				if (b <= 95) { 颜色 = 41; }
				if (b <= 135) { 颜色 = SpringGreen2; }
				if (b <= 175) { 颜色 = Cyan3; }
				if (b <= 215) { 颜色 = DarkTurquoise; }
				if (b <= 255) { 颜色 = Turquoise2; }
			}
			if (g <= 255) {
				if (b <= 0) { 颜色 = Lime; }
				if (b <= 255) { 颜色 = Aqua; }
				if (b <= 0) { 颜色 = Green1; }
				if (b <= 95) { 颜色 = 47; }
				if (b <= 135) { 颜色 = SpringGreen1; }
				if (b <= 175) { 颜色 = MediumSpringGreen; }
				if (b <= 215) { 颜色 = Cyan2; }
				if (b <= 255) { 颜色 = Cyan1; }
			}
		}/*if`r*/
		if (r <= 8) {
			if (g <= 8) {
				if (b <= 8) { 颜色 = Grey3; }
			}
		}
		if (r <= 18) {
			if (g <= 18) {
				if (b <= 18) { 颜色 = Grey7; }
			}
		}
		if (r <= 28) {
			if (g <= 28) {
				if (b <= 28) { 颜色 = Grey11; }
			}
		}
		if (r <= 38) {
			if (g <= 38) {
				if (b <= 38) { 颜色 = Grey15; }
			}
		}
		if (r <= 48) {
			if (g <= 48) {
				if (b <= 48) { 颜色 = Grey19; }
			}
		}
		if (r <= 58) {
			if (g <= 58) {
				if (b <= 58) { 颜色 = Grey23; }
			}
		}
		if (r <= 68) {
			if (g <= 68) {
				if (b <= 68) { 颜色 = Grey27; }
			}
		}
		if (r <= 78) {
			if (g <= 78) {
				if (b <= 78) { 颜色 = Grey30; }
			}
		}
		if (r <= 88) {
			if (g <= 88) {
				if (b <= 88) { 颜色 = Grey35; }
			}
		}
		if (r <= 98) {
			if (g <= 98) {
				if (b <= 98) { 颜色 = Grey39; }
			}
		}
		if (r <= 95) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = DarkRed; }
				if (b <= 95) { 颜色 = DeepPink4; }
				if (b <= 135) { 颜色 = Purple4; }
				if (b <= 175) { 颜色 = 55; }/*紫色*/
				if (b <= 215) { 颜色 = Purple3; }
				if (b <= 255) { 颜色 = BlueViolet; }
			}
			if (g <= 95) {
				if (b <= 0) { 颜色 = Orange4; }
				if (b <= 95) { 颜色 = Grey37; }
				if (b <= 135) { 颜色 = MediumPurple4; }
				if (b <= 175) { 颜色 = SlateBlue3; }
				if (b <= 215) { 颜色 = 62; }/*蓝色*/
				if (b <= 255) { 颜色 = RoyalBlue1; }
			}
			if (g <= 135) {
				if (b <= 0) { 颜色 = Chartreuse4; }
				if (b <= 95) { 颜色 = DarkSeaGreen4; }
				if (b <= 135) { 颜色 = PaleTurquoise4; }
				if (b <= 175) { 颜色 = SteelBlue; }
				if (b <= 215) { 颜色 = SteelBlue3; }
				if (b <= 255) { 颜色 = CornflowerBlue; }
			}
			if (g <= 175) {
				if (b <= 0) { 颜色 = Chartreuse3; }
				if (b <= 95) { 颜色 = 71; }
				if (b <= 135) { 颜色 = CadetBlue; }
				if (b <= 175) { 颜色 = 73; }
				if (b <= 215) { 颜色 = SkyBlue3; }
				if (b <= 255) { 颜色 = SteelBlue1; }
			}
			if (g <= 215) {
				if (b <= 0) { 颜色 = 76; }
				if (b <= 95) { 颜色 = PaleGreen3; }
				if (b <= 135) { 颜色 = SeaGreen3; }
				if (b <= 175) { 颜色 = Aquamarine3; }
				if (b <= 215) { 颜色 = MediumTurquoise; }
				if (b <= 255) { 颜色 = 81; }
			}
			if (g <= 255) {
				if (b <= 0) { 颜色 = Chartreuse2; }
				if (b <= 95) { 颜色 = SeaGreen2; }
				if (b <= 135) { 颜色 = SeaGreen1; }
				if (b <= 175) { 颜色 = 85; }
				if (b <= 215) { 颜色 = Aquamarine1; }
				if (b <= 255) { 颜色 = DarkSlateGray2; }
			}
		}/*if`r*/
		if (r <= 108) {
			if (g <= 108) {
				if (b <= 108) { 颜色 = Grey42; }
			}
		}
		if (r <= 118) {
			if (g <= 118) {
				if (b <= 118) { 颜色 = Grey46; }
			}
		}
		if (r <= 128) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = Maroon; }
				if (b <= 128) { 颜色 = Purple; }
			}
			if (g <= 128) {
				if (b <= 0) { 颜色 = Olive; }
				if (b <= 128) { 颜色 = Grey; }
			}
		}/*if`r*/

		if (r <= 135) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = 88; }
				if (b <= 95) { 颜色 = 89; }
				if (b <= 135) { 颜色 = DarkMagenta; }
				if (b <= 175) { 颜色 = 91; }
				if (b <= 215) { 颜色 = DarkViolet; }
				if (b <= 255) { 颜色 = 93; }
			}
			if (g <= 95) {
				if (b <= 0) { 颜色 = 94; }
				if (b <= 95) { 颜色 = LightPink4; }
				if (b <= 135) { 颜色 = Plum4; }
				if (b <= 175) { 颜色 = MediumPurple3; }
				if (b <= 215) { 颜色 = 98; }
				if (b <= 255) { 颜色 = SlateBlue1; }
			}
			if (g <= 135) {
				if (b <= 0) { 颜色 = Yellow4; }
				if (b <= 95) { 颜色 = Wheat4; }
				if (b <= 135) { 颜色 = Grey53; }
				if (b <= 175) { 颜色 = LightSlateGrey; }
				if (b <= 215) { 颜色 = MediumPurple; }
				if (b <= 255) { 颜色 = LightSlateBlue; }
			}
			if (g <= 175) {
				if (b <= 0) { 颜色 = 106; }
				if (b <= 95) { 颜色 = DarkOliveGreen3; }
				if (b <= 135) { 颜色 = DarkSeaGreen; }
				if (b <= 175) { 颜色 = LightSkyBlue3; }
				if (b <= 215) { 颜色 = 110; }
				if (b <= 255) { 颜色 = SkyBlue2; }
			}
			if (g <= 215) {
				if (b <= 0) { 颜色 = 112; }
				if (b <= 95) { 颜色 = 113; }
				if (b <= 135) { 颜色 = 114; }
				if (b <= 175) { 颜色 = DarkSeaGreen3; }
				if (b <= 215) { 颜色 = DarkSlateGray3; }
				if (b <= 255) { 颜色 = SkyBlue1; }
			}
			if (g <= 255) {
				if (b <= 0) { 颜色 = Chartreuse1; }
				if (b <= 95) { 颜色 = LightGreen; }
				if (b <= 135) { 颜色 = 120; }
				if (b <= 175) { 颜色 = PaleGreen1; }
				if (b <= 215) { 颜色 = 122; }
				if (b <= 255) { 颜色 = DarkSlateGray1; }
			}
		}
		if (r <= 138) {
			if (g <= 138) {
				if (b <= 138) { 颜色 = Grey54; }
			}
		}
		if (r <= 148) {
			if (g <= 148) {
				if (b <= 148) { 颜色 = Grey58; }
			}
		}
		if (r <= 158) {
			if (g <= 158) {
				if (b <= 158) { 颜色 = Grey62; }
			}
		}
		if (r <= 168) {
			if (g <= 168) {
				if (b <= 168) { 颜色 = Grey66; }
			}
		}
		if (r <= 175) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = Red3; }
				if (b <= 95) { 颜色 = 125; }
				if (b <= 135) { 颜色 = MediumVioletRed; }
				if (b <= 175) { 颜色 = Magenta3; }
				if (b <= 215) { 颜色 = 128; }
				if (b <= 255) { 颜色 = 129; }
			}
			if (g <= 95) {
				if (b <= 0) { 颜色 = DarkOrange3; }
				if (b <= 95) { 颜色 = IndianRed; }
				if (b <= 135) { 颜色 = HotPink3; }
				if (b <= 175) { 颜色 = MediumOrchid3; }
				if (b <= 215) { 颜色 = MediumOrchid; }
				if (b <= 255) { 颜色 = MediumPurple2; }
			}
			if (g <= 135) {
				if (b <= 0) { 颜色 = DarkGoldenrod; }
				if (b <= 95) { 颜色 = LightSalmon3; }
				if (b <= 135) { 颜色 = RosyBrown; }
				if (b <= 175) { 颜色 = Grey63; }
				if (b <= 215) { 颜色 = 140; }
				if (b <= 255) { 颜色 = MediumPurple1; }
			}
			if (g <= 175) {
				if (b <= 0) { 颜色 = Gold3; }
				if (b <= 95) { 颜色 = DarkKhaki; }
				if (b <= 135) { 颜色 = NavajoWhite3; }
				if (b <= 175) { 颜色 = Grey69; }
				if (b <= 215) { 颜色 = LightSteelBlue3; }
				if (b <= 255) { 颜色 = LightSteelBlue; }
			}
			if (g <= 215) {
				if (b <= 0) { 颜色 = Yellow3; }
				if (b <= 95) { 颜色 = 149; }
				if (b <= 135) { 颜色 = 150; }
				if (b <= 175) { 颜色 = DarkSeaGreen2; }
				if (b <= 215) { 颜色 = LightCyan3; }
				if (b <= 255) { 颜色 = LightSkyBlue1; }
			}
			if (g <= 255) {
				if (b <= 0) { 颜色 = GreenYellow; }
				if (b <= 95) { 颜色 = DarkOliveGreen2; }
				if (b <= 135) { 颜色 = 156; }
				if (b <= 175) { 颜色 = 157; }
				if (b <= 215) { 颜色 = DarkSeaGreen1; }
				if (b <= 255) { 颜色 = PaleTurquoise1; }
			}
		}
		if (r <= 178) {
			if (g <= 178) {
				if (b <= 178) { 颜色 = Grey70; }
			}
		}
		if (r <= 188) {
			if (g <= 188) {
				if (b <= 188) { 颜色 = Grey74; }
			}
		}
		if (r <= 192) {
			if (g <= 192) {
				if (b <= 192) { 颜色 = Silver; }
			}
		}/*if`r*/
		if (r <= 198) {
			if (g <= 198) {
				if (b <= 198) { 颜色 = Grey78; }
			}
		}
		if (r <= 208) {
			if (g <= 208) {
				if (b <= 208) { 颜色 = Grey82; }
			}
		}
		if (r <= 215) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = 160; }
				if (b <= 95) { 颜色 = DeepPink3; }
				if (b <= 135) { 颜色 = 162; }
				if (b <= 175) { 颜色 = 163; }
				if (b <= 215) { 颜色 = 164; }
				if (b <= 255) { 颜色 = Magenta2; }
			}
			if (g <= 95) {
				if (b <= 0) { 颜色 = 166; }
				if (b <= 95) { 颜色 = 167; }
				if (b <= 135) { 颜色 = 168; }
				if (b <= 175) { 颜色 = HotPink2; }
				if (b <= 215) { 颜色 = Orchid; }
				if (b <= 255) { 颜色 = MediumOrchid1; }
			}
			if (g <= 135) {
				if (b <= 0) { 颜色 = Orange3; }
				if (b <= 95) { 颜色 = 173; }
				if (b <= 135) { 颜色 = LightPink3; }
				if (b <= 175) { 颜色 = Pink3; }
				if (b <= 215) { 颜色 = Plum3; }
				if (b <= 255) { 颜色 = Violet; }
			}
			if (g <= 175) {
				if (b <= 0) { 颜色 = 178; }
				if (b <= 95) { 颜色 = LightGoldenrod3; }
				if (b <= 135) { 颜色 = Tan; }
				if (b <= 175) { 颜色 = MistyRose3; }
				if (b <= 215) { 颜色 = Thistle3; }
				if (b <= 255) { 颜色 = Plum2; }
			}
			if (g <= 215) {
				if (b <= 0) { 颜色 = 184; }
				if (b <= 95) { 颜色 = Khaki3; }
				if (b <= 135) { 颜色 = LightGoldenrod2; }
				if (b <= 175) { 颜色 = LightYellow3; }
				if (b <= 215) { 颜色 = Grey84; }
				if (b <= 255) { 颜色 = LightSteelBlue1; }
			}
			if (g <= 255) {
				if (b <= 0) { 颜色 = Yellow2; }
				if (b <= 95) { 颜色 = DarkOliveGreen1; }
				if (b <= 135) { 颜色 = 192; }
				if (b <= 175) { 颜色 = 193; }
				if (b <= 215) { 颜色 = Honeydew2; }
				if (b <= 255) { 颜色 = LightCyan1; }
			}
		}
		if (r <= 218) {
			if (g <= 218) {
				if (b <= 218) { 颜色 = Grey85; }
			}
		}
		if (r <= 228) {
			if (g <= 228) {
				if (b <= 228) { 颜色 = Grey89; }
			}
		}
		if (r <= 238) {
			if (g <= 238) {
				if (b <= 238) { 颜色 = Grey93; }
			}
		}
		if (r <= 255) {
			if (g <= 0) {
				if (b <= 0) { 颜色 = Red; }
				if (b <= 255) { 颜色 = Fuchsia; }
				if (b <= 0) { 颜色 = Red1; }
				if (b <= 95) { 颜色 = DeepPink2; }
				if (b <= 135) { 颜色 = DeepPink1; }
				if (b <= 175) { 颜色 = 199; }
				if (b <= 215) { 颜色 = 200; }
				if (b <= 255) { 颜色 = Magenta1; }
			}
			if (g <= 95) {
				if (b <= 0) { 颜色 = OrangeRed1; }
				if (b <= 95) { 颜色 = IndianRed1; }
				if (b <= 135) { 颜色 = 204; }
				if (b <= 175) { 颜色 = HotPink; }
				if (b <= 215) { 颜色 = 206; }
				if (b <= 255) { 颜色 = 207; }
			}
			if (g <= 135) {
				if (b <= 0) { 颜色 = DarkOrange; }
				if (b <= 95) { 颜色 = Salmon1; }
				if (b <= 135) { 颜色 = LightCoral; }
				if (b <= 175) { 颜色 = PaleVioletRed1; }
				if (b <= 215) { 颜色 = Orchid2; }
				if (b <= 255) { 颜色 = Orchid1; }
			}
			if (g <= 175) {
				if (b <= 0) { 颜色 = Orange1; }
				if (b <= 95) { 颜色 = SandyBrown; }
				if (b <= 135) { 颜色 = LightSalmon1; }
				if (b <= 175) { 颜色 = LightPink1; }
				if (b <= 215) { 颜色 = Pink1; }
				if (b <= 255) { 颜色 = Plum1; }
			}
			if (g <= 215) {
				if (b <= 0) { 颜色 = Gold1; }
				if (b <= 95) { 颜色 = 粉红; }
				if (b <= 135) { 颜色 = 222; }
				if (b <= 175) { 颜色 = NavajoWhite1; }
				if (b <= 215) { 颜色 = MistyRose1; }
				if (b <= 255) { 颜色 = Thistle1; }
			}
			if (g <= 255) {
				if (b <= 0) { 颜色 = Yellow; }
				if (b <= 255) { 颜色 = White; }
				if (b <= 0) { 颜色 = Yellow1; }
				if (b <= 95) { 颜色 = LightGoldenrod1; }
				if (b <= 135) { 颜色 = Khaki1; }
				if (b <= 175) { 颜色 = Wheat1; }
				if (b <= 215) { 颜色 = Cornsilk1; }
				if (b <= 255) { 颜色 = Grey100; }
			}
		}/*if`r*/
		retu 颜色;
	}
	string ret名称_256色iTOstr(新i 颜色) {
		string s结果;
		switch (颜色) {
		default:s结果 = "0";
			break;
		case 0:
			s结果 = "Black";
			bre;
		case 1:
			s结果 = "Maroon";
			bre;
		case 2:
			s结果 = "Green";
			bre;
		case 3:
			s结果 = "Olive";
			bre;
		case 4:
			s结果 = "Navy";
			bre;
		case 5:
			s结果 = "Purple";
			bre;
		case 6:
			s结果 = "Teal";
			bre;
		case 7:
			s结果 = "Silver";
			bre;
		case 8:
			s结果 = "Grey";
			bre;
		case 9:
			s结果 = "Red";
			bre;
		case 10:
			s结果 = "Lime";
			bre;
		case 11:
			s结果 = "Yellow";
			bre;
		case 12:
			s结果 = "Blue";
			bre;
		case 13:
			s结果 = "Fuchsia";
			bre;
		case 14:
			s结果 = "Aqua";
			bre;
		case 15:
			s结果 = "White";
			bre;
		case 16:
			s结果 = "Grey0";
			bre;
		case 17:
			s结果 = "NavyBlue";
			bre;
		case 18:
			s结果 = "DarkBlue";
			bre;
		case 19:
			s结果 = "Blue3";
			bre;
		case 20:
			s结果 = "";
			bre;
		case 21:
			s结果 = "Blue1";
			bre;
		case 22:
			s结果 = "DarkGreen";
			bre;
		case 23:
			s结果 = "DeepSkyBlue4";
			bre;
		case 24:
			s结果 = "";
			bre;
		case 25:
			s结果 = "";
			bre;
		case 26:
			s结果 = "DodgerBlue3";
			bre;
		case 27:
			s结果 = "DodgerBlue2";
			bre;
		case 28:
			s结果 = "Green4";
			bre;
		case 29:
			s结果 = "SpringGreen4";
			bre;
		case 30:
			s结果 = "Turquoise4";
			bre;
		case 31:
			s结果 = "DeepSkyBlue3";
			bre;
		case 32:
			s结果 = "";
			bre;
		case 33:
			s结果 = "DodgerBlue1";
			bre;
		case 34:
			s结果 = "Green3";
			bre;
		case 35:
			s结果 = "SpringGreen3";
			bre;
		case 36:
			s结果 = "DarkCyan";
			bre;
		case 37:
			s结果 = "LightSeaGreen";
			bre;
		case 38:
			s结果 = "DeepSkyBlue2";
			bre;
		case 39:
			s结果 = "DeepSkyBlue1";
			bre;
		case 40:
			s结果 = "";
			bre;
		case 41:
			s结果 = "桃红";
			bre;
		case 42:
			s结果 = "SpringGreen2";
			bre;
		case 43:
			s结果 = "Cyan3";
			bre;
		case 44:
			s结果 = "DarkTurquoise";
			bre;
		case 45:
			s结果 = "Turquoise2";
			bre;
		case 46:
			s结果 = "Green1";
			bre;
		case 47:
			s结果 = "";
			bre;
		case 48:
			s结果 = "SpringGreen1";
			bre;
		case 49:
			s结果 = "MediumSpringGreen";
			bre;
		case 50:
			s结果 = "Cyan2";
			bre;
		case 51:
			s结果 = "Cyan1";
			bre;
		case 52:
			s结果 = "DarkRed";
			bre;
		case 53:
			s结果 = "DeepPink4";
			bre;
		case 54:
			s结果 = "Purple4";
			bre;
		case 55:
			s结果 = "";
			bre;
		case 56:
			s结果 = "Purple3";
			bre;
		case 57:
			s结果 = "BlueViolet";
			bre;
		case 58:
			s结果 = "Orange4";
			bre;
		case 59:
			s结果 = "Grey37";
			bre;
		case 60:
			s结果 = "MediumPurple4";
			bre;
		case 61:
			s结果 = "SlateBlue3";
			bre;
		case 62:
			s结果 = "";
			bre;
		case 63:
			s结果 = "RoyalBlue1";
			bre;
		case 64:
			s结果 = "Chartreuse4";
			bre;
		case 65:
			s结果 = "DarkSeaGreen4";
			bre;
		case 66:
			s结果 = "PaleTurquoise4";
			bre;
		case 67:
			s结果 = "SteelBlue";
			bre;
		case 68:
			s结果 = "SteelBlue3";
			bre;
		case 69:
			s结果 = "CornflowerBlue";
			bre;
		case 70:
			s结果 = "Chartreuse3";
			bre;
		case 71:
			s结果 = "";
			bre;
		case 72:
			s结果 = "CadetBlue";
			bre;
		case 73:
			s结果 = "";
			bre;
		case 74:
			s结果 = "SkyBlue3";
			bre;
		case 75:
			s结果 = "SteelBlue1";
			bre;
		case 76:
			s结果 = "";
			bre;
		case 77:
			s结果 = "PaleGreen3";
			bre;
		case 78:
			s结果 = "SeaGreen3";
			bre;
		case 79:
			s结果 = "Aquamarine3";
			bre;
		case 80:
			s结果 = "MediumTurquoise";
			bre;
		case 81:
			s结果 = "";
			bre;
		case 82:
			s结果 = "Chartreuse2";
			bre;
		case 83:
			s结果 = "SeaGreen2";
			bre;
		case 84:
			s结果 = "SeaGreen1";
			bre;
		case 85:
			s结果 = "";
			bre;
		case 86:
			s结果 = "Aquamarine1";
			bre;
		case 87:
			s结果 = "DarkSlateGray2";
			bre;
		case 88:
			s结果 = "";
			bre;
		case 89:
			s结果 = "";
			bre;
		case 90:
			s结果 = "DarkMagenta";
			bre;
		case 91:
			s结果 = "";
			bre;
		case 92:
			s结果 = "DarkViolet";
			bre;
		case 93:
			s结果 = "";
			bre;
		case 94:
			s结果 = "";
			bre;
		case 95:
			s结果 = "LightPink4";
			bre;
		case 96:
			s结果 = "Plum4";
			bre;
		case 97:
			s结果 = "MediumPurple3";
			bre;
		case 98:
			s结果 = "";
			bre;
		case 99:
			s结果 = "SlateBlue1";
			bre;
		case 100:
			s结果 = "Yellow4";
			bre;
		case 101:
			s结果 = "Wheat4";
			bre;
		case 102:
			s结果 = "Grey53";
			bre;
		case 103:
			s结果 = "LightSlateGrey";
			bre;
		case 104:
			s结果 = "MediumPurple";
			bre;
		case 105:
			s结果 = "LightSlateBlue";
			bre;
		case 106:
			s结果 = "";
			bre;
		case 107:
			s结果 = "DarkOliveGreen3";
			bre;
		case 108:
			s结果 = "DarkSeaGreen";
			bre;
		case 109:
			s结果 = "LightSkyBlue3";
			bre;
		case 110:
			s结果 = "";
			bre;
		case 111:
			s结果 = "SkyBlue2";
			bre;
		case 112:
			s结果 = "";
			bre;
		case 113:
			s结果 = "";
			bre;
		case 114:
			s结果 = "";
			bre;
		case 115:
			s结果 = "DarkSeaGreen3";
			bre;
		case 116:
			s结果 = "DarkSlateGray3";
			bre;
		case 117:
			s结果 = "SkyBlue1";
			bre;
		case 118:
			s结果 = "Chartreuse1";
			bre;
		case 119:
			s结果 = "LightGreen";
			bre;
		case 120:
			s结果 = "";
			bre;
		case 121:
			s结果 = "PaleGreen1";
			bre;
		case 122:
			s结果 = "";
			bre;
		case 123:
			s结果 = "DarkSlateGray1";
			bre;
		case 124:
			s结果 = "Red3";
			bre;
		case 125:
			s结果 = "";
			bre;
		case 126:
			s结果 = "MediumVioletRed";
			bre;
		case 127:
			s结果 = "Magenta3";
			bre;
		case 128:
			s结果 = "";
			bre;
		case 129:
			s结果 = "";
			bre;
		case 130:
			s结果 = "DarkOrange3";
			bre;
		case 131:
			s结果 = "IndianRed";
			bre;
		case 132:
			s结果 = "HotPink3";
			bre;
		case 133:
			s结果 = "MediumOrchid3";
			bre;
		case 134:
			s结果 = "MediumOrchid";
			bre;
		case 135:
			s结果 = "MediumPurple2";
			bre;
		case 136:
			s结果 = "DarkGoldenrod";
			bre;
		case 137:
			s结果 = "LightSalmon3";
			bre;
		case 138:
			s结果 = "RosyBrown";
			bre;
		case 139:
			s结果 = "Grey63";
			bre;
		case 140:
			s结果 = "";
			bre;
		case 141:
			s结果 = "MediumPurple1";
			bre;
		case 142:
			s结果 = "Gold3";
			bre;
		case 143:
			s结果 = "DarkKhaki";
			bre;
		case 144:
			s结果 = "NavajoWhite3";
			bre;
		case 145:
			s结果 = "Grey69";
			bre;
		case 146:
			s结果 = "LightSteelBlue3";
			bre;
		case 147:
			s结果 = "LightSteelBlue";
			bre;
		case 148:
			s结果 = "Yellow3";
			bre;
		case 149:
			s结果 = "";
			bre;
		case 150:
			s结果 = "";
			bre;
		case 151:
			s结果 = "DarkSeaGreen2";
			bre;
		case 152:
			s结果 = "LightCyan3";
			bre;
		case 153:
			s结果 = "LightSkyBlue1";
			bre;
		case 154:
			s结果 = "GreenYellow";
			bre;
		case 155:
			s结果 = "DarkOliveGreen2";
			bre;
		case 156:
			s结果 = "";
			bre;
		case 157:
			s结果 = "";
			bre;
		case 158:
			s结果 = "DarkSeaGreen1";
			bre;
		case 159:
			s结果 = "PaleTurquoise1";
			bre;
		case 160:
			s结果 = "";
			bre;
		case 161:
			s结果 = "DeepPink3";
			bre;
		case 162:
			s结果 = "";
			bre;
		case 163:
			s结果 = "";
			bre;
		case 164:
			s结果 = "";
			bre;
		case 165:
			s结果 = "Magenta2";
			bre;
		case 166:
			s结果 = "";
			bre;
		case 167:
			s结果 = "";
			bre;
		case 168:
			s结果 = "";
			bre;
		case 169:
			s结果 = "HotPink2";
			bre;
		case 170:
			s结果 = "Orchid";
			bre;
		case 171:
			s结果 = "MediumOrchid1";
			bre;
		case 172:
			s结果 = "Orange3";
			bre;
		case 173:
			s结果 = "";
			bre;
		case 174:
			s结果 = "LightPink3";
			bre;
		case 175:
			s结果 = "Pink3";
			bre;
		case 176:
			s结果 = "Plum3";
			bre;
		case 177:
			s结果 = "Violet";
			bre;
		case 178:
			s结果 = "";
			bre;
		case 179:
			s结果 = "LightGoldenrod3";
			bre;
		case 180:
			s结果 = "Tan";
			bre;
		case 181:
			s结果 = "MistyRose3";
			bre;
		case 182:
			s结果 = "Thistle3";
			bre;
		case 183:
			s结果 = "Plum2";
			bre;
		case 184:
			s结果 = "";
			bre;
		case 185:
			s结果 = "Khaki3";
			bre;
		case 186:
			s结果 = "LightGoldenrod2";
			bre;
		case 187:
			s结果 = "LightYellow3";
			bre;
		case 188:
			s结果 = "Grey84";
			bre;
		case 189:
			s结果 = "LightSteelBlue1";
			bre;
		case 190:
			s结果 = "Yellow2";
			bre;
		case 191:
			s结果 = "DarkOliveGreen1";
			bre;
		case 192:
			s结果 = "";
			bre;
		case 193:
			s结果 = "";
			bre;
		case 194:
			s结果 = "Honeydew2";
			bre;
		case 195:
			s结果 = "LightCyan1";
			bre;
		case 196:
			s结果 = "Red1";
			bre;
		case 197:
			s结果 = "DeepPink2";
			bre;
		case 198:
			s结果 = "DeepPink1";
			bre;
		case 199:
			s结果 = "";
			bre;
		case 200:
			s结果 = "";
			bre;
		case 201:
			s结果 = "Magenta1";
			bre;
		case 202:
			s结果 = "OrangeRed1";
			bre;
		case 203:
			s结果 = "IndianRed1";
			bre;
		case 204:
			s结果 = "";
			bre;
		case 205:
			s结果 = "HotPink";
			bre;
		case 206:
			s结果 = "";
			bre;
		case 207:
			s结果 = "";
			bre;
		case 208:
			s结果 = "DarkOrange";
			bre;
		case 209:
			s结果 = "Salmon1";
			bre;
		case 210:
			s结果 = "LightCoral";
			bre;
		case 211:
			s结果 = "PaleVioletRed1";
			bre;
		case 212:
			s结果 = "Orchid2";
			bre;
		case 213:
			s结果 = "Orchid1";
			bre;
		case 214:
			s结果 = "Orange1";
			bre;
		case 215:
			s结果 = "SandyBrown";
			bre;
		case 216:
			s结果 = "LightSalmon1";
			bre;
		case 217:
			s结果 = "LightPink1";
			bre;
		case 218:
			s结果 = "Pink1";
			bre;
		case 219:
			s结果 = "Plum1";
			bre;
		case 220:
			s结果 = "Gold1";
			bre;
		case 221:
			s结果 = "粉红";
			bre;
		case 222:
			s结果 = "";
			bre;
		case 223:
			s结果 = "NavajoWhite1";
			bre;
		case 224:
			s结果 = "MistyRose1";
			bre;
		case 225:
			s结果 = "Thistle1";
			bre;
		case 226:
			s结果 = "Yellow1";
			bre;
		case 227:
			s结果 = "LightGoldenrod1";
			bre;
		case 228:
			s结果 = "Khaki1";
			bre;
		case 229:
			s结果 = "Wheat1";
			bre;
		case 230:
			s结果 = "Cornsilk1";
			bre;
		case 231:
			s结果 = "Grey100";
			bre;
		case 232:
			s结果 = "Grey3";
			bre;
		case 233:
			s结果 = "Grey7";
			bre;
		case 234:
			s结果 = "Grey11";
			bre;
		case 235:
			s结果 = "Grey15";
			bre;
		case 236:
			s结果 = "Grey19";
			bre;
		case 237:
			s结果 = "Grey23";
			bre;
		case 238:
			s结果 = "Grey27";
			bre;
		case 239:
			s结果 = "Grey30";
			bre;
		case 240:
			s结果 = "Grey35";
			bre;
		case 241:
			s结果 = "Grey39";
			bre;
		case 242:
			s结果 = "Grey42";
			bre;
		case 243:
			s结果 = "Grey46";
			bre;
		case 244:
			s结果 = "Grey50";
			bre;
		case 245:
			s结果 = "Grey54";
			bre;
		case 246:
			s结果 = "Grey58";
			bre;
		case 247:
			s结果 = "Grey62";
			bre;
		case 248:
			s结果 = "Grey66";
			bre;
		case 249:
			s结果 = "Grey70";
			bre;
		case 250:
			s结果 = "Grey74";
			bre;
		case 251:
			s结果 = "Grey78";
			bre;
		case 252:
			s结果 = "Grey82";
			bre;
		case 253:
			s结果 = "Grey85";
			bre;
		case 254:
			s结果 = "Grey89";
			bre;
		case 255:
			s结果 = "Grey93";
		}
		if (s结果 == "") {
			s结果 == to_string(颜色);
		}
		retu s结果;
	}
	//▬0▬数字运算`杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	int ret三数挑最大(int 数1, int 数2, int 数3) {
		//>数1数2数3挑最大的, if两次. 排序要if3次
		///if (数1 > 数3) { //>数1>数3
		///	if (数1 > 数2) {//>两个条件够了. 数1>数2 -> 数1大
		///		return 数1;
		///	}
		///	else {//数1>数3; 数2>数1;
		///		return 数2;
		///	}
		///}
		///else { //>数3>数1
		///	if (数3 > 数2) {//>数3大
		///		return 数3;
		///	}
		///	else {//数2>数3
		///		return 数2;
		///	}
		///}
		///相当于:
		int 最大的;
		最大的 = 数1 > 数3 ? 数1 : 数3;
		最大的 = 最大的 > 数2 ? 最大的 : 数2;
		return 最大的;
	}
	vector<int> ret三数排序(int 数1, int 数2, int 数3) {
		vector<int> 从大到小(3, 0);
		//>数1数2数3挑最大的, if两次. 排序要if3次
		if (数1 > 数3) { //>数1>数3
			if (数1 > 数2) {//数1>数2 -> 数1大
				从大到小[0] = 数1;
				if (数3 > 数2) {
					从大到小[1] = 数3;
					从大到小[2] = 数2;
				} else { //2>3
					从大到小[1] = 数2;
					从大到小[2] = 数3;
				}
				return 从大到小;
			} else {// >数1 < 数2
				if (数2 > 数3) { //>数2>数1>数3; 数2>数3
					从大到小[0] = 数2;
					从大到小[1] = 数1;
					从大到小[2] = 数3;
				} else { //数2<数3 -> 数3>数2>数1; 
					从大到小[0] = 数3;
					从大到小[1] = 数2;
					从大到小[2] = 数1;
				}
				return 从大到小;
			}
		} else { //>数3>数1
			if (数3 > 数2) {//>数3 > 数2; 3大
				从大到小[0] = 数3;
				if (数2 > 数1) { //数3>数1;数2>数1;数2<数3
					从大到小[1] = 数2;
					从大到小[2] = 数1;
				} else { //数3>数1;数2<数3;数1>2;
					从大到小[1] = 数1;
					从大到小[2] = 数2;
				}
				return 从大到小;
			} else {//>数2>数3>数1
				从大到小[0] = 数2;
				从大到小[1] = 数3;
				从大到小[2] = 数1;
				return 从大到小;
			}
		}
	}
	int ret数是否在两者间_213(int 数1, int 数2, int 数3) {
		if (数1 < 数2) {
			if (数1 > 数3) { //2>1>3
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_213_大等于(int 数1, int 数2, int 数3) {
		if (数1 <= 数2) {
			if (数1 >= 数3) { // 213
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_312_小于(int 数1, int 数2, int 数3) {
		if (数1 > 数2) {
			if (数1 < 数3) { //3>1>2
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_312_小等于(int 数1, int 数2, int 数3) {
		if (数1 >= 数2) {
			if (数1 <= 数3) { //3>=1>=2
				return 1;
			}
		}
		return 0;
	}
	int ret数是否在两者间_大于(int 数1, int 数2, int 数3) {
		ret数是否在两者间_213(数1, 数2, 数3);
	}
	int ret两数是否相同(int uu1, int uu2, int 差的最小值) {
		//正数
		if (abs(uu1 - uu2) < 差的最小值) {
			return 1; //相同
		}
		return 0; //不相同
	}
	//▬0▬比值▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*ret保留小数*/
	float ret计算比值(int uu, int uu2) {
		///if (uu == 0) {
		///	return 0;
		///}
		/*分子不能=零*/
		if (uu2 == 0) {
			return 0;
		}
		return static_cast<float>(uu) / uu2;
	}
	int ret计算比值(int uu, int uu2, int 分子乘) {
		if (uu2 == 0) {
			return 0;
		}
		return (uu * 分子乘) / uu2;
	}
	float ret计算比值_大除以小(int uu, int uu2) {
		if (uu2 == 0) {
			return 0;
		}
		return uu > uu2 ? static_cast<float>(uu) / uu2 : static_cast<float>(uu2) / uu;
	}
	/*ret整数(*/
	int ret计算比值i(int uu, int uu2) {
		if (uu2 == 0) {
			return 0;
		}
		return uu / uu2;
	}
	int ret计算比值i_大除以小(int uu, int uu2) {
		if (uu2 == 0) {
			return 0;
		}
		return uu > uu2 ? uu / uu2 : uu2 / uu;
	}
	//▬1▬零件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	float 计算亮度(int r, int g, int b) {
		//>rgb都是亮度; 亮度=最大亮度; 亮度极差=rgb极差{ 越大越亮}. 中间值偏向哪个;
		//>rgb挑最大的, if两次. 排序要if3次
		return ret三数挑最大(r, g, b);
	}
	/**///▬2▬功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//>两点的颜色是否一样
	/*输入颜色*/
	int 两个颜色是否一样(int r, int g, int b, int r2, int g2, int b2) {
		if (r == r2) {
			if (g == g2) {
				if (b == b2) {
					return 1;
				}
			}
		}
		return 0;
	}
	int ret两点颜色是否一样(Mat& 图, int r, int g, int b, int r2, int g2, int b2, int 差的最小值) {
		if (ret两数是否相同(r, r2, 差的最小值) == 1) {
			if (ret两数是否相同(g, g2, 差的最小值) == 1) {
				if (ret两数是否相同(b, b2, 差的最小值) == 1) {
					return 1;
				}
			}
		}
		return 0;
	}
	int ret两点颜色是否一样_256色(Mat& 图, int r, int g, int b, int r2, int g2, int b2, int 差的最小值) {
		if (ret两数是否相同(r, r2, 差的最小值) == 1) {
			if (ret两数是否相同(g, g2, 差的最小值) == 1) {
				if (ret两数是否相同(b, b2, 差的最小值) == 1) {
					return 1;
				}
			}
		}
		return 0;
	}
	int 两点颜色的2个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2) { //不能用&
		//>颜色共 两个比值 种, rgb比例一样 就是一种颜色. 
		///int r值 = r;
		///int g值 = g;
		///int b值 = b;
		///int r2值 = r2;
		///int g2值 = g2;
		///int b2值 = b2;
		//!0不能/!!!!
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2);
		if (r比g == r2比g2) {
			if (g比b == g2比b2) {
				return 1; //相同
			}
		}
		return 0; //不相同
	}
	int 两点颜色的2个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例) { //不能用&
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2);
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) {
				return 1; //相同
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2) { //不能用&
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		if (r比g == r2比g2) {
			if (g比b == g2比b2) {
				if (r比b == r2比b2) {
					return 1; //相同
				}
			}
			return 0; //不相同
		}
	}
	int 两点颜色的3个比值是否一样_不考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例) { //不能用&
		//>rgb比例一样 就是一种颜色. 
		//!0不能/!!!!
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		//有两个比例一样就行
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				return 1; //相同
			} else {
				if (abs(r比b - r2比b2) < 差的最小值比例) { //1=,3=
					return 1; //相同
				}
			}
		} else { //1!=,2=,3=
			if (abs(g比b - g2比b2) < 差的最小值比例) {
				if (abs(r比b - r2比b2) < 差的最小值比例) {
					return 1; //相同
				}
			}
		}
		return 0; //不相同
	}
	void coutrgb比例(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例) { //不能用&
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		cout << std::format("r比g,g比b,r比b; 点1:{},{},{}; 点2:{},{},{};\n", r比g, g比b, r比b, r2比g2, g2比b2, r2比b2);
	}
	int 两点颜色的3个比值是否一样_考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		//> r:g有几种: 255+254+...+1= 255*128=32640
		//>共有2652,97920种颜色; 0.2亿
		//> rgb比例一样 就是一种颜色. 
		//!0不能/!!!!
		///auto 计算比值 = [&]() -> int {return 行序号;}
		float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		int 点1的亮度 = 计算亮度(r, g, b);
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		//有两个比例一样就行
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
					return 1; //相同
				}
			} else {
				if (abs(r比b - r2比b2) < 差的最小值比例) { //1=,3=
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //相同
					}
				}
			}
		} else { //1!=,2=,3=
			if (abs(g比b - g2比b2) < 差的最小值比例) {
				if (abs(r比b - r2比b2) < 差的最小值比例) {
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //相同
					}
				}
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_大除以小_考虑亮度(Mat& 图, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		//>大/小
		float r比g = r > g ? ret计算比值(r, g) : ret计算比值(g, r), g比b = g > b ? ret计算比值(g, b) : ret计算比值(b, g), r比b = r > b ? ret计算比值(r, b) : ret计算比值(b, r)
			, r2比g2 = r2 > g2 ? ret计算比值(r2, g2) : ret计算比值(g2, r2), g2比b2 = g2 > b2 ? ret计算比值(g2, b2) : ret计算比值(b2, g2), r2比b2 = r2 > b2 ? ret计算比值(r2, b2) : ret计算比值(b2, r2);
		int 点1的亮度 = 计算亮度(r, g, b);
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		//>两个点的比例相减
		//>除法的左右顺序不同,大/小-->3个比例一样就ret1
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				if (abs(r比b - r2比b2) < 差的最小值比例) {//3=
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //3个比例一样
					}
				}
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_大除以小_考虑亮度(Mat& 图, int& ret色1, int& 色2, int& 点1的亮度, int& 点2的亮度, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		//点2不用算
		点1的亮度 = 计算亮度(r, g, b);
		//>区分亮度
		if (点1的亮度 < 71) {
			ret色1 = 0/*黑色*/;
			//>对比 "颜色区分"颜色
			if (ret色1 = 色2) {
				return 1; //都是黑色
			}
		}
		//>大/小
		float r比g = r > g ? ret计算比值(r, g) : ret计算比值(g, r), g比b = g > b ? ret计算比值(g, b) : ret计算比值(b, g), r比b = r > b ? ret计算比值(r, b) : ret计算比值(b, r)
			, r2比g2 = r2 > g2 ? ret计算比值(r2, g2) : ret计算比值(g2, r2), g2比b2 = g2 > b2 ? ret计算比值(g2, b2) : ret计算比值(b2, g2), r2比b2 = r2 > b2 ? ret计算比值(r2, b2) : ret计算比值(b2, r2);
		int 点1的亮度 = 计算亮度(r, g, b);
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		//>两个点的比例相减
		//>除法的左右顺序不同,大/小-->3个比例一样就ret1
		if (abs(r比g - r2比g2) < 差的最小值比例) {
			if (abs(g比b - g2比b2) < 差的最小值比例) { //1=,2=
				if (abs(r比b - r2比b2) < 差的最小值比例) {//3=
					if (abs(点1的亮度 - 点2的亮度) < 亮度的最小差) {
						return 1; //3个比例一样
					}
				}
			}
		}
		return 0; //不相同
	}
	int 两点颜色的3个比值是否一样_考虑亮度(Mat& 图, int& ret色1, int& 色2, int& 点1的亮度, int& 点2的亮度, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) { //不能用&
		点1的亮度 = 计算亮度(r, g, b);
		//>点2也要算
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		///>"颜色区分"{
		//>区分亮度
		if (点1的亮度 < 71) {
			ret色1 = 0;
			//>对比 "颜色区分"颜色
			if (ret色1 = 色2) {
				return 1; //都是黑色
			}
		}
		//比值*100
		///int r比g = ret计算比值(r, g, 100), g比b = ret计算比值(g, b, 100), r比b = ret计算比值(r, b, 100), r2比g2 = ret计算比值(r2, g2, 100), g2比b2 = ret计算比值(g2, b2, 100), r2比b2 = ret计算比值(r2, b2, 100);
		//不能switch
		///float r比g = ret计算比值(r, g), g比b = ret计算比值(g, b), r比b = ret计算比值(r, b), r2比g2 = ret计算比值(r2, g2), g2比b2 = ret计算比值(g2, b2), r2比b2 = ret计算比值(r2, b2);
		///float r比g乘亮度 = r比g * 点1的亮度, g比b乘亮度 = g比b * 点1的亮度, r比b乘亮度 = r比b * 点1的亮度
		///	, r2比g2乘亮度 = r2比g2 * 点2的亮度, g2比b2乘亮度 = g2比b2 * 点2的亮度, r2比b2乘亮度 = r2比b2 * 点2的亮度;
		int r比gi = ret计算比值i(r, g), g比bi = ret计算比值i(g, b), r比bi = ret计算比值i(r, b), r2比g2i = ret计算比值i(r2, g2), g2比b2i = ret计算比值i(g2, b2), r2比b2i = ret计算比值i(r2, b2);
		int r比g乘亮度i = r比gi * 点1的亮度, g比b乘亮度i = g比bi * 点1的亮度, r比b乘亮度i = r比bi * 点1的亮度
			, r2比g2乘亮度i = r2比g2i * 点2的亮度, g2比b2乘亮度i = g2比b2i * 点2的亮度, r2比b2乘亮度i = r2比b2i * 点2的亮度;
		//>区分比值
		//switch,case不能比较大小
		if (ret数是否在两者间_大于(r比g乘亮度i, 65025, 900)) { //越大越红
			//>亮度低时
			if (ret数是否在两者间_大于(g比b乘亮度i, 1.5, 0)) {
			}
			//>亮度高时
		}
		//>对比 "颜色区分"
		if (ret色1 = 色2) {
			return 1; //一样的
		}
		//>除法的左右顺序固定-->3个比例一样就ret1
		return 0; //不相同
	}
	int 两点颜色是否一样_颜色分类(Mat& 图, int& ret色1, int& 色2, int& 点1的亮度, int& 点2的亮度, int r, int g, int b, int r2, int g2, int b2, float 差的最小值比例, int 亮度的最小差) {
		//>会不会:颜色不用分类
		///>大/小
		点1的亮度 = 计算亮度(r, g, b);
		int 点2的亮度 = 计算亮度(r2, g2, b2);
		if (点1的亮度 < 71) {
			ret色1 = 0/*黑色*/;
			if (ret色1 = 色2) {
				return 1; //一样的
			}
		}
		//>枚举rgb的值
		if (ret数是否在两者间_大于(r, 255, 150)) { //越大越红
			if (ret数是否在两者间_大于(g, 50, 0)) {
			}
		}
		//>对比 "颜色区分"
		if (ret色1 = 色2) {
			return 1; //都是黑色
		}
		return 0; //不相同
	}
	/*输入坐标*/
	//int 两点颜色是否一样(Mat& 图, int y,int x, int x2, int y2, int 间隔, float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样) {
	int ret两点颜色是否一样(Mat& 图, int y,int x, int x2, int y2, int 差的最小值 /*float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样*/) {
		if (ret两数是否相同(图片属性::retR值(图, x, y), 图片属性::retR值(图, x2, y2), 差的最小值) == 1) {
			if (ret两数是否相同(retG值(图, x, y), retG值(图, x2, y2), 差的最小值) == 1) {
				if (ret两数是否相同(retB值(图, x, y), retB值(图, x2, y2), 差的最小值) == 1) {
					return 1;
				}
			}
		}
		return 0;
	}
	int 两点颜色是否一样(Mat& 图, 一点颜色 点1, 一点颜色 点2, int 差的最小值) {
		//>只要两个一样-->1
		int n个通道一样 = 0;
		if (ret两数是否相同(图片属性::retR值(图, 点1.x, 点1.y), 图片属性::retR值(图, 点2.x, 点2.y), 差的最小值) == 1) {
			n个通道一样 += 1;
		}
		if (ret两数是否相同(retG值(图, 点1.x, 点1.y), retG值(图, 点2.x, 点2.y), 差的最小值) == 1) {
			n个通道一样 += 1;
		}
		if (ret两数是否相同(retB值(图, 点1.x, 点1.y), retB值(图, 点2.x, 点2.y), 差的最小值) == 1) {
			n个通道一样 += 1;
		}
		if (n个通道一样 >= 2) {
			return 1;
		}
		return 0;
	}
	void get两点颜色差(Mat& 图, int y,int x, int 间隔, float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样) {

	}

	void 检测是否变化(Mat& 图, int y,int x, int 间隔, float 全局图像差别小于此比例就是一样, float 像素色差小于此比例就是一样)
	{
		//比较 间隔 的像素



	}
	void 检测是否变化(Mat& 图, int y,int x, int 间隔, float 全局图像差别小于此比例就是一样)
	{


	}
	void 指定的像素()
	{

	}
	//----------------------------------------------------
	//---------------------------------------------------//---------------------------------------------------

	//2024年2月24日

	//!太阴间了吧
	/*记录`图片结构*/





















#endif
