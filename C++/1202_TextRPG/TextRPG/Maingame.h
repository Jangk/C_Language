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
	void Initialize();	// 초기화
	void Update();		// 구동
	void Release();		// 정리

private:
	void CreatePlayer();

private:
	CPlayer*	m_pPlayer;
	CField*		m_pField;
};

#define __MAINGAME_H__
#endif
