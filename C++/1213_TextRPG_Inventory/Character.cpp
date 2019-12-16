#include "pch.h"
#include "Character.h"


const CharInfo& Character::GetCharacterInfo()const
{
	return m_CharInfo;
}


void Character::SetDamage(Character& other)
{
	int iFromItemAtt = 0;
	for (int i = 0; i < static_cast<int>(EquipmentType::None); ++i)
		iFromItemAtt = m_Item[i]->GetItemInfo().iAtt;
	other.m_CharInfo.iCurHP -= (m_CharInfo.iAtt + iFromItemAtt)
						    - other.GetDeffend();
}


int Character::GetDeffend()
{
	int iVal =0;
	for (int i = 0; i < static_cast<int>(EquipmentType::None); ++i)
		iVal = m_Item[i]->GetItemInfo().iDef;
	iVal += m_CharInfo.iDef;
	return iVal;
}


void Character::SetInfo(const char* szName, int iAtt, int iMaxHP, 
						int iExp, int iDef, int iMoney, int iLevel)
{
	strcpy_s(m_CharInfo.szName, 32, szName);
	m_CharInfo.iLevel = iLevel;
	m_CharInfo.iMoney = iMoney;
	m_CharInfo.iAtt = iAtt;
	m_CharInfo.iDef = iDef;
	m_CharInfo.iCurHP = m_CharInfo.iMaxHP = iMaxHP;
	m_CharInfo.iCurEXP = 0;
	m_CharInfo.iMaxEXP = iLevel* 100;
}


bool Character::IsDead()
{
	if (m_CharInfo.iCurHP <= 0)
		return true;
	else
		return false;
}


Character::Character()
{
	memset(&m_CharInfo, 0, sizeof(m_CharInfo));

	for (int i = 0; i < static_cast<int>(EquipmentType::None); ++i)
	{
		m_Item[i] = new Item;
		m_Item[i]->Init();
	}
}


Character::~Character()
{
}
