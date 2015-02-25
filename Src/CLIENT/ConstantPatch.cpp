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

bool ConstantPatch::Initialize()
{
	RemoveCheckSum();
	return true;
}

void ConstantPatch::RemoveCheckSum()
{
	//skilldata
	*(uint8_t*)(0x00539A34) = 0xEB;

	//itemlist
	*(uint8_t*)(0x00539B1C) = 0xEB;
	*(uint8_t*)(0x00539C48) = 0xEB;
}
