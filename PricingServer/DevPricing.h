#pragma once

#include "TypeDef.h"
#include "../ProtoBufferFile/cpp/PackageHead.pb.h"
#include "../ProtoBufferFile/cpp/ProtoDevPricing.pb.h"

using namespace Proto::Package;
using namespace Proto::DevPricing;

class DevPricing
{
private:
	DevPricing()
	{}

	~DevPricing() 
	{}

public:
	static void DoPricingJob(void* sock, zmsg_t* msg);
	static void SendReply(TRequestInfo* pReqInfo, google::protobuf::MessageLite* pReplyData = NULL, int msgCode = 0, const string& msgText = "");

private:
	static void PricingJob(TRequestInfo* pReqInfo);
	static void PricingDevSnowball(TRequestInfo* pReqInfo, ProtoDevPricingReq* pPringPara);
	static void PricingDevBarrier(TRequestInfo* pReqInfo, ProtoDevPricingReq* pPringPara);
};

