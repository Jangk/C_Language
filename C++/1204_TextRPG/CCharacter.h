#pragma once

#ifndef __CCHARACTER_H__
#include "Struct.h"
#include "CItem.h"
class CCharacter
{
private :


public:
	virtual void Initialize() = 0;
	virtual void SetInfo(const char* szName, int iLev, int iAtt, int iHP, int iMoney = 0, int iMaxExp = 100) = 0;
	virtual void Update() = 0;
	virtual void Render() = 0;
	virtual void Release() = 0;
	const CharacterInfo& GetInfo() const;
	ItemInfo GetItemInfo();
	void SetItem(CItem item);
	void SetDamage(int dem);
	void SetMoney(int iMoney);
	void InitHP();
	bool IsDead();


public:
	CCharacter();
	virtual ~CCharacter();				


protected:
	CharacterInfo m_CharInfo;
	CItem m_Item;
};
#define __CCHARACTER_H__
#endif

