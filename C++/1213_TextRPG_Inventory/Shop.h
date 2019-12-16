#pragma once
#ifndef __SHOP_H__
#define __SHOP_H__
#include "STRUCT.h"
#include "Scene.h"
#include "Item.h"

class Shop : public Scene
{
public:
	void SetItem();
	void Play();
	void Render();
	void Release();
	~Shop();
private:
	Item* m_Item[4];
};


#endif // !__SHOP_H__