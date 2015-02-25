/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __PACKETSTRUCT_H__
#define __PACKETSTRUCT_H__

//Request command
struct p334h
{
	PacketHeader Header;
	char cmd[16];
	char msg[100];
};

//Request use item
struct p373h
{
	PacketHeader Header;

	struct
	{
		int32_t Type;
		int32_t Slot;
	} Src;

	struct
	{
		int32_t Type;
		int32_t Slot;
	} Dst;
	
	st_Position Pos;
	int32_t Info;
};

//Request Buy Item
struct p379h
{
	PacketHeader	Header;
	int16_t			mobID;
	int16_t			sellSlot;
	int16_t			invSlot;
	int16_t Unknown1;
	int32_t Unknown2;
};



#endif // !__PACKETSTRUCT_H__