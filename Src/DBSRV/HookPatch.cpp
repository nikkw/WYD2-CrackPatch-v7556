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

bool HookPatch::Initialize()
{
	__try
	{
		return true;
	}
	__except (1)
	{
		return false;
	}
}