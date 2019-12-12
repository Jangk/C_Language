#pragma once
#ifndef __STRUCT_H__
struct CharacterInfo
{
	char szName[32];
	int iLev;
	int iAtt;
	int iDef;
	int iMaxHP;
	int iCurHP;
	int iMaxExp;
	int iCurExp;
	int iMoney;
};


struct ItemInfo
{
	char szName[32];
	int iAtt;
	int iDef;
	int iPrice;
};
#define __STRUCT_H__
#endif