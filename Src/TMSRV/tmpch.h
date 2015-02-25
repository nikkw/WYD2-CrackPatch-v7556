/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifdef __TMPCH_H__
#error "Precompiled header included more than once"
#endif // !__TMPCH_H__
#define __TMPCH_H__

using namespace std;

#include <Windows.h>
#include <WinSock2.h>
#include <cstdint>
#include <limits>
#include "..\Common\hook.h"
#include "..\Common\Structs.h"
#include "..\Common\PacketStruct.h"
#include "..\Common\define.h"
#include "..\Common\ItemEffect.h"

#include "Global.h"
#include "Functions.h"
#include "ConstantPatch.h"
#include "Hook.h"
#include "Naked.h"
#include "TMSRV.h"

