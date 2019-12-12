#pragma once
#ifndef __FIELD_H__
class CCharacter;
class Field
{
private:
	CCharacter* m_Player;
	CCharacter* m_Monster;


public : 
	void Initialize(CCharacter* player);
	void CreateMonster();
	void Dungeon();
	void Release();
	void Battle();


public:
	Field();
	~Field();
};
#define __FIELD_H__
#endif // !__FIELD_H__