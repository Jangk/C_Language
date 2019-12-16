#pragma once
#ifndef __DUNGEON_H__
#define __DUNGEON_H__
#include "Scene.h"

class Dungeon : public Scene
{
public:
	void CreateMonster(int iDifficult);
	void Play();
	void Render();
	void Release();
private:
	//Character* m_Player;
	Character* m_Monster;
};


#endif // !__DUNGEON_H__