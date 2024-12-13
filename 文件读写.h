#pragma once
#ifndef WF_JM_DU_XX_CPP
#define WF_JM_DU_XX_CPP

#include<bitset>
#include<conio.h>
#include<cstdio>
#include <fstream>
#include<iostream>
#include<stdio.h>
#include <string>
#include<windows.h>
#include<E:/lib/文字读取.h>

class 文件读写{
public:
  文字读取 wfzi读取;
public:
	/**/ //▬简写▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬

	/**/ //▬作`文件目录, path▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
  /*输入{ path }, 输出{ vs{ path=s输入+sGet } };
  sGet=path内的(( _findfirst和_findnext )返回的sGet)*/
  void getpathTOvs_path接path( std::string s输入path, std::vector<std::string>& vs ){/*get(path后接path内的path)TOvs; get( path后接path内的path )TOvs*/
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    /*_findfirst(通惠符,info)*/
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      do{
        /*if 不是`这两种情况*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          /*!输出{ s输入+sGet }*/{
            s要pushb的.assign( s输入path );/*在s初始path后面`加上path*/
            if( wfzi读取.ifS最后一位是( s输入path, '/' ) == 1 ){/*s是文件夹,就应该有/*/
              s要pushb的.append( 一个文件的属性.name );
            } else{
              s要pushb的.append( "/" ).append( 一个文件的属性.name );
            }/*else*/
            vs.push_back( s要pushb的 );
          }/*s输入+sGet*/
        }/*else*/
      } while( _findnext( hFile, &一个文件的属性 ) == 0/*成功*/ );
      /*查找文件`结束了*/
      _findclose( hFile );
    }/*if*/
  }/*void*/
   /*输入{ 用/的path }, 输出{ vs{ sGet+s间隔 } };
   sGet=path内的(( _findfirst和_findnext )返回的sGet)*/
  void getpathTOvs( /*输入*/std::string s输入path, 新s s间隔/*在末尾*/, /*输出*/std::vector<std::string>& vs ){
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    /*_findfirst(通惠符,info)*/
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      do{
        /*if 不是`这两种情况*/
        /*todo 区分是文件还是文件夹,也就是加不加斜杠*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          /*!输出{ sGet }*/{
            s要pushb的.assign( "" );/*在s初始path后面`加上path*//*todo 其实能一次全部进一个s的,只要去掉这一句就行. 为什么?*/
            cout3("属性=",一个文件的属性.attrib, "\n");
            if( 一个文件的属性.attrib ){
              
            }/*if*/
            s要pushb的.append( 一个文件的属性.name );
            vs.push_back( s要pushb的 );
          }/*s输入+sGet*/
        }/*else*/
      } while( _findnext( hFile, &一个文件的属性 ) == 0/*成功*/ );
      /*查找文件`结束了*/
      _findclose( hFile );
    }/*if*/
  }/*void*/
  void cpath_finddata_t( /*输入*/std::string s输入path, 新s s间隔/*在末尾*/, /*输出*/std::vector<std::string>& vs ){
    intptr_t   /*句柄*/hFile = 0;
    struct _finddata_t /*一条path*/一个文件的属性;
    string s要pushb的 = "";/*只是初始化,没有意义*/
    /*_findfirst(通惠符,info)*/
    hFile = _findfirst( s要pushb的.assign( s输入path ).append( "/*" ).c_str( ), &一个文件的属性 );
    if( hFile != -1 ){
      do{
        /*if 不是`这两种情况*/
        /*todo 区分是文件还是文件夹,也就是加不加斜杠*/
        if( strcmp(/**/一个文件的属性.name, "." ) != 0 && strcmp( 一个文件的属性.name, ".." ) != 0 ){
          /*!输出{ sGet }*/{
            s要pushb的.assign( "" );/*在s初始path后面`加上path*//*todo 其实能一次全部进一个s的,只要去掉这一句就行. 为什么?*/
            cout3("属性=",一个文件的属性.attrib, "\n");
            /*todo*/
            cout3("name=",一个文件的属性.name, "\n");
            cout3("size=",一个文件的属性.size, "\n");
            cout3("time_access=",一个文件的属性.time_access, "\n");
            cout3("time_create=",一个文件的属性.time_create, "\n");
            cout3("time_write=",一个文件的属性.time_write, "\n");
            if( 一个文件的属性.attrib ){
              
            }/*if*/
            s要pushb的.append( 一个文件的属性.name );
            vs.push_back( s要pushb的 );
          }/*s输入+sGet*/
        }/*else*/
      } while( _findnext( hFile, &一个文件的属性 ) == 0/*成功*/ );
      /*查找文件`结束了*/
      _findclose( hFile );
    }/*if*/
  }/*void*/
	/**/ //▬新建`删除path▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	/**/ //新建
	auto 简写mkdir(string& 输入){
		_mkdir(输入.c_str());
	}
	auto 新建文件夹(string& 输入){
		简写mkdir(输入);
	}
	auto 新建path(string& 输入){
		简写mkdir(输入);
	}
	auto 新建文件_无法引用fst(fstream& 输入流存档, string path){ //?无法引用fst
		从头覆盖读写(输入流存档, path); //输入流存档<<path
		输入流存档.close();
	}
	auto 新建文件(string path){
		fstream fst1;
		从头覆盖读写(fst1, path);
		fst1.close();
	}
	/**/ //删除
	auto 简写rmdir(string& 输入){
		_rmdir(输入.c_str());
	}
	auto 删除path(string& 输入){
		简写rmdir(输入);
	}
	/*从头覆盖读写*/
	auto 清空(string path){/*https://blog.csdn.net/weixin_48721345/article/details/131851796 */
		///新建文件(path);
		ofstream truncateFile(path, ios::trunc);
		truncateFile.close();
	}
	/**/ //if
	/*不能读取=占用*/
	int 文件是否占用(string path){ //https://blog.csdn.net/fruitz/article/details/41624921>
		ifstream ifs读取(path); if( !ifs读取 ){ /*占用*/return 1;//或者抛出异常。
		} else{ return 0; }
	}
	/*1=是*/bool 文件是否存在_ifstream(string path){ ifstream f(path.c_str()); return f.good();/*没有发生任何错误的时候返回true。*/ } /*<https://blog.csdn.net/QLeelq/article/details/123360740>*/
	/*不存在-->新建*/
	int 没有就新建(string path){
		if( 文件是否存在_ifstream(path) == 0 ){
			/*不存在*/新建文件(path);
			retu 1;/*新建成功*/
		}
		retu 0;/*文件存在*/
	}
	int 是否是空文件(string path){
		ifstream ifs;
		新s s;
		从头读取(ifs, path);
		ifs >> s;
		if( s == "" ){
			ifs.close();
			retu 1;/*是空的*/
		}
		ifs.close();
		retu 0;/*不是*/
	}
	/**/ //▬读取文件▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	//这两个函数一起可以读取文件中某一特定行，行数line从1开始，Readline返回值为string类型 <https://blog.csdn.net/wq1psa78/article/details/103807227#:~:text=%E8%BF%99%E6%AE%B5%E4%BB%A3%E7%A0%81%E4%B8%BB%E8%A6%81%E5%8A%9F%E8%83%BD%3A%E2%80%83%20-%20%E8%AF%BB%E5%8F%96%E6%96%87%E4%BB%B6%E7%9A%84%E7%AC%ACline%E8%A1%8C%E6%95%B0%E6%8D%AE%2C%E8%BF%94%E5%9B%9Estring%3B%20%E4%BB%A3%E7%A0%81%E5%A6%82%E4%B8%8B%3A%2F%2F%E8%BF%99%E4%B8%A4%E4%B8%AA%E5%87%BD%E6%95%B0%E4%B8%80%E8%B5%B7%E5%8F%AF%E4%BB%A5%E8%AF%BB%E5%8F%96%E6%96%87%E4%BB%B6%E4%B8%AD%E6%9F%90%E4%B8%80%E7%89%B9%E5%AE%9A%E8%A1%8C%EF%BC%8C%E8%A1%8C%E6%95%B0line%E4%BB%8E1%E5%BC%80%E5%A7%8B%EF%BC%8CReadline%E8%BF%94%E5%9B%9E%E5%80%BC%E4%B8%BAstring%E7%B1%BB%E5%9E%8Bint%20CountLines%20%28string%20filename%29,%7B%20ifstream%20ReadFile%3B%20int%20n%3D0%3B%20string%20tmp%3B..._c%2B%2B%20%E6%8C%87%E5%AE%9A%E7%AC%AC%E5%87%A0%E8%A1%8C%E6%96%87%E4%BB%B6%E8%BF%9B%E8%A1%8C%E8%AF%BB%E5%86%99>
	int ret行数(string path){
		ifstream 读取文件; int 行数 = 0; string tmp; 读取文件.open(path.c_str());//ios::in 表示以只读的方式读取文件
		/*文件打开失败:返回0*/if( 读取文件.fail() ){ return 0; } /*文件存在*/else{
			while( getline(读取文件, tmp, '\n') ){ 行数++; }
			读取文件.close();
			return 行数;
		}
	}
	string 读取第几行(string path, int 第几行){
		int 最大行数, i = 0;
		string strTemp;
		fstream file;
		file.open(path.c_str());
		最大行数 = ret行数(path);

		if( 第几行 <= 0 ){
			return "Error 1: 行数错误，不能为0或负数。";
		}
		if( file.fail() ){
			return "Error 2: 文件不存在。";
		}
		if( 第几行 > 最大行数 ){
			return "Error 3: 行数超出文件长度。";
		}
		/*一直getline()*/while( getline(file, strTemp) && i < 第几行 - 1 ){ i++; }
		file.close();
		return strTemp;
	}
	/**/ //下10个`是一个功能
	/*fs>>一个str, 在"s结果"后面追加, 匹配成功==结束*/
	void get读取到匹配(fstream& fs, string s结果, string 连续匹配词1){
		string s读取;
		while( 1 ){
			fs >> s读取;
			/*连续匹配1词*/if( s读取 == 连续匹配词1 ){
				retu;
			}
			/*未终止*/s结果 += s读取;
		}/*while()结束*/
	}
	string ret读取到匹配(fstream& fs, string 连续匹配词1){
		string s结果 = "";
		string s读取 = "";
		while( 1 ){
			fs >> s读取;
			/*连续匹配1词*/if( s读取 == 连续匹配词1 ){
				retu s结果;
			}
			/*未终止*/s结果 += s读取;
		}/*while()结束*/
	}
	void get读取到匹配(fstream& fs, string s结果, string 连续匹配词1, string 连续匹配词2){
		string s读取;
		while( 1 ){
			fs >> s读取;
			/*连续匹配2词*/if( s读取 == 连续匹配词1 ){
				/*匹配了-->终止*/fs >> s读取; if( s读取 == 连续匹配词2 ){
					return;
				}
				/*第2个不匹配-->s结果+=两个匹配词*/s结果 += 连续匹配词1;
			}
			/*未终止*/s结果 += s读取;
		}/*while()结束*/
	}
	string ret读取到匹配(fstream& fs, string 连续匹配词1, string 连续匹配词2){
		string s读取; string s结果;
		while( 1 ){
			fs >> s读取;
			/*连续匹配2词*/if( s读取 == 连续匹配词1 ){
				/*匹配了-->终止*/fs >> s读取; if( s读取 == 连续匹配词2 ){
					return s结果;
				}
				/*第2个不匹配-->s结果+=两个匹配词*/s结果 += 连续匹配词1;
			}
			/*未终止*/s结果 += s读取;
		}/*while()结束*/
	}
	void get读取到匹配(fstream& fs, string s结果, int 读取的最大次数, string 连续匹配词1, string 连续匹配词2){
		string s读取;
		for( size_t 读取的次数 = 0; 读取的次数 <= 读取的最大次数; 读取的次数++ ){
			fs >> s读取;
			/*连续匹配2词*/if( s读取 == 连续匹配词1 ){
				/*匹配了-->终止*/fs >> s读取; if( s读取 == 连续匹配词2 ){
					return;
				}
				/*第2个不匹配-->s结果+=两个匹配词*/s结果 += 连续匹配词1;
			}
			/*未终止*/s结果 += s读取;
		}/*for()结束*/
	}
	/*结束的标记="WfDhJxWz",s不+ta,返回str; 读取-->判断-->s+=s*/
	void get读取到结束(fstream& fs, string s结果){
		string s读取;
		while( 1 ){
			fs >> s读取;
			if( s读取 == /*结束的标记*/"WfDhJxWz" ){
				retu;
			}
			/*未终止*/s结果 += s读取;
		}/*while()结束*/
	}
	string ret读取到结束(fstream& fs){
		string s读取 = ""; string s结果 = "";
		while( 1 ){
			fs >> s读取;
			if( s读取 == /*结束的标记*/"WfDhJxWz" ){
				retu s结果;
			}
			/*未终止*/s结果 += s读取;
		}/*while()结束*/
	}
	void get读取到结束(fstream& fs, string s结果, int 读取的最大次数){
		string s读取;
		for( size_t 读取的次数 = 0; 读取的次数 <= 读取的最大次数; 读取的次数++ ){
			fs >> s读取;
			if( s读取 == /*结束的标记*/"WfDhJxWz" ){
				retu;
			}
			/*未终止*/s结果 += s读取;
		}/*for()结束*/
	}
	/*读取-->判断; 返回0/1*/
	int get读取and对比(fstream& fs, string s读取, string 匹配词1){
		fs >> s读取;
		/*一样*/if( s读取 == 匹配词1 ){
			retu 1;
		}
		///*用不到这个*/if (s读取 == /*终止了*/"WfDhJxWz") { retu 0; }
		/*不一样*/retu 0;
	}
	int get读取and对比(fstream& fs, string s读取, string 连续匹配词1, string 连续匹配词2){
		fs >> s读取;
		/*对比1*/if( s读取 == 连续匹配词1 ){
			/*一样*/fs >> s读取; /*对比2*/if( s读取 == 连续匹配词2 ){
				/*一样*/retu 1;
			}
		}
		/*不一样*/retu 0;
	}
	/*fs>>两个str*/
	int get读取and对比(fstream& fst, string s读取, string s读取2, string 连续匹配词1, string 连续匹配词2){
		fst >> s读取;
		/*对比1*/if( s读取 == 连续匹配词1 ){
			/*一样*/fst >> s读取2; /*对比2*/if( s读取 == 连续匹配词2 ){
				/*一样*/retu 1;
			}
		}
		/*不一样*/retu 0;
	}

	/**/ //▬附加功能▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬▬
	void 例子_读取s(){
		fstream fs; string s读取; string s读取2; int 当前读取词数; int 最大读取词数; int 最大行数;
		从头读取(fs, R"(C:\)");
		while( 当前读取词数<最大读取词数 ){
			fs >> s读取;当前读取词数++;
		}/*while*/
	}/*void*/
};

//[a.open(b, ios::][a-z]{0,8}[);] 

#endif
