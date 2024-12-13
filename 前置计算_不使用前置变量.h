#pragma once
#ifndef 前置计算_不使用前置变量_H 
#define 前置计算_不使用前置变量_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>

class 前置计算_不使用前置变量{
public:
  ////前置cout qmviC;
public:
  /**///▬简写`新建`初始化▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /**///assign
  /*vi*/
  void viAssign( 新vi& v, int 下标一, 新i i ){
    v.assign( 下标一, i );
  }/*void*/
  void v2iAssign( 新v2i& v, int 下标一, int 下标二, 新i i ){
    v.assign( 下标一, 新vi( 下标二, i ) );
  }/*void*/
   /*vf*/
  void vfAssign( 新vf& v, int 下标一, 新f f ){
    v.assign( 下标一, f );
  }/*void*/
  void v2fAssign( 新v2f& v, int 下标一, int 下标二, 新f f ){
    v.assign( 下标一, 新vf( 下标二, f ) );
  }/*void*/
   /*vc*/
  void vcAssign( 新vc& v, int 下标一, 新c c ){
    v.assign( 下标一, c );
  }/*void*/
  void v2cAssign( 新v2c& v, int 下标一, int 下标二, 新c c ){
    v.assign( 下标一, 新vc( 下标二, c ) );
  }/*void*/
   /*vs*/
  void vsAssign( 新vs& v, int 下标一, 新s s ){
    v.assign( 下标一, s );
  }/*void*/
  void v2sAssign( 新v2s& v, int 下标一, int 下标二, 新s s ){
    v.assign( 下标一, 新vs( 下标二, s ) );
  }/*void*/
  /**///resize
  /*getv删除多余元素,v删除多余元素*/
  void viResize( 新vi& v, int 下标一, 新i i ){
    v.resize( 下标一, i );
  }/*void*/
  void v2iResize( 新v2i& v, int 下标一, int 下标二, 新i i ){
    v.resize( 下标一, 新vi( 下标二, i ) );
  }/*void*/
  void vsResize( 新vs& v, int 下标一, 新s s ){
    v.resize( 下标一, s );
  }/*void*/
  void v2sResize( 新v2s& v, int 下标一, int 下标二, 新s s ){
    v.resize( 下标一, 新vs( 下标二, s ) );
  }/*void*/
  /**///c在<前置cout>里面
  /**///简写`STRING操作
  void sAppendS(/*输出*/新s& s /*输入*/, 新s s1){
    s.append(s1);
  }/*void*/
  void sAppendS(/*输出*/新s& s /*输入*/, 新s s1, 新s s2){
    s.append(s1).append(s2);
  }/*void*/
  void sAppendS(/*输出*/新s& s /*输入*/, 新s s1, 新s s2, 新s s3){
    s.append(s1).append(s2).append(s3);
  }/*void*/
  void sAppendVs(/*输入输出*/新s& s /*输入*/, 新vs& v){
    for( size_t 行 = 0; 行 < v.size(); 行++ ){
      s.append(v[行]);
    }/*for*/
  }/*void*/
  void sAppendVs(/*输入输出*/新s& s /*输入*/, 新s s间隔, 新vs& v){
    for( size_t 行 = 0; 行 < v.size(); 行++ ){
      s.append(s间隔).append(v[行]);
    }/*for*/
  }/*void*/
  void sAppendVs(/*输入输出*/新s& s /*输入*/, int for次数, 新vs& v){
    for( size_t 行 = 0; 行 < v.size(); 行++ ){
      s.append(v[行]);
    }/*for*/
  }/*void*/
  void sAppendVs(/*输入输出*/新s& s /*输入*/, int for次数,新s s间隔, 新vs& v){
    for( size_t 行 = 0; 行 < v.size(); 行++ ){
      s.append(s间隔).append(v[行]);
    }/*for*/
  }/*void*/
    void s复制到cp/*copyTOcp*/( string& s输入, int iS开头下标, int iS末尾下标,/*输出*/新cp cp ){
    s输入.copy( cp, iS开头下标, iS末尾下标-iS开头下标+1 );
  }/*void*/
  void sCopyTOcp( string& s输入, int iS开头下标, int iS末尾下标,/*输出*/新cp cp ){ s复制到cp( s输入, iS开头下标, iS末尾下标, cp ); }/*void*/
  /**///▬0▬数字运算`杂项▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*等于0或1*/
  void 互换01( int& 数字 ){
    if( 数字==1 ){
      数字 = 0; retu;
    }
    if( 数字==0 ){
      数字 = 1; retu;
    }
  }
  int 加( int& 数字, int 值 ){
    retu 数字+值;
  }
  int 减( int& 数字, int 值 ){
    retu 数字-值;
  }
  int 乘( int& 数字, int 值 ){
    retu 数字* 值;
  }
  int 除以( int& 数字, int 值 ){
    retu 数字/值;
  }
  vodi 等于( int& 数字, int 值 ){
    数字 = 值;
  }
  /**///2个数字`比大小
  void if2大于1THEN1等于2( int i1, int i2 ){/*getif2大于1THEN1等于2,if2大于1THEN1等于2,if2大于1then1等于2,if2大于1则1等于2*/
    if( i2>i1 ){
      i1 = i2;
    }/*if*/
  }/*void*/
  /**///3个数字`比大小
  int ret三数挑最大( int 数1, int 数2, int 数3 ){
    //>数1数2数3挑最大的, if两次. 排序要if3次
    int 最大的;
    最大的 = 数1>数3 ? 数1 : 数3;
    最大的 = 最大的>数2 ? 最大的 : 数2;
    return 最大的;
  }
  vector<int> ret三数排序_大到小( int 数1, int 数2, int 数3 ){
    vector<int> 从大到小( 3, 0 );
    //>数1数2数3挑最大的, if两次. 排序要if3次
    if( 数1>数3 ){ //>数1>数3
      if( 数1>数2 ){//数1>数2 -> 数1大
        从大到小[0] = 数1;
        if( 数3>数2 ){
          从大到小[1] = 数3;
          从大到小[2] = 数2;
        } else{ //2>3
          从大到小[1] = 数2;
          从大到小[2] = 数3;
        }/*else*/
        return 从大到小;
      } else{// >数1 < 数2
        if( 数2>数3 ){ //>数2>数1>数3; 数2>数3
          从大到小[0] = 数2;
          从大到小[1] = 数1;
          从大到小[2] = 数3;
        } else{ //数2<数3 -> 数3>数2>数1; 
          从大到小[0] = 数3;
          从大到小[1] = 数2;
          从大到小[2] = 数1;
        }/*else*/
        return 从大到小;
      }/*else*/
    } else{ //>数3>数1
      if( 数3>数2 ){//>数3 > 数2; 3大
        从大到小[0] = 数3;
        if( 数2>数1 ){ //数3>数1;数2>数1;数2<数3
          从大到小[1] = 数2;
          从大到小[2] = 数1;
        } else{ //数3>数1;数2<数3;数1>2;
          从大到小[1] = 数1;
          从大到小[2] = 数2;
        }/*else*/
        return 从大到小;
      } else{//>数2>数3>数1
        从大到小[0] = 数2;
        从大到小[1] = 数3;
        从大到小[2] = 数1;
        return 从大到小;
      }/*else*/
    }/*else*/
  }/*vector<int>*/
  vector<int> ret三数排序_小到大( int 数1, int 数2, int 数3 ){
    vector<int> vi从小到大( 3, 0 );
    //>数1数2数3挑最大的, if两次. 排序要if3次
    if( 数1>数3 ){ //>数1>数3
      if( 数1>数2 ){//数1>数2 -> 数1大
        vi从小到大[2] = 数1;
        if( 数3>数2 ){
          vi从小到大[1] = 数3;
          vi从小到大[0] = 数2;
        } else{ //2>3
          vi从小到大[1] = 数2;
          vi从小到大[0] = 数3;
        }/*else*/
        return vi从小到大;
      } else{// >数1 < 数2
        if( 数2>数3 ){ //>数2>数1>数3; 数2>数3
          vi从小到大[2] = 数2;
          vi从小到大[1] = 数1;
          vi从小到大[0] = 数3;
        } else{ //数2<数3 -> 数3>数2>数1; 
          vi从小到大[2] = 数3;
          vi从小到大[1] = 数2;
          vi从小到大[0] = 数1;
        }/*else*/
        return vi从小到大;
      }/*else*/
    } else{ //>数3>数1
      if( 数3>数2 ){//>数3 > 数2; 3大
        vi从小到大[2] = 数3;
        if( 数2>数1 ){ //数3>数1;数2>数1;数2<数3
          vi从小到大[1] = 数2;
          vi从小到大[0] = 数1;
        } else{ //数3>数1;数2<数3;数1>2;
          vi从小到大[1] = 数1;
          vi从小到大[0] = 数2;
        }/*else*/
        return vi从小到大;
      } else{//>数2>数3>数1
        vi从小到大[2] = 数2;
        vi从小到大[1] = 数3;
        vi从小到大[0] = 数1;
        return vi从小到大;
      }/*else*/
    }/*else*/
  }/*vector<int>*/
  int ret数是否在两者间_213( int 数1, int 数2, int 数3 ){
    if( 数1<数2 ){
      if( 数1>数3 ){ //2>1>3
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_213_大等于( int 数1, int 数2, int 数3 ){
    if( 数1<=数2 ){
      if( 数1>=数3 ){ // 213
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_312_小于( int 数1, int 数2, int 数3 ){
    if( 数1>数2 ){
      if( 数1<数3 ){ //3>1>2
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_312_小等于( int 数1, int 数2, int 数3 ){
    if( 数1>=数2 ){
      if( 数1<=数3 ){ //3>=1>=2
        return 1;
      }
    }
    return 0;
  }
  int ret数是否在两者间_大于( int 数1, int 数2, int 数3 ){
    ret数是否在两者间_213( 数1, 数2, 数3 );
  }
  int ret两数是否相同( int uu1, int uu2, int 差的最小值 ){
    //正数
    if( abs( uu1-uu2 )<差的最小值 ){
      return 1; //相同
    }
    return 0; //不相同
  }
  void getv排序从小到大( 新vi vi ){/*正排序*/
    sort( vi.begin( ), vi.end( ) );
  }/*void*/
  void getv排序从大到小( 新vi vi ){/*逆排序*/
    sort( vi.rbegin( ), vi.rend( ) );
  }/*void*/
  /**///比值
  /*ret保留小数*/
  float ret计算比值( int uu, int uu2 ){
    ///if (uu == 0) {
    ///	return 0;
    ///}
    /*分子不能=零*/
    if( uu2==0 ){
      return 0;
    }
    return static_cast<float>(uu)/uu2;
  }
  int ret计算比值( int uu, int uu2, int 分子乘 ){
    if( uu2==0 ){
      return 0;
    }
    return (uu*分子乘)/uu2;
  }
  float ret计算比值_大除以小( int uu, int uu2 ){
    if( uu2==0 ){
      return 0;
    }
    return uu>uu2 ? static_cast<float>(uu)/uu2 : static_cast<float>(uu2)/uu;
  }
  /*ret整数(*/
  int ret计算比值i( int uu, int uu2 ){
    if( uu2==0 ){
      return 0;
    }
    return uu/uu2;
  }
  int ret计算比值i_大除以小( int uu, int uu2 ){
    if( uu2==0 ){
      return 0;
    }
    return uu>uu2 ? uu/uu2 : uu2/uu;
  }
  void get比值_值除以总和(/*输入*/新vi vi,/*输出*/新vf vf比值 ){
    int iVf比值的下标ζ输出 = 0, i总和 = 0;
    for( int i : vi ){/*总和=v的值`相加*/
      i总和 += i;
    }/*for*/
    for( int i : vi ){
      vf比值[iVf比值的下标ζ输出] = i/i总和;
    }/*for*/
  }/*void*/
  void get比值_值除以总和THENc(/*输入*/新vi vi,/*输出*/新vf vf比值 ){
    int iVf比值的下标ζ输出 = 0, i总和 = 0;
    for( int i : vi ){/*总和=v的值`相加*/
      i总和 += i;
    }/*for*/
    ///i总和/=10;
    for( int i : vi ){
      /*v[一]=f比值; 一++;*/
      vf比值[iVf比值的下标ζ输出] = i/(float)i总和; iVf比值的下标ζ输出++;
    }/*for*/iVf比值的下标ζ输出 = 0;
    /**///cout
    coutsf( "比值_值除以总和 v[0]={} \n", vf比值[0] );
    coutsf( "比值_值除以总和 v[2]={} \n", vf比值[2] );
    coutsf( "像素的总和={} \n", i总和 );
    coutsf( "比值_值除以总和{} \n", "{" );
    for( float f : vf比值 ){
      coutsf( "{}  ", f );
    }/*for*/
    coutsf( "\n" );
    coutsf( "{} \n", "}" );
  }/*void*/
  vodi getCOORD差(/*输入*/COORD& C1, COORD& C2,/*输出*/COORD& C差 ){
    C差.X = C1.X-C2.X;
    C差.Y = C1.Y-C2.Y;
  }/*vodi*/
  /**///▬窗口▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  HWND ret前台( ){
    retu GetForegroundWindow( );
  }/*HWND*/
  HWND ret窗口hwnd( LPCSTR lpClassName, LPCSTR lpWindowName ){
    retu  FindWindowA( lpClassName, lpWindowName );
  }/*HWND*/
  int ret是否聚焦( HWND h对比窗口 ){
    if( GetForegroundWindow( )==h对比窗口 ){
      retu 1;
    }
  }/*int*/
  void get窗口Rect(/*输入*/HWND 窗口hwnd,/*输出*/tagRECT& 窗口Rect ){
    LPRECT 窗口Rect_p = &窗口Rect;
    GetWindowRect( 窗口hwnd, 窗口Rect_p );
    窗口Rect_p = nullptr;
  }/*void*/
  void getclassName(/*输入*/HWND 窗口hwnd,/*输出*/LPTSTR& 窗口className ){
    GetClassName( 窗口hwnd, 窗口className, 1400 );
  }/*void*/
  void get窗口hwnd( LPCSTR lpClassName, LPCSTR lpWindowName, /*输出*/HWND& hwnd ){
    hwnd = FindWindowA( lpClassName, lpWindowName );
  }/*void*/
   /**///▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬


};
#endif