#include "stdafx.h"
#include "Monster.h"

CMonster::CMonster()
{

}

CMonster::~CMonster()
{
	Release();
}

const INFO& CMonster::GetInfo() const
{
	// TODO: ���⿡ ��ȯ ������ �����մϴ�.
	return m_tInfo;
}

void CMonster::SetInfo(const char* pName, int iAtt, int iMaxHp, int iLev, int iExp)
{
	strcpy_s(m_tInfo.szName, pName);
	m_tInfo.iAtt = iAtt;
	m_tInfo.iHp = iMaxHp;
	m_tInfo.iMaxHp = iMaxHp;
	m_tInfo.iLev = iLev;
	m_tInfo.iExp = iExp;
}

void CMonster::SetDemage(int iAtt)
{
	m_tInfo.iHp -= iAtt;
}

void CMonster::Initialize()
{
	memset(&m_tInfo, 0, sizeof(INFO));
}

void CMonster::Update()
{
}

void CMonster::Render()
{
	if (0 > m_tInfo.iHp)
		m_tInfo.iHp = 0;

	cout << "�̸�: " << m_tInfo.szName << endl;
	cout << "����: " << m_tInfo.iLev << endl;
	cout << "���ݷ�: " << m_tInfo.iAtt << endl;
	cout << "ü��: " << m_tInfo.iHp << " / " << m_tInfo.iMaxHp << endl;
	cout << "---------------------------------" << endl;
}

void CMonster::Release()
{
}
