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

uint8_t* Hook::PacketControl(int32_t clientid, uint8_t *msg, int32_t type)
{
	//return 0: o packet nao continua
	auto header = (PacketHeader*)msg;

	//griffin master packet fix
	if (header->PacketId == 0xAD9)		
		return 0;	
	
	return msg;
}

BOOL Hook::ProcessCommand(int32_t clientid, const p334h* packet)
{
	auto mob = GetMobFromIndex(clientid);	

	if (!strcmp(packet->cmd, "jp") || !strcmp(packet->cmd, "jackpot"))
	{			
		SendClientMessage(clientid, Functions::GetLanguageFromIndex(504, __GET(uint32_t, JACKPOTPOINT_ADDR)));
		return TRUE;		
	}

	else if (!strcmp(packet->cmd, "qst") || !strcmp(packet->cmd, "kt") || !strcmp(packet->cmd, "gm") || !strcmp(packet->cmd, "GM"))
	{
		SendClientMessage(clientid, Functions::GetLanguageFromIndex(91));
		return FALSE;
	}

	else if (!strcmp(packet->cmd, "serverinfo"))
	{
		int32_t count = 0;
		for (int32_t i = 1; i < MAX_USER; i++)
		{
			auto user = Functions::GetUserFromIndex(i);

			if (user->Status != 0)
				count++;
		}
		
		if (count == 1)
		{
			SendClientMessage(clientid, Functions::StrFormat("Só tem você online.", count));
		}
		else
		{
			SendClientMessage(clientid, Functions::StrFormat("Estamos com [%d] jogadores online.", count));
		}

		return TRUE;
	}

	else if (!strcmp(packet->cmd, "limparinv") || !strcmp(packet->cmd, "clearinv"))
	{
		uint32_t gold = 0;

		for (auto i = 0; i < 60; i++)
		{
			st_Item *item = &mob->Mob.Inventory[i];
			
			if (item->Index > 0)
			{
				auto price = Functions::GetItemFromIndex(item->Index)->Price / 10;				
				
				if (price > 0)
				{
					auto amount = BASE_GetItemAmount(item);

					if (amount == 0)
					{
						gold += price;
					}
					else
					{
						gold += price * amount;
					}
				}				

				memset(item, 0, sizeof st_Item);
				SendItem(clientid, SlotType::Inventory, i, item);
			}		
		}

		SendClientMessage(clientid, Functions::StrFormat("Foram arrecadados [%u] de gold.", gold));

		gold += mob->Mob.Gold;
		if (gold > 2000000000)
			gold = 2000000000;

		mob->Mob.Gold = gold;		
		SendEtc(clientid);	

		return TRUE;
	}

	//only for tests
	else if (!strcmp(packet->cmd, "item"))
	{
		uint16_t id = 0, ef1 = 0, ef2 = 0, ef3 = 0, efv1 = 0, efv2 = 0, efv3 = 0;
		if (sscanf_s(packet->msg, "%hu %hu %hu %hu %hu %hu %hu", &id, &ef1, &efv1, &ef2, &efv2, &ef3, &efv3))
		{
			if (!(id > MAX_ITEMLIST || ef1 > 127 || ef2 > 127 || ef3 > 127 || efv1 > 127 || efv2 > 127 || efv3 > 127))
			{
				st_Item item = { id, ef1, efv1, ef2, efv2, ef3, efv3 };
				auto slot = Functions::GetFirstSlot(clientid, SlotType::Inventory, 0);

				if (slot != -1)
				{
					PutItem(clientid, &item);
					SendClientMessage(clientid, Functions::StrFormat("Item [%s] criado com sucesso.", Functions::GetItemFromIndex(id)->Name));
				}
				else
				{
					SendClientMessage(clientid, "Falta espaço no inventário.");
				}
			}
			else
			{
				SendClientMessage(clientid, "Use valores menores.");
			}			
		}

		return TRUE;
	}

	else if (!strcmp(packet->cmd, "goto"))
	{
		uint16_t x = 0, y = 0;
		if (sscanf_s(packet->msg, "%hu %hu", &x, &y) == 2)
		{
			if (x > 0 && x < 4096 && y > 0 && y < 4096)
			{
				DoTeleport(clientid, x, y, 0);
			}
			else
			{
				SendClientMessage(clientid, "Use valores de 0 a 4096.");
			}
		}
		return TRUE;
	}

	return FALSE;
}

BOOL Hook::ProcessVolatile(int32_t clientid, const BYTE* msg, st_Item *srcItem, int32_t itemVolatile, int32_t itemAmount)
{
	auto mob = GetMobFromIndex(clientid);
	auto user = Functions::GetUserFromIndex(clientid);
	auto packet = (p373h*)msg;
	st_Item *dstItem;

	//Feijoes e removedor de tintura
	if (itemVolatile == 186)
	{
		if (packet->Dst.Type == SlotType::Equipment)
		{
			const int32_t info = srcItem->Index - 3407;			

			if (info >= 0 && info <= 10)
			{				
				dstItem = GetItemPointer(mob, user->Storage.Item, packet->Dst.Type, packet->Dst.Slot);
											
				bool change = false;

				if (packet->Dst.Slot > 0 && packet->Dst.Slot <= 5)
				{ //equipamentos
					change = true;
				}

				else if (packet->Dst.Slot == 7)
				{ //escudos
					auto itemL = Functions::GetItemFromIndex(dstItem->Index);

					if (itemL->Pos == EquipType::Shield)
						change = true;
				}

				if (change)
				{
					const int32_t size = (sizeof g_RefineTable / sizeof(decltype(g_RefineTable[0])));
					bool refine = false;

					for (int i = 0; i < 3; i++){
						for (int j = 0; j < size; j++){
							if (dstItem->Effect[i].Index == g_RefineTable[j]){
								dstItem->Effect[i].Index = g_RefineTable[info];
								refine = true;
								break;
							}
						}
					}

					if (refine)
					{
						Functions::AmountMinus(srcItem);
						SendItem(clientid, packet->Dst.Type, packet->Dst.Slot, dstItem);
						
						char buffer[180];
						BASE_GetCreateMob(clientid, &buffer);
						GridMulticast(mob->PosX, mob->PosY, buffer, 0);						
						
						Log(Functions::StrFormat("%s %s used bean info:%d", user->AccountName, mob->Mob.Name, info), "-system", 0);
					}
					else
					{
						bool sucess = false;
						for (int i = 0; i < 3; i++)
						{
							if (dstItem->Effect[i].Index == 0)
							{								
								sucess = true;
								break;
							}
						}

						if (sucess)
						{
							SendClientMessage(clientid, "Refine o item para poder usar.");
						}						
						else
						{							
							SendClientMessage(clientid, "Não é possível usar em itens que não podem ser refinados.");
						}
					}
				}
				else
				{
					SendClientMessage(clientid, "Utilize em equipamentos ou escudos.");
				}				
			}
			else
			{
				Log(Functions::StrFormat("beans info out of range. conn: %d info: %d", clientid, info), "-system", 0);
			}
		}
		else
		{
			Log(Functions::StrFormat("beans dst_type is invalid. conn: %d type: %d", clientid, packet->Dst.Type), "-system", 0);
		}		

		SendItem(clientid, packet->Src.Type, packet->Src.Slot, srcItem);
		return TRUE;
	}

	return FALSE;
}

BOOL Hook::ProcessMobKilled(int32_t gennerId, int32_t killedId, int32_t killerId)
{
	auto killed = GetMobFromIndex(killedId);
	auto killer = GetMobFromIndex(killerId);		
	SendClientMessage(killerId, Functions::StrFormat("Você matou [%s]", killed->Mob.Name));
	return FALSE;
}
