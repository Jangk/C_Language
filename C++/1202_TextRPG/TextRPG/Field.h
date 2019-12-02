#pragma once

#ifndef __FIELD_H__

class CMonster;
class CPlayer;
class CField
{
public:
	CField();
	~CField();

public:
	void SetPlayer(CPlayer* pPlayer);

public:
	void Initialize();	// 초기화
	void Update();		// 구동
	void Release();		// 정리

private:
	void Battle();

private:
	CPlayer*	m_pPlayer;
	CMonster*	m_pMonster;
};

#define __FIELD_H__
#endif
