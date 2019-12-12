#pragma once
#ifndef __CITEM_H__
#include "Struct.h"
class CItem
{
private :
	ItemInfo m_Item;


public:
	void Initialize();
	void Render();
	void SetInfo(const char* szName, int iAtt, int iDef, int iPrice);
	const ItemInfo& GetItemInfo();


public:
	CItem(const CItem& other);
	CItem();
	~CItem();
};
#define __CITEM_H__
#endif // !__CITEM_H__