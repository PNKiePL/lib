#pragma once
#ifndef CMD_H 
#define CMD_H

//#include<E:\lib\预编译头文件 无其他.h>

#include  <E:\lib\define.h>
////#include<E:\lib\namespace\简写.h>
#include<E:\lib\头文件 c++.h>
//#include  <E:\lib\按键检测.h>
#include <E:\lib\文件读写.h>
#include  <E:\lib\窗口.h>
#include<E:\lib\类型转换.h>
#include  <E:\lib\按键.h>
#include  <E:\lib\鼠标.h>
#include  <E:\lib\检测按键是否按下.h>

using namespace std;
//namespace cmd{
//}
//extern class 检测按键是否按下;
//extern int 按下;
class cmd :public 检测按键是否按下{
public:
  类型转换 vrh;
  //按键检测 按键检测1;
  /*cmd cmd1;*/
  窗口 IdKb;
  文件读写 wfjmduxx;
  //文字读取 wfziduqu;
public:
  const string 原行开始符 = "^";
  const string 原行结束符 = "&";
  string 行开始符 = "^";
  string 行结束符 = "&";
  string 行开始符跟0 = "^0";
  string 行开始符跟1 = "^1";
  string 行开始符跟2 = "^2";
  string 行开始符跟3 = "^3";
  string 行开始符跟4 = "^4";
  string 行开始符跟5 = "^5";
  string 行开始符跟6 = "^6";
  string 行开始符跟7 = "^7";
  string 行开始符跟8 = "^8";
  string 行开始符跟9 = "^9";
  struct 指令关键词{
    string cd = "cd", ren = "ren"
      , modeconcols = "mode con cols=", lines = " lines="
      , 指令 = ""
      ;
    string 行开始符 = "^";
    string 行结束符 = "&";
  };
  /**//*外观▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬*/
  /*记录*/
  COORD 之前的光标坐标;
  CONSOLE_SCREEN_BUFFER_INFO   记录CONSOLE_SCREEN_BUFFER_INFO;

  /*设置*/
  _COORD cmd光标坐标{ 0,0 };/*set用*/
  _CONSOLE_SCREEN_BUFFER_INFO cmd屏幕缓冲区信息{
  };
  /**///▬输出`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  ostringstream ostst;/*定向cout方向*/
  /*定向*/std::streambuf* pOldBuf;
public:
  /*static*/ const char* ccCr_lf = "\r\n";
public:
  /**/ //>封装一层`胶水`AND▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 禁止鼠标左键点ANDset字的大小( int 字的大小y ){
    禁止鼠标左键点( );
    set字的大小( 字的大小y );
  }/*void*/
  void set字的大小AND窗口尺寸( cmd窗口info& cmd窗口1 ){
    set字的大小( cmd窗口1.字的大小y );
    set窗口大小( cmd窗口1.窗口大小_字数y, 2*cmd窗口1.窗口大小_字数x );
  }/*void*/
    /**///▬设置`!外观▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void cmd外观设置( int 字大小, int  窗口y, int  窗口x ){
    set字的大小( 字大小 );
    set窗口大小( 窗口y, 窗口x );
  }/*void*/
  void set字的大小乘( int Y, int X ){ //<https://stackoverflow.com/questions/36590430/in-windows-does-setcurrentconsolefontex-change-consoles-font-size>
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CONSOLE_FONT_INFOEX CONSOLE_字的信息 = { sizeof( CONSOLE_字的信息 ) };
    //用屏幕缓冲区的当前字体信息填充cfi
    GetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
    //>变大
    CONSOLE_字的信息.dwFontSize.X *= X;
    CONSOLE_字的信息.dwFontSize.Y *= Y;
    //使用cfi设置屏幕缓冲区的新字
    SetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
  }/*void*/
  void set字的大小除以( int Y, int X ){ //<https://stackoverflow.com/questions/36590430/in-windows-does-setcurrentconsolefontex-change-consoles-font-size>
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CONSOLE_FONT_INFOEX CONSOLE_字的信息 = { sizeof( CONSOLE_字的信息 ) };
    GetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
    CONSOLE_字的信息.dwFontSize.X /= X;
    CONSOLE_字的信息.dwFontSize.Y /= Y;
    SetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
  }/*void*/
  void set字的大小( int Y, int X ){
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CONSOLE_FONT_INFOEX CONSOLE_字的信息 = { sizeof( CONSOLE_字的信息 ) };
    //用屏幕缓冲区的当前字体信息填充cfi
    GetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
    //>变大
    CONSOLE_字的信息.dwFontSize.X = X;
    CONSOLE_字的信息.dwFontSize.Y = Y;
    //使用cfi设置屏幕缓冲区的新字
    SetCurrentConsoleFontEx( h控制台屏幕缓冲区, FALSE, &CONSOLE_字的信息 );
  }
  void set字的大小乘( int 二合一 ){
    set字的大小乘( 二合一, 二合一 );
  }
  void set字的大小除以( int 二合一 ){
    set字的大小除以( 二合一, 二合一 );
  }
  void set字的大小( int 二合一 ){
    set字的大小( 二合一, 二合一 );
  }
  void 刷新( ){
    set字的大小( 0, 0 );
  }
  /**///>颜色▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void setColor( int cmd颜色 ){//改变输出的颜色，比system("color x")快得多
    SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ), cmd颜色 ); //改文字颜色
  }
  /*16个数一组,最大255; 背景颜色+前景文字颜色: 0=黑+黑,2=黑贝绿字,7=黑+白,B=66=红+绿,176=背绿`文黑,177=绿+绿; */
  void set颜色( int cmd颜色 ){
    setColor( cmd颜色 );
    return; //?
    ///背景色取值	颜色效果	前景色取值	颜色效果
    ///	0		黑色	 0 黑背景黑字	8		灰色
    ///	1		蓝色	 16	蓝背景黑字	9		淡蓝色 
    ///	2		绿色	 32				A		浅绿色 160开始,绿背景`黑字
    ///	3		浅蓝色 48=蓝色黑字	B		淡浅绿色 176
    ///	4		红色					C		淡白色 191
    ///	5		紫色					D		淡紫色
    ///	6		屎黄色				E		淡黄色
    ///	7		白色					F		亮白色
  }
  /*颜色判断; 这儿有`三种写法*/
  void get判断文字颜色(/*输入*/int 判定条件, int 颜色1, int 颜色2,/*输出*/int& i结果 ){
    if( 判定条件 == 0 ){
      i结果 = 颜色1;
    }/*if*/
    if( 判定条件 == 1 ){
      i结果 = 颜色2;
    }/*if*/
  }
  void get判断文字颜色(/*输入*/int 判定条件, 新vi 颜色,/*输出*/int& i结果 ){
    for( size_t i = 0; i < 颜色.size( ); i++ ){
      /*i就是条件,v[i]就是输出*/
      if( 判定条件 == i ){
        i结果 = 颜色[i];
      }
    }/*for*/
  }
  int ret判断文字颜色(/*输入*/int 判定条件, int 颜色1, int 颜色2 ){
    if( 判定条件 == 0 ){
      retu 颜色1;
    }/*if*/
    if( 判定条件 == 1 ){
      retu 颜色2;
    }/*if*/
  }
  int ret判断文字颜色(/*输入*/int 判定条件, 新vi 颜色 ){
    for( size_t i = 0; i < 颜色.size( ); i++ ){
      /*i就是条件,v[i]就是输出*/
      if( 判定条件 == i ){
        retu  颜色[i];
      }
    }/*for*/
  }
  void 判断文字颜色ANDSet颜色(/*输入*/int 判定条件, int 颜色1, int 颜色2 ){
    if( 判定条件 == 0 ){
      setColor( 颜色1 );
    }/*if*/
    if( 判定条件 == 1 ){
      setColor( 颜色2 );
    }/*if*/
  }
  void 判断文字颜色ANDSet颜色(/*输入*/int 判定条件, 新vi 颜色 ){
    for( size_t i = 0; i < 颜色.size( ); i++ ){
      if( 判定条件 == i ){
        setColor( 颜色[i] );
      }
    }/*for*/
  }
  /*可以记录`当前的颜色*/
  void  get文字属性( ){/*https://stackoverflow.com/questions/8578909/how-to-get-current-console-background-and-text-colors>*/
    HANDLE                      m_hConsole;
    WORD                        m_currentConsoleAttr;
    CONSOLE_SCREEN_BUFFER_INFO   csbi;
    ;

    //retrieve and save the current attributes
    m_hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
    if( GetConsoleScreenBufferInfo( m_hConsole, &csbi ) )
      m_currentConsoleAttr = csbi.wAttributes;

    //change the attribute to what you like
    SetConsoleTextAttribute(
      m_hConsole,
      FOREGROUND_RED |
      FOREGROUND_GREEN );

    //set the ttribute to the original one
    SetConsoleTextAttribute(
      m_hConsole,
      m_currentConsoleAttr );
  }
  /**///>窗口▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*可以3*32*/
  void set窗口大小( int 高, int 宽 ){
    //system("mode con cols=16 lines=4"); //8*4
    set窗口大小( vrh.TOs( 高 ), vrh.TOs( 宽 ) );
  }/*void*/
  void set窗口大小xy( int 宽, int 高 ){
    //system("mode con cols=16 lines=4"); //8*4
    set窗口大小( vrh.TOs( 高 ), vrh.TOs( 宽 ) );
  }/*void*/

  /*可以`6位数; s用来修改c*/
  void set窗口大小( 新s Y, 新s X ){
    char c命令[34] = "mode con cols=       lines=      ";
    for( size_t i = 0, 列 = 14; i < (X).size( ); i++, 列++ ){
      c命令[列] = X[i];
    }/*for*/
    for( size_t i = 0, 列 = 27; i < (Y).size( ); i++, 列++ ){
      c命令[列] = Y[i];
    }/*for*/
    system( c命令 );
  }/*void*/
  /*不行*/
  ////void set窗口大小(const char* Y,const char* X ) { 
  ////	char c命令[60] = "mode con cols=     lines=    ";/*30个字*/
  ////	for (size_t i = 0,列=14; i < strlen(X); i++,列++){
  ////		c命令[列] = X[i];
  ////	}/*for*/
  ////	for (size_t i = 0,列=25; i < strlen(Y); i++,列++){
  ////		c命令[列] = Y[i];
  ////	}/*for*/
  ////	system(c命令);
  ////}
  void set窗口名( LPCWSTR l窗口名 ){
    SetConsoleTitle( l窗口名 );
  }
  void set窗口名( const char* cc窗口名 ){//?乱码
    LPCWSTR L输入 = (LPCWSTR)cc窗口名;
    SetConsoleTitle( L输入 );
  }
  void set窗口名( const wchar_t cw窗口名 ){ //?访问错误
    LPCWSTR L输入 = (LPCWSTR)(const wchar_t)cw窗口名;
    SetConsoleTitle( L输入 );
  }
  void set光标位置( SHORT Y, SHORT X ){
    set光标位置yx( Y, X );
  }/*void*/
  void set光标位置yx( SHORT Y, SHORT X ){
    cmd光标坐标 = {
       X,		 Y };
    SetConsoleCursorPosition( retHstd输出( )/*值	含义 https://learn.microsoft.com/zh-cn/windows/console/console-buffer-security-and-access-rights>
       GENERIC_READ (0x80000000L)		请求对控制台屏幕缓冲区的读取访问权限，使进程能够从缓冲区读取数据。
       GENERIC_WRITE (0x40000000L)	请求对控制台屏幕缓冲区的写权限，使进程能够将数据写入缓冲区。*/
      , cmd光标坐标 );
  }
  void set光标位置xy( SHORT X, SHORT Y ){
    set光标位置yx( X, Y );
  }
  void set光标位置y( SHORT Y ){
    cmd光标坐标.Y = Y;
    SetConsoleCursorPosition( retHstd输出( ), cmd光标坐标 );
  }
  void set光标位置x( SHORT X ){
    cmd光标坐标.X = X;
    SetConsoleCursorPosition( retHstd输出( ), cmd光标坐标 );
  }
  void get屏幕缓冲区信息( _CONSOLE_SCREEN_BUFFER_INFO& cmd屏幕缓冲区信息 ){
    /*PCONSOLE_SCREEN_BUFFER_INFO lpCmd屏幕缓冲区信息 = nullptr;*/
    GetConsoleScreenBufferInfo( retHstd输出( ), &cmd屏幕缓冲区信息 );
  }
  void get屏幕缓冲区信息( ){
    get屏幕缓冲区信息( cmd屏幕缓冲区信息 );
  }
  auto get光标位置( _CONSOLE_SCREEN_BUFFER_INFO& cmd屏幕缓冲区信息 ){
    get屏幕缓冲区信息( cmd屏幕缓冲区信息 );
  }
  /*=cmd屏幕缓冲区信息.dwCursorPosition.Y*/
  auto get光标位置( ){
    get屏幕缓冲区信息( cmd屏幕缓冲区信息 );
  }
  /**///▬输出`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 定向cout方向( ){
    pOldBuf = std::cout.rdbuf( ostst.rdbuf( ) );
  }
  void 取消定向cout方向( ){
    /*还原*/std::cout.rdbuf( pOldBuf );
  }
  void 定向后cout( ){
    cout << ostst.str( );
  }/*void*/
  /**///▬输入`限制`设置▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  HWND rethwnd( ){/*2024年11月10日18:35:06*/
    retu  GetConsoleWindow( );
  }/*HWND*/
  void 屏蔽控制台最小按钮和关闭按钮( ){ /*<https://blog.csdn.net/weixin_40933560/article/details/122895394>*/
    HWND hwnd = GetConsoleWindow( );
    HMENU hmenu = GetSystemMenu( hwnd, false );
    /*屏蔽按钮*/RemoveMenu( hmenu, SC_CLOSE, MF_BYCOMMAND );
    LONG style = GetWindowLong( hwnd, GWL_STYLE );
    style &= ~(WS_MINIMIZEBOX);
    SetWindowLong( hwnd, GWL_STYLE, style );
    SetWindowPos( hwnd, HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE );
    ShowWindow( hwnd, SW_SHOWNORMAL );
    DestroyMenu( hmenu );
    ReleaseDC( hwnd, NULL );
  }/*void*/
  /**/
  void WaitEnter( HANDLE/*&*/ hStd输入 ){
    char c读取的缓冲区 = 0;
    DWORD read字节数;
    do{
      read字节数 = 0;
      ReadFile( hStd输入/*句柄*/, &c读取的缓冲区/*指向接收从文件或设备读取的数据的缓冲区的指针。|此缓冲区必须在读取操作期间保持有效。 在完成读取操作之前，调用方不得使用此缓冲区。*/, 1/*要读取的 最多字节数*/
        , &read字节数/*指针，该变量接收在使用同步 hFile 参数时读取的//%字节数。 ReadFile 在执行任何工作或错误检查之前将此值设置为零。|如果这是异步操作，请对此参数使用 NULL ，以避免潜在的错误结果。仅当 lpOverlapped 参数不为 NULL 时，此参数才能为 NULL。*/
        , NULL/*如果使用 FILE_FLAG_OVERLAPPED 打开 hFile 参数，则需要指向 OVERLAPPED 结构的指针，否则可为 NULL。|如果使用 FILE_FLAG_OVERLAPPED 打开 hFile，则 lpOverlapped 参数必须指向有效且唯一的 OVERLAPPED 结构，否则函数可能会错误地报告读取操作已完成。
        |对于支持字节偏移量的 hFile ，如果使用此参数，则必须指定从文件或设备开始读取的字节偏移量。 此偏移量是通过设置 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定的。 对于不支持字节偏移量的 hFile ， 将忽略 Offset和 OffsetHigh 。
        |有关lpOverlapped和 FILE_FLAG_OVERLAPPED的不同组合的详细信息，请参阅“备注”部分和 “同步和文件位置” 部分。*/ ); //<https://learn.microsoft.com/zh-cn/windows/win32/api/fileapi/nf-fileapi-readfile>
    } while( read字节数 && c读取的缓冲区 != '\n' ); //>不是换行-->读取
  }
  void WaitEnter( ){
    WaitEnter( retHstd输入( ) );
  }
  void 关闭快速编辑模式( ){
    SetConsoleMode( GetStdHandle( STD_INPUT_HANDLE/*-10*/ ), ENABLE_QUICK_EDIT_MODE/*128*/ ); //禁止鼠标点击 https://learn.microsoft.com/zh-cn/windows/console/setconsolemode> \ SetConsoleMode( _In_ HANDLE hConsoleHandle, _In_ DWORD  dwMode);
  }
  void 禁止鼠标左键点( ){/*https://blog.csdn.net/Think88666/article/details/122454956 */
    HANDLE hStdin = GetStdHandle( STD_INPUT_HANDLE );
    DWORD mode;
    GetConsoleMode( hStdin, &mode );
    mode &= ~ENABLE_QUICK_EDIT_MODE; //移除快速编辑模式
    mode &= ~ENABLE_INSERT_MODE; //移除插入模式
    mode &= ~ENABLE_MOUSE_INPUT;
    SetConsoleMode( hStdin, mode );
  }
  void 开启快速编辑模式( ){
    SetConsoleMode( GetStdHandle( STD_INPUT_HANDLE/*-10*/ ), ENABLE_QUICK_EDIT_MODE | ENABLE_EXTENDED_FLAGS ); //禁止鼠标点击
  }
  void 不禁止鼠标左键点( ){
    开启快速编辑模式( );
  }
  /**///▬功能,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 指令( const char* 指令 ){ system( 指令 ); }
  void 指令( string 指令 ){ system( vrh.Tccp( 指令 ) ); }
  void 清屏( ){ system( "cls" ); }
  auto 取消同步( ){
    ios::sync_with_stdio( false ); //取消同步 \ 这个函数是一个“是否兼容stdio”的开关，C++为了兼容C，保证程序在使用了std::printf和std::cout的时候不发生混乱，将输出流绑到了一起 \ https://blog.csdn.net/u014665013/article/details/70521300 
    cin.tie( 0 );
    cout.tie( 0 );
  }
  void 退出( ){
    HANDLE h控制台屏幕缓冲区 = CreateFileA( "CONOUT$", GENERIC_WRITE | GENERIC_READ,
      FILE_SHARE_WRITE, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL );
    CloseHandle( h控制台屏幕缓冲区 );
  }
  HANDLE retHstd输出( ){
    return GetStdHandle( STD_OUTPUT_HANDLE/*-11*/ );
  }
  HANDLE retHstd输入( ){
    return GetStdHandle( STD_INPUT_HANDLE/*-10*/ );
  }
  /*需要`管理员权限*/
  void 新建文件夹_md( 新s path ){
    vrh.TOccp( ".md " + path );
  }
  void 新建文件夹_mkdir( 新s path ){
    vrh.TOccp( "sudo mkdir " + path );
  }
  void cou( int uu ){/*R"(s)"*/
    cout1( uu );
  }
  void runas打开path( string 用户组, string path ){
    string 指令头 = "explorer.exe ";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void 管理员打开path( string path ){
    string 指令头 = R"(runas /trustlevel:0x40000 )";
    string 指令 = 指令头 +  R"(")" + path +  R"(")";;
    ///string 指令头 = "runas /trustlevel:0x40000 ";
    ///string 指令 = 指令头 +  '"' + path +  '"';;
    system( 指令.c_str( ) );
  }
  void 管理员权限_打开path( string path ){
    管理员打开path( path );
  }
  void 打开path_管理员权限( string path ){
    管理员打开path( path );
  }
  /*?必须用\,不能/*/
  void explorer点exe加path( string path ){ //<https://blog.csdn.net/springontime/article/details/19967243>
    string 指令头 = "explorer.exe ";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void 打开path( string path ){
    explorer点exe加path( path );
  }
  void 用start打开path( string path ){
    string 指令头 = R"(start "" )";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void start封装( string path ){
    string 指令头 = R"(start "" )";
    string 指令 = 指令头 + '"' + path/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  void start封装( string 内容1, string 内容2 ){
    string 指令头 = R"(start "" )";
    string 指令 = 指令头 + '"' + 内容1/*.c_str()*/ + '"' + " " + '"' + 内容2/*.c_str()*/ + '"';
    system( 指令.c_str( ) );
  }
  /**///▬缓冲区,简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 写入( HANDLE hStd输出, char& c写入内容, int 写入的字节数 ){
    DWORD num_written字节数;
    WriteFile( hStd输出, &c写入内容, 写入的字节数/*要写入文件或设备的字节数*/, &num_written字节数/*指向变量的指针，该变量接收使用同步 hFile 参数时写入的字节数。|WriteFile 在执行任何工作或错误检查之前将此值设置为零。 如果这是异步操作，请对此参数使用 NULL ，以避免潜在的错误结果。*/
      , NULL/*如果使用 FILE_FLAG_OVERLAPPED 打开 hFile 参数，则需要指向 OVERLAPPED 结构的指针，否则此参数可以为 NULL。|对于支持字节偏移量的 hFile ，如果使用此参数，则必须指定开始写入文件或设备的字节偏移量。 此偏移量是通过设置 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定的。 对于不支持字节偏移量的 hFile ， 将忽略 Offset和 OffsetHigh 。
      |若要写入文件末尾，请将 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定为0xFFFFFFFF。 这在功能上等效于之前调用 CreateFile 函数以使用FILE_APPEND_DATA访问打开 hFile。
      |有关 lpOverlapped和 FILE_FLAG_OVERLAPPED的不同组合的详细信息，请参阅“备注”部分和 “同步和文件位置” 部分。*/ ); /*<https://learn.microsoft.com/zh-cn/windows/win32/api/fileapi/nf-fileapi-writefile>*/
  }
  void 写入( char& c写入内容, int 写入的字节数 ){
    //读取(GetStdHandle(STD_INPUT_HANDLE), c读取的缓冲区, 读取的字节数);
    写入( GetStdHandle( STD_OUTPUT_HANDLE ), c写入内容, 写入的字节数 );
  }/*char*/
  void 循环ReadFile( HANDLE hStd输入, char& c读取的缓冲区, int 读取的字节数 ){
    DWORD read字节数;
    do{
      read字节数 = 0;
      ReadFile( hStd输入/*句柄*/, &c读取的缓冲区/*指向接收从文件或设备读取的数据的缓冲区的指针。|此缓冲区必须在读取操作期间保持有效。 在完成读取操作之前，调用方不得使用此缓冲区。*/
        , 读取的字节数/*要读取的 最多字节数*/
        , &read字节数/*指针，该变量接收在使用同步 hFile 参数时读取的//%字节数。 ReadFile 在执行任何工作或错误检查之前将此值设置为零。|如果这是异步操作，请对此参数使用 NULL ，以避免潜在的错误结果。仅当 lpOverlapped 参数不为 NULL 时，此参数才能为 NULL。*/
        , NULL/*如果使用 FILE_FLAG_OVERLAPPED 打开 hFile 参数，则需要指向 OVERLAPPED 结构的指针，否则可为 NULL。|如果使用 FILE_FLAG_OVERLAPPED 打开 hFile，则 lpOverlapped 参数必须指向有效且唯一的 OVERLAPPED 结构，否则函数可能会错误地报告读取操作已完成。
        |对于支持字节偏移量的 hFile ，如果使用此参数，则必须指定从文件或设备开始读取的字节偏移量。 此偏移量是通过设置 OVERLAPPED 结构的 Offset和 OffsetHigh 成员指定的。 对于不支持字节偏移量的 hFile ， 将忽略 Offset和 OffsetHigh 。
        |有关lpOverlapped和 FILE_FLAG_OVERLAPPED的不同组合的详细信息，请参阅“备注”部分和 “同步和文件位置” 部分。*/ ); //<https://learn.microsoft.com/zh-cn/windows/win32/api/fileapi/nf-fileapi-readfile>
    } while(/*读到了内容*/read字节数 && c读取的缓冲区 != '\n' ); //>不是换行-->读取
  }
  void 读取( HANDLE hStd输入, char& c读取的缓冲区, int 读取的字节数 ){
    DWORD read字节数; read字节数 = 0;
    ReadFile( hStd输入, &c读取的缓冲区, 读取的字节数, &read字节数, NULL );
  }
  //?不起作用
  /*等待输入and替换*/
  char 输入and替换( int 读取的字节数 ){
    DWORD read字节数;
    char c读取的缓冲区 = 0;
    读取( GetStdHandle( STD_INPUT_HANDLE ), c读取的缓冲区, 读取的字节数 );
    retu c读取的缓冲区;
  }/*char*/
  void ReadConsoleOutputCharacter简写( int Y, int 字数, TCHAR 读取到 ){

    {}/*读取进来*/; COORD 坐标; DWORD NumberOfCharsRead; LPDWORD lpNumberOfCharsRead = &NumberOfCharsRead; 坐标.Y = Y, 坐标.X = 0;
    ReadConsoleOutputCharacter( GetStdHandle( STD_OUTPUT_HANDLE ), &读取到, 字数, 坐标, lpNumberOfCharsRead ); /*https://learn.microsoft.com/zh-cn/windows/console/readconsoleoutputcharacter*/
  }
  TCHAR  ret读取( int Y, int 字数 ){
    TCHAR  读取的缓冲区 = 0;
    ReadConsoleOutputCharacter简写( Y, 字数, 读取的缓冲区 );
    retu 读取的缓冲区;
  }/*TCHAR */
  void 读console( ){
    //ReadConsole /*从控制台输入缓冲区读取字符输入，并将其从缓冲区删除。https://learn.microsoft.com/zh-cn/windows/console/readconsole>*/
  }
  /**//**///▬界面`控制光标▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*往右下角`变大*/
  int /*长按*/本次按下是否生效 = 0;
  //新vi /*长按*/本次按下是否生效;
  void 弹起键控制cmd光标( int 键码, int 下移, int 右移 ){
    之前和现在相等( 键码 ); //-->重新检测`现在的
    if( 现在[键码] == 1 ){ //if按下
      get光标位置( );
      set光标位置( cmd屏幕缓冲区信息.dwCursorPosition.Y + 下移, cmd屏幕缓冲区信息.dwCursorPosition.X + 右移 );
      if(/*长按*/之前[键码] == 1 ){
      }/*if*/
    } else{
      /*!写错位置了*/
    }/*else*/
  }/*void*/
  void 弹起键控制cmd光标2( int 键码, int 下移, int 右移 ){
    之前和现在相等( 键码 ); //-->重新检测`现在的
    if( GetKeyState( 键码 ) & 0x8000 ){ //if按下
      if( 之前[键码] == 1 ){
        get光标位置( );
        set光标位置( cmd屏幕缓冲区信息.dwCursorPosition.Y + 下移, cmd屏幕缓冲区信息.dwCursorPosition.X + 右移 );
        if(/*是否生效*/之前[键码] == 1 ){
          set光标位置( cmd屏幕缓冲区信息.dwCursorPosition.Y + 下移, cmd屏幕缓冲区信息.dwCursorPosition.X + 右移 );
        }
        本次按下是否生效 = 1;
      }/*if*/
      if( 之前[键码] == 1 ){
        if(/*是否生效,坐标是否变化,if 现在=之前*/ cmd屏幕缓冲区信息.dwCursorPosition.Y == 之前的光标坐标.Y ){

        }
      }/*if*/
    } else{
      /*!写错位置了*/
    }/*else*/
  }/*void*/
  void 方向键控制cmd光标( int 下移, int 右移 ){
    弹起键控制cmd光标( VK_UP, -下移, 0 );
    弹起键控制cmd光标( VK_DOWN, 下移, 0 );
    弹起键控制cmd光标( VK_LEFT, 0, -右移 );
    弹起键控制cmd光标( VK_RIGHT, 0, 右移 );
  }
  void 方向键控制cmd光标( ){
    方向键控制cmd光标( 2, 1 );
  }
  /**/ //▬界面`小组件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void cout光标yx( COORD COORD1 ){
    cout << std::format( "光标 Y={},X={}\n", COORD1.Y, COORD1.X );
  }
  void cout光标yx( ){
    get光标位置( ); cout << std::format( "光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.Y, cmd屏幕缓冲区信息.dwCursorPosition.X );
  }
  void cout光标xy( ){
    get光标位置( ); cout << std::format( "光标 Y={},X={}\n", cmd屏幕缓冲区信息.dwCursorPosition.X, cmd屏幕缓冲区信息.dwCursorPosition.Y );
  }
  /**/ //▬杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void 使用powershell( ){ //https://stackoverflow.com/questions/55037943/how-should-c-execute-the-powershell-command>
    ofstream ofs指令;
    ofs指令.open( "test.ps1" );
    /**/
    string newArg = "-auto";
    string strPpowershell指令;
    strPpowershell指令 = "$task = Get-ScheduledTask \"Test\"\n";
    strPpowershell指令 += "$items = @{}\n";
    strPpowershell指令 += "if ($task.Actions.Execute -ne $null) {$items.Add('Execute', \"$($task.Actions.Execute)\")} \n";
    strPpowershell指令 += "$items.Add('Argument', \"$($task.Actions.Arguments) " + newArg + "\") \n"; // 'Argument' not a typo
    strPpowershell指令 += "if ($task.Actions.WorkingDirectory -ne $null) {$items.Add('WorkingDirectory',\"$($task.Actions.WorkingDirectory)\")} \n";
    strPpowershell指令 += "$action = New-ScheduledTaskAction @items\n";
    strPpowershell指令 += "$task.Actions = $action\n";
    strPpowershell指令 += "Set-ScheduledTask -InputObject $task\n";
    ofs指令 << strPpowershell指令 << endl;
    ofs指令.close( );

    system( "powershell -ExecutionPolicy Bypass -F test.ps1" );

    remove( "test.ps1" );
  }
  /**/ //展示`一些东西
  void c所有颜色( ){
    for( size_t i = 0; i </*1399*/257; i++ ){
      setColor( i );
      couta2( i, " " );
    }
    setColor( 1 );
  }
  /**///▬我不知道▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  auto 改字体( ){
    _COORD COORDp; COORDp.X = 20; COORDp.Y = 10;
    _CONSOLE_FONT_INFOEX CONSOLE_FONT_INFOEX; //<https://learn.microsoft.com/zh-cn/windows/console/console-font-infoex>
    _CONSOLE_FONT_INFOEX* CONSOLE_FONT_INFOEXp = &CONSOLE_FONT_INFOEX;
    CONSOLE_FONT_INFOEXp->cbSize = 1400; //此结构的大小 字节
    CONSOLE_FONT_INFOEXp->nFont = 14; //系统控制台字体表中字体的索引
    CONSOLE_FONT_INFOEXp->dwFontSize = COORDp; //COORD <https://learn.microsoft.com/zh-cn/windows/console/coord-str>结构，包含字体中每个字符的宽度和高度（以逻辑单元为单位）。 X 成员包含宽度，而 Y 成员包含高度。
    CONSOLE_FONT_INFOEXp->FontFamily = 14; //字体间距和系列
    CONSOLE_FONT_INFOEXp->FontWeight = 400; //粗细范围为 100 到 1000，按 100 的倍数表示。 例如，正常粗细为 400，而 700 为粗体
    CONSOLE_FONT_INFOEXp->FaceName[LF_FACESIZE] = 14; //字样的名称（如 Courier 或 Arial）。
    SetCurrentConsoleFontEx(
      GetStdHandle( -10 )
      , FALSE
      , CONSOLE_FONT_INFOEXp
    ); //<https://learn.microsoft.com/zh-cn/windows/console/setcurrentconsolefontex>
  }
};




#endif