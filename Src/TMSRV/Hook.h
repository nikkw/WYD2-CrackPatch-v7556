/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __HOOKK_H__
#define __HOOKK_H__

class Hook
{
public:
	//Retorna 0 para nao continuar para tmsrv
	//Retorna o packet para continuar.
	static uint8_t* __stdcall PacketControl(int32_t clientid, uint8_t *msg, int32_t type);

	// Retorna True para nao continuar para a tmsrv
	// False para continuar para a tmsrv.
	static BOOL __stdcall ProcessCommand(int32_t clientid, const p334h* packet);
		
	// Retorna True para nao continuar para a tmsrv
	// False para continuar.
	static BOOL  __stdcall ProcessVolatile(int32_t clientid, const BYTE* msg, st_Item *srcItem, int32_t itemVolatile, int32_t itemAmount);

	// Retorna True para nao continuar para a tmsrv
	// False para continuar.
	static BOOL __stdcall ProcessMobKilled(int32_t gennerId, int32_t killedId, int32_t killerId);
};

#endif //!__HOOKK_H__