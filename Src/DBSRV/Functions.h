/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

class Functions
{
};

//NativeFunctions
static int(*GetUserByLogin)(char*) = (int(__cdecl*)(char*)) 0x401055;
static int(*SendPacket)(char*, int) = (int(__cdecl*)(char*, int)) 0x401244;
static void(*EnableAccount)(int, char*) = (void(__cdecl*)(int, char*)) 0x42C3B0;
static void(*DisableAccount)(int, char*) = (void(__cdecl*)(int, char*)) 0x42C180;
static void(*ImportItem)(void) = (void(__cdecl*)(void)) 0x430650;
static void(*Log)(char*, char*) = (void(__cdecl*)(char*, char*)) 0x401316;
static void(*ProcessClientMessage)(int client, char* pMsg) = (void(__cdecl*)(int, char*)) 0x416FA0;

#endif