/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

class Functions
{
public:	
	// Gets the user structure by the clientId
	static CUser* GetUserFromIndex(int32_t clientid);
	// Gets the item structure by the itemId
	static st_ItemList* GetItemFromIndex(int32_t itemId);
	//Gets language
	static char* GetLanguageFromIndex(int32_t id);
	static char* GetLanguageFromIndex(int32_t id, char *param1);
	static char* GetLanguageFromIndex(int32_t id, char *param1, char *param2);
	static char* GetLanguageFromIndex(int32_t id, int32_t param1);
	static char* GetLanguageFromIndex(int32_t id, int32_t param1, int32_t param2);
	static char* GetLanguageFromIndex(int32_t id, char* param1, int32_t param2);
	static char* GetLanguageFromIndex(int32_t id, int32_t param1, char* param2);
	// Gets the first item, in the given slot, which is equal to the itemId
	static int32_t GetFirstSlot(int32_t client, SlotType type, uint16_t itemId);
	//decrease amount in item
	static void AmountMinus(st_Item *item);
	//Send one message
	static void SendOneMessage(int32_t client, void* pMsg, int32_t len);
	//Formats a string
	static char *StrFormat(const char *str, ...);
	// Update the client status
	static void GetCurrentScore(int32_t clientid);
	// Update the client level, according to the exp
	static int32_t CheckGetLevel(int32_t clientid);
};

//NativeFunctions
static void(*SendClientMessage)(int32_t clientid, char *) = (void(__cdecl *)(int32_t, char *)) 0x00401B63;
static void(*ProcessClientMessage)(int32_t client, char* pMsg) = (void(__cdecl*)(int32_t, char*)) 0x45E200;
static void(*SendScore)(int32_t client) = (void(__cdecl*)(int32_t)) 0x4018B1;
static void(*SendEtc)(int32_t client) = (void(__cdecl*)(int32_t)) 0x401348;
static void(*SendEmotion)(int32_t client, int32_t x, int32_t y) = (void(*)(int32_t, int32_t, int32_t)) 0x448EA0;
static void(*SendSay)(int32_t client, char* msg) = (void(__cdecl*)(int32_t, char*)) 0x401550;
static CMob*(*GetMobFromIndex)(int32_t client) = (CMob*(__cdecl*)(int32_t)) 0x4016B3;
static void(*SendClientSignalParm)(int32_t client, int32_t, uint16_t packetId, int32_t param) = (void(__cdecl*)(int32_t, int32_t, uint16_t, int32_t)) 0x4015FF;
static void(*SendCarry)(int32_t client) = (void(__cdecl*)(int32_t)) 0x4018B6;
static void(*SendItem)(int32_t client, int32_t, int32_t, st_Item*) = (void(__cdecl*)(int32_t, int32_t, int32_t, st_Item*)) 0x401960;
static int32_t(*GetUserByName)(char* name) = (int32_t(__cdecl*)(char*)) 0x4010D7;
static int32_t(*GetCreateMob)(int32_t, char*) = (int32_t(__cdecl*)(int32_t, char*)) 0x4010FF;
static void(*DoTeleport)(int32_t, int32_t, int32_t, int32_t) = (void(*)(int32_t, int32_t, int32_t, int32_t)) 0x401A19;
static void(*CharLogOut)(int32_t client) = (void(__cdecl*)(int32_t)) 0x401528;
static int32_t(*CreateMob)(char *, int32_t, int32_t, char *) = (int32_t(__cdecl*) (char *, int32_t, int32_t, char *)) 0x40177B;
static void(*ClearArea)(int32_t x1, int32_t y1, int32_t x2, int32_t y2) = (void(__cdecl*)(int32_t, int32_t, int32_t, int32_t)) 0x401ACD;
static void(*ClearAreaLevel)(int32_t x1, int32_t y1, int32_t x2, int32_t y2, int32_t, int32_t) = (void(__cdecl*)(int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)) 0x401230;
static void(*GenerateMob)(int32_t, int32_t, int32_t) = (void(__cdecl*)(int32_t, int32_t, int32_t)) 0x401C30;
static int32_t(*ReadMob)(st_Mob*, char*) = (int32_t(__cdecl*)(st_Mob*, char*)) 0x4013E8;
static void(*GenerateRandomMob)(int32_t) = (void(__cdecl*)(int32_t)) 0x00401627;
static void(*Rand)() = (void(__cdecl*)()) 0x004E46F0;
static int32_t(*BASE_GetItemAbility)(st_Item *item, int32_t eff) = (int32_t(__cdecl*)(st_Item*, int32_t)) 0x0040191F;
static int32_t(*BASE_GetItemAmount)(st_Item *item) = (int32_t(__cdecl*)(st_Item*)) 0x004013D9;
static void(*BASE_SetItemAmount)(st_Item *item, int32_t amount) = (void(__cdecl*)(st_Item*, int32_t)) 0x0040187F;
static st_Item*(*GetItemPointer)(CMob *mob, st_Item *cargo, int32_t type, int32_t slot) = (st_Item*(__cdecl*)(CMob*, st_Item*, int32_t, int32_t)) 0x00401CA3;
static void(*SendSetHpMp)(int32_t clientid) = (void(__cdecl*)(int32_t)) 0x004018A7;
static void(*Log)(char *msg, char *type, int32_t zero) = (void(__cdecl*)(char*, char*, int32_t)) 0x004015D7;
static int32_t(*BASE_GetItemSanc)(st_Item *item) = (int32_t(__cdecl*)(st_Item*)) 0x0040103C;
static int32_t(*BASE_SetItemSanc)(st_Item *item, int32_t value, int32_t delta) = (int32_t(__cdecl*)(st_Item*, int32_t, int32_t)) 0x00401109;
static int32_t(*BASE_GetCreateMob)(int32_t clientid, void *) = (int32_t(__cdecl *)(int32_t, void*)) 0x004010FF;
static int32_t(*GridMulticast)(int32_t posX, int32_t posY, void* packet, int32_t zero) = (int32_t(__cdecl *)(int32_t, int32_t, void*, int32_t)) 0x004014FB;
static int32_t(*GetEmptyUser)(void) = (int32_t(__cdecl*)()) 0x401726;
static void(*CloseUser)(int32_t client) = (void(__cdecl*)(int32_t)) 0x4B8240;
static void(*BASE_GetLanguage1)(char *str, int32_t idx) = (void(__cdecl*)(char*, int32_t)) 0x00404400;
static void(*BASE_GetLanguage2)(char *str, int32_t idx, char* param1) = (void(__cdecl*)(char*, int32_t, char*)) 0x00404480;
static void(*BASE_GetLanguage3)(char *str, int32_t idx, char* param1, char *param2) = (void(__cdecl*)(char*, int32_t, char*, char*)) 0x00404510;
static void(*BASE_GetLanguage4)(char *str, int32_t idx, int32_t param1) = (void(__cdecl*)(char*, int32_t, int32_t)) 0x004045A0;
static void(*BASE_GetLanguage5)(char *str, int32_t idx, int32_t param1, int32_t param2) = (void(__cdecl*)(char*, int32_t, int32_t, int32_t)) 0x00404630;
static void(*BASE_GetLanguage6)(char *str, int32_t idx, char* param1, int32_t param2) = (void(__cdecl*)(char*, int32_t, char*, int32_t)) 0x004046C0;
static void(*BASE_GetLanguage7)(char *str, int32_t idx, int32_t param1, char* param2) = (void(__cdecl*)(char*, int32_t, int32_t, char*)) 0x00404750;
static void(*SaveAll)() = (void(__cdecl*)()) 0x0042E770;
static void(*SetAffect)(int user, int buff, int time, int value) = (void(__cdecl*)(int user, int buff, int time, int value)) 0x40195B;
static void(*SendDamage)(int x, int y, int x2, int y2) = (void(__cdecl*)(int x, int y, int x2, int y2)) 0x40130C;
static void(*SendEnvEffect)(int x, int y, int x2, int y2, int effectID, int time) = (void(__cdecl*)(int x, int y, int x2, int y2, int effectID, int time)) 0x4018E8;
static void(*SendRemoveParty)(int user, int type) = (void(__cdecl*)(int user, int type)) 0x0401730;
static int(*SendDeleteMob)(int user, int reason) = (int(__cdecl*)(int, int)) 0x401B90;
static int(*PutItem)(int clientid, st_Item* item) = (int(__cdecl*)(int, st_Item*)) 0x0401401;
static void(*SaveUser)(int, int) = (void(__cdecl*)(int, int)) 0x4B9480;
static void(*SendNotice)(char*) = (void(__cdecl*)(char *)) 0x0401479;
static int(*GetUserInArea)(int, int, int, int, char*) = (int(__cdecl*)(int, int, int, int, char*)) 0x040145B;
static void(*SendCreateMob)(int32_t index, int32_t oindex, int32_t type) = (void(__cdecl*)(int32_t, int32_t, int32_t)) 0x004019F6;
static void(*MobKilled)(int32_t, int32_t, int32_t, int32_t) = (void(*)(int32_t, int32_t, int32_t, int32_t)) 0x4BADF0;
static void(*ProcessSecTimer)() = (void(*)()) 0x4AF390;
static void(*ProcessMinTimer)() = (void(*)()) 0x4B13B0;
static int32_t(*BASE_GetBonusSkillPoint)(st_Mob* mob) = (int32_t(*)(st_Mob*)) 0x403480;
static int32_t(*BASE_GetBonusScorePoint)(st_Mob* mob, int32_t, int32_t) = (int32_t(*)(st_Mob*, int32_t, int32_t)) 0x4015FA;
static int32_t(*BASE_GetGuild)(int32_t, int32_t) = (int32_t(*)(int32_t, int32_t)) 0x40CF50;
static void(*BASE_ClearItem)(st_Item*) = (void(*)(st_Item*)) 0x40D420;
static void(*BASE_SetValidString)(char*) = (void(*)(char*)) 0x409000;
static int32_t(*BASE_GetSuccessRate)(st_Item*, int32_t) = (int32_t(*)(st_Item*, int32_t)) 0x407EC0;
static int32_t(*BASE_GetMobAbility)(st_Mob* mob, uint8_t eff) = (int32_t(*)(st_Mob*, uint8_t)) 0x4088A0;
static int32_t(*BASE_GetMaxAbility)(st_Mob* mob, uint8_t eff) = (int32_t(*)(st_Mob*, uint8_t)) 0x408D60;
static int32_t(*BASE_GetMobChecksum)(st_Mob* mob) = (int32_t(__cdecl*)(st_Mob*)) 0x408E20;
static bool(*BASE_CheckValidString)(char*) = (bool(*)(char*)) 0x408F00;
static void(*BASE_ApplyAttribute)(char*, int32_t) = (void(*)(char*, int32_t)) 0x4093B0;
static void(*BASE_SpaceToUnderbar)(char*) = (void(*)(char*)) 0x4095D0;
static void(*BASE_UnderBarToSpace)(char*) = (void(*)(char*)) 0x409650;
static void(*BASE_ClearMob)(st_Mob*) = (void(*)(st_Mob*)) 0x4096F0;
static int32_t(*BASE_GetHpMp)(st_Mob*) = (int32_t(*)(st_Mob*)) 0x4040F0;
static int32_t(*GetExpApply)(int32_t, int32_t, int32_t) = (int32_t(*)(int32_t, int32_t, int32_t)) 0x427020;
#endif

