/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __NAKED_H__
#define __NAKED_H__

#include "DllMain.h"

class Naked
{
public:
	static bool Initialize();

private:
	static void NKD_AddItemDescription();
};

#endif