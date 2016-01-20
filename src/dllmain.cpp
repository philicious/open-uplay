// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
#ifdef DEBUG_BUILD
		MessageBoxA(NULL, "Debug build has been hooked @ DLL_PROCESS_ATTACH", "Notice", MB_ICONINFORMATION);
#endif
	case DLL_THREAD_ATTACH:
#ifdef DEBUG_BUILD
		MessageBoxA(NULL, "Debug build has been hooked @ DLL_THREAD_ATTACH", "Notice", MB_ICONINFORMATION);
#endif
	case DLL_THREAD_DETACH:
#ifdef DEBUG_BUILD
		MessageBoxA(NULL, "Debug build has been unhooked @ DLL_THREAD_DETACH", "Notice", MB_ICONINFORMATION);
#endif
	case DLL_PROCESS_DETACH:
#ifdef DEBUG_BUILD
		MessageBoxA(NULL, "Debug build has been unhooked @ DLL_PROCESS_DETACH", "Notice", MB_ICONINFORMATION);
#endif
		break;
	}
	return TRUE;
}

