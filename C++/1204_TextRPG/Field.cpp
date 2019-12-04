#include "pch.h"
#include "Field.h"
#include "CCharacter.h"
#include "CPlayer.h"
#include "CMonster.h"


void Field::Initialize(CCharacter* player)
{
	m_Player = dynamic_cast<CPlayer*>(player);
}

void Field::CreateMonster()
{
	m_Monster = new CMonster;
	m_Monster->Initialize();
}


void Field::Dungeon()
{
	int iSelector = 0;
	CreateMonster();

	system("cls");
	cout << "���� ���̵��� �����ϼ��� " << endl;
	cout << "1.�ʱ�\t2.�߱�\t3.���" << endl;
	cin >> iSelector;


	switch (iSelector)
	{
	case 1:
		dynamic_cast<CMonster*>(m_Monster)->SetInfo("������", 1, 5, 100, 50, 50);
		break;

	case 2:
		dynamic_cast<CMonster*>(m_Monster)->SetInfo("��ũ", 2, 10, 200, 100, 100);
		break;

	case 3:
		dynamic_cast<CMonster*>(m_Monster)->SetInfo("�巡��", 3, 20, 400, 200, 100);
		break;
	}
	Battle();
	Release();
}


void Field::Release()
{
	if(nullptr != m_Monster)
		SAFE_DELETE(m_Monster);
}


void Field::Battle()
{
	int iSelector = 0;


	if (nullptr == m_Player || nullptr == m_Monster)
		return;

	while (true)
	{
		system("cls");
		m_Player->Render();
		m_Monster->Render();
		cout << "1.����\t2.����" << endl;
		cin >> iSelector;
		switch (iSelector)
		{
		case 1:
			m_Player->SetDamage(m_Monster->GetInfo().iAtt - m_Player->GetItemInfo().iDef);
			m_Monster->SetDamage(m_Player->GetInfo().iAtt + m_Player->GetItemInfo().iAtt);
			
			if (m_Player->IsDead())
			{
				m_Player->InitHP();
				return;
			}
			
			if (m_Monster->IsDead())
			{
				m_Player->SetMoney((m_Monster->GetInfo().iMoney * -1));
				dynamic_cast<CPlayer*>(m_Player)->LevelUp(m_Monster->GetInfo().iMaxExp);
				return;
			}
			break;

		case 2:
			cout << "������" << endl;
			system("pause");
			return;
		}
	}
}


Field::Field() : m_Player(nullptr), m_Monster(nullptr)
{
	
}


Field::~Field()
{
	Release();
}
