/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __HOOK_H__
#define __HOOK_H__

#include <Windows.h>
#include <new>
#include <string>

enum class eHookType
{
	// Inconditional Jump
	JMP = 1, // 0xE9

	// Call
	CALL, // 0xE8

	JE, // 0xF 0x84
	JZ,
	JNZ, // 0xF 0x85
	JNE,

	// Signed Jumps
	JL, // 0xF 0x8C
	JGE, // 0xF 0x8D
	JLE, // 0xF 0x8E
	JG, // 0xF 0x8F

	// Unsigned Jumps
	JB, // 0xF 0x82
	JNB, // 0xF 0x83
	JBE, // 0xF 0x86
	JA // 0xF 0x87
};

class HookLib
{
public:
	static void SetHook(const eHookType hType, unsigned int hSourceAddress, const void* hDestAddress, unsigned int hNopSize = 0)
	{
		DWORD protect = 0;

		auto instructionSize = [](const eHookType type)
		{
			unsigned int size = 0;
			switch (type)
			{
			case eHookType::JMP:
			case eHookType::CALL:
				size = 5;
				break;
			default:
				size = 6;
				break;
			}
			return size;
		}(hType);

		auto instruction = new (std::nothrow) unsigned char[instructionSize + hNopSize];

		auto distance = (((*(unsigned int*)&hDestAddress) - hSourceAddress) - instructionSize);

		unsigned int distanceOffset = 0;

		if (hType == eHookType::JMP || hType == eHookType::CALL)
			distanceOffset = 1;
		else
			distanceOffset = 2;

		switch (hType)
		{
		case eHookType::JMP:
			instruction[0] = 0xE9;
			break;
		case eHookType::CALL:
			instruction[0] = 0xE8;
			break;
		case eHookType::JE:
		case eHookType::JZ:
			instruction[0] = 0x0F;
			instruction[1] = 0x84;
			break;
		case eHookType::JNZ:
		case eHookType::JNE:
			instruction[0] = 0x0F;
			instruction[1] = 0x85;
			break;
		case eHookType::JL:
			instruction[0] = 0x0F;
			instruction[1] = 0x8C;
			break;
		case eHookType::JGE:
			instruction[0] = 0x0F;
			instruction[1] = 0x8D;
			break;
		case eHookType::JLE:
			instruction[0] = 0x0F;
			instruction[1] = 0x8E;
			break;
		case eHookType::JG:
			instruction[0] = 0x0F;
			instruction[1] = 0x8F;
			break;
		case eHookType::JB:
			instruction[0] = 0x0F;
			instruction[1] = 0x82;
			break;
		case eHookType::JNB:
			instruction[0] = 0x0F;
			instruction[1] = 0x83;
			break;
		case eHookType::JBE:
			instruction[0] = 0x0F;
			instruction[1] = 0x86;
			break;
		case eHookType::JA:
			instruction[0] = 0x0F;
			instruction[1] = 0x87;
			break;
		}

		*(unsigned int*)&instruction[distanceOffset] = distance;

		if (hNopSize > 0)
		{
			for (unsigned int i = 0; i < hNopSize; i++)
				instruction[i + instructionSize] = 0x90;

		}

		VirtualProtect(reinterpret_cast<void*>(hSourceAddress), instructionSize + hNopSize, PAGE_EXECUTE_READWRITE, &protect);

		memcpy(reinterpret_cast<void*>(hSourceAddress), instruction, instructionSize + hNopSize);

		VirtualProtect(reinterpret_cast<void*>(hSourceAddress), instructionSize + hNopSize, protect, &protect);

		delete[] instruction;
	}

	static void FillWithNop(unsigned int hAddress, unsigned int hNopCount)
	{
		DWORD p = 0;
		VirtualProtect(reinterpret_cast<LPVOID>(hAddress), hNopCount, PAGE_EXECUTE_READWRITE, &p);

		for (unsigned int i = 0; i < hNopCount; i++)
			*(unsigned char*)(hAddress + i) = 0x90;

		VirtualProtect(reinterpret_cast<LPVOID>(hAddress), hNopCount, p, &p);
	}
};

#endif // !__HOOK_H__
