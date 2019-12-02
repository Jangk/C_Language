#pragma once

#ifndef __MAINGAME_H__

class CField;
class CPlayer;
class CMaingame
{
public:
	CMaingame();
	~CMaingame();

public:
	void Initialize();	// �ʱ�ȭ
	void Update();		// ����
	void Release();		// ����

private:
	void CreatePlayer();

private:
	CPlayer*	m_pPlayer;
	CField*		m_pField;
};

#define __MAINGAME_H__
#endif
