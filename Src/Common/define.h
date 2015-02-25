/*
Copyright (C) 2015 bgarcia and agateownz
Contact: fb.com/bruunooliveira.2 or brunogarcia212@gmail.com

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation.

This program is distributed in the hope that it will be useful,
but withouy any warranty.
*/

#ifndef __DEFINE_H__
#define __DEFINE_H__

#define NAKED void __declspec(naked)
#define RECV 0
#define SEND 1
#define MAX_USER 1000
#define MAX_INVENTORY 64
#define MAX_EQUIPMENT 16
#define MAX_STORAGE 128
#define MAX_ITEMLIST 6500
#define MAX_AFFECT 16
#define NAME_LENGTH 16
#define MAX_CHAR_PER_ACCOUNT 4
#define MAX_PARTY 12

#define CUSER_ADDR 0x00752BAD8
#define ITEMLIST_ADDR 0x009CCC40
#define JACKPOTMODE_ADDR 0x0054F8189
#define JACKPOTUSER_ADDR 0x00AACD60
#define JACKPOTPOINT_ADDR 0x0054EB278
#define SNOWFIELDDROP_ADDR 0x008C76468
#define SETUSENAME_ADDR 0x008C75F00
#define WND_ADDR 0x0034EA54C
#define DECAY_ADDR 0x005A1068
#define MARATHONSERVER_ADDR 0x008C76484
#define ITEMDESTROY_ADDR 0x005A144C
#define SETITEMMASTER_ADDR  0x008C75F58
#define BILLFREE_ADDR 0x005A0FB0
#define CHARSELLBILL_ADDR 0x008C762BC
#define POTIONCOUNTBILL_ADDR 0x005A104C
#define PARTYBONUS_ADDR 0x005A1050
#define GUILDBOARD_ADDR 0x008C762C4
#define BLOCKCLAN_ADDR 0x005A1090
#define REBOOT_ADDR 0x005A106C
#define DROPBONUS_ADDR 0x00597350
#define MAXLEVELTICKET_ADDR 0x008C75F1C

#define __GET(type, addr) *(type*)addr
#define __SET(type, addr, value) *(type*)addr = value


#endif // !__DEFINE_H__