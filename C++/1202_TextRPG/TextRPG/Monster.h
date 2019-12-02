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
	void Initialize();	// 초기화
	void Update();		// 구동
	void Render();
	void Release();		// 정리

private:
	INFO	m_tInfo;
};

#define __MONSTER_H__
#endif
