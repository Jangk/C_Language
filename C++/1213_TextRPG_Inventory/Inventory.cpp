#include "pch.h"
#include "Inventory.h"


void Inventory::Play()
{
	system("cls");
	m_PlayerInventory = dynamic_cast<Player*>(m_Player)->GetInventory();
	int iInsert = 0;
	Render();
	cout << "장착할 아이템 선택 ( -1 종료)" << endl;
	cin >> iInsert;
	if (iInsert == -1)
		return;
	dynamic_cast<Player*>(m_Player)->EquiItem(iInsert-1);
	
	
	system("pause");
}

void Inventory::Render()
{
	for (auto iter = m_PlayerInventory.begin();
		 iter != m_PlayerInventory.end(); ++iter)
	{
		(*iter)->Render();
	}
}

void Inventory::Release()
{
}
