#include "pch.h"
#include "Item.h"

bool Item::IsEmpty()
{
	if (m_ItemType == EquipmentType::None)
		return true;
	return false;
}


const ItemInfo& Item::GetItemInfo() const
{
	return m_ItemInfo;
}


Item::Item()
{
	memset(&m_ItemInfo, 0, sizeof(m_ItemInfo));
	m_ItemType = EquipmentType::None;
}


Item::~Item()
{
}
