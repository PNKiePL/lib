#include"tcpSocket.h"
#include<iostream>
#include<string>
#include <Ws2tcpip.h> 
using namespace std;
#define _WINSOCK_DEPRECATED_NO_WARNINGS
bool init_Socket()
{
	//windows socket async  异步套接字
	//请求版本，传出参数
	WSADATA wsadata;//WSADATA，一种数据结构。这个结构被用来存储被WSAStartup函数调用后返回的Windows Sockets数据。它包含Winsock.dll执行的数据。
	if (WSAStartup(MAKEWORD(2, 2), &wsadata) != 0){
		err("WSAStartup failed code ");
		return false;
	}
	return true;
}


bool close_Socket() {
	if (WSACleanup() != 0) {//关闭#pragma comment(lib,"ws2_32.lib")库文件
		err("WSACleanup failed code ");
		return false;
	}
	return false;
}
SOCKET createServerSocket(){
	//创建空的socket
	//参数1：地址协议  ipv4 ipv6   参数2：传输协议类型 流式套接字 数据包 参数3：具体某个传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET){
		err("Socket");
		return fd;
	}

	//绑定IP地址和端口号
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);//往往本地是大端，网络是小端
	cout << "请输入服务端接受ip号" << endl;
	string ipAccept;
	PCWSTR;
	cin >> ipAccept;
	addr.sin_addr.S_un.S_addr = InetPton(ipAccept.c_str());//绑定自己（服务端）的ip,只接受该ip的地址; 网路地址转化
	/*
	bind是服务端调用的函数，绑定的是服务端的IP，假设服务端有多个网卡，即会有多个IP，这个时候我们可以选择用bind绑定其中一个IP，那么服务端只接收该IP上某端口的数据。
	如果bind绑定的是INADDR_ANY，即表示所有发送到服务器的这个端口，不管是哪个网卡/哪个IP地址接收到的数据，都由这个服务端进程进行处理。
	*/


	if (bind(fd, (sockaddr*)&addr, sizeof(addr)) == SOCKET_ERROR){
		cout << "bind error" << endl;
		return false;
	}

	//监听
	listen(fd, 10);

	return fd;
}

SOCKET createClientSocket(const char* ip){
	//创建空的socket
	//参数1：地址协议  ipv4 ipv6   参数2：传输协议类型 流式套接字 数据包 参数3：具体某个传输协议
	SOCKET fd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
	if (fd == INVALID_SOCKET)
	{
		cout << "socket" << WSAGetLastError() << endl;
		return fd;
	}

	//绑定服务端的IP地址和端口号
	struct sockaddr_in addr;
	addr.sin_family = AF_INET;
	addr.sin_port = htons(PORT);//往往本地是大端，网络是小端
	addr.sin_addr.S_un.S_addr = inet_pton(AF_INET,ip,addr.sin_family,100);

	if (INVALID_SOCKET == connect(fd, (struct sockaddr*)&addr, sizeof(addr)))
	{
		err("connect");
		return false;
	}
	return fd;
}
