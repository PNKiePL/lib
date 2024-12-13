#pragma once
#ifndef 前置cout_H 
#define 前置cout_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>

class 前置cout{
public:
  void cCOORD( ){}/*void*/
  /**///c多个`一样的值
  void cs( 新s 输入, int 数量 ){
    for( size_t i = 0; i<数量; i++ ){
      cout<<输入;
    }/*for*/
  }/*void*/
  void ci( 新i 输入, int 数量 ){
    for( size_t i = 0; i<数量; i++ ){
      cout<<输入;
    }/*for*/
  }/*void*/
  /**///cvecSize
  /*没有`回车*/
  void cvecSize( 新vi vi ){
    coutsf( "一={}", vi.size( ) );
  }/*void*/
  void cvecSize( 新v2i v2i ){
    coutsf( "一={},二={}", v2i.size( ), v2i[0].size( ) );
  }/*void*/
  void cvecSize( 新v3i v3i ){
    coutsf( "一={},二={},三={}", v3i.size( ), v3i[0].size( ), v3i[0][0].size( ) );
  }/*void*/
  void cvecSize( 新v4i v4i ){
    coutsf( "一={},二={},三={},四={}", v4i.size( ), v4i[0].size( ), v4i[0][0].size( ), v4i[0][0][0].size( ) );
  }/*void*/
  void cvecSize( 新v5i v5i ){
    coutsf( "一={},二={},三={},四={},五={}", v5i.size( ), v5i[0].size( ), v5i[0][0].size( ), v5i[0][0][0].size( ), v5i[0][0][0][0].size( ) );
  }/*void*/
  void cvecSize( 新vs v ){
    coutsf( "一={}{}", v.size( ) );
  }/*void*/
  void cvecSize( 新v2s v ){
    coutsf( "一={},二={}", v.size( ), v[0].size( ) );
  }/*void*/
  /*s+{+内容+}+回车*/
  void cvecSize( 新s s, 新vi vi ){
    coutsf( "{}{} 一={}{}", s, ".size{", vi.size( ), " }\n" );
  }/*void*/
  void cvecSize( 新s s, 新v2i v2i ){
    coutsf( "{}{} 一={},二={}{}", s, ".size{", v2i.size( ), v2i[0].size( ), " }\n" );
  }/*void*/
  void cvecSize( 新s s, 新v3i v3i ){
    coutsf( "{}{} 一={},二={},三={}{}", s, ".size{", v3i.size( ), v3i[0].size( ), v3i[0][0].size( ), " }\n" );
  }/*void*/
  void cvecSize( 新s s, 新v4i v4i ){
    coutsf( "{}{} 一={},二={},三={},四={}{}", s, ".size{", v4i.size( ), v4i[0].size( ), v4i[0][0].size( ), v4i[0][0][0].size( ), " }\n" );
  }/*void*/
  void cvecSize( 新s s, 新v5i v5i ){
    coutsf( "{}{} 一={},二={},三={},四={},五={}{}", s, ".size{", v5i.size( ), v5i[0].size( ), v5i[0][0].size( ), v5i[0][0][0].size( ), v5i[0][0][0][0].size( ), " }\n" );
  }/*void*/
  void cvecSize( 新s s, 新vs v ){
    coutsf( "{}{} 一={}{}", s, ".size{", v.size( ), " }\n" );
  }/*void*/
  void cvecSize( 新s s, 新v2s v ){
    coutsf( "{}{} 一={},二={}{}", s, ".size{", v.size( ), v[0].size( ), " }\n" );
  }/*void*/
  /**///cvec
  /*没有间隔, c(v[])*/
  void cvi( 新vi vi ){
    for( size_t i = 0; i < vi.size( ); i++ ){
      coutsf( "{}", vi[i] );
    }/*for*/
  }/*void*/
  void cvf( 新vf vf ){
    for( size_t i = 0; i < vf.size( ); i++ ){
      coutsf( "{}", vf[i] );
    }/*for*/
  }/*void*/
  void cvc( 新vc v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}", v[一] );
    }/*for*/
  }/*void*/
  void cvs( 新vs v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}", v[一] );
    }/*for*/
  }/*void*/
  /*自定义间隔, c(s,v[])*/
  void cvi( 新s s间隔, 新vi vi ){
    for( size_t i = 0; i < vi.size( ); i++ ){
      coutsf( "{}{}", s间隔, vi[i] );
    }/*for*/
  }/*void*/
  void cvf( 新s s间隔, 新vf vf ){
    for( size_t i = 0; i < vf.size( ); i++ ){
      coutsf( "{}{}", s间隔, vf[i] );
    }/*for*/
  }/*void*/
  void cvc( 新s s间隔, 新vc v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}{}", s间隔, v[一] );
    }/*for*/
  }/*void*/
  void cvs( 新s s间隔, 新vs v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}{}", s间隔, v[一] );
    }/*for*/
  }/*void*/
  /*没有间隔, for{ c(v[]) }*//*for次数`不检测*/
  void cvi( int for次数, 新vi v ){
    for( size_t i = 0; i < for次数; i++ ){
      coutsf( "{}", v[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvf( int for次数,新vf vf ){
    for( size_t i = 0; i < for次数; i++ ){
      coutsf( "{}", vf[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvc( int for次数,新vc v ){
    for( size_t 一 = 0; 一 < for次数; 一++ ){
      coutsf( "{}", v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvs( int for次数,新vs v ){
    for( size_t 一 = 0; 一 < for次数; 一++ ){
      coutsf( "{}", v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  /*自定义间隔, for{ c(s,v[]) }*/
  void cvi(int for次数, 新s s间隔, 新vi vi ){
    for( size_t i = 0; i < for次数; i++ ){
      coutsf( "{}{}", s间隔, vi[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvf(int for次数, 新s s间隔, 新vf vf ){
    for( size_t i = 0; i < for次数; i++ ){
      coutsf( "{}{}", s间隔, vf[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvc(int for次数, 新s s间隔, 新vc v ){
    for( size_t 一 = 0; 一 < for次数; 一++ ){
      coutsf( "{}{}", s间隔, v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvs(int for次数, 新s s间隔, 新vs v ){
    for( size_t 一 = 0; 一 < for次数; 一++ ){
      coutsf( "{}{}", s间隔, v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  /*没有间隔, for{ c(v[]) }*//*for次数`有检测*/
  void cvi_检测size( int for次数, 新vi v ){
    if( for次数<=v.size( ) ){
      for( size_t i = 0; i < for次数; i++ ){
        coutsf( "{}", v[i] );
      }/*for*/coutsf( "\n" );
    }/*if*/
  }/*void*/
  /*没有间隔, c( 下标=v[下标] )*/
  void cvi前加下标( 新vi v ){/*c下标ANDcvi*/
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}={}", i,v[i] );
    }/*for*/
  }/*void*/
  void cvf前加下标( 新vf v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}={}", i,v[i] );
    }/*for*/
  }/*void*/
  void cvc前加下标( 新vc v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}={}", i,v[i] );
    }/*for*/
  }/*void*/
  void cvs前加下标( 新vs v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}={}", i,v[i] );
    }/*for*/
  }/*void*/
  /*自定义间隔, c( s,下标=v[下标] )*/
  void cvi前加下标( 新s s间隔, 新vi v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}{}={}", s间隔, i,v[i] );
    }/*for*/
  }/*void*/
  void cvf前加下标( 新s s间隔, 新vf v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}{}={}", s间隔, i,v[i] );
    }/*for*/
  }/*void*/
  void cvc前加下标( 新s s间隔, 新vc v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}{}={}", s间隔, i,v[i] );
    }/*for*/
  }/*void*/
  void cvs前加下标( 新s s间隔, 新vs v ){
    for( size_t i = 0; i < v.size( ); i++ ){
      coutsf( "{}{}={}", s间隔, i,v[i] );
    }/*for*/
  }/*void*/
  /*没有间隔, c(v[])*/
  void cviEndl( 新vi vi ){
    for( size_t i = 0; i < vi.size( ); i++ ){
      coutsf( "{}", vi[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvfEndl( 新vf vf ){
    for( size_t i = 0; i < vf.size( ); i++ ){
      coutsf( "{}", vf[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvcEndl( 新vc v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}", v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvsEndl( 新vs v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}", v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
   /*自定义间隔, c(s,v[]) \n */
  void cviEndl( 新s s间隔, 新vi vi ){
    for( size_t i = 0; i < vi.size( ); i++ ){
      coutsf( "{}{}", s间隔, vi[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvfEndl( 新s s间隔, 新vf vf ){
    for( size_t i = 0; i < vf.size( ); i++ ){
      coutsf( "{}{}", s间隔, vf[i] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvcEndl( 新s s间隔, 新vc v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}{}", s间隔, v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cvsEndl( 新s s间隔, 新vs v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      coutsf( "{}{}", s间隔, v[一] );
    }/*for*/coutsf( "\n" );
  }/*void*/
  /**///cvec2
  /*后面有coutsf("\n");*/
  void cv2i( 新v2i v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}", v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2i( 新s s间隔, 新v2i v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}{}", s间隔, v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2f( 新v2f v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}", v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2f( 新s s间隔, 新v2f v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}{}", s间隔, v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2c( 新v2c v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}", v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2c( 新s s间隔, 新v2c v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}{}", s间隔, v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2s( 新v2s v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}", v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  void cv2s( 新s s间隔, 新v2s v ){
    for( size_t 一 = 0; 一 < v.size( ); 一++ ){
      for( size_t 二 = 0; 二 < v[一].size( ); 二++ ){
        coutsf( "{}{}", s间隔, v[一][二] );
      }/*for*/coutsf( "\n" );
    }/*for*/coutsf( "\n" );
  }/*void*/
  /**///cvec的一个元素`IFCS
  /*没有s*/
  void cvi的一个元素(/*输入*/新vi v, int 下标一 ){
    coutsf( "{}", v[下标一] );
  }/*void*/
  void cvf的一个元素(/*输入*/新vf v, int 下标一 ){
    coutsf( "{}", v[下标一] );
  }/*void*/
  void cvc的一个元素(/*输入*/新vc v, int 下标一 ){
    coutsf( "{}", v[下标一] );
  }/*void*/
  void cvs的一个元素(/*输入*/新vs v, int 下标一 ){
    coutsf( "{}", v[下标一] );
  }/*void*/
  /*自定义s*/
  void cvi的一个元素(/*输入*/新s s, 新vi v, int 下标一 ){
    coutsf( "{}{}", s, v[下标一] );
  }/*void*/
  void cvf的一个元素(/*输入*/新s s, 新vf v, int 下标一 ){
    coutsf( "{}{}", s, v[下标一] );
  }/*void*/
  void cvc的一个元素(/*输入*/新s s, 新vc v, int 下标一 ){
    coutsf( "{}{}", s, v[下标一] );
  }/*void*/
  void cvs的一个元素(/*输入*/新s s, 新vs v, int 下标一 ){
    coutsf( "{}{}", s, v[下标一] );
  }/*void*/
  /**///cvec2的一个元素`IFCS
  /*没有s*/
  void cv2i的一个元素(/*输入*/新v2i v, int 下标一, int 下标二 ){
    coutsf( "{}", v[下标一][下标二] );
  }/*void*/
  void cv2f的一个元素(/*输入*/新v2f v, int 下标一, int 下标二 ){
    coutsf( "{}", v[下标一][下标二] );
  }/*void*/
  void cv2c的一个元素(/*输入*/新v2c v, int 下标一, int 下标二 ){
    coutsf( "{}", v[下标一][下标二] );
  }/*void*/
  void cv2s的一个元素(/*输入*/新v2s v, int 下标一, int 下标二 ){
    coutsf( "{}", v[下标一][下标二] );
  }/*void*/
  /*有s**自定义s*/
  void cv2i的一个元素(/*输入*/新s s, 新v2i v, int 下标一, int 下标二 ){
    coutsf( "{}{}", s, v[下标一][下标二] );
  }/*void*/
  void cv2f的一个元素(/*输入*/新s s, 新v2f v, int 下标一, int 下标二 ){
    coutsf( "{}{}", s, v[下标一][下标二] );
  }/*void*/
  void cv2c的一个元素(/*输入*/新s s, 新v2c v, int 下标一, int 下标二 ){
    coutsf( "{}{}", s, v[下标一][下标二] );
  }/*void*/
  void cv2s的一个元素(/*输入*/新s s, 新v2s v, int 下标一, int 下标二 ){
    coutsf( "{}{}", s, v[下标一][下标二] );
  }/*void*/
  /**/ //▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

};
#endif
