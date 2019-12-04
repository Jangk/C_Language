#include "Character.h"

void Character::Init(const char* szName, int iLev, int iHp, int iAtt)
{
	strcpy_s(m_szName, szName);
	m_iLev		= iLev;
	m_iMaxHp	= iHp;
	m_iCurHp	= m_iMaxHp;
	m_iAtt		= iAtt;
}


void Character::Print()
{
	cout << "이름:" << m_szName << endl;
	cout << "레벨:" << m_iLev << endl;
	cout << "공격력:" << m_iAtt << endl;
	cout << "체력:" << m_iCurHp << " / " << m_iMaxHp << endl;
}


void Character::Fight(Character& monster)
{
	m_iCurHp		-= monster.m_iAtt;
	monster.m_iCurHp -= m_iAtt;
}

int Character::GetAtt()
{
	return m_iAtt;
}


bool Character::IsDead()
{
	if (m_iCurHp <= 0)
	{
		m_iCurHp = m_iMaxHp;
		return true;
	}
	return false;
}

void Character::LevelUp(int a)
{
}


Character::Character() : m_iLev(1), m_iAtt(0), m_iCurHp(0), m_iMaxHp(0), m_szName("/0")
{

}


