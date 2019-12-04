#include "Player.h"

void Player::Print()
{
	cout << "이름\t:\t" << m_szName << endl;
	cout << "레벨\t:\t" << m_iLev << endl;
	cout << "공격력\t:\t" << m_iAtt << endl;
	cout << "체력\t:\t" << m_iCurHp << " / " << m_iMaxHp << endl;
	cout << "경험치\t:\t" << m_iCurExp << " / " << m_iMaxExp << endl;
}


void Player::LevelUp(int iAtt)
{
	m_iCurExp += (iAtt * 10);
	while (true)
	{
		if (m_iCurExp >= m_iMaxExp)
		{
			cout << " 레벨업" << endl;
			system("pause");
			++m_iLev;
			m_iAtt += 10;
			m_iCurExp -= m_iMaxExp;
			m_iMaxHp += 50;
			m_iCurHp = m_iMaxHp;
			m_iMaxExp = (m_iLev * 100);
		}
		else
			return;
	}
}


Player::Player() : m_iCurExp(0), m_iMaxExp(m_iLev * 100)
{
	
}


Player::Player(const Player& other)
{
	strcpy_s(m_szName, other.m_szName);
	m_iLev    = other.m_iLev;
	m_iMaxHp  = other.m_iMaxHp;
	m_iCurHp  = m_iMaxHp;
	m_iAtt	  = other.m_iAtt;
	m_iCurExp = other.m_iCurExp;
	m_iMaxExp = other.m_iMaxExp;
}