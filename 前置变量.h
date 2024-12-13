#pragma once
#ifndef 前置变量_H
#define 前置变量_H
#include  <E:\lib\头文件 c++.h>
#include<E:\lib\define.h>
#include<E:\lib\前置cout.h>
#include  <E:\lib\前置计算_不使用前置变量.h>
//using namespace wode;

//*前置cout 前置变量的qmviC;/*qmviC*/
/**///!▬记录{ 时间`窗口`音调`string`截图}▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
struct 下标info{
  int 一 = 0, 二 = 0, 三 = 0, 四 = 0, 五 = 0, 六 = 0, 七 = 0, 八 = 0, 九 = 0, 十 = 0, 十一 = 0, 十二 = 0, 十三 = 0, 十四 = 0, 十五 = 0, 十六 = 0, 十七 = 0, 十八 = 0, 十九 = 0, 二十 = 0, 二十一 = 0;
}v的行info/*下标info*/;
/**///▬时间▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
enum 时间单位{
  年 = 1, 月 = 2, 日 = 3
  , 时 = 4, 小时 = 4
  , 分 = 5, 分钟 = 5
  , 秒 = 6, 毫秒 = 7
  /*2023年8月2日*/
  , YMoDHMSMs = 1234567
  , Y = 1, Mo = 2, D = 3
  , MoDHMSMs = 234567
  , DHMSMs = 34567
  , H = 4, HM = 45, HMS = 456, HMSMs = 4567, HS = 46, HMs = 47
  , MS = 56, MSMs = 567, MMs = 57
};/*时间单位*/
struct 时间info{
  新vi vi值;
  int// Y,Mo,D,H,Mi, S, Ms
     /*?这是什么意思？*/
    数字有几位 = 0
    , 年 = 1, 月 = 2, 日 = 3
    , 时 = 4, 小时 = 4
    , 分 = 5 /*,分钟 = 5*/
    , 秒 = 6, 毫秒 = 7;
  时间info( ){
    vi值.assign( 7, 0 );
  }/*时间info()*/
};/*时间info*/
/**///▬记录`窗口▬▬▬▬▬▬▬▬▬▬
    /*不使用*/
struct 窗口info{/*窗口信息*/
  HWND hwnd;
  HDC hdc, create窗口hdc;
  HBITMAP create窗口map;
  BITMAPINFO bitmap信息;
  /*窗口尺寸. 左X上Y右X下Y;LONG left,top,right,bottom;*/
  tagRECT Rect{ /*用 *=& 引用 \ */0, 0, 0, 0 };
  LPRECT Rect_p = &Rect; //p https://stackoverflow.com/questions/10851278/i-cant-get-hold-of-lprect-structure-data-what-im-doing-wrong
  LONG* 左上角x = &Rect.left, * 左上角y = &Rect.top, * 右下角x = &Rect.right, * 右下角y = &Rect.bottom;
  LONG 窗口尺寸y, 窗口尺寸x;
  LPTSTR className, windowName;/*GetClassName(3个)*/
  int i是否聚焦 = 0;
};
/*不使用*/
struct 窗口可操作范围{
  /*单位是`百分号%*/
  int 左_百分比, 右_百分比, 上_百分比, 下_百分比
    , 左_像素, 右_像素, 上_像素, 下_像素
    , y, x;
  /*是小数*/
  float f左_百分比, f右_百分比, f上_百分比, f下_百分比;
};
/*用这种的*/
struct cmd窗口info{/*窗口尺寸info*/
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  int 窗口大小_字数y, 窗口大小_字数x, 窗口大小_像素y, 窗口大小_像素x/*像素=字的大小*字数*/, 字的大小y
    ;
  窗口可操作范围 可操作范围;
  窗口info idkbInfo;
  ////int 默认前景色=7, 默认背景色=0;
  /*一个数字代表`前景背景255种排列*/
  int 默认色 = 7, 默认触发色 = 176;
  新v2i v2iUi当前文字颜色;
  新v3i v3iUi文字颜色属性;
  新v2s v2sUi文字;
  /*输入{ 窗口hwnd,rect }*/
  void 可操作范围初始化( ){
    qmvi计算_不使用前置变量.get窗口Rect( qmvi计算_不使用前置变量.ret前台( ), idkbInfo.Rect );
    /*get( cmd窗口info.窗口大小_像素 )*/
    窗口大小_像素y = idkbInfo.Rect.bottom - idkbInfo.Rect.top;
    窗口大小_像素x = idkbInfo.Rect.right - idkbInfo.Rect.left;
    /*get( cmd窗口info.可操作范围.4点 )*/
    可操作范围.上_像素 = idkbInfo.Rect.top + 窗口大小_像素y * 可操作范围.f上_百分比;
    可操作范围.下_像素 = idkbInfo.Rect.top + 窗口大小_像素y * 可操作范围.f下_百分比;
    可操作范围.左_像素 = idkbInfo.Rect.left + 窗口大小_像素x * 可操作范围.f左_百分比;
    可操作范围.右_像素 = idkbInfo.Rect.left + 窗口大小_像素x * 可操作范围.f右_百分比;
    /*get( cmd窗口info.可操作范围 )*/
    可操作范围.y = 可操作范围.下_像素 - 可操作范围.上_像素;
    可操作范围.x = 可操作范围.右_像素 - 可操作范围.左_像素;
  }/*void*/

};
/*文件结构:
//>v2i线属性:
*               x0 x1 x2 x3  x4   x5               x6   x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0 线两端的坐标(y1 x1 y2 x2) 线长 方向(横0竖1斜\2/3) 颜色
* y1
* y2
//>v2i点对应线: //在坐标上填`线的属性的y序号
*    x0              x1 x2 x3 x4 x5 x6
* y0 v2i线属性[][]的y y  y  y
* y1 y				  y
* y2 y               y
v3i线属性:开销太大了`空的位置太多了
v2i图片的点是否已识别线:
//>v2i单通道图颜色属性:
//yx是第1第2个通道,y是颜色,x是成员;
*    x0  x1 x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0 数量
* y1 数量
* y2 数量
//>v5i4通道图颜色属性:
//v的4个通道,通道对应rgb透明度; yx是第四第5个通道,y是颜色,x是成员;
*    x0  x1 x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0
* y1
* y2
//>v2i每种颜色的像素数量:
//v的1个通道,通道对应灰度值; 第2个通道是`成员;
*    x0
* y0 像素数量
* y1 像素数量
//>v5i每种颜色的像素的数量:
//v的4个通道,通道对应rgb透明度; 第四第五个通道是`颜色and成员;
*     五0     五1 五2 五3 五4 五5 五6 五7 五8 五9 五0 五11 五12 五13
* 四0 像素数量 测试
* 四1 像素数量
* 四2 像素数量
//>v2i有信息的矩形属性:
*     二0  二1 二2 二3 二4 二5 二6 二7 二8 二9 二0 二11 二12 二13 二14 二15 二16 二17 二18
* 一0
* 一1
* 一2
//>v2i有信息的矩形索引:
//坐标=v的一`v2i有信息的矩形属性的一序
*    x0 x1 x2 x3 x4 x5 x6 x7 x8 x9 x0 x11 x12 x13 x14 x15 x16 x17 x18 x19 x20 x21 x22 x23 x24 x25 x26 x27 x28
* y0 一 一 一
* y1 一 一 一
* y2 一 一 一
*/
struct 图片info{
  /*LONG*/int 总像素数量;
  int 窗口大小_字数y, 窗口大小_字数x, 窗口大小_像素y, 窗口大小_像素x/*像素=字的大小*字数*/, 字的大小y
    ;
  /*MatTO:, 图片的属性`直接记录*/
  int 像素数y/*=&v2i灰度图片除50.size()*/, 像素数x;
  //int i线的数;
  新v2i /*Mat`图片*/v2i灰度图片, v2i灰度图片除5, v2i灰度图片除15, v2i灰度图片除50, v2i4通道图片, v2i4通道图片除5, v2i4通道图片除15, v2i4通道图片除50
    , /*颜色属性*/v2i灰度图颜色属性, v2i灰度图颜色属性除5, v2i灰度图颜色属性除15, v2i灰度图颜色属性除50
    , v2i每种颜色的像素数量;
  新vi vi每种颜色的像素数量;
  新vf vf每种颜色的像素数量除以总像素数量;
  新v5i v5i每种颜色的像素数量
    , v5i4通道图颜色属性;
  int /*如 0<1, 0是背景色, 1是前景色*/区分前景色背景色的下标的分界线 = 0, 小于分界线是背景色 = 0;
  /*todo 区分`单通道和`颜色总数*/
  新v3i v3i线属性;
  int i线的数;
  /*标记`步骤*/
  新v2i /*对于这个点, 是否已进行`识别线操作*/v2i该点是否已识别线
    ;
  ///auto v2i灰度图片assign(/*输入*/Mat& m,/*输出*/新v2i& v2i){}
};
/**///▬记录`记忆▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
    /*用不了COORD,累能用*/ ////COORD 坐标;
struct 电脑基本记忆info{/*应该存到文件里吧*/
  string 窗口名称 = "1";
  /*
  //>v3s窗口属性:
  //二=0:
  //一=窗口名称;
  一[0][0]=窗口名称1, 一[0][1]=窗口名称2;
  //二>1:
  //二=屏幕序号; 三0=上下左右,三1=宽度;
  一[1][0]=屏幕1, 一[2][0]=屏幕2,一[3][0]=屏幕3;
  */
  新v3s v3s窗口属性;
  新s 任务栏位置 = "z"/*上下左右=uxzy*/;
  新i 任务栏宽度 = 141, 任务栏长度 = 2160
    , 屏幕数量 = 3;
  电脑基本记忆info( ){
    /*todo assign*/
    /*屏幕尺寸`屏幕一=主屏幕*/
    v3s窗口属性[0][0][0] = "屏幕";/*窗口名*/
    v3s窗口属性[0][0][1] = "显示器";/*窗口名*/
    v3s窗口属性[1][1][0] = "2160";/*屏幕一的y*/
    v3s窗口属性[1][1][1] = "3840";/*屏幕一x*/
    v3s窗口属性[1][2][0] = "1280";/*屏幕2的y*/
    v3s窗口属性[1][2][1] = "810";/*屏幕2x*/
    v3s窗口属性[1][3][0] = "1024";/*屏幕3的y*/
    v3s窗口属性[1][3][1] = "769";/*屏幕3x*/
    /*任务栏*/
    v3s窗口属性[1][0][0] = "任务栏";/*窗口名*/
    v3s窗口属性[1][1][0] = "z";/*屏幕一的任务栏在左边*/
    v3s窗口属性[1][1][1] = "141";/*屏幕一的任务栏宽度*/
    v3s窗口属性[1][1][2] = v3s窗口属性[1][1][0];/*左:屏幕一的y*/
  }/*( )*/
};
/**///▬beep`音调▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
enum{/*q前缀为低音，1后缀为高音，s前缀为半音阶*/
  音调qdo = 262
  , 音调qre = 294
  , 音调qmi = 330
  , 音调qfa = 349
  , 音调qso = 392
  , 音调qla = 440
  , 音调qsi = 494
  , 音调do = 523
  , 音调re = 578
  , 音调mi = 659
  , 音调fa = 698
  , 音调so = 784
  , 音调la = 880
  , 音调si = 988
  , 音调do1 = 1046
  , 音调re1 = 1175
  , 音调mi1 = 1318
  , 音调fa1 = 1480
  , 音调so1 = 1568
  , 音调la1 = 1760
  , 音调si1 = 1976
  , 音调sqdo = 277
  , 音调sqre = 311
  , 音调sqfa = 370
  , 音调sqso = 415
  , 音调sqla = 466
  , 音调sdo = 554
  , 音调sre = 622
  , 音调sfa = 740
  , 音调sso = 831
  , 音调sla = 932
  , 音调sdo1 = 1046
  , 音调sre1 = 1245
  , 音调sfa1 = 1480
  , 音调sso1 = 1661
  , 音调sla1 = 1865
};
struct 声音信息{
  新veci vi音调, vi拍长;
  int 音符数量 = 14;
  声音信息( ){
    v的assign( );
  }/*()*/
  void v的assign( ){
    vi音调.assign( 音符数量, 0 );
    vi拍长.assign( 音符数量, 0 );
  }/*voidd*/
};
//string
/* vs中,每一个文件名是一行. 如{ s`(1:/1/1) 读取成 (1换行1换行1) }*/
struct pathInfo{
  前置cout qmviC;
  前置计算_不使用前置变量 qmvi计算_不使用前置变量;
  新s s输入的path;
  新vs /*/分割的*/vs每部分;
  新vi /*1=文件夹, 2=文件*/vi每部分的标记;
  /*设置*/下标info v的默认尺寸,/*记录*/ v的下标/*想用哪个,都行*/ /*按照顺序++*/, vi的下标, vs的下标;
  int s的下标 = 0;
  /*///>记录`字数, 在读取时得到, 应不会再修改.
  方法: vPushback,vSize.
  vi结构{
  *     列0 列1        列2       列3       列4 列5 列6 列7 列8 列9 列0 列11 列12 列13 列14 列15 列16 列17 列18 列19 列20 列21 列22 列23 列24 列25 列26 列27 列28
  * 行0 行数 第1行的字数 第2行的字数 第3行的字数
  }
  i结构{
  * 行数
  * 一行的最大字数 //?要让值减少,简单化
  }
  */
  /// /*不用*/新vi vi每部分的属性;
  int 行数, 一行的最大字数
    , 前一个字符是分隔符 = 0;
  /*初始化{ */
  pathInfo( string s/*,int v的行, int v的列*/ ){
    /*算出/搜索出`是19.6MB*/
    v的默认尺寸.一 =/*行*/0;
    s输入的path = s;
    初始化( );
    ///cvSize();
    把s的每个字符读取到vs每部分( );
    /*在结束时*/删除v的多余元素( );/*todo 直接改成pushback*/
  }/*pathInfo()*/
  void 初始化( ){
    全assign( );
    v的下标.一 = 0/*1*/;/*这个不是`v的默认大小*/
    vi的下标.一/*第几个s*/ = 0;
    vs的下标.一 = 0;
    s的下标 = 0;
  }/*void*/
  void 全assign( ){
    ///cout1("全assign\n");
    qmvi计算_不使用前置变量.viAssign( vi每部分的标记, v的默认尺寸.一, 0 );
    qmvi计算_不使用前置变量.vsAssign( vs每部分, v的默认尺寸.一, "" );
  }/*void*/
  void cvSize( ){
    qmviC.cvecSize( "vi每部分的标记", vi每部分的标记 );
    qmviC.cvecSize( "vs每部分", vs每部分 );
  }/*void*/
  /*c的空行数太多了*/ /*没必要resize, info里面的c有终止判定的, //?原来`当时偷懒了,for里用的外面的c, 没有中断条件*/
  void 删除v的多余元素( ){
    qmvi计算_不使用前置变量.viResize( vi每部分的标记, 行数, 0 );
    qmvi计算_不使用前置变量.vsResize( vs每部分, 行数, "" );
  }/*void*/
  /* }初始化*/
  void 简写_输入的s的下标ζ前结算进vsζ后continue(/*输入*/int& iS末尾下标, int& iS开头下标/*is末尾下标=0,is开头下标=0*/){
    /**/ //结算`(vs[]=这一部分s)
    vi每部分的标记 .push_back(1 )/*文件夹*/;/*fs和fS,is和iS*/
    /*复制s*/{
      iS末尾下标 = s的下标-1;
      ///vs每部分.push_back(s输入的path.substr(iS开头下标, iS末尾下标+1-iS开头下标));/*可以*/
      vs每部分.push_back( s输入的path.substr( iS开头下标, s的下标-iS开头下标 ));/*可以*/
    }/*复制s*/
     /*要/读取一个新词了*/
     //? if(s的下标!=s输入的path.size()-1){iS开头下标 = s的下标+1;}/*?开头=末尾加一,超出size,就会out*/
    iS开头下标 = s的下标+1;
    v的下标.一++;/*那加一了，要是后面是空怎么办？*/
  }/*void*/
   /*读取每个字符{ if是分隔符{ 标记 } if前一个字符是分隔符{ s=新的s } s=s; }*/
   /*!for`s的每个字符{ if是分隔符{ 标记 } if前一个字符是分隔符{ v一++,v[一]=s[] } v[一]=s[],v二++; }*/
   /*todo如果有汉字怎么办呢？*/
   /*todo 我觉得还是别改. 空格先替换成一些符号, /替换成空格, 再s读取成好几个s*/
  void 把s的每个字符读取到vs每部分( ){
    /*for每个字符{
    if是分隔符{ 记录( (上一个s)s末尾下标,vs[]=s(,),(下一个s)s开头下标, ); vs[新行]=s;  }
    }/for/ 用s[]判断\后面有没有字;
    下标`用不到了.
    ///////////////////////
    s开头下标=0;
    for每个字符{
    if是分隔符{ s末尾下标=-1,vs[行]=s(,),s开头下标=+1; vs[新行]=s; }
    }/for/
    if(s[下标-1] == '/' or '\\')*/
    int iS末尾下标 = 0, iS开头下标 = 0/*is末尾下标=0,is开头下标=0*/;
    cout1( s输入的path.size( ) );  coutEnd;
    coutsf( "s输入的path={}\n", s输入的path );
    for( s的下标 = 0; s的下标 < s输入的path.size( ); s的下标++ ){
      if( s输入的path[s的下标] == '/' or s输入的path[s的下标] == '\\' ){
        ///coutsf("\\的下标是{}\n", s的下标);
        ///coutsf("从上一个开头`到下标的`一部分s={}\n", s输入的path.substr(iS开头下标, s的下标-iS开头下标));
        ///coutsf("从上一个开头`到末尾的`一部分s={}\n", s输入的path.substr(iS开头下标, s输入的path.size()-iS开头下标));
        /*复制出\前的s,到vs[]*/
        简写_输入的s的下标ζ前结算进vsζ后continue( iS末尾下标, iS开头下标 );
        ///coutsf("从上一个开头的`一部分s={}\n", s输入的path.substr(iS开头下标, s的下标-iS开头下标));
        /// /*结尾可能有{ 文件or文件夹 }嘛*/ /*for有终止条件的{ 如果s完了就没有下一次了 }*/
      }/*if*/
    }/*for`s*/
    ///coutsf("for完\n");
    /*?for后 两种情况*/ /*for之后 s的下标会`加1*/
    if( s输入的path[s的下标-1] == '/' or s输入的path[s的下标-1] == '\\' ){/*if \后 没有内容*/
      coutsf( "\\后 没有内容\n" );
      /// /*把不该改的`恢复*/iS开头下标=s的下标-1;
      vi每部分的标记.push_back( 0)/*无*/;
    } else{/*if \后面有`名称*/
      coutsf( "\\后 有内容\n" );
      vi每部分的标记.push_back( 2)/*文件*/;
      iS末尾下标 = s的下标-1;
      vs每部分.push_back(s输入的path.substr( iS开头下标, s的下标-iS开头下标 ));
      v的下标.一++;
    }/*else*/
    行数 = v的下标.一;
  }/*void*/
   /*?原来这里`没有中断条件*/
  void cvs每部分_不加分隔符( ){
    qmviC.cvs( vs每部分 );
  }/*void*/
  void cvs每部分( ){/*todo 玩三点 把这个删掉*/
    下标info vi的下标/*按照顺序++*/;
    vi的下标.一/*第几个s*/ = 0; vi的下标.二 = 0;
    /*
    if 是文件{ 不加/ }否则是文件夹
    if vi[][]=0 完了
    if vi[][]=1 加/
    if vi[][]=2 不加/
    所以:/*
    for每个字符{
    if(vi[一][二]=2){  }
    if前一个字符是分隔符{ 新的vs[][]=s; 恢复`标记; }
    cvs[][]==cout1(vs[vi的下标.一][vi的下标.二]); }*/
    for( /*s输入的下标,原始的s被分割成好几个s*/vi的下标.一 = 0; vi的下标.一 < 行数; vi的下标.一++ ){
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==1/*文件夹*/ ){ cout1( vs每部分[vi的下标.一] ); cout<<"/"; continue; }/*if1`文件夹*/
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==2/*文件*/ ){ cout1( vs每部分[vi的下标.一] ); continue; }/*if2`文件*/
      /*相当于 for cout1(vs每部分[vi的下标.一][vi的下标.二]);vi的下标.二++;*/
      break;
    }/*for`s的每一个字符*/
  }/*void*/
  void cvs每部分(新s s间隔 ){
    下标info vi的下标/*按照顺序++*/;
    vi的下标.一/*第几个s*/ = 0; vi的下标.二 = 0;
    /*
    if 是文件{ 不加/ }否则是文件夹
    if vi[][]=0 完了
    if vi[][]=1 加/
    if vi[][]=2 不加/ */
    for( /*s输入的下标,原始的s被分割成好几个s*/vi的下标.一 = 0; vi的下标.一 < 行数; vi的下标.一++ ){
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==1/*文件夹*/ ){ cout1( vs每部分[vi的下标.一] ); cout<<s间隔; continue; }/*if1`文件夹*/
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==2/*文件*/ ){ cout1( vs每部分[vi的下标.一] ); continue; }/*if2`文件*/
      /*相当于 for cout1(vs每部分[vi的下标.一][vi的下标.二]);vi的下标.二++;*/
      break;
    }/*for`s的每一个字符*/
  }/*void*/
  void cvs每部分_第一个s是盘符( ){
    下标info vi的下标/*按照顺序++*/;
    vi的下标.一/*第几个s*/ = 1; vi的下标.二 = 0;
    /*
    for每个字符{
    if(vi[一][二]=2){  }
    if前一个字符是分隔符{ 新的vs[][]=s; 恢复`标记; }
    cvs[][]==cout1(vs[vi的下标.一][vi的下标.二]); }*/
    ///cout1(vs[1][0],":/"); 
    cout1( vs每部分[0] ); cout1( ":/" );/*?我本来也没去掉:贼*/
    for( /*s输入的下标,原始的s被分割成好几个s*/vi的下标.一 = 1; vi的下标.一 < 行数; vi的下标.一++ ){
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==1/*文件夹*/ ){ cout1( vs每部分[vi的下标.一/*第几个s*/] ); cout<<"/"; continue; }/*if1`文件夹*/
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==2/*文件*/ ){ cout1( vs每部分[vi的下标.一/*第几个s*/] ); continue; }/*if2`文件*/
      /*相当于 for cout1(vs每部分[vi的下标.一][vi的下标.二]);vi的下标.二++;*/
      break;
    }/*for`s的每一个字符*/
  }/*void*/
  /*from 前置计算_不使用前置变量的 sAppendVs*/
  ////void getsAppendVs(/*输入输出*/新s& s, /*输入*/新s s间隔, 新vs& v ){
    void getsAppendVs(/*输入*/新s s间隔, 新vs& v,/*输出*/新s& s){
      下标info vi的下标/*按照顺序++*/;
    vi的下标.一/*第几个s*/ = 0; vi的下标.二 = 0;
    /*
    if 是文件{ 不加/ }否则是文件夹
    if vi[][]=0 完了
    if vi[][]=1 加/
    if vi[][]=2 不加/
    所以:/*
    for(v行){
    if(vi[行]==1){ 新的vs[][]=s; 恢复`标记; }
    cvs[][]cout1(vs[vi的下标.一][vi的下标.二]);
    }*/
    for( /*s输入的下标,原始的s被分割成好几个s*/vi的下标.一 = 0; vi的下标.一 < 行数; vi的下标.一++ ){
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==1/*文件夹*/ ){ s.append( vs每部分[vi的下标.一] ); s.append( s间隔 ); continue; }/*if1`文件夹*/
      if( vi每部分的标记[vi的下标.一/*第几个s*/] ==2/*文件*/ ){ s.append( vs每部分[vi的下标.一] ); continue; }/*if2`文件*/
      /*相当于 for cout1(vs每部分[vi的下标.一][vi的下标.二]);vi的下标.二++;*/
      break;
    }/*for`s的每一个字符*/
  }/*void*/
  void getsAppendVs每部分(/*输入输出*/新s& s, /*输入*/新s s间隔 ) {
    getsAppendVs(s间隔,vs每部分,s) ;
  }/*void*/
  新s retsAppendVs每部分(/*输入*/新s s间隔 ) {
    /*输入输出*/新s s;
    getsAppendVs(s间隔,vs每部分,s) ;
    retu s;
  }/*void*/

  void 例子_函数顺序( ){
    初始化( );
    把s的每个字符读取到vs每部分( ); ///删除v的多余元素();
    cvs每部分( );/*就这个`能用, 其他的todo*/
  }/*void*/
};/*struct*/



/**///▬截图▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
enum _256色{
  Black = 0, Maroon = 1, Green = 2, Olive = 3, Navy = 4, Purple = 5, Teal = 6, Silver = 7, Grey = 8, Red = 9, Lime = 10, Yellow = 11, Blue = 12, Fuchsia = 13, Aqua = 14, White = 15, Grey0 = 16, NavyBlue = 17, DarkBlue = 18, Blue3 = 19, Blue1 = 21, DarkGreen = 22, DeepSkyBlue4 = 23, DodgerBlue3 = 26, DodgerBlue2 = 27, Green4 = 28, SpringGreen4 = 29, Turquoise4 = 30, DeepSkyBlue3 = 31, DodgerBlue1 = 33, Green3 = 34, SpringGreen3 = 35, DarkCyan = 36, LightSeaGreen = 37, DeepSkyBlue2 = 38, DeepSkyBlue1 = 39, 桃红 = 41, SpringGreen2 = 42, Cyan3 = 43, DarkTurquoise = 44, Turquoise2 = 45, Green1 = 46, SpringGreen1 = 48, MediumSpringGreen = 49, Cyan2 = 50, Cyan1 = 51, DarkRed = 52, DeepPink4 = 53, Purple4 = 54, Purple3 = 56, BlueViolet = 57, Orange4 = 58, Grey37 = 59, MediumPurple4 = 60, SlateBlue3 = 61, RoyalBlue1 = 63, Chartreuse4 = 64, DarkSeaGreen4 = 65, PaleTurquoise4 = 66, SteelBlue = 67, SteelBlue3 = 68, CornflowerBlue = 69, Chartreuse3 = 70, CadetBlue = 72, SkyBlue3 = 74, SteelBlue1 = 75, PaleGreen3 = 77, SeaGreen3 = 78, Aquamarine3 = 79, MediumTurquoise = 80, Chartreuse2 = 82, SeaGreen2 = 83, SeaGreen1 = 84, Aquamarine1 = 86, DarkSlateGray2 = 87, DarkMagenta = 90, DarkViolet = 92, LightPink4 = 95, Plum4 = 96, MediumPurple3 = 97, SlateBlue1 = 99
  , Yellow4 = 100, Wheat4 = 101, Grey53 = 102, LightSlateGrey = 103, MediumPurple = 104, LightSlateBlue = 105, DarkOliveGreen3 = 107, DarkSeaGreen = 108, LightSkyBlue3 = 109, SkyBlue2 = 111, DarkSeaGreen3 = 115, DarkSlateGray3 = 116, SkyBlue1 = 117, Chartreuse1 = 118, LightGreen = 119, PaleGreen1 = 121, DarkSlateGray1 = 123, Red3 = 124, MediumVioletRed = 126, Magenta3 = 127, DarkOrange3 = 130, IndianRed = 131, HotPink3 = 132, MediumOrchid3 = 133, MediumOrchid = 134, MediumPurple2 = 135, DarkGoldenrod = 136, LightSalmon3 = 137, RosyBrown = 138, Grey63 = 139, MediumPurple1 = 141, Gold3 = 142, DarkKhaki = 143, NavajoWhite3 = 144, Grey69 = 145, LightSteelBlue3 = 146, LightSteelBlue = 147, Yellow3 = 148, DarkSeaGreen2 = 151, LightCyan3 = 152, LightSkyBlue1 = 153
  , GreenYellow = 154, DarkOliveGreen2 = 155, DarkSeaGreen1 = 158, PaleTurquoise1 = 159, DeepPink3 = 161, Magenta2 = 165, HotPink2 = 169, Orchid = 170, MediumOrchid1 = 171, Orange3 = 172, LightPink3 = 174, Pink3 = 175, Plum3 = 176, Violet = 177, LightGoldenrod3 = 179, Tan = 180, MistyRose3 = 181, Thistle3 = 182, Plum2 = 183, Khaki3 = 185, LightGoldenrod2 = 186, LightYellow3 = 187, Grey84 = 188, LightSteelBlue1 = 189, Yellow2 = 190, DarkOliveGreen1 = 191, Honeydew2 = 194, LightCyan1 = 195, Red1 = 196, DeepPink2 = 197, DeepPink1 = 198, Magenta1 = 201, OrangeRed1 = 202, IndianRed1 = 203, HotPink = 205, DarkOrange = 208, Salmon1 = 209, LightCoral = 210, PaleVioletRed1 = 211, Orchid2 = 212, Orchid1 = 213, Orange1 = 214, SandyBrown = 215, LightSalmon1 = 216, LightPink1 = 217, Pink1 = 218, Plum1 = 219, Gold1 = 220
  , _256色粉红 = 221, NavajoWhite1 = 223, MistyRose1 = 224, Thistle1 = 225, Yellow1 = 226, LightGoldenrod1 = 227, Khaki1 = 228, Wheat1 = 229, Cornsilk1 = 230, Grey100 = 231, Grey3 = 232, Grey7 = 233, Grey11 = 234, Grey15 = 235, Grey19 = 236, Grey23 = 237, Grey27 = 238, Grey30 = 239, Grey35 = 240, Grey39 = 241, Grey42 = 242, Grey46 = 243, Grey50 = 244, Grey54 = 245, Grey58 = 246, Grey62 = 247, Grey66 = 248, Grey70 = 249, Grey74 = 250, Grey78 = 251, Grey82 = 252, Grey85 = 253, Grey89 = 254, Grey93 = 255
};
enum _44色{
  黑色 = 0
  , 深灰 = 1
  , 灰色 = 2
  , 浅灰 = 3
  , 白色 = 4
  , 深红 = 5
  , 红色 = 6
  , 浅红 = 7
  , 深绿 = 8
  , 绿色 = 9
  , 浅绿 = 10/*酸橙*/
  , 深蓝 = 11
  , 蓝色 = 12
  , 浅蓝 = 13
  , 深黄 = 14
  , 黄色 = 15
  , 浅黄 = 16
  , 深红黄 = 17
  , 红黄 = 18
  , 浅红黄 = 19
  , 深绿黄 = 20
  , 绿黄 = 21
  , 浅绿黄 = 22
  , 深青 = 23
  , 青色 = 24
  , 浅青 = 25
  , 深绿青 = 26
  , 绿青 = 27
  , 浅绿青 = 28
  , 深蓝青 = 29
  , 蓝青 = 30
  , 浅蓝青 = 31
  , 深紫 = 32
  , 紫色 = 33
  , 浅紫 = 34
  , 深红紫 = 35
  , 红紫 = 36
  , 浅红紫 = 37
  , 深蓝紫 = 38
  , 蓝紫 = 39
  , 浅蓝紫 = 40
  , 深粉 = 41
  , 粉红 = 42
  , 浅粉 = 43
  /*有深和浅两种, 应该是6个主色,8种混合颜色{青色,紫色,黄色,粉红},12种过渡颜色{绿青,蓝青,红紫,蓝紫,红黄/橘黄,绿黄},2个白{粉红`可能是白}一个黑,26+3=29种,39+3=42种*/
  /*
  黑色 = 0
  , 深灰=     1
  , 灰色=     2
  , 浅灰=     3
  , 白色 =     4
  , 深红 =     5
  , 红色 =     6
  , 浅红 =     7
  , 深绿 =     8
  , 绿色 =     9
  , 浅绿 =     10    /*酸橙
  , 深蓝 =     11
  , 蓝色 =     12
  , 浅蓝 =     13
  , 深黄 =     14
  , 黄色 =     15
  , 浅黄 =    16
  ,深红黄=	 	 17
  , 红黄 =		 18
  ,浅红黄=		 19
  ,深绿黄=		  20
  , 绿黄 =		 21
  ,浅绿黄=			 22
  , 深青 =		 23
  , 青色 =		 24
  , 浅青=		 25
  , 深绿青 =			 26
  , 绿青 =			 27
  , 浅绿青 =		 28
  , 深蓝青 		= 29
  , 蓝青 =			30
  , 浅蓝青 =		 31
  , 深紫 = 		 32
  , 紫色 =			33
  ,浅紫=			 34
  , 深红紫 =		 35
  , 红紫 =			36
  ,浅红紫=			37
  , 深蓝紫 =		 38
  , 蓝紫 =			39
  ,浅蓝紫=				 40
  , 深粉 =			 41
  , 粉红 =			 42
  , 浅粉 =			43
  */
};
enum class 数字{
  /*
  0
  1
  2
  3
  4
  5
  6
  7
  8
  9
  10
  11
  12
  13
  14
  15
  16
  17
  18
  19
  20
  21
  22
  23
  24
  25
  26
  27
  28
  29
  30
  31
  32
  33
  34
  35
  36
  37
  38
  39
  40
  41
  42
  */
};
struct 一种颜色{
  新i r, g, b;
};
struct 一点颜色{
  新i x, y, r, g, b;
}二维的点;
struct 二维坐标{
  新f y, x;
};
//struct info {



#endif

