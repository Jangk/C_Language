#pragma once
#ifndef __STRUCT_H__
#define __STRUCT_H__

enum class SceneType
{
	Dungeon,
	Shop,
	Inventory,
	None
};

enum class EquipmentType
{
	Weapon,
	Armor,
	Necklace,
	Ring,
	None
};

struct CharInfo
{
	char szName[32];
	int iLevel;
	int iMoney;
	int iCurHP;
	int iMaxHP;
	int iCurEXP;
	int iMaxEXP;
	int iAtt;
	int iDef;
};

struct ItemInfo
{
	char szName[32];
	int iAtt;
	int iDef;
	int iPrice;
	EquipmentType ItemType;
};
#endif // !__STRUCT_H__
