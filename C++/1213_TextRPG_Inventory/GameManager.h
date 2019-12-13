#pragma once
#ifndef __GAMEMANAGER_H__
#define __GAMEMANAGER_H__

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
};
#endif // !__GAMEMANAGER_H__