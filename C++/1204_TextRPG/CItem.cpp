#include "pch.h"
#include "CItem.h"


void CItem::Initialize()
{
	m_Item.iAtt = 0;
	m_Item.iDef = 0;
	m_Item.iPrice = 0;
	memset(&m_Item.szName, 0, sizeof(m_Item.szName));
}


void CItem::Render()
{
	cout << "이름\t:\t" << m_Item.szName << endl;
	cout << "공격력\t:\t" << m_Item.iAtt << endl;
	cout << "방어력\t:\t" << m_Item.iDef << endl;
	cout << "가격\t:\t" << m_Item.iPrice << endl;
	cout << "------------------------" << endl;
}


void CItem::SetInfo(const char* szName, int iAtt, int iDef, int iPrice)
{
	memcpy(&m_Item.szName, szName, strlen(szName) + 1);
	m_Item.iAtt   = iAtt;
	m_Item.iDef   = iDef;
	m_Item.iPrice = iPrice;
}


const ItemInfo& CItem::GetItemInfo()
{
	return m_Item;
}


CItem::CItem(const CItem& other)
{
	memcpy(&m_Item.szName, other.m_Item.szName, strlen(other.m_Item.szName) + 1);
	m_Item.iAtt = other.m_Item.iAtt;
	m_Item.iDef = other.m_Item.iDef;
	m_Item.iPrice = other.m_Item.iPrice;
}


CItem::CItem()
{
}


CItem::~CItem()
{
}
