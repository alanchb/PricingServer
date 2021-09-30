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
	//�����socket
	void* sock = NULL;
	//����ĵ�ַ��Ϣ
	ZMQ_ADDR* pAddrFrame = NULL;
	//����İ�ͷ
	PackageHead* pHead = NULL;
	//����İ�����֡
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
	//������Ϣ��socket
	void* sock = NULL;
	//�Է��ĵ�ַ��Ϣ
	ZMQ_ADDR* pAddrFrame = NULL;
	//���͵İ�ͷ
	PackageHead* pHead = NULL;
	//���͵�����
	google::protobuf::MessageLite* pData = NULL;
};
