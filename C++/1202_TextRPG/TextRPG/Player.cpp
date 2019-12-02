#include "stdafx.h"
#include "Player.h"

CPlayer::CPlayer()
{

}

CPlayer::~CPlayer()
{
	Release();
}

const INFO& CPlayer::GetInfo() const
{
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
	return m_tInfo;
}

void CPlayer::SetInfo(const char* pName, int iAtt, int iMaxHp)
{
	strcpy_s(m_tInfo.szName, pName);
	m_tInfo.iAtt = iAtt;
	m_tInfo.iHp = iMaxHp;
	m_tInfo.iMaxHp = iMaxHp;
}

void CPlayer::SetDamage(int iAtt)
{
	m_tInfo.iHp -= iAtt;
}

void CPlayer::Initialize()
{
	memset(&m_tInfo, 0, sizeof(INFO));

	m_tInfo.iLev = 1;
	m_tInfo.iMaxExp = 100;
}

void CPlayer::Update()
{
}

void CPlayer::Render()
{
	if (0 > m_tInfo.iHp)
		m_tInfo.iHp = 0;

	cout << "����: " << m_tInfo.szName << endl;
	cout << "����: " << m_tInfo.iLev << endl;
	cout << "����ġ: " << m_tInfo.iExp << " / " << m_tInfo.iMaxExp << endl;
	cout << "���ݷ�: " << m_tInfo.iAtt << endl;
	cout << "ü��: " << m_tInfo.iHp << " / " << m_tInfo.iMaxHp << endl;
	cout << "---------------------------------" << endl;
}

void CPlayer::Release()
{
}

void CPlayer::LevelUp(int iExp)
{
	m_tInfo.iExp += iExp;

	while (m_tInfo.iExp >= m_tInfo.iMaxExp)
	{
		m_tInfo.iLev++;
		m_tInfo.iMaxHp += 20;
		m_tInfo.iHp = m_tInfo.iMaxHp;
		m_tInfo.iAtt += 3;

		m_tInfo.iExp -= m_tInfo.iMaxExp;
		m_tInfo.iMaxExp += 30;
	}
}

void CPlayer::InitHp()
{
	m_tInfo.iHp = m_tInfo.iMaxHp;
}
