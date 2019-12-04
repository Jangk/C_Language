#include "pch.h"
#include "CCharacter.h"
#include "CPlayer.h"

void CPlayer::Initialize()
{
	memset(&m_CharInfo, 0, sizeof(CharacterInfo));
	memset(&m_Item, 0, sizeof(ItemInfo));
}


void CPlayer::SetInfo(const char* szName, int iLev, int iAtt, int iHP, int iMoney, int iMaxExp)
{
	memcpy_s(&m_CharInfo.szName, sizeof(m_CharInfo.szName),
			  szName		   , sizeof(szName));

	m_CharInfo.iLev    = iLev;
	m_CharInfo.iAtt    = iAtt;
	m_CharInfo.iDef	   = 0;					// ������ ���������θ� �ø� �� �ִ�.
	m_CharInfo.iMaxHP  = iHP;
	m_CharInfo.iCurHP  = m_CharInfo.iMaxHP;
	m_CharInfo.iMaxExp = 0;
	m_CharInfo.iCurExp = 0;
	m_CharInfo.iMaxExp = iMaxExp;
	m_CharInfo.iMoney  = iMoney;
}


void CPlayer::Update()
{
}


void CPlayer::Render()
{
	cout << "------------------------------------" << endl;
	cout << "����\t:\t" << m_CharInfo.szName << endl;
	cout << "����\t:\t" << m_CharInfo.iLev << endl;
	cout << "���ݷ�\t:\t" << m_CharInfo.iAtt << endl;
	cout << "ü��\t:\t" << m_CharInfo.iCurHP << "/" << m_CharInfo.iMaxHP << endl;
	cout << "����ġ\t:\t" << m_CharInfo.iCurExp << "/" << m_CharInfo.iMaxExp << endl;
	cout << "������\t:\t" << m_CharInfo.iMoney << endl;
	cout << "------------------------------------" << endl;
	m_Item.Render();
}


void CPlayer::Release()
{
}


void CPlayer::LevelUp(int iExp)
{
	int iCount = 0;
	m_CharInfo.iCurExp += iExp;
	while (m_CharInfo.iCurExp >= m_CharInfo.iMaxExp)
	{
		++m_CharInfo.iLev;
		m_CharInfo.iAtt	   += 5;
		m_CharInfo.iCurExp -= m_CharInfo.iMaxExp;
		m_CharInfo.iMaxExp  = m_CharInfo.iLev * 100;
		m_CharInfo.iMaxHP  += 100;
		m_CharInfo.iCurHP   = m_CharInfo.iMaxHP;
		++iCount;
	}
	if(iCount)
		cout << iCount << "�� ������ �ϼ̽��ϴ�" << endl;
}


