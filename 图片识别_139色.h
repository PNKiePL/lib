#pragma once
#ifndef _139色图片_H
#define _139色图片_H

#include  <E:\lib\前置变量.h>
#include  <E:\lib\图片属性.h>
#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\头文件 opcv.h>

////#include  <E:\lib\图片识别`函数.h>

////using namespace wode;
class 图片识别_139色 /*识别函数*/ {
public:
	cmd cmd1;
public:
	/**///定量
	COORD 图片尺寸; COORD 检测的范围 = { 0,0 }; COORD v的尺寸;
	/**///输出
	COORD 输出图片的坐标;
		/*记录*/
	int r, g, b;
public:
	/**///▬输入图片▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*rgb-->i*/
	int retRgbTO256色(int r, int g, int b) { //rgb-->i,颜色转换
		int 颜色 = -1;
		if (r <= 0) {
			if (g <= 0) {
				if (b <= 0) { retu Black; }
				if (b <= 95) { retu NavyBlue; }
				if (b <= 128) { retu Navy; }
				if (b <= 135) { retu DarkBlue; }
				if (b <= 175) { retu Blue3; }
				if (b <= 215) { retu 20; }
				if (b <= 255) { retu Blue; }
			}
			if (g <= 95) {
				if (b <= 0) { retu DarkGreen; }
				if (b <= 95) { retu DeepSkyBlue4; }
				if (b <= 135) { retu 24; }
				if (b <= 175) { retu 25; }
				if (b <= 215) { retu DodgerBlue3; }
				if (b <= 255) { retu DodgerBlue2; }
			}
			if (g <= 128) {
				if (b <= 0) { retu Green; }
				if (b <= 128) { retu Teal; }
			}
			if (g <= 135) {
				if (b <= 0) { retu Green4; }
				if (b <= 95) { retu SpringGreen4; }
				if (b <= 135) { retu Turquoise4; }
				if (b <= 175) { retu DeepSkyBlue3; }
				if (b <= 215) { retu 32; }
				if (b <= 255) { retu DodgerBlue1; }
			}
			if (g <= 175) {
				if (b <= 0) { retu Green3; }
				if (b <= 95) { retu SpringGreen3; }
				if (b <= 135) { retu DarkCyan; }
				if (b <= 175) { retu LightSeaGreen; }
				if (b <= 215) { retu DeepSkyBlue2; }
				if (b <= 255) { retu DeepSkyBlue1; }
			}
			if (g <= 215) {
				if (b <= 0) { retu 40; }
				if (b <= 95) { retu 41; }
				if (b <= 135) { retu SpringGreen2; }
				if (b <= 175) { retu Cyan3; }
				if (b <= 215) { retu DarkTurquoise; }
				if (b <= 255) { retu Turquoise2; }
			}
			if (g <= 255) {
				if (b <= 0) { retu Lime; }
				if (b <= 255) { retu Aqua; }
				if (b <= 0) { retu Green1; }
				if (b <= 95) { retu 47; }
				if (b <= 135) { retu SpringGreen1; }
				if (b <= 175) { retu MediumSpringGreen; }
				if (b <= 215) { retu Cyan2; }
				if (b <= 255) { retu Cyan1; }
			}
		}/*if`r*/
		if (r <= 8) {
			if (g <= 8) {
				if (b <= 8) { retu Grey3; }
			}
		}
		if (r <= 18) {
			if (g <= 18) {
				if (b <= 18) { retu Grey7; }
			}
		}
		if (r <= 28) {
			if (g <= 28) {
				if (b <= 28) { retu Grey11; }
			}
		}
		if (r <= 38) {
			if (g <= 38) {
				if (b <= 38) { retu Grey15; }
			}
		}
		if (r <= 48) {
			if (g <= 48) {
				if (b <= 48) { retu Grey19; }
			}
		}
		if (r <= 58) {
			if (g <= 58) {
				if (b <= 58) { retu Grey23; }
			}
		}
		if (r <= 68) {
			if (g <= 68) {
				if (b <= 68) { retu Grey27; }
			}
		}
		if (r <= 78) {
			if (g <= 78) {
				if (b <= 78) { retu Grey30; }
			}
		}
		if (r <= 88) {
			if (g <= 88) {
				if (b <= 88) { retu Grey35; }
			}
		}
		if (r <= 95) {
			if (g <= 0) {
				if (b <= 0) { retu DarkRed; }
				if (b <= 95) { retu DeepPink4; }
				if (b <= 135) { retu Purple4; }
				if (b <= 175) { retu 55; }/*紫色*/
				if (b <= 215) { retu Purple3; }
				if (b <= 255) { retu BlueViolet; }
			}
			if (g <= 95) {
				if (b <= 0) { retu Orange4; }
				if (b <= 95) { retu Grey37; }
				if (b <= 135) { retu MediumPurple4; }
				if (b <= 175) { retu SlateBlue3; }
				if (b <= 215) { retu 62; }/*蓝色*/
				if (b <= 255) { retu RoyalBlue1; }
			}
			if (g <= 135) {
				if (b <= 0) { retu Chartreuse4; }
				if (b <= 95) { retu DarkSeaGreen4; }
				if (b <= 135) { retu PaleTurquoise4; }
				if (b <= 175) { retu SteelBlue; }
				if (b <= 215) { retu SteelBlue3; }
				if (b <= 255) { retu CornflowerBlue; }
			}
			if (g <= 175) {
				if (b <= 0) { retu Chartreuse3; }
				if (b <= 95) { retu 71; }
				if (b <= 135) { retu CadetBlue; }
				if (b <= 175) { retu 73; }
				if (b <= 215) { retu SkyBlue3; }
				if (b <= 255) { retu SteelBlue1; }
			}
			if (g <= 215) {
				if (b <= 0) { retu 76; }
				if (b <= 95) { retu PaleGreen3; }
				if (b <= 135) { retu SeaGreen3; }
				if (b <= 175) { retu Aquamarine3; }
				if (b <= 215) { retu MediumTurquoise; }
				if (b <= 255) { retu 81; }
			}
			if (g <= 255) {
				if (b <= 0) { retu Chartreuse2; }
				if (b <= 95) { retu SeaGreen2; }
				if (b <= 135) { retu SeaGreen1; }
				if (b <= 175) { retu 85; }
				if (b <= 215) { retu Aquamarine1; }
				if (b <= 255) { retu DarkSlateGray2; }
			}
		}/*if`r*/
		if (r <= 98) {
			if (g <= 98) {
				if (b <= 98) { retu Grey39; }
			}
		}/*if`r*/
		if (r <= 108) {
			if (g <= 108) {
				if (b <= 108) { retu Grey42; }
			}
		}
		if (r <= 118) {
			if (g <= 118) {
				if (b <= 118) { retu Grey46; }
			}
		}
		if (r <= 128) {
			if (g <= 0) {
				if (b <= 0) { retu Maroon; }
				if (b <= 128) { retu Purple; }
			}
			if (g <= 128) {
				if (b <= 0) { retu Olive; }
				if (b <= 128) { retu Grey; }
			}
		}/*if`r*/

		if (r <= 135) {
			if (g <= 0) {
				if (b <= 0) { retu 88; }
				if (b <= 95) { retu 89; }
				if (b <= 135) { retu DarkMagenta; }
				if (b <= 175) { retu 91; }
				if (b <= 215) { retu DarkViolet; }
				if (b <= 255) { retu 93; }
			}
			if (g <= 95) {
				if (b <= 0) { retu 94; }
				if (b <= 95) { retu LightPink4; }
				if (b <= 135) { retu Plum4; }
				if (b <= 175) { retu MediumPurple3; }
				if (b <= 215) { retu 98; }
				if (b <= 255) { retu SlateBlue1; }
			}
			if (g <= 135) {
				if (b <= 0) { retu Yellow4; }
				if (b <= 95) { retu Wheat4; }
				if (b <= 135) { retu Grey53; }
				if (b <= 175) { retu LightSlateGrey; }
				if (b <= 215) { retu MediumPurple; }
				if (b <= 255) { retu LightSlateBlue; }
			}
			if (g <= 175) {
				if (b <= 0) { retu 106; }
				if (b <= 95) { retu DarkOliveGreen3; }
				if (b <= 135) { retu DarkSeaGreen; }
				if (b <= 175) { retu LightSkyBlue3; }
				if (b <= 215) { retu 110; }
				if (b <= 255) { retu SkyBlue2; }
			}
			if (g <= 215) {
				if (b <= 0) { retu 112; }
				if (b <= 95) { retu 113; }
				if (b <= 135) { retu 114; }
				if (b <= 175) { retu DarkSeaGreen3; }
				if (b <= 215) { retu DarkSlateGray3; }
				if (b <= 255) { retu SkyBlue1; }
			}
			if (g <= 255) {
				if (b <= 0) { retu Chartreuse1; }
				if (b <= 95) { retu LightGreen; }
				if (b <= 135) { retu 120; }
				if (b <= 175) { retu PaleGreen1; }
				if (b <= 215) { retu 122; }
				if (b <= 255) { retu DarkSlateGray1; }
			}
		}
		if (r <= 138) {
			if (g <= 138) {
				if (b <= 138) { retu Grey54; }
			}
		}
		if (r <= 148) {
			if (g <= 148) {
				if (b <= 148) { retu Grey58; }
			}
		}
		if (r <= 158) {
			if (g <= 158) {
				if (b <= 158) { retu Grey62; }
			}
		}
		if (r <= 168) {
			if (g <= 168) {
				if (b <= 168) { retu Grey66; }
			}
		}
		if (r <= 175) {
			if (g <= 0) {
				if (b <= 0) { retu Red3; }
				if (b <= 95) { retu 125; }
				if (b <= 135) { retu MediumVioletRed; }
				if (b <= 175) { retu Magenta3; }
				if (b <= 215) { retu 128; }
				if (b <= 255) { retu 129; }
			}
			if (g <= 95) {
				if (b <= 0) { retu DarkOrange3; }
				if (b <= 95) { retu IndianRed; }
				if (b <= 135) { retu HotPink3; }
				if (b <= 175) { retu MediumOrchid3; }
				if (b <= 215) { retu MediumOrchid; }
				if (b <= 255) { retu MediumPurple2; }
			}
			if (g <= 135) {
				if (b <= 0) { retu DarkGoldenrod; }
				if (b <= 95) { retu LightSalmon3; }
				if (b <= 135) { retu RosyBrown; }
				if (b <= 175) { retu Grey63; }
				if (b <= 215) { retu 140; }
				if (b <= 255) { retu MediumPurple1; }
			}
			if (g <= 175) {
				if (b <= 0) { retu Gold3; }
				if (b <= 95) { retu DarkKhaki; }
				if (b <= 135) { retu NavajoWhite3; }
				if (b <= 175) { retu Grey69; }
				if (b <= 215) { retu LightSteelBlue3; }
				if (b <= 255) { retu LightSteelBlue; }
			}
			if (g <= 215) {
				if (b <= 0) { retu Yellow3; }
				if (b <= 95) { retu 149; }
				if (b <= 135) { retu 150; }
				if (b <= 175) { retu DarkSeaGreen2; }
				if (b <= 215) { retu LightCyan3; }
				if (b <= 255) { retu LightSkyBlue1; }
			}
			if (g <= 255) {
				if (b <= 0) { retu GreenYellow; }
				if (b <= 95) { retu DarkOliveGreen2; }
				if (b <= 135) { retu 156; }
				if (b <= 175) { retu 157; }
				if (b <= 215) { retu DarkSeaGreen1; }
				if (b <= 255) { retu PaleTurquoise1; }
			}
		}
		if (r <= 178) {
			if (g <= 178) {
				if (b <= 178) { retu Grey70; }
			}
		}
		if (r <= 188) {
			if (g <= 188) {
				if (b <= 188) { retu Grey74; }
			}
		}
		if (r <= 192) {
			if (g <= 192) {
				if (b <= 192) { retu Silver; }
			}
		}/*if`r*/
		if (r <= 198) {
			if (g <= 198) {
				if (b <= 198) { retu Grey78; }
			}
		}
		if (r <= 208) {
			if (g <= 208) {
				if (b <= 208) { retu Grey82; }
			}
		}
		if (r <= 215) {
			if (g <= 0) {
				if (b <= 0) { retu 160; }
				if (b <= 95) { retu DeepPink3; }
				if (b <= 135) { retu 162; }
				if (b <= 175) { retu 163; }
				if (b <= 215) { retu 164; }
				if (b <= 255) { retu Magenta2; }
			}
			if (g <= 95) {
				if (b <= 0) { retu 166; }
				if (b <= 95) { retu 167; }
				if (b <= 135) { retu 168; }
				if (b <= 175) { retu HotPink2; }
				if (b <= 215) { retu Orchid; }
				if (b <= 255) { retu MediumOrchid1; }
			}
			if (g <= 135) {
				if (b <= 0) { retu Orange3; }
				if (b <= 95) { retu 173; }
				if (b <= 135) { retu LightPink3; }
				if (b <= 175) { retu Pink3; }
				if (b <= 215) { retu Plum3; }
				if (b <= 255) { retu Violet; }
			}
			if (g <= 175) {
				if (b <= 0) { retu 178; }
				if (b <= 95) { retu LightGoldenrod3; }
				if (b <= 135) { retu Tan; }
				if (b <= 175) { retu MistyRose3; }
				if (b <= 215) { retu Thistle3; }
				if (b <= 255) { retu Plum2; }
			}
			if (g <= 215) {
				if (b <= 0) { retu 184; }
				if (b <= 95) { retu Khaki3; }
				if (b <= 135) { retu LightGoldenrod2; }
				if (b <= 175) { retu LightYellow3; }
				if (b <= 215) { retu Grey84; }
				if (b <= 255) { retu LightSteelBlue1; }
			}
			if (g <= 255) {
				if (b <= 0) { retu Yellow2; }
				if (b <= 95) { retu DarkOliveGreen1; }
				if (b <= 135) { retu 192; }
				if (b <= 175) { retu 193; }
				if (b <= 215) { retu Honeydew2; }
				if (b <= 255) { retu LightCyan1; }
			}
		}/*if`r*/
		if (r <= 218) {
			if (g <= 218) {
				if (b <= 218) { retu Grey85; }
			}
		}
		if (r <= 228) {
			if (g <= 228) {
				if (b <= 228) { retu Grey89; }
			}
		}
		if (r <= 238) {
			if (g <= 238) {
				if (b <= 238) { retu Grey93; }
			}
		}
		if (r <= 255) {
			if (g <= 0) {
				if (b <= 0) { retu Red; }
				if (b <= 255) { retu Fuchsia; }
				if (b <= 0) { retu Red1; }
				if (b <= 95) { retu DeepPink2; }
				if (b <= 135) { retu DeepPink1; }
				if (b <= 175) { retu 199; }
				if (b <= 215) { retu 200; }
				if (b <= 255) { retu Magenta1; }
			}
			if (g <= 95) {
				if (b <= 0) { retu OrangeRed1; }
				if (b <= 95) { retu IndianRed1; }
				if (b <= 135) { retu 204; }
				if (b <= 175) { retu HotPink; }
				if (b <= 215) { retu 206; }
				if (b <= 255) { retu 207; }
			}
			if (g <= 135) {
				if (b <= 0) { retu DarkOrange; }
				if (b <= 95) { retu Salmon1; }
				if (b <= 135) { retu LightCoral; }
				if (b <= 175) { retu PaleVioletRed1; }
				if (b <= 215) { retu Orchid2; }
				if (b <= 255) { retu Orchid1; }
			}
			if (g <= 175) {
				if (b <= 0) { retu Orange1; }
				if (b <= 95) { retu SandyBrown; }
				if (b <= 135) { retu LightSalmon1; }
				if (b <= 175) { retu LightPink1; }
				if (b <= 215) { retu Pink1; }
				if (b <= 255) { retu Plum1; }
			}
			if (g <= 215) {
				if (b <= 0) { retu Gold1; }
				if (b <= 95) { retu 粉红; }
				if (b <= 135) { retu 222; }
				if (b <= 175) { retu NavajoWhite1; }
				if (b <= 215) { retu MistyRose1; }
				if (b <= 255) { retu Thistle1; }
			}
			if (g <= 255) {
				if (b <= 0) { retu Yellow; }
				if (b <= 255) { retu White; }
				if (b <= 0) { retu Yellow1; }
				if (b <= 95) { retu LightGoldenrod1; }
				if (b <= 135) { retu Khaki1; }
				if (b <= 175) { retu Wheat1; }
				if (b <= 215) { retu Cornsilk1; }
				if (b <= 255) { retu Grey100; }
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
	int 两个颜色是否一样_256色(/*输入*/新v2i v2i所有r, 新v2i v2i所有g, 新v2i v2i所有b, int Y, int X, int Y2, int X2) {
		if (v2i所有r[Y][X] == v2i所有r[Y2][X2]) {
			return 1;
		}/*if*/
		return 0;
	}
	/**///!Mat图片-->256色
	void get图片TO256色的assign(/*输入*/Mat& 图, /*输出*/新v2i& v2i256色) {
		图片尺寸.Y = 图.rows; 图片尺寸.X = 图.cols;
		v2i256色.assign(图片尺寸.Y, 新vi(图片尺寸.X, 0));
	}
	void get图片TO256色的assign(/*输入*/Mat& 图, int  y下个点是加几个像素, int x下个点是加几个像素,/*输出*/新v2i& v2i256色) {
		/*输入图片的*/
		图片尺寸.Y = 图.rows; 图片尺寸.X = 图.cols;
		//图片尺寸.Y = 图.cols; 图片尺寸.X = 图.rows; //直接异常
		/*输出图片的*/输出图片的坐标.Y = 0; 输出图片的坐标.X = 0;
		/*像素数量`向大取整*/
		v2i256色.assign((图片尺寸.Y % y下个点是加几个像素 > 0) ? (图片尺寸.Y / y下个点是加几个像素 + 1) : (图片尺寸.Y / y下个点是加几个像素), 新vi((图片尺寸.X % x下个点是加几个像素 > 0) ? (图片尺寸.X / x下个点是加几个像素) + 1 : (图片尺寸.X / x下个点是加几个像素), 0));
	}
	/*复制数据,Mat-->v2i*/
	template<typename at类型>
	void get图片TO256色(/*输入*/Mat& 图,/*输出*/新v2i& v2i256色) {
		get图片TO256色的assign(图, v2i256色);
		for (size_t y序号 = 0; y序号 < 图片尺寸.Y; y序号++) {/*行*/
			for (size_t x序号 = 0; x序号 < 图片尺寸.X; x序号++) {
				v2i256色[y序号][x序号] = retRgbTO256色(图.at<at类型>(Point(x序号, y序号))[2], 图.at<at类型>(Point(x序号, y序号))[1], 图.at<at类型>(Point(x序号, y序号))[0]);
			}/*for*/
		}/*for*/
	}
	/*从左上角,隔几个像素,复制数据,Mat-->v2i*/
	template<typename at类型>
	void get图片TO256色(/*输入*/Mat& 图, int y下个点是加几个像素, int x下个点是加几个像素,/*输出*/新v2i& v2i256色) {
		get图片TO256色的assign(图, y下个点是加几个像素, x下个点是加几个像素, v2i256色);
		int c了几行 = 0;
		for (size_t y序号 = 0; y序号 < 图片尺寸.Y; y序号 += y下个点是加几个像素) {/*行*/
			for (size_t x序号 = 0; x序号 < 图片尺寸.X; x序号 += x下个点是加几个像素) {
				/*c*/
				//couta5("v第", 输出图片的坐标.Y ,"行第",输出图片的坐标.X,"列= ");
				//couta5("Mat第", y序号 ,"行第",x序号,"列\n");
				//c了几行++;
				//if (c了几行>=70)				{
				//	cmd1.清屏(); c了几行 = 0;
				//}
				v2i256色[输出图片的坐标.Y][输出图片的坐标.X] = retRgbTO256色(图.at<at类型>(Point(x序号, y序号))[2], 图.at<at类型>(Point(x序号, y序号))[1], 图.at<at类型>(Point(x序号, y序号))[0]);
				输出图片的坐标.X++;
			}/*for*/
			输出图片的坐标.X = 0;
			输出图片的坐标.Y++;
		}/*for*/
		v的尺寸.Y = v2i256色.size(); v的尺寸.X = v2i256色[0].size();
	}
	template<typename at类型>
	void get图片TO256色atyx(/*输入*/Mat& 图, int y下个点是加几个像素, int x下个点是加几个像素,/*输出*/新v2i& v2i256色) {
		get图片TO256色的assign(图, y下个点是加几个像素, x下个点是加几个像素, v2i256色);
		v2i256色.assign((图片尺寸.Y % y下个点是加几个像素 > 0) ? (图片尺寸.Y / y下个点是加几个像素 + 1) : (图片尺寸.Y / y下个点是加几个像素), 新vi((图片尺寸.X % x下个点是加几个像素 > 0) ? (图片尺寸.X / x下个点是加几个像素) + 1 : (图片尺寸.X / x下个点是加几个像素), 0));
		for (size_t y序号 = 0; y序号 < 图片尺寸.Y; y序号 += y下个点是加几个像素) {/*行*/
			for (size_t x序号 = 0; x序号 < 图片尺寸.X; x序号 += x下个点是加几个像素) {
				v2i256色[输出图片的坐标.Y][输出图片的坐标.X] = retRgbTO256色(图.at<at类型>(Point(y序号, x序号))[2], 图.at<at类型>(Point(y序号, x序号))[1], 图.at<at类型>(Point(y序号, x序号))[0]);
				输出图片的坐标.X++;
			}/*for*/
			输出图片的坐标.X = 0;
			输出图片的坐标.Y++;
		}/*for*/
		v的尺寸.Y = v2i256色.size(); v的尺寸.X = v2i256色[0].size();
	}
	void cV的信息(/*输ru*/新v2i& v2i) {
		v的尺寸.Y = v2i.size(); v的尺寸.X = v2i[0].size();
		couta3("v的元素数", v的尺寸.Y * v的尺寸.X, "\n");
		couta3("v的函数杭州函数版行数= ", v的尺寸.Y, "\n");
		couta3("v的猎数= ", v的尺寸.X, "\n");
	}
	/**///检测线条
	/*记录-->筛选*/
	void 检测线条_以像素为中心_测试2024年3月25日(/*输入*/新v2i& v2i256色的图片) {
		/*已经获得了{图片尺寸}*/
		COORD 点1 = { 0,0 }, 点2 = { 0,0 };
		/*!行数=坐标,只记录id*/
		新v2i v2i横线, v2i竖线, v2i连接的形状
			/*!每一行: 行数=坐标y*(x-1)+x,0=id,1=长度,2=*/
			, v2i横线的内容, v2i竖线的内容;
		/*!检测`所有横线*/
		/*临时记录*/
		int 线开始的坐标y = 0, 线开始的坐标x = 0, 横长度 = 1/*至少有一个点*/, 竖长度 = 0, 当前到哪个id = 0;
		/*记录进v*/
		int 代表坐标的行数;
		/*改变逻辑的标记*/
		int 之后的for要记录线开始的坐标 = 0;
		/*开始检测*/
		for (size_t y序号 = 0; y序号 < 图片尺寸.Y; y序号++) {/*行*/
			for (size_t x序号 = 0; x序号 < 图片尺寸.X; x序号++) {
				if (之后的for要记录线开始的坐标 == 1) {
					线开始的坐标y = y序号, 线开始的坐标x = x序号;
					之后的for要记录线开始的坐标 = 0;
				}
				///点2.X = 点1.X + 1;  点2.Y = 点1.Y + 1;
				/*和右边对比*/
				if (x序号 < (v的尺寸.X - 2)) {/*x在范围内*/
					if (v2i256色的图片[y序号][x序号] == v2i256色的图片[y序号][x序号 + 1]) {/*和右边颜色一样*/
						横长度++;/*线变长了*/
					} else {/*和右边颜色不一样*/
						if (横长度 > 1) {/*有记录*/
							/*!v2i横线=id, v2i横线的内容=id对应的内容*/
							/*计算`代表坐标的行数*/
							if (y序号 = 0) {
								代表坐标的行数 = 线开始的坐标x;
							} else {
								代表坐标的行数 = (线开始的坐标y * (线开始的坐标x - 1)) + 线开始的坐标x;
							}/*else*/
							v2i横线[y序号][x序号] =/*id*/当前到哪个id;
							v2i横线的内容[/*坐标*/代表坐标的行数][/*id*/0] = 当前到哪个id;
							v2i横线的内容[/*坐标*/代表坐标的行数][/*长度*/1] = 横长度;
							当前到哪个id++;/*1=已经记录了1个*/
							线开始的坐标y = 0, 线开始的坐标x = 0;
						} else {/*没有记录=不记录*/
						}/*else*/
						/*下一个线条的检测*/
						/*下一个点的坐标*/
						横长度 = 1;
						之后的for要记录线开始的坐标 = 1;/*1317*/
					}/*else*/
					v2i256色的图片[y序号][x序号];
				}/*if*/
			}/*for*/
		}/*for*/
		/*c横线*/
		for (size_t y = 0; y < 图片尺寸.Y; y++) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x++) {
				if (v2i横线[y][x] > 0) {
					//couta(第几行第几列有一个横线,"id为", v2i横线[y][x]);
					coutsf3("第{}行第{}列有一个横线,id={}", y, x, v2i横线[y][x]);
				}/*if*/
			}/*for*/
		}/*for*/
	}
	void 检测线条边界_以像素边界为中心(/*输入*/新v2i& v2i256色的图片) {



	}
	/**///▬输出图片▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//todo
	void get256色TORgb(/*输入*/int 一个点的256色,/*输出*/int& r, int& g, int& b) { //rgb-->i,颜色转换
		switch (一个点的256色) {
		default:
			break;
		case Black:
			r = 0; g = 0; b = 0;
			break;
		case NavyBlue:
			r = 0; g = 0; b = 95;
			break;
		case Navy:
			r = 0; g = 0; b = 128;
			break;
		case DarkBlue:
			r = 0; g = 0; b = 135;
			break;
		case Blue3:
			r = 0; g = 0; b = 175;
			break;
		case 20:
			r = 0; g = 0; b = 215;
			break;
		case Blue:
			r = 0; g = 0; b = 255;
			break;
		case DarkGreen:
			r = 0; g = 95; b = 0;
			break;
		case DeepSkyBlue4:
			r = 0; g = 95; b = 95;
			break;
		case 24:
			r = 0; g = 95; b = 135;
			break;
		case 25:
			r = 0; g = 95; b = 175;
			break;
		case DodgerBlue3:
			r = 0; g = 95; b = 215;
			break;
		case DodgerBlue2:
			r = 0; g = 95; b = 255;
			break;
		case Green:
			r = 0; g = 128; b = 0;
			break;
		case Teal:
			r = 0; g = 128; b = 128;
			break;
		case Green4:
			r = 0; g = 135; b = 0;
			break;
		case SpringGreen4:
			r = 0; g = 135; b = 95;
			break;
		case Turquoise4:
			r = 0; g = 135; b = 135;
			break;
		case DeepSkyBlue3:
			r = 0; g = 135; b = 175;
			break;
		case 32:
			r = 0; g = 135; b = 215;
			break;
		case DodgerBlue1:
			r = 0; g = 135; b = 255;
			break;
		case Green3:
			r = 0; g = 175; b = 0;
			break;
		case SpringGreen3:
			r = 0; g = 175; b = 95;
			break;
		case DarkCyan:
			r = 0; g = 175; b = 135;
			break;
		case LightSeaGreen:
			r = 0; g = 175; b = 175;
			break;
		case DeepSkyBlue2:
			r = 0; g = 175; b = 215;
			break;
		case DeepSkyBlue1:
			r = 0; g = 175; b = 255;
			break;
		case 40:
			r = 0; g = 215; b = 0;
			break;
		case 41:
			r = 0; g = 215; b = 95;
			break;
		case SpringGreen2:
			r = 0; g = 215; b = 135;
			break;
		case Cyan3:
			r = 0; g = 215; b = 175;
			break;
		case DarkTurquoise:
			r = 0; g = 215; b = 215;
			break;
		case Turquoise2:
			r = 0; g = 215; b = 255;
			break;
		case Lime:
			r = 0; g = 255; b = 0;
			break;
		case Aqua:
			r = 0; g = 255; b = 255;
			break;
		case Green1:
			r = 0; g = 255; b = 0;
			break;
		case 47:
			r = 0; g = 255; b = 95;
			break;
		case SpringGreen1:
			r = 0; g = 255; b = 135;
			break;
		case MediumSpringGreen:
			r = 0; g = 255; b = 175;
			break;
		case Cyan2:
			r = 0; g = 255; b = 215;
			break;
		case Cyan1:
			r = 0; g = 255; b = 255;
			break;
		case Grey3:
			r = 8; g = 8; b = 8;
			break;
		case Grey7:
			r = 18; g = 18; b = 18;
			break;
		case Grey11:
			r = 28; g = 28; b = 28;
			break;
		case Grey15:
			r = 38; g = 38; b = 38;
			break;
		case Grey19:
			r = 48; g = 48; b = 48;
			break;
		case Grey23:
			r = 58; g = 58; b = 58;
			break;
		case Grey27:
			r = 68; g = 68; b = 68;
			break;
		case Grey30:
			r = 78; g = 78; b = 78;
			break;
		case Grey35:
			r = 88; g = 88; b = 88;
			break;
		case Grey39:
			r = 98; g = 98; b = 98;
			break;
		case DarkRed:
			r = 95; g = 0; b = 0;
			break;
		case DeepPink4:
			r = 95; g = 0; b = 95;
			break;
		case Purple4:
			r = 95; g = 0; b = 135;
			break;
		case 55:
			r = 95; g = 0; b = 175;
			break;
		case Purple3:
			r = 95; g = 0; b = 215;
			break;
		case BlueViolet:
			r = 95; g = 0; b = 255;
			break;
		case Orange4:
			r = 95; g = 95; b = 0;
			break;
		case Grey37:
			r = 95; g = 95; b = 95;
			break;
		case MediumPurple4:
			r = 95; g = 95; b = 135;
			break;
		case SlateBlue3:
			r = 95; g = 95; b = 175;
			break;
		case 62:
			r = 95; g = 95; b = 215;
			break;
		case RoyalBlue1:
			r = 95; g = 95; b = 255;
			break;
		case Chartreuse4:
			r = 95; g = 135; b = 0;
			break;
		case DarkSeaGreen4:
			r = 95; g = 135; b = 95;
			break;
		case PaleTurquoise4:
			r = 95; g = 135; b = 135;
			break;
		case SteelBlue:
			r = 95; g = 135; b = 175;
			break;
		case SteelBlue3:
			r = 95; g = 135; b = 215;
			break;
		case CornflowerBlue:
			r = 95; g = 135; b = 255;
			break;
		case Chartreuse3:
			r = 95; g = 175; b = 0;
			break;
		case 71:
			r = 95; g = 175; b = 95;
			break;
		case CadetBlue:
			r = 95; g = 175; b = 135;
			break;
		case 73:
			r = 95; g = 175; b = 175;
			break;
		}
	}
	//todo 2024年3月28日04:26:49
	/*!int-->rgb*/
	template<typename at类型>
	vodi getV2i256色图TOMat图片(/*输入*/新v2i& v2i256色的图片,/*输出*/Mat& m) {
		int r, g, b;
		for (size_t y = 0; y < 图片尺寸.Y; y++) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x++) {
				get256色TORgb(v2i256色的图片[y][x], r, g, b);
				m.at<at类型>(Point(x, y))[0] = b;
				m.at<at类型>(Point(x, y))[1] = g;
				m.at<at类型>(Point(x, y))[2] = r;
			}/*for*/
		}/*for*/
	}
	/**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/*这几个是`一个功能,不知道怎么整理*/
	template<typename at类型>
	auto cRgb(Mat& m, int y, int x) {
		b = m.at<at类型>(Point(x, y))[0];
		g = m.at<at类型>(Point(x, y))[1];
		r = m.at<at类型>(Point(x, y))[2];
		/*rgb-->int-->s*/ //数字又转换为颜色,变成名称
		coutsf3("第{}行`第{}列={}",y,x,ret名称_256色iTOstr(retRgbTO256色(r,g,b)));
		couta1(" {");
		couta2("r=", r);
		couta2("g=", g);
		couta3("b=", b, "}\n");
	}
	template<typename at类型>
	auto cRgb(/*输入*/Mat& m, 新v2i &v2i256色图,int y, int x) {
		b = m.at<at类型>(Point(x, y))[0];
		g = m.at<at类型>(Point(x, y))[1];
		r = m.at<at类型>(Point(x, y))[2];
		/*int-->s*/
		coutsf3("第{}行`第{}列={}",y,x,ret名称_256色iTOstr(v2i256色图[y][x]));
		couta1(" {");
		couta2("r=", r);
		couta2("g=", g);
		couta3("b=", b, "}\n");
	}
	template<typename at类型>
	auto cBgr(Mat& m, int y, int x) {
		b = m.at<at类型>(Point(x, y))[0];
		g = m.at<at类型>(Point(x, y))[1];
		r = m.at<at类型>(Point(x, y))[2];
		coutsf3("第{}行`第{}列={}",y,x,ret名称_256色iTOstr(retRgbTO256色(r,g,b)));
		couta1(" {");
		couta2("b=", b);
		couta2("g=", g);
		couta3("r=", r, "}\n");
	}
	template<typename at类型>
	auto c对角线的rgb(Mat& m,int x下个点是加几个像素) {
		/*输入`记录图片信息*/
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		size_t y = 0;/*行*/
		for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
			y = x;
			if (y < 图片尺寸.Y) {
				cRgb<at类型>(m, y, x);
			}/*if*/
		}/*for*/
	}
	template<typename at类型>
	auto c对角线的rgb(Mat& m,新v2i &v2i256色图,int x下个点是加几个像素) {
		/*输入`记录图片信息*/
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		size_t y = 0;/*行*/
		for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
			y = x;
			if (y < 图片尺寸.Y) {
				cRgb<at类型>(m,v2i256色图, y, x);
			}/*if*/
		}/*for*/
	}
	template<typename at类型>
	auto c所有点的rgb(Mat& m, int y下个点是加几个像素, int x下个点是加几个像素) {
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		for (size_t y = 0; y < 图片尺寸.Y; y += y下个点是加几个像素) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
				cRgb<at类型>(m, y, x);
			}/*for*/
		}/*for*/
	}
	template<typename at类型>
	auto c所有点的rgb(Mat& m,新v2i &v2i256色图, int y下个点是加几个像素, int x下个点是加几个像素) {
		图片尺寸.Y = m.rows; 图片尺寸.X = m.cols;
		for (size_t y = 0; y < 图片尺寸.Y; y += y下个点是加几个像素) {/*行*/
			for (size_t x = 0; x < 图片尺寸.X; x += x下个点是加几个像素) {
				cRgb<at类型>(m,v2i256色图, y, x);
			}/*for*/
		}/*for*/
	}
	/*坐标边界检测 {x两种情况,y一种情况}*/
	int v2坐标边界检测(/*输入*/int& y, int& x) {
		if (x < (v的尺寸.X - 1)) {/*x在范围内*/
			retu 1;
		} else {/*x>=范围*/
			if (y < v的尺寸.Y - 1) {/*y没有到底*/
				retu 2;
			} else {
				/*坐标完了*/
				retu 0;/*没有改*/
			}
		}/*else*/
	}
	int get下一个点(/*输入*/int& y, int& x) {
		if (x < v的尺寸.X - 1) {/*x在范围内*/
		} else {/*x>=范围*/
			if (y < v的尺寸.Y - 1) {/*y没有到底*/
				y++; x = 0;
				retu 1;/*改了*/
			} else {
				/*坐标完了*/
				retu 0;/*没有改*/
			}
		}/*else*/
	}
};
#endif
