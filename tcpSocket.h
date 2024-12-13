#ifndef _TCPSOCKET_H_
#define _TCPSOCKET_H_
#include<WinSock2.h>//windows平台网络库头文件
#include <Ws2tcpip.h> 
#include<iostream>
#pragma comment(lib,"ws2_32.lib")//库文件

#define PORT 8888
#define err(A) cout<<A<<WSAGetLastError()<<endl
//打开网络库
bool init_Socket();

//关闭网络库
bool close_Socket();

//创建服务器socket
SOCKET createServerSocket();

//创建客户端socket
SOCKET createClientSocket(const char* ip);

#endif

