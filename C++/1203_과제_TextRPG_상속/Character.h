#pragma once
#include <iostream>
using namespace std;

class Character
{
protected:
	int m_iLev;
	int m_iCurHp;
	int m_iMaxHp;
	int m_iAtt;
	char m_szName[32];
public :
	virtual void Init(const char* szName, int iLev, int iHp, int iAtt);
	virtual void Print();
	virtual void LevelUp(int a);
	void Fight(Character& monster);
	int GetAtt();
	bool IsDead();


	Character();
};

