#pragma once
#include "Character.h"
#include <vector>
class Player : public Character
{
public:
	void Init();
	void Reset();
	void Render();
	void FightWin(Character& other);
	void SetItem(Item* item);
	void SetMoney(int iMoney);
	const vector<Item*>& GetInventory();
	void EquiItem(int index);
	void Release();
	~Player();

private:
	vector<Item*> m_Inventory;
};

