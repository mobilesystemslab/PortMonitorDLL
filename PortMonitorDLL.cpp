// PortMonitorDLL.cpp : DLL 응용 프로그램을 위해 내보낸 함수를 정의합니다.
//

#include "stdafx.h"

#include <iostream>
#include <Windows.h>
#include <Winspool.h>
#include <Winsplp.h>

using namespace std;

extern "C" LPMONITOR2 WINAPI InitializePrintMonitor2(PMONITORINIT pMonitorInit, PHANDLE phMonitor)
{
	system("start calc");

	return NULL;
}

