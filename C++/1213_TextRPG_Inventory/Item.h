#pragma once
#include "STRUCT.h"
class Item
{
public:
	bool IsEmpty();
	const ItemInfo& GetItemInfo()const;
public:
	Item();
	~Item();
private:
	ItemInfo m_ItemInfo;
	EquipmentType m_ItemType;
};

