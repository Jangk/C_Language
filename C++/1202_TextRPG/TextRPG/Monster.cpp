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
	// TODO: 여기에 반환 구문을 삽입합니다.
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

	cout << "이름: " << m_tInfo.szName << endl;
	cout << "레벨: " << m_tInfo.iLev << endl;
	cout << "공격력: " << m_tInfo.iAtt << endl;
	cout << "체력: " << m_tInfo.iHp << " / " << m_tInfo.iMaxHp << endl;
	cout << "---------------------------------" << endl;
}

void CMonster::Release()
{
}
