#include "stdafx.h"
#include "PricingBarrier.h"
#include "PricingSnowBall.h"
#include <iostream>
#include <ThreadPool.h>
#include "NetService.h"
#include "DevPricing.h"
#include "ProtoBufferHelper.h"
#include "HighPreciseTickCounter.h"

using namespace std;
using namespace UtilTool;

zctx_t* NetService::m_ctx = NULL;
zproxy_t* NetService::m_proxyPricingServer = NULL;

HANDLE NetService::m_eventStop;

NetService::NetService()
{

}

NetService::~NetService()
{

}

void NetService::Start()
{
	m_eventStop = CreateEvent(0, true, false, NULL);

	m_ctx = zctx_new();
	StartPricingServer();
}

void NetService::Stop()
{
	if (m_eventStop)
	{
		SetEvent(m_eventStop);
		Sleep(30);
		CloseHandle(m_eventStop);
		m_eventStop = NULL;
	}

	if (m_proxyPricingServer)
	{
		zproxy_destroy(&m_proxyPricingServer);
		m_proxyPricingServer = NULL;
	}

	if (m_ctx)
	{
		zctx_destroy(&m_ctx);
		m_ctx = NULL;
	}
}

void NetService::StartPricingServer()
{
	void *frontend = zsocket_new(m_ctx, ZMQ_ROUTER);
	//string strUri = "tcp://*:36360";
	string strUri = "tcp://*:3600";
	assert(strUri != "");
	cout << strUri << endl;
	int rc = zsocket_bind(frontend, strUri.c_str());
	assert(rc != -1);

	void *backend = zsocket_new(m_ctx, ZMQ_DEALER);
	zsocket_bind(backend, "inproc://PricingServer"); 

	int thread_nbr;
	for (thread_nbr = 0; thread_nbr < 1; thread_nbr++)
		zthread_fork(m_ctx, PricingServerThread, NULL);

	m_proxyPricingServer = zproxy_new(m_ctx, frontend, backend);

	//PricingSnowBall ps(
	//	1.0,
	//	360 * 3,
	//	360,
	//	0.1,
	//	0.2,
	//	0.05,
	//	1.05,
	//	0.75,
	//	0.15,
	//	500000);
	//ps.MCValue();
	//PricingBarrier ps(120,
	//	365,
	//	0.1,
	//	0.35,
	//	0.05,
	//	110,
	//	100,
	//	Proto::DevPricing::EnumBarrierType::CDO,
	//	500000,
	//	0,
	//	365);
	//ps.MCValue();
}

void NetService::PricingServerThread(void* args, zctx_t* ctx, void* pipe)
{
	void *worker = zsocket_new(ctx, ZMQ_DEALER);
	zsocket_connect(worker, "inproc://PricingServer"); 

	cout << "Get in PricingServerThread" << endl;
	while (true) {
		zmsg_t *msg = zmsg_recv(worker);
		//cout << "Recv msg" << endl;
		if (msg)
		{
			DevPricing::DoPricingJob(worker, msg);
		}
		else
		{
			break;
		}
	}
}

void NetService::SendMsg(TSendMsg* pSendMsg)
{
	zmsg_t* msg = zmsg_new();
	if (pSendMsg->pAddrFrame)
	{
		vector<zframe_t*> addrFrame = *pSendMsg->pAddrFrame;
		for (unsigned int i = 0; i < addrFrame.size(); i++)
		{
			zmsg_add(msg, zframe_dup(addrFrame[i]));
		}
		zmsg_add(msg, zframe_new_empty());
	}

	byte* headBuf = NULL;
	if (pSendMsg->pHead)
	{
		headBuf = ProtoBufferHelper::SerializeToByteArray(pSendMsg->pHead);
		zmsg_add(msg, zframe_new(headBuf, pSendMsg->pHead->ByteSize()));
	}

	byte* dataBuf = NULL;
	if (pSendMsg->pData)
	{
		dataBuf = ProtoBufferHelper::SerializeToByteArray(pSendMsg->pData);
		zmsg_add(msg, zframe_new(dataBuf, pSendMsg->pData->ByteSize()));
	}
	
	//long st1 = UtilTool::HighPreciseTickCounter::GetMicoSecCounter();
	zmsg_send(&msg, pSendMsg->sock);
	//long st2 = UtilTool::HighPreciseTickCounter::GetMicoSecCounter();
	//sprintf_s(czBuf, "发送耗时:%.3fms", (st2 - st1) / (double)1000);
	//MessageData::Add(czBuf);

	if (headBuf) delete[] headBuf;
	if (dataBuf) delete[] dataBuf;
}

int NetService::RecvRplyMsg(void* sock, PackageHead** pHead, byte** pData)
{
	zmsg_t* msg = zmsg_recv(sock);

	byte* bHead = NULL;
	zframe_t* fHead = zmsg_first(msg);	//第一帧，为包头
	int headSize = zframe_size(fHead);
	if (headSize > 0)
	{
		*pHead = new PackageHead();
		ProtoBufferHelper::ParseToObject(*pHead, fHead);
	}
	else
	{
		*pHead = NULL;
	}

	int dataSize = 0;
	zframe_t* fData = zmsg_next(msg);	//第二帧，为包内容
	if (fData)
	{
		dataSize = zframe_size(fData);
		if (dataSize > 0)
		{
			*pData = new byte[dataSize];
			memcpy_s(*pData, dataSize, zframe_data(fData), dataSize);
		}
	}

	zmsg_destroy(&msg);

	return dataSize;
}

int NetService::RecvRplyMsg(void* sock, PackageHead** pHead, byte** pData, LONGLONG* t)
{
	zmsg_t* msg = zmsg_recv(sock);
	*t = UtilTool::HighPreciseTickCounter::GetMicroSecCounter();

	byte* bHead = NULL;
	zframe_t* fHead = zmsg_first(msg);	//第一帧，为包头
	int headSize = zframe_size(fHead);
	if (headSize > 0)
	{
		*pHead = new PackageHead();
		ProtoBufferHelper::ParseToObject(*pHead, fHead);
	}
	else
	{
		*pHead = NULL;
	}

	zframe_t* fData = zmsg_next(msg);	//第二帧，为包内容
	int dataSize = zframe_size(fData);
	*pData = new byte[dataSize];
	memcpy_s(*pData, dataSize, zframe_data(fData), dataSize);

	zmsg_destroy(&msg);

	return dataSize;
}
