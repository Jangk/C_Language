#pragma once
#ifndef __GAMEMANAGER_H__
#define __GAMEMANAGER_H__
#include "SceneManager.h"
class Character;
class GameManager
{
public:
	static GameManager* GetInstance();
	void Init();
	void CreateCharacter();
	void RunGame();
	void Release();
	void Save();
	void Load();
public:
	GameManager();
	~GameManager();
private:
	static GameManager* m_Instance;
	Character* m_Player;
	void* TestPtr;
};
#endif // !__GAMEMANAGER_H__