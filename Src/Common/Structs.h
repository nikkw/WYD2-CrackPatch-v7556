/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __STRUCTS_H__
#define __STRUCTS_H__

#include "define.h"
struct PacketHeader
{
	uint16_t Size; //0 - 1
	uint8_t Key;   //2
	uint8_t Checksum; //3
	uint16_t PacketId; //4 - 5
	uint16_t ClientId; //6 - 7
	uint32_t TimeStamp; //8 - 11
};

static const int32_t g_RefineTable[] = { 116, 117, 118, 119, 120, 121, 122, 123, 124, 125, 43 };

enum SlotType : int32_t
{
	Equipment = 0,
	Inventory,
	Storage
};

enum EquipType : int32_t
{
	Face = 1,
	Helm = 2,
	Armor = 4,
	Pants = 8,
	Gloves = 16,
	Boots = 32,
	Weapon2Hand = 64,
	Shield = 128,
	Weapon1Hand = 192,
	Ring = 256,
	Amulet = 512,
	Orb = 1024,
	Ankh = 2048,
	Guild = 4096,
	Fairy = 8192,
	Mount = 16384,
	Cape = 32768
};

enum Colors
{
	//http://www.colorhexa.com/color-names
	//0xFF + color 
	Red = 0xFF0000FF, 
	Green = 0xFF00FF00,
	Blue = 0xFFFF0000,
	
	AirForceBlue = 0xFF5D8AA8,
	Bubble = 0xFFE7FEFF,
	Burgundy = 0xFF800020,
	Gold = 0xFFFFD700,
	Sunglow = 0xFFFFCC33,
	UltraPink = 0xFFFF6FFF
};

struct st_Status
{
	uint16_t Level;
	uint16_t Defense;
	uint16_t Attack;

	struct  {
		uint8_t Merchant : 4;
		uint8_t Direction : 4;
	} Merchant;
	struct {
		uint8_t Speed : 4;
		uint8_t ChaosRate : 4;
	} Move;

	uint16_t maxHP, maxMP;
	uint16_t curHP, curMP;

	uint16_t Status[4];
	uint8_t Mastery[4];
};
struct st_Position
{
	uint16_t X;
	uint16_t Y;
};
struct st_Item
{
	uint16_t Index;

	struct
	{
		uint8_t Index;
		uint8_t Value;
	} Effect[3];

#define EF1 Effect[0].Index
#define EFV1 Effect[0].Value
#define EF2 Effect[1].Index
#define EFV2 Effect[1].Value
#define EF3 Effect[2].Index
#define EFV3 Effect[2].Value
};
struct st_Affect
{
	uint8_t Index;
	uint8_t Master;
	uint16_t Value;
	uint32_t Time;
};
struct st_Mob
{
	uint8_t Name[NAME_LENGTH];
	uint8_t CapeInfo;
	struct
	{
		uint8_t Merchant : 6;
		uint8_t CityID : 2;
	} Info;
	uint16_t GuildIndex;
	uint8_t ClassInfo;

	uint8_t AffectInfo;

	// |= 1 First Trainer, Pílula Mágica
	// |= 2 MysticLand // Pegou primeira parte da quest
	// |= 4 MysticLand 2
	// |= 8 MysticLand 3 // Recebeu a recompensa
	// |= 16 Quest Reset Skill 1, Reset com Safira
	// |= 32 Quest Reset Skill 2
	// |= ??  00441F5F Arch Talvez?
	uint16_t QuestInfo;

	int32_t Gold;
	uint32_t Exp;

	st_Position LastPosition;

	st_Status bStatus;
	st_Status Status;

	st_Item Equip[MAX_EQUIPMENT];
	st_Item Inventory[MAX_INVENTORY];

	uint32_t Learn;

	uint16_t StatusPoint,
		MasterPoint,
		SkillPoint;

	uint8_t Critical;
	uint8_t SaveMana;

	char SkillBar[4];

	char GuildMemberType;
	uint8_t MagicIncrement;

	uint8_t RegenHP,
		RegenMP;

	uint8_t Resist[4];
};

struct CMob
{ // size 1724 -> 0x1FDECA0

	st_Mob Mob; // 0x1FDECA0 - 756

	uint32_t CPoint; // 760
	uint32_t CrackError;
	uint32_t NTCount; // 764
	uint32_t Mileage; // 768
	uint32_t _Unknown_1; // 772 ETC use item God2 ExpLimit
	uint32_t Fame; // 776
	uint32_t _Unknown_2; // 780 ETC Carry Item
	uint32_t _Unknown_3; // 784 /kt command

	st_Affect SaveAffects[MAX_AFFECT]; // 0x1FDEFB4

	struct
	{
		uint8_t		_Unknown[16];
		//STRUCT_ITEM _u[2];
		//uint32_t	QuestInfo; // 1FDF034
		//uint8_t		Citzenship; // 1FDF038 -> Cidadania!!!
		//uint8_t		_u1[4]; // 1FDF039
		//uint8_t		HasSub; // 1FDF03D ?? 
		//uint8_t		_u2; // 1FDF03E
		//uint8_t		_u3; // 1FDF03F
		//uint8_t		_u4[4]; // 1FDF040

		uint32_t	Learn; // 1FDF044

		st_Item SubFace; // 1FDF048
		st_Status SubStatus; // 1FDF050
		uint32_t	SubExp; // 1FDF06C
		char		SubSkillBar[4]; // 1FDF070
		char		SubSkillBar2[16]; // 1FDF074
		int16_t		SubStatusPoint; // 1FDF084
		int16_t		SubMasterPoint; // 1FDF086
		uint32_t	SubLearn; // 1FDF088
		uint32_t	SubType; // 1FDF08C

		uint8_t		_Unknown_2[196];
	} Info; // Size 288


	st_Affect Affects[MAX_AFFECT]; // 1204

	uint32_t Mode; // 1328

	uint8_t _Unknown_4[32];

	int32_t PosX; // 1FDF1F4
	int32_t PosY; // 1FDF1F8

	uint8_t _Unknown_5[128];

	int32_t GenerateIndex; // 1FDF27C 
	uint16_t CurrentTarget; // 01FDF280
	int16_t EnemyList[4]; // 01FDF282 
	int16_t PartyList[MAX_PARTY]; // 01FDF28A
	int16_t NotUsed;

	uint32_t WeaponDamage; // 01FDF2A4
	uint32_t Summoner; // 01FDF2A8
	uint32_t PotionCount; // 01FDF2AC
	uint32_t GuildDisable; // 01FDF2B0

	uint32_t Parry; // 01FDF2B4
	uint32_t DropBonus; // 01FDF2B8
	uint32_t ExpBonus; // 01FDF2BC
	uint32_t ForceBonus; // 01FDF2C0

	uint32_t FaceInfo; // 01FDF2C8
	uint32_t _Unknown_6; // 01FDF2CC

	uint8_t _Unknown_7[76];

	char Tab[26];

	uint8_t _Unknown_8[38];
};

struct st_CharList
{
	st_Position LastPosition[MAX_CHAR_PER_ACCOUNT];
	char Name[MAX_CHAR_PER_ACCOUNT][NAME_LENGTH];
	st_Status Status[MAX_CHAR_PER_ACCOUNT];
	st_Item Equip[MAX_CHAR_PER_ACCOUNT][MAX_EQUIPMENT];

	int16_t GuildId[MAX_CHAR_PER_ACCOUNT];
	int32_t Gold[MAX_CHAR_PER_ACCOUNT];
	uint32_t Experience[MAX_CHAR_PER_ACCOUNT];
};
struct CUser
{
	//base: 0x00752BAD8
	//size: C58h
	char AccountName[NAME_LENGTH]; //0
	int32_t Slot; //16
	in_addr In_Addr; //20
	uint32_t Status; //24
	int32_t IsAutoTrading; //28

	uint8_t _Unknown_1[76];

	struct
	{
		st_Item Item[128];
		int32_t Gold; // 1132
	} Storage;

	uint8_t _Unknown_2[388]; // 1136 

	st_CharList CharList; // 1528

	uint8_t _Unknown_3[80];

	struct
	{
		int32_t Whisper; // 2348
		int32_t Guild; // 2352
		int32_t Citzen; // 2356
		int32_t Chat; // 2360
		int32_t UnknownStatus; // 2364
		char AutoTradeName[24]; // 2368
		int32_t PK; // 2392
	} AllStatus;

	struct
	{
		int32_t CountHP;
		int32_t CountMP;
		int32_t bQuaff;
	} Potion;

	uint32_t AdapterKeys[4];

	struct
	{
		int32_t Mode;
		int32_t Index;
		int32_t ClassId;
	} Challenger;

	int32_t LastReceiveTime;

	int32_t Admin;
	int32_t Child;
	int32_t CheckBillingTime;
	int32_t CharLoginTime;

	uint8_t _Unknown_4[704];
};

struct st_ItemList
{
	char Name[64];

	short mesh1;
	short mesh2;

	short unknow;

	short Level;
	short STR;
	short INT;
	short DEX;
	short CON;

	struct {
		short index;
		short value;
	} Effect[12];

	int Price;
	short Unique;
	WORD Pos;

	short Extreme;
	short Grade;
};

#endif // !__STRUCTS_H__