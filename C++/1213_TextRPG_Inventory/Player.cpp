#include "pch.h"
#include "Player.h"

void Player::Init()
{
}

void Player::Render()
{
	cout << "------------------------------------" << endl;
	cout << "����\t:\t" << m_CharInfo.szName << endl;
	cout << "����\t:\t" << m_CharInfo.iLevel << endl;
	cout << "���ݷ�\t:\t" << m_CharInfo.iAtt << endl;
	cout << "����\t:\t" << m_CharInfo.iDef << endl;
	cout << "ü��\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "����ġ\t:\t" << m_CharInfo.iCurEXP << "/" << m_CharInfo.iMaxEXP << endl;
	cout << "������\t:\t" << m_CharInfo.iMoney << endl;
	cout << "------------------------------------" << endl;
}
