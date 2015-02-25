/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#include "tmpch.h"

bool Naked::Initialize()
{
	__try
	{
		HookLib::SetHook(eHookType::JMP, 0x0045E2F3, Naked::NKD_ProcessClientMessage_ReadMessage, 1);
		HookLib::SetHook(eHookType::JNZ, 0x00489629, Naked::NKD_ProcessClientMessage_ReadCommand);
		HookLib::SetHook(eHookType::JNZ, 0x0046A1AE, Naked::NKD_ProcessClientMessage_ReadVolatile);
		HookLib::SetHook(eHookType::JMP, 0x4BCF2E, Naked::NKD_MobKilled_EventDead, 5);

		//fix qst command message
		HookLib::SetHook(eHookType::JMP, 0x0048B056, (uintptr_t*)(0x0048B067), 11);

		return true;
	}
	__except (1)
	{
		return false;
	}
}
NAKED Naked::NKD_ProcessClientMessage_ReadMessage()
{
	static const uint32_t dwContinueFunction = 0x0045E2F9;
	static const uint32_t dwNoContinueFunction = 0x004915F7;
	__asm
	{
		PUSH RECV
		MOV EAX, DWORD PTR SS : [EBP - 04h]
		PUSH EAX //msg
		PUSH ECX //clientid		
		CALL Hook::PacketControl
		TEST EAX, EAX
		JE lbl_NoContinue
		MOV DWORD PTR SS : [EBP - 04h], EAX
		MOV ECX, DWORD PTR SS : [EBP + 08h]
		IMUL ECX, ECX, 0C58h
		JMP dwContinueFunction

	lbl_NoContinue :
		JMP dwNoContinueFunction
	}
}

NAKED Naked::NKD_ProcessClientMessage_ReadCommand()
{
	static const uint32_t dwEndFunction = 0x004915F7;
	static const uint32_t dwContinue = 0x00489834;
	__asm
	{
		MOV ECX, DWORD PTR SS : [EBP - 03914h]
		PUSH ECX // msg
		PUSH DWORD PTR SS : [EBP + 08h] // clientid
		CALL Hook::ProcessCommand
		TEST EAX, EAX // Se o resultado for 0 (FALSE), continua para a tmsrv.
		JE lbl_Continue
		JMP dwEndFunction

	lbl_Continue:
		JMP dwContinue;
	}
}

NAKED Naked::NKD_ProcessClientMessage_ReadVolatile()
{
	static const int32_t dwContinue = 0x0046A3C5;
	static const int32_t dwNoContinue = 0x004915F7;
	__asm{
		PUSH DWORD PTR SS : [EBP - 0C64h] //itemAmount
		PUSH DWORD PTR SS : [EBP - 0C60h] //itemVolatile 		
		PUSH DWORD PTR SS : [EBP - 0C58h] //srcItem
		MOV EAX, DWORD PTR SS : [EBP - 0C54h]
		PUSH EAX //msg		
		PUSH DWORD PTR SS : [EBP + 08h]   //clientid
		CALL Hook::ProcessVolatile
		TEST EAX, EAX 
		JE lbl_ContinueFunction
		JMP dwNoContinue

	lbl_ContinueFunction :
		JMP dwContinue;
	}
}

NAKED Naked::NKD_MobKilled_EventDead()
{
	static const int32_t dwContinue = 0x4BCF3E;
	static const int32_t dwNext = 0x4BCFF2;
	static const int32_t dwNoContinue = 0x4BD175;
	__asm{
		PUSH DWORD PTR SS : [EBP + 0Ch] // Killer
		PUSH DWORD PTR SS : [EBP + 08h] // Killed
		PUSH DWORD PTR SS : [EBP - 0230h] // GenerateIndex
		CALL Hook::ProcessMobKilled
		TEST EAX, EAX // Se for false, vai pra próxima comparação
		JE lblContinueExec
		JMP dwNoContinue

	lblContinueExec :
		CMP DWORD PTR SS : [EBP - 0x230], 0x10E
		JL lblNext
		JMP dwContinue

	lblNext :
		JMP dwNext
	}
}
