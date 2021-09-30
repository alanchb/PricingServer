// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"


#define WIN32_LEAN_AND_MEAN             //  从 Windows 头文件中排除极少使用的信息
// Windows 头文件: 
#include <windows.h>
//#include <vcclr.h>

/*********************************检查内存泄露*********************************/
//#define _CRTDBG_MAP_ALLOC	
#include <stdlib.h>
//#include <crtdbg.h>

//#ifdef _DEBUG
//#ifndef DBG_NEW
//#define DBG_NEW new ( _NORMAL_BLOCK , __FILE__ , __LINE__ )
//#define new DBG_NEW 
//#endif
//#endif  // _DEBUG
/*********************************检查内存泄露*********************************/

#pragma warning(disable:4603)
#pragma warning(disable:4793)
#pragma warning(disable:4275)
#pragma warning(disable:4251)
#pragma warning(disable:4190)
#pragma warning(disable:4996)	//这个解决 -D_SCL_SECURE_NO_WARNINGS 问题，而且必须放在#include "ThreadPool.h"之前

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




// TODO:  在此处引用程序需要的其他头文件
