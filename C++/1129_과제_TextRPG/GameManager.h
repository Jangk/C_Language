#pragma once
#include <iostream>
#include "Character.h"
using namespace std;


class GameManager
{
private:
	static GameManager* instance;
	Character m_CPlayer;
	void Battle(int iMonsterLevel);


public:
	static GameManager* GetInstance();
	void Intro();
	void Init();
	void Update();
	void Save();
	void Load();
	GameManager();
	~GameManager();
};

