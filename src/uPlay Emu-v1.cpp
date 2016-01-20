// uPlay Emu-v1.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "uPlay Emu-v1.h"


UPLAY BOOL __cdecl UPLAY_USER_IsOwned(int a1)
{
	//return UPLAY_USER_IsOwned_0(a1);
	return true;
}

UPLAY int __cdecl UPLAY_USER_GetCredentials(int a1, int a2)
{
	return 0;
}

UPLAY int __cdecl UPLAY_USER_SetGameSession(int a1, int a2, int a3, int a4)
{
	//return UPLAY_USER_SetGameSession_0(a1, a2, a3, a4);
	return 0;
}

UPLAY int __cdecl UPLAY_USER_GetUsername(char *a1)
{
	//return UPLAY_USER_GetUsername_0(a1);
	return 0;
}

UPLAY int UPLAY_USER_IsConnected()
{
	//return UPLAY_USER_IsConnected_0();
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetCdKeys(int a1, int a2)
{
	//return UPLAY_USER_GetCdKeys_0(a1, a2);
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetEmail(char *a1)
{
	//return UPLAY_USER_GetEmail_0(a1);
	return 1;
}

UPLAY int UPLAY_USER_GetEmailUtf8()
{
	//return UPLAY_USER_GetEmailUtf8_0();
	return 1;
}

UPLAY int UPLAY_USER_GetTicketUtf8()
{
	//return UPLAY_USER_GetTicketUtf8_0();
	return 1;
}

UPLAY int UPLAY_USER_GetPasswordUtf8()
{
	//return UPLAY_USER_GetPasswordUtf8_0();
	return 1;
}

UPLAY int UPLAY_USER_GetUsernameUtf8(void)
{
	//return UPLAY_USER_GetUsernameUtf8_0();
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetAccountId(char *a1)
{
	//return UPLAY_USER_GetAccountId_0(a1);
	return 1;
}

UPLAY int UPLAY_USER_GetAccountIdUtf8()
{
	//return UPLAY_USER_GetAccountIdUtf8_0();
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetPassword(char *a1)
{
	//return UPLAY_USER_GetPassword_0(a1);
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetCdKeyUtf8(int a1)
{
	//return UPLAY_USER_GetCdKeyUtf8_0(a1);
	return 1;
}

UPLAY int UPLAY_USER_ClearGameSession()
{
	//return UPLAY_USER_ClearGameSession_0();
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetCdKeyUtf8_0(int a1)
{
	/*
	int v1; // eax@1
	int result; // eax@1
	int v3; // esi@1
	int v4; // edi@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v1 = *(_DWORD *)sub_100042BE((int)&v5);
	result = sub_10003C88(a1);
	v3 = v6;
	v4 = result;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v3)(v3);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
		}
		result = v4;
	}
	return result;
	*/
	return 1;
}

UPLAY char UPLAY_USER_IsConnected_0()
{
	/*
	_DWORD *v0; // eax@1
	char v1; // al@1
	int v2; // esi@1
	char v3; // bl@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_1000454D(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return v3;
	*/
	return 'Y';
}

UPLAY signed int UPLAY_USER_ClearGameSession_0()
{
	/*
	_DWORD *v0; // eax@1
	int v1; // esi@1
	char v3; // [sp+4h] [bp-8h]@1
	int v4; // [sp+8h] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100011A9(&v3);
	sub_10005673(*v0);
	v1 = v4;
	if (v4)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v1)(v1);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v1 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v1 + 4))(v1);
		}
	}
	return 1;
	*/
	return 1;
}

UPLAY BOOL __cdecl UPLAY_USER_IsOwned_0(int a1)
{
	/*
	int v1; // eax@1
	char v2; // al@1
	int v3; // esi@1
	char v4; // bl@1
	char v6; // [sp+8h] [bp-8h]@1
	int v7; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v1 = *(_DWORD *)sub_100042BE((int)&v6);
	v2 = sub_10002CCF(a1);
	v3 = v7;
	v4 = v2;
	if (v7)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v3)(v3);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
		}
	}
	return v4 != 0; 
	*/
	return true;
}

UPLAY BOOL UPLAY_USER_IsInOfflineMode_0()
{
	/*
	_DWORD *v0; // eax@1
	char v1; // al@1
	int v2; // esi@1
	char v3; // bl@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_10001073(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return v3 != 0;
	*/
	return true;
}

UPLAY int UPLAY_USER_GetAccountIdUtf8_0()
{
	/*
	_DWORD *v0; // eax@1
	int v1; // eax@1
	int v2; // esi@1
	int v3; // edi@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_10002F54(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return sub_1006D4B0(v3);
	*/
	return int("uPlay");
}

UPLAY int UPLAY_USER_GetUsernameUtf8_0()
{
	/*
	_DWORD *v0; // eax@1
	int v1; // eax@1
	int v2; // esi@1
	int v3; // edi@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_1000608C(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return sub_1006D4B0(v3);
	*/
	return int("uPlay");
}

UPLAY int UPLAY_USER_GetEmailUtf8_0()
{
	/*
	_DWORD *v0; // eax@1
	int v1; // eax@1
	int v2; // esi@1
	int v3; // edi@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_10003B52(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return sub_1006D4B0(v3);
	*/
	return int("uplay@email.com");
}

int UPLAY_USER_GetTicketUtf8_0()
{
	/*
	_DWORD *v0; // eax@1
	int v1; // eax@1
	int v2; // esi@1
	int v3; // edi@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_10005FB5(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return sub_1006D4B0(v3);
	*/
	return 1;
}

UPLAY int UPLAY_USER_GetPasswordUtf8_0()
{
	/*
	_DWORD *v0; // eax@1
	int v1; // eax@1
	int v2; // esi@1
	int v3; // edi@1
	char v5; // [sp+8h] [bp-8h]@1
	int v6; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v0 = (_DWORD *)sub_100042BE((int)&v5);
	v1 = sub_10004A39(*v0);
	v2 = v6;
	v3 = v1;
	if (v6)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v2)(v2);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v2 + 4))(v2);
		}
	}
	return sub_1006D4B0(v3);
	*/
	return int("uPl4y_1337");
}

UPLAY BOOL __cdecl UPLAY_USER_GetCredentials_0(int a1, int a2)
{
	/*
	int v2; // eax@1
	char v3; // al@1
	int v4; // esi@1
	bool v5; // bl@1
	char v7; // [sp+8h] [bp-8h]@1
	int v8; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v2 = *(_DWORD *)sub_100042BE((int)&v7);
	v3 = sub_10004318(a1, a2);
	v4 = v8;
	v5 = v3 == 0;
	if (v8)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v4)(v4);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
		}
	}
	return v5 == 0;
	*/
	return true;
}

UPLAY int __cdecl UPLAY_USER_GetAccountId_0(char *a1)
{
	const char *v1; // eax@1

	v1 = reinterpret_cast<const char *>(UPLAY_USER_GetAccountIdUtf8());
	strncpy(a1, v1, 0x40u);
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetUsername_0(char *a1)
{
	const char *v1; // eax@1

	v1 = reinterpret_cast<const char *>(UPLAY_USER_GetUsernameUtf8());
	strncpy(a1, v1, 0x100u);
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetEmail_0(char *a1)
{
	const char *v1; // eax@1

	v1 = reinterpret_cast<const char *>(UPLAY_USER_GetEmailUtf8());
	strncpy(a1, v1, 0x100u);
	return 1;
}

UPLAY int __cdecl UPLAY_USER_GetPassword_0(char *a1)
{
	/*
	_DWORD *v1; // eax@1
	int v2; // eax@1
	int v3; // esi@1
	int v4; // edi@1
	const char *v5; // eax@5
	char v7; // [sp+8h] [bp-8h]@1
	int v8; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v1 = (_DWORD *)sub_100042BE((int)&v7);
	v2 = sub_10004A39(*v1);
	v3 = v8;
	v4 = v2;
	if (v8)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v3)(v3);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
		}
	}
	v5 = (const char *)sub_1006D4B0(v4);
	strncpy(a1, v5, 0x40u);
	return 1;
	*/
	return int("uPl4y_1337");
}

UPLAY BOOL __cdecl UPLAY_USER_GetCdKeys_0(int a1, int a2)
{
	/*
	int v2; // eax@1
	char v3; // al@1
	int v4; // esi@1
	bool v5; // bl@1
	char v7; // [sp+8h] [bp-8h]@1
	int v8; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v2 = *(_DWORD *)sub_100042BE((int)&v7);
	v3 = sub_100021BC(a1, a2);
	v4 = v8;
	v5 = v3 == 0;
	if (v8)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v4)(v4);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
		}
	}
	return v5 == 0;
	*/
	return true;
}

UPLAY BOOL __cdecl UPLAY_USER_SetGameSession_0(int a1, int a2, int a3, int a4)
{
	/*
	int v4; // eax@1
	char v5; // al@1
	int v6; // esi@1
	char v7; // bl@1
	char v9; // [sp+8h] [bp-8h]@1
	int v10; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v4 = *(_DWORD *)sub_100011A9(&v9);
	v5 = sub_10003CA1(a1, a2, a3, a4);
	v6 = v10;
	v7 = v5;
	if (v10)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v6)(v6);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
		}
	}
	return v7 != 0;
	*/
	return true;
}

UPLAY int __cdecl UPLAY_SAVE_Read(char a1, size_t a2, int a3, int a4, int a5, int a6)
{
	//return UPLAY_SAVE_Read_0(a1, a2, a3, a4, a5, a6);
	return 1;
}

UPLAY int __cdecl UPLAY_SAVE_Open(int a1, int a2, int a3, int a4)
{
	//return UPLAY_SAVE_Open_0(a1, a2, a3, a4);
	return 1;
}

UPLAY int __cdecl UPLAY_SAVE_Close(int a1)
{
	//return UPLAY_SAVE_Close_0(a1);
	return 1;
}

UPLAY int __cdecl UPLAY_SAVE_GetSavegames(int a1, int a2)
{
	//return UPLAY_SAVE_GetSavegames_0(a1, a2);
	return 1;
}

UPLAY int __cdecl UPLAY_SAVE_Remove(int a1, int a2)
{
	//return UPLAY_SAVE_Remove_0(a1, a2);
	return 1;
}

UPLAY int __cdecl UPLAY_SAVE_SetName(int a1, int a2)
{
	//return UPLAY_SAVE_SetName_0(a1, a2);
	return 1;
}

UPLAY int __cdecl UPLAY_SAVE_Write(char a1, size_t a2, int a3, int a4)
{
	//return UPLAY_SAVE_Write_0(a1, a2, a3, a4);
	return 1;
}

UPLAY BOOL __cdecl UPLAY_SAVE_Open_0(int a1, int a2, int a3, int a4)
{
	/*
	int v4; // eax@1
	char v5; // al@1
	int v6; // esi@1
	bool v7; // bl@1
	char v9; // [sp+8h] [bp-8h]@1
	int v10; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v4 = *(_DWORD *)sub_1000426E(&v9);
	v5 = sub_1000198D(a1, a2, a3, a4);
	v6 = v10;
	v7 = v5 == 0;
	if (v10)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v6)(v6);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
		}
	}
	return v7 == 0;
	*/
	return false;
}

UPLAY BOOL __cdecl UPLAY_SAVE_Close_0(char a1)
{
	/*
	int v1; // eax@1
	char v2; // al@1
	int v3; // esi@1
	bool v4; // bl@1
	char v6; // [sp+8h] [bp-8h]@1
	int v7; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v1 = *(_DWORD *)sub_1000426E(&v6);
	v2 = sub_10001177(a1);
	v3 = v7;
	v4 = v2 == 0;
	if (v7)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v3)(v3);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3);
		}
	}
	return v4 == 0;
	*/
	return false;
}

UPLAY BOOL __cdecl UPLAY_SAVE_Read_0(char a1, size_t a2, int a3, int a4, int a5, int a6)
{
	/*
	int v6; // eax@1
	char v7; // al@1
	int v8; // esi@1
	bool v9; // bl@1
	char v11; // [sp+8h] [bp-8h]@1
	int v12; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v6 = *(_DWORD *)sub_1000426E(&v11);
	v7 = sub_100035C6(a1, a2, a3, a4, a5, a6);
	v8 = v12;
	v9 = v7 == 0;
	if (v12)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v8)(v8);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
		}
	}
	return v9 == 0;
	*/
	return false;
}

UPLAY BOOL __cdecl UPLAY_SAVE_Write_0(char a1, size_t a2, int a3, int a4)
{
	/*
	int v4; // eax@1
	char v5; // al@1
	int v6; // esi@1
	bool v7; // bl@1
	char v9; // [sp+8h] [bp-8h]@1
	int v10; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v4 = *(_DWORD *)sub_1000426E(&v9);
	v5 = sub_10004C78(a1, a2, a3, a4);
	v6 = v10;
	v7 = v5 == 0;
	if (v10)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v6)(v6);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v6 + 4))(v6);
		}
	}
	return v7 == 0;
	*/
	return false;
}

UPLAY BOOL __cdecl UPLAY_SAVE_SetName_0(char a1, void *a2)
{
	/*
	int v2; // eax@1
	char v3; // al@1
	int v4; // esi@1
	bool v5; // bl@1
	char v7; // [sp+8h] [bp-8h]@1
	int v8; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v2 = *(_DWORD *)sub_1000426E(&v7);
	v3 = sub_10004E21(a1, a2);
	v4 = v8;
	v5 = v3 == 0;
	if (v8)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v4)(v4);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
		}
	}
	return v5 == 0;
	*/
	return false;
}

UPLAY BOOL __cdecl UPLAY_SAVE_Remove_0(int a1, int a2)
{
	/*
	int v2; // eax@1
	char v3; // al@1
	int v4; // esi@1
	bool v5; // bl@1
	char v7; // [sp+8h] [bp-8h]@1
	int v8; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v2 = *(_DWORD *)sub_1000426E(&v7);
	v3 = sub_1000231F(a1, a2);
	v4 = v8;
	v5 = v3 == 0;
	if (v8)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v4)(v4);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
		}
	}
	return v5 == 0;
	*/
	return false;
}

UPLAY BOOL __cdecl UPLAY_SAVE_GetSavegames_0(int a1, int a2)
{
	/*
	int v2; // eax@1
	char v3; // al@1
	int v4; // esi@1
	bool v5; // bl@1
	char v7; // [sp+8h] [bp-8h]@1
	int v8; // [sp+Ch] [bp-4h]@1

	sub_10003E40();
	v2 = *(_DWORD *)sub_1000426E(&v7);
	v3 = sub_10005EA7(a1, a2);
	v4 = v8;
	v5 = v3 == 0;
	if (v8)
	{
		if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 4), 0xFFFFFFFF))
		{
			(**(void(__thiscall ***)(_DWORD))v4)(v4);
			if (!_InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 8), 0xFFFFFFFF))
				(*(void(__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
		}
	}
	return v5 == 0;
	*/
	return false;
}