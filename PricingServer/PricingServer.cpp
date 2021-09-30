#include "stdafx.h"
#include <iostream>
#include <cstdio>

#include "Quasi.h"
#include "NetService.h"
#include "sobol.h"

using namespace std;

int main()
{
	cout << "Run PricingServer\n";

	/*float a[64] = {};
	int seed = 1000;
	i4_sobol(64, &seed, a);
	cout << "seed=" << seed << endl;
	for (int i = 0; i < 64; i++)
		cout << a[i] << endl;*/
	
	Quasi::Init();
	NetService::Start(); 

	while (true)
	{
		char szBuf[32];
		cin.getline(szBuf, 32);
		if (!strcmp(szBuf, "quit"))
			break;
		Sleep(100);
	}
	NetService::Stop();
	return 0;
}