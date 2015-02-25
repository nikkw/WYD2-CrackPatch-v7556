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

bool Naked::Initialize()
{	
	HookLib::SetHook(eHookType::JMP, 0x41D0CB, Naked::NKD_AddItemDescription, 4);

	return true;
}

NAKED Naked::NKD_AddItemDescription()
{	
	static char *pointer = NULL;
	static st_Item *item = NULL;

	__asm
	{
		MOV ECX, DWORD PTR SS : [EBP - 0x8]
		MOV EDX, DWORD PTR DS : [ECX + 0x670]
		MOV item, EDX

		LEA EDX, DWORD PTR SS : [EBP - 0xA8]
		MOV pointer, EDX
	}	

	if (item->Index == 747)
	{			
		AddLine("The king of Noatun!", Gold);		
	}	

	__asm
	{
		MOV ECX, DWORD PTR SS : [EBP - 0x8]
		MOV EDX, DWORD PTR DS : [ECX + 0x670]	
		MOV EAX, 0041D0D4h
		JMP EAX
	}
}

