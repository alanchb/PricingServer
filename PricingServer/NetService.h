#pragma once

#include <czmq.h>
#include "TypeDef.h"

class NetService
{
private:
	NetService();
	~NetService();

public:
	static void Start();
	static void Stop();

	static void SendMsg(TSendMsg* pSendMsg);
	static int RecvRplyMsg(void* sock, PackageHead** pHead, byte** pData);
	static int RecvRplyMsg(void* sock, PackageHead** pHead, byte** pData, LONGLONG* t);

private:
	static void StartPricingServer();

	static void PricingServerThread(void* args, zctx_t* ctx, void* pipe);

private:
	static zctx_t* m_ctx;
	static zproxy_t* m_proxyPricingServer;

	static HANDLE m_eventStop;
};

