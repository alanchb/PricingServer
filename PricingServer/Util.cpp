#include "stdafx.h"
#include "Util.h"

tm Util::GetLocalTime()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);
	return *ltm;
}

std::string Util::GetDateTimeStr()
{
	time_t now = time(0);
	tm* ltm = localtime(&now);

	char szBuf[32];
	sprintf_s(szBuf, 32, "%4d-%02d-%02d %02d:%02d:%02d", ltm->tm_year + 1900, ltm->tm_mon + 1, ltm->tm_mday, ltm->tm_hour, ltm->tm_min, ltm->tm_sec);
	return string(szBuf);
}
