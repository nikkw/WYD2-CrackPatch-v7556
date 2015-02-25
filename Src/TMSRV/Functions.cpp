/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#include "tmpch.h"

static char str[256];

CUser* Functions::GetUserFromIndex(int32_t clientid)
{
	if (clientid <= 0 || clientid >= MAX_USER)
		return nullptr;
	
	static auto *user = (CUser*)CUSER_ADDR;
	return &user[clientid];
}

st_ItemList* Functions::GetItemFromIndex(int32_t itemId)
{
	if (itemId <= 0 || itemId >= MAX_ITEMLIST)
		return nullptr;

	static auto *itemlist = (st_ItemList*)ITEMLIST_ADDR;
	return &itemlist[itemId];
}

char* Functions::GetLanguageFromIndex(int32_t id)
{
	BASE_GetLanguage1(str, id);
	return str;
}
char* Functions::GetLanguageFromIndex(int32_t id, char *param1)
{
	BASE_GetLanguage2(str, id, param1);
	return str;
}
char* Functions::GetLanguageFromIndex(int32_t id, char *param1, char *param2)
{
	BASE_GetLanguage3(str, id, param1, param2);
	return str;
}
char* Functions::GetLanguageFromIndex(int32_t id, int32_t param1)
{
	BASE_GetLanguage4(str, id, param1);
	return str;
}
char* Functions::GetLanguageFromIndex(int32_t id, int32_t param1, int32_t param2)
{
	BASE_GetLanguage5(str, id, param1, param2);
	return str;
}
char* Functions::GetLanguageFromIndex(int32_t id, char* param1, int32_t param2)
{
	BASE_GetLanguage6(str, id, param1, param2);
	return str;
}
char* Functions::GetLanguageFromIndex(int32_t id, int32_t param1, char* param2)
{
	BASE_GetLanguage7(str, id, param1, param2);
	return str;
}

int32_t Functions::GetFirstSlot(int32_t client, SlotType type, uint16_t itemId)
{
	auto *mob = GetMobFromIndex(client);

	if (type == SlotType::Inventory)
	{
		for (int i = 0; i < MAX_INVENTORY; i++)
		{
			if (mob->Mob.Inventory[i].Index == itemId)
				return i;
		}
	}
	else if (type == SlotType::Equipment)
	{
		for (int i = 0; i < MAX_EQUIPMENT; i++)
		{
			if (mob->Mob.Equip[i].Index == itemId)
				return i;
		}
	}
	else if (type == SlotType::Storage)
	{
		auto user = Functions::GetUserFromIndex(client);

		if (user)
		{
			for (int i = 0; i < MAX_STORAGE; i++)
			{
				if (user->Storage.Item[i].Index == itemId)
					return i;
			}
		}
	}
	return -1;
}

void Functions::AmountMinus(st_Item *item)
{
	int32_t amount = BASE_GetItemAmount(item);

	if (amount > 0)
	{
		BASE_SetItemAmount(item, amount - 1);
	}
	else
	{
		BASE_ClearItem(item);
	}
}

void Functions::SendOneMessage(int32_t client, void* pMsg, int32_t len)
{
	static const uint32_t s_func_addr = 0x40132A;
	__asm
	{
		PUSH len
		PUSH pMsg
		MOV ECX, client
		IMUL ECX, ECX, 0xC58
		ADD ECX, 0x752BAF8
		CALL s_func_addr
	}
}

char *Functions::StrFormat(const char *str, ...)
{
	static char buffer[1024];
	va_list va;
	va_start(va, str);
	vsprintf(buffer, str, va);
	va_end(va);
	return buffer;
}

void Functions::GetCurrentScore(int32_t clientid)
{
	__asm
	{
		PUSH clientid
		MOV ECX, [clientid]
		IMUL ECX, ECX, 06BCh
		ADD ECX, 001FDECA0h
		MOV EDX, 004016EFh
		CALL EDX
	}
}

int32_t Functions::CheckGetLevel(int32_t clientid)
{
	__asm
	{
		MOV ECX, [clientid]
		IMUL ECX, ECX, 06BCh
		ADD ECX, 001FDECA0h
		MOV EDX, 0040164Ah
		CALL EDX
	}
}