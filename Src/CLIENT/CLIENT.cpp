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

bool CLIENT::Initialize()
{
	DWORD oldProtect = 0;
	VirtualProtect((LPVOID)0x401000, (SIZE_T)(0x005CCFFF - 0x401000), PAGE_EXECUTE_READWRITE, &oldProtect);

	if (!Naked::Initialize())
		return false;

	if (!ConstantPatch::Initialize())
		return false;	

	VirtualProtect((LPVOID)0x401000, (SIZE_T)(0x005CCFFF - 0x401000), oldProtect, &oldProtect);

	return true;
}