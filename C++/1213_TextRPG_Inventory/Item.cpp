#include "pch.h"
#include "Item.h"

void Item::Init()
{
	memset(&m_ItemInfo, 0, sizeof(m_ItemInfo));
	strcpy_s(m_ItemInfo.szName, 32, "��� ����");
	m_ItemInfo.iAtt = 0;
	m_ItemInfo.iDef = 0;
	m_ItemInfo.iPrice = 0;
	m_ItemInfo.ItemType = EquipmentType::None;
}


void Item::SetItem(const char* szName, int iAtt, int iDef, int iPrice, EquipmentType part)
{
	strcpy_s(m_ItemInfo.szName, 32, szName);
	m_ItemInfo.iAtt = iAtt;
	m_ItemInfo.iDef = iDef;
	m_ItemInfo.iPrice = iPrice;
	m_ItemInfo.ItemType = part;
}


void Item::Render()
{
	if (IsEmpty())
	{
		cout << "*********************************" << endl;
		cout << "�� ��" << endl;
		cout << "*********************************" << endl;
		return;
	}
	cout << "*********************************" << endl;
	cout << "�̸�\t:\t" << m_ItemInfo.szName << endl;
	cout << "���ݷ�\t:\t" << m_ItemInfo.iAtt << endl;
	cout << "����\t:\t" << m_ItemInfo.iDef << endl;
	cout << "����\t:\t" << m_ItemInfo.iPrice << endl;
	cout << "*********************************" << endl;
}


bool Item::IsEmpty()
{
	if (m_ItemInfo.ItemType == EquipmentType::None)
		return true;
	return false;
}


const ItemInfo& Item::GetItemInfo() const
{
	return m_ItemInfo;
}

void Item::Release()
{
}


Item::Item(const Item& other)
{
	strcpy_s(m_ItemInfo.szName, other.m_ItemInfo.szName);
	m_ItemInfo.iAtt = other.m_ItemInfo.iAtt;
	m_ItemInfo.iDef = other.m_ItemInfo.iDef;
	m_ItemInfo.iPrice = other.m_ItemInfo.iPrice;
	m_ItemInfo.ItemType = other.m_ItemInfo.ItemType;
}


Item::Item()
{
}


Item::~Item()
{
	Release();
}
