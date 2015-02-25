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

#include "DllMain.h"

#define AddLine(msg, color) \
	sprintf(pointer, msg); \
	__asm LEA ECX, DWORD PTR SS : [EBP - 0xA8] \
	__asm PUSH ECX \
	__asm MOV EDX, DWORD PTR SS : [EBP - 0x28] \
	__asm MOV EAX, DWORD PTR SS : [EBP - 0x10] \
	__asm MOV ECX, DWORD PTR DS : [EAX + EDX * 4 + 0x278C0] \
	__asm MOV EDX, DWORD PTR SS : [EBP - 0x28] \
	__asm MOV EAX, DWORD PTR SS : [EBP - 0x10] \
	__asm MOV EDX, DWORD PTR DS : [EAX + EDX * 4 + 0x278C0] \
	__asm MOV EAX, DWORD PTR DS : [EDX] \
	__asm CALL DWORD PTR DS : [EAX + 0x80] \
	__asm MOV EAX, color \
	__asm PUSH EAX \
	__asm MOV EDX, DWORD PTR SS : [EBP - 0x28] \
	__asm MOV EAX, DWORD PTR SS : [EBP - 0x10] \
	__asm MOV ECX, DWORD PTR DS : [EAX + EDX * 4 + 0x278C0] \
	__asm MOV EDX, DWORD PTR SS : [EBP - 0x28] \
	__asm MOV EAX, DWORD PTR SS : [EBP - 0x10] \
	__asm MOV EDX, DWORD PTR DS : [EAX + EDX * 4 + 0x278C0] \
	__asm MOV EAX, DWORD PTR DS : [EDX] \
	__asm CALL DWORD PTR DS : [EAX + 0x84] \
	__asm MOV ECX, DWORD PTR SS : [EBP - 0x28] \
	__asm ADD ECX, 0x1 \
	__asm MOV DWORD PTR SS : [EBP - 0x28], ECX \

class Functions
{
};

#endif