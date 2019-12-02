#pragma once

#ifndef __MONSTER_H__

class CMonster
{
public:
	CMonster();
	~CMonster();

public:
	const INFO& GetInfo() const;

public:
	void SetInfo(const char* pName, int iAtt, int iMaxHp, int iLev, int iExp);
	void SetDemage(int iAtt);

public:
	void Initialize();	// �ʱ�ȭ
	void Update();		// ����
	void Render();
	void Release();		// ����

private:
	INFO	m_tInfo;
};

#define __MONSTER_H__
#endif
