#include "stdafx.h"
#include "PricingSnowBall.h"  //必须位于DevPricing.h前面，否则会报arma_str中snprintf错误，可能是arma和zmq冲突
#include "PricingBarrier.h"
#include "DevPricing.h"
#include "NetService.h"
#include "ProtoBufferHelper.h"
#include "StringHelper.h"
#include "Log.h"
#include "Util.h";

#include "../ProtoBufferFile/cpp/ProtoDevPricing.pb.h"

using namespace Proto::DevPricing;
using namespace UtilTool;

void DevPricing::DoPricingJob(void* sock, zmsg_t* msg)
{
	ZMQ_ADDR addrFrame;
	zframe_t *f = NULL;
	f = zmsg_first(msg);
	while (zframe_size(f) != 0)	//发现第一个空帧，退出循环
	{
		addrFrame.push_back(f);
		f = zmsg_next(msg);
	}

	zframe_t* pfHeader = zmsg_next(msg);	//空帧后为包头
	zframe_t* pfContent = zmsg_next(msg);	//包头后为内容

	PackageHead head;
	if (ProtoBufferHelper::ParseToObject(&head, pfHeader))
	{
		TRequestInfo req;
		req.sock = sock;
		req.pAddrFrame = &addrFrame;
		req.pHead = &head;
		req.pDataFrame = pfContent;
		switch (head.functioncode())
		{
		case FunctionCode::DevPricing:
			MYLOG.WriteLog("---DevPricing---");
			PricingJob(&req);
			break;

		default:
			SendReply(&req);
			break;
		}
	}
}

void DevPricing::SendReply(TRequestInfo* pReqInfo, google::protobuf::MessageLite* pReplyData /*= NULL*/, int msgCode /*= 0*/, const string& msgText /*= ""*/)
{
	PackageHead head;
	head.set_packagetype(Reply);
	head.set_functioncode(pReqInfo->pHead->functioncode());
	head.set_messagecode(msgCode);
	if (msgText != "")
		head.set_messagetext(UtilTool::StringHelper::AsciiToUtf8String(msgText));
	if (pReqInfo->pHead->customtext() != "")
		head.set_customtext(UtilTool::StringHelper::AsciiToUtf8String(pReqInfo->pHead->customtext()));

	//测试用
	//char szBuf[64];
	//long t1 = HighPreciseTickCounter::GetMicroSecCounter();
	//sprintf_s(szBuf, "%ld", t1);
	//head.set_customtext(szBuf);

	TSendMsg sendMsg;
	sendMsg.sock = pReqInfo->sock;
	sendMsg.pAddrFrame = pReqInfo->pAddrFrame;
	sendMsg.pHead = &head;
	sendMsg.pData = pReplyData;

	//t1 = UtilTool::HighPreciseTickCounter::GetMicroSecCounter();
	NetService::SendMsg(&sendMsg);
	//long t2 = UtilTool::HighPreciseTickCounter::GetMicroSecCounter();
	//sprintf_s(szBuf, "【%d】发送耗时:%.3fms", head.functioncode(), (t2 - t1) / (double)1000);
	//MessageData::Add(szBuf);
}

void DevPricing::PricingJob(TRequestInfo* pReqInfo)
{
	ProtoDevPricingReq prcPara;
	if (ProtoBufferHelper::ParseToObject(&prcPara, pReqInfo->pDataFrame))
	{ 
		switch (prcPara.dev_type())
		{
		case SnowBall:
			cout <<endl<< Util::GetDateTimeStr() << " " << "Recv DevPricing Request: SnowBall" << endl;
			PricingDevSnowball(pReqInfo, &prcPara);
			break;
		case Barrier:
			cout <<endl<< Util::GetDateTimeStr() << " " << "Recv DevPricing Request: Barrier" << endl;
			PricingDevBarrier(pReqInfo, &prcPara);
			break;
		default:
			break;
		}
	}
}

void DevPricing::PricingDevSnowball(TRequestInfo* pReqInfo, ProtoDevPricingReq* pPricingPara)
{
	auto para = pPricingPara;
	PricingSnowBall ps(para->s0(),
		para->duration(),
		para->start_obsv_date(),
		para->expected_ret(),
		para->volatility(),
		para->riskfree_rate(),
		para->knockout_ratio(),
		para->knockin_ratio(),
		para->knockout_return(),
		para->mc_samples(),
		para->s1(), 
		para->year_days(),
		para->is_knockin());

	auto ret = ps.MCValue();
	ProtoDevPricingRsp rsp;
	rsp.set_dev_type(para->dev_type());
	rsp.set_value(ret.Value);
	rsp.set_value_max(ret.ValueMax);
	rsp.set_value_min(ret.ValueMin);
	rsp.set_avg_knockout_month(ret.AvgKnockOutMonth);
	SendReply(pReqInfo, &rsp);
}

void DevPricing::PricingDevBarrier(TRequestInfo* pReqInfo, ProtoDevPricingReq* pPricingPara)
{
	auto para = pPricingPara;
	PricingBarrier ps(para->s0(),
		para->duration(),
		para->expected_ret(),
		para->volatility(),
		para->riskfree_rate(),
		para->strike(),
		para->barrier(),
		para->barrier_type(),
		para->mc_samples(),
		para->s1(),
		para->year_days());

	auto ret = ps.MCValue();
	ProtoDevPricingRsp rsp;
	rsp.set_dev_type(para->dev_type());
	rsp.set_value(ret.Value);
	rsp.set_value_max(ret.ValueMax);
	rsp.set_value_min(ret.ValueMin);
	SendReply(pReqInfo, &rsp);
}
