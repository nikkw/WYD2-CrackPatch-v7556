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

bool ConstantPatch::Initialize()
{	
	__try
	{
		BypassPlayerLimit();
		SetMaxQuestExpAndGold();
		SetBaseNPCNames();
		SetCliver();
		SetPaths();
		TranslateStrings();
		SetSancRate();
		return true;
	}
	__except (1)
	{
		return false;
	}
}

void ConstantPatch::BypassPlayerLimit()
{
	// Change JE to JMP 
	*(uint8_t*)(0x45FB9D) = 0xEB;

	// Make functions return with nothing.
	*(uint8_t*)(0x44DC90) = 0xC3;
	*(uint8_t*)(0x44DD00) = 0xC3;
	*(uint8_t*)(0x44DD70) = 0xC3;

	//Jump loop
	HookLib::SetHook(eHookType::JMP, 0x004B7C41, (uintptr_t*)(0x004B7D90), 5);
}

void ConstantPatch::SetMaxQuestExpAndGold()
{
	// Set maximum quest exp reward (quest256exp.txt)
	*(uint32_t*)(0x4CD20B + 6) = 1000000;
	// Set maximum quest gold reward (quest256gold.txt)
	*(uint32_t*)(0x4CD3CB + 6) = 1000000;
}

void ConstantPatch::SetBaseNPCNames()
{
	static const char* npc_base_folder = "npc_base";

	static const uint32_t npc_folder_addr[] =
	{
		0x41C38A, 0x41C43C, 0x41C49A, 0x41C557, 0x41C5B5, 0x41C672, 0x41C6D0, 0x41C78D, 0x41C7EB,
		0x41C8A8, 0x41C906, 0x41C9C3, 0x41CA21, 0x41CADE, 0x41CB3C, 0x41CBF9, 0x41CC57, 0x41CD14,
		0x41CD72, 0x41CE2F, 0x41CE8D, 0x41CF4A, 0x41CFA8, 0x41D065, 0x41D0C3, 0x41D180, 0x41D1DE,
		0x41D29B, 0x41D2F9, 0x41D3B6, 0x41D414, 0x41D4D1
	};
	for (uint32_t i = 0; i < sizeof(npc_folder_addr) / sizeof(decltype(npc_folder_addr[0])); i++)
	{
		*(uint32_t*)(npc_folder_addr[i] + 2) = (uint32_t)&npc_base_folder;
	}
	static const uint32_t npc_folder_addr_2[] =
	{
		0x41C3DE, 0x41C4F9, 0x41C614, 0x41C72F, 0x41C84A, 0x41C965, 0x41CA80, 0x41CB9B, 0x41CCB6,
		0x41CDD1, 0x41CEEC, 0x41D007, 0x41D122, 0x41D23D, 0x41D358, 0x41D473
	};
	for (uint32_t i = 0; i < sizeof(npc_folder_addr_2) / sizeof(decltype(npc_folder_addr_2[0])); i++)
	{
		*(uint32_t*)(npc_folder_addr_2[i] + 1) = (uint32_t)&npc_base_folder;
	}

	static const uint32_t npc_addresses[] =
	{
		0x41C379, 0x41C3C7, 0x41C425, 0x41C484, 0x41C4E2, 0x41C540, 0x41C59F, 0x41C5FD, 0x41C65B,
		0x41C6BA, 0x41C718, 0x41C776, 0x41C7D5, 0x41C833, 0x41C891, 0x41C8F0, 0x41C94E, 0x41C9AC,
		0x41CA0B, 0x41CA69, 0x41CAC7, 0x41CB26, 0x41CB84, 0x41CBE2, 0x41CC41, 0x41CC9F, 0x41CCFD,
		0x41CD5C, 0x41CDBA, 0x41CE18, 0x41CE77, 0x41CED5, 0x41CF33, 0x41CF92, 0x41CFF0, 0x41D04E,
		0x41D0AD, 0x41D10B, 0x41D169, 0x41D1C8, 0x41D226, 0x41D284, 0x41D2E3, 0x41D341, 0x41D39F,
		0x41D3FE, 0x41D45C, 0x41D4BA
	};
	static const char* npc_names[] =
	{
		"Condor", "Javali", "Lobo", "Urso", "Tigre", "Gorila", "Dragao_Negro", "Succubus",
		"Porco", "Javali_", "Lobo_", "Dragao_Menor", "Urso_", "Dente_de_Sabre",
		"Sem_Sela", "Fantasma", "Leve", "Equipado", "Andaluz",
		"Sem_Sela_", "Fantasma_", "Leve_", "Equipado_", "Andaluz_",
		"Fenrir", "Dragao", "Grande_Fenrir", "Tigre_de_Fogo", "Dragao_Vermelho",
		"Unicornio", "Pegasus", "Unisus", "Grifo", "Hippo_Grifo",
		"Grifo_Sangrento", "Sleipnir", "Svadilfari",
		// Unknown 
		"Helio",
		"Humphrey",
		"Sabina",
		"Naomi",
		"Naomi_",
		"Naomi__",
		"Nicole",
		"Bess",
		"Ilrena",
		"Ilrena_",
		"Ilrena__"
	};

	for (uint32_t i = 0; i < sizeof(npc_addresses) / sizeof(decltype(npc_addresses[0])); i++)
		*(uint32_t*)(npc_addresses[i] + 1) = (uint32_t)npc_names[i];
}

void ConstantPatch::SetCliver()
{
	// Client Version
	*(uint32_t*)0x5A1344 = 7556;

	// Max difference between client and server version
	*(uint8_t*)(0x45F74F + 2) = 3;

	// Set the login port for client.
	*(uint32_t*)(0x45C301 + 1) = 8281;
}

void ConstantPatch::SetPaths()
{
	static const char* lottoFilePath = "./settings/Lotto.txt";
	*(uint32_t*)(0x40ECD3 + 1) = (uint32_t)lottoFilePath;

	static const char* challFilePath = "./settings/Chall_%2.2d_%2.2d.txt";
	*(uint32_t*)(0x4BA83B + 1) = (uint32_t)challFilePath;
	*(uint32_t*)(0x4BA6E0 + 1) = (uint32_t)challFilePath;

	static const char* guildFilePath = "./settings/Guild_%2.2d_%2.2d.txt";
	*(uint32_t*)(0x4551FF + 1) = (uint32_t)guildFilePath;
	*(uint32_t*)(0x45580D + 1) = (uint32_t)guildFilePath;

	static const char* randomQuizFilePath = "./settings/RandomQuiz.txt";
	*(uint32_t*)(0x454DCE + 1) = (uint32_t)randomQuizFilePath;
	*(uint32_t*)(0x00454E0A + 1) = (uint32_t)randomQuizFilePath;

	static const char* idPrehibitFilePath = "./settings/IDprehibit.txt";
	*(uint32_t*)(0x4CE56E + 1) = (uint32_t)idPrehibitFilePath;
	*(uint32_t*)(0x004CE5AA + 1) = (uint32_t)idPrehibitFilePath;

	static const char* totoDataFilePath = "./settings/TotoData.txt";
	*(uint32_t*)(0x4D025A + 1) = (uint32_t)totoDataFilePath;
	*(uint32_t*)(0x4D045A + 1) = (uint32_t)totoDataFilePath;

	static const char* khepraDropItemFilePath = "./settings/KhepraDropItem.txt";
	*(uint32_t*)(0x4C9721 + 1) = (uint32_t)khepraDropItemFilePath;

	static const char* languageFilePath = "./settings/Language.txt";
	*(uint32_t*)(0x434B32 + 1) = (uint32_t)languageFilePath;
	*(uint32_t*)(0x4BA04E + 1) = (uint32_t)languageFilePath;	

	static const char* countryIPFilePath = "./settings/CountryIP.csv";
	*(uint32_t*)(0x45C3AB + 1) = (uint32_t)countryIPFilePath;

	static const char* totoGameFilePath = "./settings/TOTOGame.csv";
	*(uint32_t*)(0x435386 + 1) = (uint32_t)totoGameFilePath;
	*(uint32_t*)(0x45C333 + 1) = (uint32_t)totoGameFilePath;

	static const char* levelItemFilePath = "./settings/LevelItem.txt";
	*(uint32_t*)(0x45B543 + 1) = (uint32_t)levelItemFilePath;

	static const char* deleteItemFilePath = "./settings/DeleteItem.txt";
	*(uint32_t*)(0x45B95D + 1) = (uint32_t)deleteItemFilePath;

	static const char* hellGateWeaponFilePath = "./settings/HellGateWeapon.txt";
	*(uint32_t*)(0x42D1B3 + 1) = (uint32_t)hellGateWeaponFilePath;

	static const char* hellGateArmorFilePath = "./settings/HellGateArmor.txt";
	*(uint32_t*)(0x42D903 + 1) = (uint32_t)hellGateArmorFilePath;

	static const char* hellGateAccesoryFilePath = "./settings/HellGateAccessory.txt";
	*(uint32_t*)(0x42E013 + 1) = (uint32_t)hellGateAccesoryFilePath;

	static const char* quest256ExpFilePath = "./settings/Quest256Exp.txt";
	static const char* quest256GoldFilePath = "./settings/Quest256Gold.txt";
	*(uint32_t*)(0x4CD187 + 1) = (uint32_t)quest256ExpFilePath;
	*(uint32_t*)(0x4CD347 + 1) = (uint32_t)quest256GoldFilePath;	

	static const char* itemPriceTxtPath = "./settings/ItemPrice.txt";
	static const char* itemPriceBinPath = "./settings/ItemPrice.bin";
	*(uint32_t*)(0x004029E9 + 1) = (uint32_t)itemPriceTxtPath;
	*(uint32_t*)(0x00402A9D + 1) = (uint32_t)itemPriceBinPath;

	static const char *gameRoomPath = "./settings/GameRoomIP.txt";
	*(uint32_t*)(0x00414923 + 1) = (uint32_t)gameRoomPath;

	static const char *blockIpPath = "./settings/BlockIP.txt";
	*(uint32_t*)(0x00414BB3 + 1) = (uint32_t)blockIpPath;

	static const char *missionPath = "./settings/Mission.txt";
	*(uint32_t*)(0x0044652D + 1) = (uint32_t)missionPath;

	static const char *quizPath = "./settings/Quiz.txt";
	*(uint32_t*)(0x004B9A4A + 1) = (uint32_t)quizPath;
	
	static const char *guildStringPath = "./settings/GuildString.txt";
	*(uint32_t*)(0x004CD4F3 + 1) = (uint32_t)guildStringPath;

	static const char *macAdressPath = "./settings/MacAddress.txt";
	*(uint32_t*)(0x004DA3E3 + 1) = (uint32_t)macAdressPath;
}

void ConstantPatch::TranslateStrings()
{
	*(int32_t*)(0x0048CFD1 + 1) = (int32_t)("Chat cidadão : Off");
	*(int32_t*)(0x0048CFE4 + 1) = (int32_t)("Chat cidadão : On");
	*(int32_t*)(0x0048D048 + 1) = (int32_t)("Chat guild : Off");	
	*(int32_t*)(0x0048D05B + 1) = (int32_t)("Chat guild : Off");		
}

void ConstantPatch::SetSancRate()
{
	static const auto addr_base_ori = 0x0059507C;
	static const int32_t g_OriRateTable[] = 
	{
		100,
		100,
		100,
		100,
		75,
		50,
		0,
		0,
		0,
		0,
		0,
		0,
		0
	};

	for (auto i = 0; i < sizeof g_OriRateTable / 4; i++)
	{
		__SET(int32_t, (addr_base_ori + (i * 4)), g_OriRateTable[i]);
	}


	static const auto addr_base_lac = 0x0059519C;
	static const int32_t g_LacRateTable[] =
	{
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100
	};

	for (auto i = 0; i < sizeof g_LacRateTable / 4; i++)
	{
		__SET(int32_t, (addr_base_lac + (i * 4)), g_LacRateTable[i]);
	}

	static const auto addr_base_amg = 0x00594FBC;
	static const int32_t g_AmgRateTable[] =
	{
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100,
		100
	};

	for (auto i = 0; i < sizeof g_AmgRateTable / 4; i++)
	{
		__SET(int32_t, (addr_base_amg + (i * 4)), g_AmgRateTable[i]);
	}
}