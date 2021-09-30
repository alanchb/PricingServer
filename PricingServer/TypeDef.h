#pragma once

#include <czmq.h>
#include <vector>
#include "../ProtoBufferFile/cpp/PackageHead.pb.h"

using namespace std;
using namespace Proto::Package;

typedef long long LL;
typedef vector<zframe_t*> ZMQ_ADDR;

struct TRequestInfo
{
	//请求的socket
	void* sock = NULL;
	//请求的地址信息
	ZMQ_ADDR* pAddrFrame = NULL;
	//请求的包头
	PackageHead* pHead = NULL;
	//请求的包内容帧
	zframe_t* pDataFrame = NULL;

	long t = 0;
};

struct TradeReq
{
	zmsg_t* msg;
	FunctionCode funcCode;
	zframe_t* pDataFrame;
};

struct  TSendMsg
{
	//发送消息的socket
	void* sock = NULL;
	//对方的地址信息
	ZMQ_ADDR* pAddrFrame = NULL;
	//发送的包头
	PackageHead* pHead = NULL;
	//发送的内容
	google::protobuf::MessageLite* pData = NULL;
};
