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

class Naked
{
public:
	static bool Initialize();
		
	static void NKD_ProcessClientMessage_ReadMessage();
	static void NKD_ProcessClientMessage_ReadCommand();	
	static void NKD_ProcessClientMessage_ReadVolatile();
	static void NKD_MobKilled_EventDead();
};
#endif // !__NAKED_H__
