#include "pch.h"
#include "Player.h"

void Player::Init()
{
}

void Player::Render()
{
	cout << "------------------------------------" << endl;
	cout << "직업\t:\t" << m_CharInfo.szName << endl;
	cout << "레벨\t:\t" << m_CharInfo.iLevel << endl;
	cout << "공격력\t:\t" << m_CharInfo.iAtt << endl;
	cout << "방어력\t:\t" << m_CharInfo.iDef << endl;
	cout << "체력\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "경험치\t:\t" << m_CharInfo.iCurEXP << "/" << m_CharInfo.iMaxEXP << endl;
	cout << "소지금\t:\t" << m_CharInfo.iMoney << endl;
	cout << "------------------------------------" << endl;
}
