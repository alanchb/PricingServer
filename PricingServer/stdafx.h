// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"


#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
// Windows ͷ�ļ�: 
#include <windows.h>
//#include <vcclr.h>

/*********************************����ڴ�й¶*********************************/
//#define _CRTDBG_MAP_ALLOC	
#include <stdlib.h>
//#include <crtdbg.h>

//#ifdef _DEBUG
//#ifndef DBG_NEW
//#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
//#define new DBG_NEW 
//#endif
//#endif  // _DEBUG
/*********************************����ڴ�й¶*********************************/

#pragma warning(disable:4603)
#pragma warning(disable:4793)
#pragma warning(disable:4275)
#pragma warning(disable:4251)
#pragma warning(disable:4190)
#pragma warning(disable:4996)	//������ -D_SCL_SECURE_NO_WARNINGS ���⣬���ұ������#include "ThreadPool.h"֮ǰ

#include <UtilTool.h>

#ifdef _DEBUG
//#pragma comment(lib,"..\\debug\\QTS_TradeBase.lib")
//#pragma comment(lib,"..\\debug\\ST_StrategyBase.lib")
#pragma comment(lib,"libprotobufd.lib")
#pragma comment(lib,"libprotobuf-lited.lib")
#pragma comment(lib,"libprotocd.lib")
#else
////#pragma comment(lib,"..\\release\\QTS_TradeApiFutCTP.lib")
////#pragma comment(lib,"..\\release\\QTS_TradeApiStockJZ.lib")
//#pragma comment(lib,"..\\release\\QTS_TradeBase.lib")
//#pragma comment(lib,"..\\release\\ST_StrategyBase.lib")
#pragma comment(lib,"libprotobuf.lib")
#pragma comment(lib,"libprotobuf-lite.lib")
#pragma comment(lib,"libprotoc.lib")
#endif

#pragma comment(lib,"UtilTool.lib")
#pragma comment(lib,"libopenblas.lib")

#pragma comment(lib,"libzmq.lib")
#pragma comment(lib,"czmq.lib")
//#pragma comment(lib,"czmqpp.lib")




// TODO:  �ڴ˴����ó�����Ҫ������ͷ�ļ�
