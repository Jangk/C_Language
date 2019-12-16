#pragma once
#ifndef __INVENTORY_H__
#define __INVENTORY_H__
#include "Scene.h"


class Inventory : public Scene
{
public:
	void Play();
	void Render();
	void Release();
private:
	vector<Item*> m_PlayerInventory;

};


#endif // !__INVENTORY_H__