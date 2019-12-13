#include "pch.h"
#include "Character.h"


const CharInfo& Character::GetCharacterInfo()const
{
	return m_CharInfo;
}


void Character::SetDamage(Character& other)
{
	int iFromItemAtt = 0;
	int iToItemDef = 0;
	for (int i = 0; i < static_cast<int>(EquipmentType::None); ++i)
	{	// 이부분 모든 아이템 공격력 방어력 더해서 계산할것.
		adfsdafasdfsadf
		iItemAtt = 0
	}
	other.m_CharInfo.iCurHP -= (m_CharInfo.iAtt + iFromItemAtt)
						    - (other.m_CharInfo.iDef - iToItemDef);
}


void Character::SetInfo(const char* szName, int iAtt, int iMaxHP, 
						int iDef, int iExp, int iMoney, int iLevel)
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


Character::Character()
{
	memset(&m_CharInfo, 0, sizeof(m_CharInfo));
}


Character::~Character()
{
}
