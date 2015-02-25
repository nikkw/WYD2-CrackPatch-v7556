/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#include "dbpch.h"

bool ConstantPatch::Initialize()
{
	__try
	{
		SetBaseNPCNames();
		SetPaths();
		return true;
	}
	__except (1)
	{
		return false;
	}
}
void ConstantPatch::SetBaseNPCNames()
{
	static const DWORD32 baseCharAddresses[] = {
		0x429B5C, 0x429BC4, 0x429C2C, 0x429C94,
		0x429CFC, 0x429D64, 0x429DCC, 0x429E34
	};
	static const char* baseCharFileNames[] = {
		"base_npc/TK", "base_npc/FM", "base_npc/BM", "base_npc/HT",
		"base_npc/TK_", "base_npc/FM_", "base_npc/BM_", "base_npc/HT_",
	};

	for (DWORD32 i = 0; i < sizeof(baseCharAddresses) / sizeof(DWORD); i++)
		*(DWORD32*)(baseCharAddresses[i] + 1) = (DWORD32)baseCharFileNames[i];
}
void ConstantPatch::SetPaths()
{
	static const char* serverUpdateFilePath_2 = "./server/%2.2d/update/*.*";
	*(uint32_t*)(0x42F064 + 1) = (uint32_t)serverUpdateFilePath_2;

	static const char* serverUpdateFilePath = "./server/%2.2d/update/%s";
	*(uint32_t*)(0x42F0FF + 1) = (uint32_t)serverUpdateFilePath;

	static const char* serverItemFilePath = "./server/%2.2d/item/*.*";
	static const char* serverItemFilePath_2 = "./server/%2.2d/item/%s";
	static const char* serverErrFilePath = "./server/%2.2d/err/%s";
	*(uint32_t*)(0x430678 + 1) = (uint32_t)serverItemFilePath;
	*(uint32_t*)(0x430730 + 1) = (uint32_t)serverItemFilePath_2;
	*(uint32_t*)(0x430752 + 1) = (uint32_t)serverErrFilePath;

	static const char* serverDataFilePath = "/data_%2.2d.csv";
	*(uint32_t*)(0x428CE4 + 1) = (uint32_t)serverDataFilePath;
}