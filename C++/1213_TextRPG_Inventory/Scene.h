#pragma once
#ifndef __SCENE_H__
#define __SCENE_H__
#include "player.h"
#include "Monster.h"

class Scene
{
public:
	virtual void Init(Character& player);
	virtual void Render() = 0;
	virtual void Play() = 0;
	virtual void Release() = 0;

protected:
	Character* m_Player;
};


#endif // !__SCENE_H__