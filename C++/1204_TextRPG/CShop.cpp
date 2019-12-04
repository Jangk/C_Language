#include "pch.h"
#include "CShop.h"
#include "CCharacter.h"
#include "CPlayer.h"


void CShop::Initialize(CCharacter* player)
{
	for (int i = 0; i < 3; ++i)
		m_Item[i].Initialize();
	m_Player = dynamic_cast<CPlayer*>(player);
}


void CShop::SetItem()
{
	m_Item[0].SetInfo("�����", 5, 0, 100);
	m_Item[1].SetInfo("����", 0, 5, 100);
	m_Item[2].SetInfo("�Ͱ���", 5, 5, 200);
}


void CShop::Update()
{
	int iSelector = 0;
	SetItem();
	while (true)
	{
		system("cls");
		cout << "�������� �����ϼ��� " << endl;
		Render();
		for (int i = 0; i < 3; ++i)
			cout << i + 1 << "." << m_Item[i].GetItemInfo().szName << "\t";
		cout << "4. ����" << endl;
		cin >> iSelector;


		switch (iSelector)
		{
		case 1:
			if (m_Item[0].GetItemInfo().iPrice <= m_Player->GetInfo().iMoney)
			{
				m_Player->SetMoney(m_Item[0].GetItemInfo().iPrice);
				m_Player->SetItem(m_Item[0]);
			}
			else
				cout << "�ܾ� ����" << endl;
			break;

		case 2:
			if (m_Item[1].GetItemInfo().iPrice <= m_Player->GetInfo().iMoney)
			{
				m_Player->SetMoney(m_Item[0].GetItemInfo().iPrice);
				m_Player->SetItem(m_Item[1]);
			}
			else
				cout << "�ܾ� ����" << endl;
			break;

		case 3:
			if (m_Item[2].GetItemInfo().iPrice <= m_Player->GetInfo().iMoney)
			{
				m_Player->SetMoney(m_Item[0].GetItemInfo().iPrice);
				m_Player->SetItem(m_Item[2]);
			}
			else
				cout << "�ܾ� ����" << endl;
			break;

		case 4:
			return;
		}
	}
}


void CShop::Render()
{
	for (int i = 0; i < 3; ++i)
	{
		m_Item[i].Render();
		cout << i + 1 << "�� -----------------" << endl;
	}
}


void CShop::Release()
{
}


CShop::CShop()
{
}


CShop::~CShop()
{
}
