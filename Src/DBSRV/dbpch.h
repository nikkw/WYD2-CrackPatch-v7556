/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifdef __DBPCH_H__
#error "Precompiled header included more than once"
#endif // !__DBPCH_H__
#define __DBPCH_H__

#include <Windows.h>
#include <cstdint>
#include "..\Common\hook.h"
#include "..\Common\Structs.h"
#include "..\Common\PacketStruct.h"

#include "DBSRV.h"
#include "Functions.h"
#include "HookPatch.h"
#include "ConstantPatch.h"