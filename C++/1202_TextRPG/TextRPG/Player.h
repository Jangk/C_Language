#pragma once

#ifndef __PLAYER_H__

class CPlayer
{
public:
	CPlayer();
	~CPlayer();

public:
	const INFO& GetInfo() const;

public:
	void SetInfo(const char* pName, int iAtt, int iMaxHp);
	void SetDamage(int iAtt);

public:
	void Initialize();	// �ʱ�ȭ
	void Update();		// ����
	void Render();
	void Release();		// ����
	void LevelUp(int iExp);
	void InitHp();

private:
	INFO	m_tInfo;
};

#define __PLAYER_H__
#endif
