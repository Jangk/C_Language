#include "pch.h"
#include "Shop.h"

void Shop::SetItem()
{
	for (int i = 0; i < 4; ++i)
		m_Item[i] = new Item;
	m_Item[0]->SetItem("����", 0, 5, 0, EquipmentType::Armor);
	m_Item[1]->SetItem("�����", 0, 3, 0, EquipmentType::Necklace);
	m_Item[2]->SetItem("����", 0, 2, 0, EquipmentType::Ring);
	m_Item[3]->SetItem("����", 10, 0, 0, EquipmentType::Weapon);
}

void Shop::Play()
{
	int iInsert = 0;
	while (true)
	{
		system("cls");
		Render();
		cout << "����� �������� ���ÿ�" << endl;
		cout << "1�� ����   2�� ����   3�� ����   4�� ����   5. ����   ";
		cin >> iInsert;
		iInsert -= 1;
		if (4 == iInsert)
			return;
		else if (0 > iInsert || 4 < iInsert)
			continue;
		else if (m_Item[iInsert]->IsEmpty())
		{
			cout << "���� ����" << endl;
			continue;
		}
		else if (m_Player->GetCharacterInfo().iMoney >= m_Item[iInsert]->GetItemInfo().iPrice)
		{
			cout << iInsert+1 << "�� ���ſϷ�" << endl;
			Item* Temp = new Item;
			Temp->SetItem("����", 0, 0, 0);
			dynamic_cast<Player*> (m_Player)->SetMoney(-m_Item[iInsert]->GetItemInfo().iPrice);
			dynamic_cast<Player*> (m_Player)->SetItem(m_Item[iInsert]);
			m_Item[iInsert] = Temp;
			system("Pause");
			return;
		}

	}
}

void Shop::Render()
{
	for (int i = 0; i < 4; ++i)
		m_Item[i]->Render();
}


void Shop::Release()
{
	for (int i = 0; i < 4; ++i)
		SAFE_DELETE(m_Item[i]);
}

Shop::~Shop()
{
	Release();
}
