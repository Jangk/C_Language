#pragma once
#include <iostream>
#include "Character.h"
#include "Player.h"
#include "Monster.h"
using namespace std;


class TextRPG
{
private:
	static TextRPG* instance;
	Character* m_CPlayer;
	Character* m_CMonster;
public:
	static TextRPG* GetInstace();
	void Init();
	void Update();
	void Release();
	void ChoiceDifficult();
	void Battle();
	void Save();

	TextRPG();
	~TextRPG();
};

