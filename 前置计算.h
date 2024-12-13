#pragma once
#ifndef 前置计算_H 
#define 前置计算_H

#include  <E:\lib\头文件 c++.h>
#include  <E:\lib\define.h>
#include  <E:\lib\前置变量.h>

class 前置计算{
public:
  /**///▬简写`新建▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*?这些用不了, 用<前置计算不需要前置变量>里面的函数*//*vi*/
  void viAssign(新vi& v, 下标info 下标inf, 新i i){
    v.assign(下标inf.一, i);
  }/*void*/
  void v2iAssign(新v2i& v, 下标info 下标inf, 新i i){
    v.assign(下标inf.一, 新vi(下标inf.二, i));
  }/*void*/
  /*vf*/
  void vfAssign(新vf& v, 下标info 下标inf, 新f f){
    v.assign(下标inf.一, f);
  }/*void*/
  void v2fAssign(新v2f& v, 下标info 下标inf, 新f f){
    v.assign(下标inf.一, 新vf(下标inf.二, f));
  }/*void*/
  /*vc*/
  void vcAssign(新vc& v, 下标info 下标inf, 新c c){
    v.assign(下标inf.一, c);
  }/*void*/
  void v2cAssign(新v2c& v, 下标info 下标inf, 新c c){
    v.assign(下标inf.一, 新vc(下标inf.二, c));
  }/*void*/
  /*vs*/
  void vsAssign(新vs& v, 下标info 下标inf, 新s s){
    v.assign(下标inf.一, s);
  }/*void*/
  void v2sAssign(新v2s& v, 下标info 下标inf, 新s s){
    v.assign(下标inf.一, 新vs(下标inf.二, s));
  }/*void*/
  /**///▬v的格式转换,位置迁移▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  void getv2i每行的0TOvi(/*输入*/新v2i& v2i,/*输出*/新vi& vi){/*getV2i每行的0TOvi*/
    下标info vi的行info;
    /*?这个=vec out*/
    /*两种一样*/
    for( 新vi a : v2i ){
      vi[vi的行info.一] = a[0]; vi的行info.一++;
    }/*for*/vi的行info.一 = 0;
    ///for( vi的行info.一 = 0; vi的行info.一<v2i.size(); vi的行info.一++ ){
    ///	vi[vi的行info.一] =v2i[vi的行info.一][0] ;vi的行info.一++;
    ///}
  }/*void*/

};
#endif