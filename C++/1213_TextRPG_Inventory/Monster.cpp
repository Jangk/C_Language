#include "pch.h"
#include "Monster.h"

void Monster::Init()
{
}

void Monster::Render()
{
	cout << "------------------------------------" << endl;
	cout << "�̸�\t:\t" << m_CharInfo.szName << endl;
	cout << "����\t:\t" << m_CharInfo.iLevel << endl;
	cout << "���ݷ�\t:\t" << m_CharInfo.iAtt << endl;
	cout << "����\t:\t" << m_CharInfo.iDef << endl;
	cout << "ü��\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "------------------------------------" << endl;
}
