#pragma once
#include "STRUCT.h"
class Item
{
public:
	void Init();
	void SetItem(const char* szName, int iAtt, int iDef, int iPrice, EquipmentType part = EquipmentType::None);
	void Render();
	bool IsEmpty();
	const ItemInfo& GetItemInfo()const;
	void Release();
public:
	Item(const Item& other);
	Item();
	~Item();
private:
	ItemInfo m_ItemInfo;
};

