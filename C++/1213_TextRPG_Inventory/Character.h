#pragma once
#ifndef __CHARHACTER_H__
#define __CHARHACTER_H__
#include <list>
#include "STRUCT.h"
#include "Item.h"
class Character
{
public:
	virtual void Init() = 0;
	virtual void Render() = 0;
	const CharInfo& GetCharacterInfo()const;
	void SetDamage(Character& other);
	int GetDeffend();
	void SetInfo(const char* szName, int iAtt, int iMaxHP,
				 int iExp = 0, int iDef = 0, int iMoney = 0,int iLevel =1);
	bool IsDead();
public:
	Character();
	~Character();
protected:
	CharInfo m_CharInfo;
	Item* m_Item[static_cast<int>(EquipmentType::None)];	 //아이템갯수만큼.
	
};


#endif // !__CHARHACTER_H__