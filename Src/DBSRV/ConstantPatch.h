/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __CONSTANTPATCH_H__
#define __CONSTANTPATCH_H__

class ConstantPatch
{
	static void SetBaseNPCNames();
	static void SetPaths();
public:
	static bool Initialize();
};
#endif // !__CONSTANTPATCH_H__
