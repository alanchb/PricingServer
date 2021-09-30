#pragma once
#include <string>
#include <ctime>

using namespace std;

class Util
{
public:
	static tm GetLocalTime();
	static string GetDateTimeStr();
};

