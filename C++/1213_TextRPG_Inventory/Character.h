#pragma once
#ifndef __CHARHACTER_H__
#define __CHARHACTER_H__
#include "STRUCT.h"
#include "Item.h"
class Character
{
public:
	virtual void Init() = 0;
	virtual void Render() = 0;
	const CharInfo& GetCharacterInfo()const;
	void SetDamage(Character& other);
	void SetInfo(const char* szName, int iAtt, int iMaxHP,
				 int iExp = 0, int iDef = 100, int iMoney = 0,int iLevel =1);
public:
	Character();
	~Character();
protected:
	CharInfo m_CharInfo;
	Item m_Item[static_cast<int>(EquipmentType::None)];	 //아이템갯수만큼.
};


#endif // !__CHARHACTER_H__