/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#include "DllMain.h"

BOOL WINAPI DllMain(HINSTANCE hInstance, DWORD dwReason, LPVOID lpReserved)
{
	if (dwReason == DLL_PROCESS_ATTACH)
	{		
		if (!CLIENT::Initialize())
		{
			MessageBoxA(0, "Não foi possível carregar a Dll", "Error", MB_OK);
			ExitProcess(1);
			return FALSE;
		}
	}

	else if (dwReason == DLL_PROCESS_DETACH)
	{		
		FreeLibrary(hInstance);
	}

	return TRUE;
}