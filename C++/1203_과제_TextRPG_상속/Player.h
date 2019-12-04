#pragma once
#include "Character.h"
class Player : public Character 
{
private:
	int m_iCurExp;
	int m_iMaxExp;
public:
	void Print();
	void LevelUp(int iAtt);
	Player();
	Player(const Player& other);
};

