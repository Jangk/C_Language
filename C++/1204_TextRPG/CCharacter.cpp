#include "pch.h"
#include "CItem.h"
#include "CCharacter.h"

const CharacterInfo& CCharacter::GetInfo()const		// 템이 적용된 상태.
{
	return m_CharInfo;
}


ItemInfo CCharacter::GetItemInfo() 
{
	return m_Item.GetItemInfo();
}


void CCharacter::SetItem(CItem item)
{
	m_Item = item;
}


void CCharacter::SetDamage(int dem)
{
	m_CharInfo.iCurHP -= dem;
}


void CCharacter::SetMoney(int iMoney)
{
	m_CharInfo.iMoney -= iMoney;
}


void CCharacter::InitHP()
{
	m_CharInfo.iCurHP = m_CharInfo.iMaxHP;
}


bool CCharacter::IsDead()
{
	if (m_CharInfo.iCurHP <= 0)
		return true;
	return false;
}


CCharacter::CCharacter()
{
}


CCharacter::~CCharacter()
{
}