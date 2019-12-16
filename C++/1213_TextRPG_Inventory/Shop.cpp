#include "pch.h"
#include "Shop.h"

void Shop::SetItem()
{
	for (int i = 0; i < 4; ++i)
		m_Item[i] = new Item;
	m_Item[0]->SetItem("갑옷", 0, 5, 0, EquipmentType::Armor);
	m_Item[1]->SetItem("목걸이", 0, 3, 0, EquipmentType::Necklace);
	m_Item[2]->SetItem("반지", 0, 2, 0, EquipmentType::Ring);
	m_Item[3]->SetItem("무기", 10, 0, 0, EquipmentType::Weapon);
}

void Shop::Play()
{
	int iInsert = 0;
	while (true)
	{
		system("cls");
		Render();
		cout << "사려는 아이템을 고르시오" << endl;
		cout << "1번 구매   2번 구매   3번 구매   4번 구매   5. 종료   ";
		cin >> iInsert;
		iInsert -= 1;
		if (4 == iInsert)
			return;
		else if (0 > iInsert || 4 < iInsert)
			continue;
		else if (m_Item[iInsert]->IsEmpty())
		{
			cout << "템이 없음" << endl;
			continue;
		}
		else if (m_Player->GetCharacterInfo().iMoney >= m_Item[iInsert]->GetItemInfo().iPrice)
		{
			cout << iInsert+1 << "번 구매완료" << endl;
			Item* Temp = new Item;
			Temp->SetItem("없음", 0, 0, 0);
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
