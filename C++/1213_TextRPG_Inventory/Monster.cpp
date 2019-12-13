#include "pch.h"
#include "Monster.h"

void Monster::Init()
{
}

void Monster::Render()
{
	cout << "------------------------------------" << endl;
	cout << "이름\t:\t" << m_CharInfo.szName << endl;
	cout << "레벨\t:\t" << m_CharInfo.iLevel << endl;
	cout << "공격력\t:\t" << m_CharInfo.iAtt << endl;
	cout << "방어력\t:\t" << m_CharInfo.iDef << endl;
	cout << "체력\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "------------------------------------" << endl;
}
