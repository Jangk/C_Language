#pragma once
#include <iostream>
#include <string>
using namespace std;


enum CHARACTER_NAME
{
	Warrior=1,
	Theif,
	Wizard,
	Lv1_Monster,
	Lv2_Monster,
	Lv3_Monster
};


class Character
{
private:
	string m_strName;
	int m_iLevel;
	int m_iAtt;
	int m_iMaxHp;
	int m_iCurHp;
	int m_iMaxExp;
	int m_iCurExp;


	void LevelUp();
	void LoadPlayer();

public:
	void InitCharacter(bool bIsPlayable, int iMonsterLevel = 0);
	void PrintState();
	bool FightTarger(Character& Target);
	Character();
	~Character();
};

