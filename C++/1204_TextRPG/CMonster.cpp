#include "pch.h"
#include "CMonster.h"
#include "CCharacter.h"


void CMonster::Initialize()
{
	memset(&m_CharInfo, 0, sizeof(CharacterInfo));
}


void CMonster::SetInfo(const char* szName, int iLev, int iAtt, int iHP, int iMoney = 0, int iMaxExp = 100)
{
	memcpy(&m_CharInfo.szName, szName, strlen(szName)+1);

	m_CharInfo.iLev    = iLev;
	m_CharInfo.iAtt    = iAtt;
	m_CharInfo.iDef	   = 0;					// 방어력은 아이템으로만 올릴 수 있다.
	m_CharInfo.iMaxHP  = iHP;
	m_CharInfo.iCurHP  = m_CharInfo.iMaxHP;
	m_CharInfo.iMaxExp = 0;
	m_CharInfo.iCurExp = 0;
	m_CharInfo.iMaxExp = iMaxExp;
	m_CharInfo.iMoney  = iMoney;
}


void CMonster::Update()
{
}


void CMonster::Render()
{
	cout << "------------------------------------" << endl;
	cout << "이름\t:\t" << m_CharInfo.szName << endl;
	cout << "레벨\t:\t" << m_CharInfo.iLev << endl;
	cout << "공격력\t:\t" << m_CharInfo.iAtt << endl;
	cout << "체력\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "------------------------------------" << endl;
}


void CMonster::Release()
{
}
