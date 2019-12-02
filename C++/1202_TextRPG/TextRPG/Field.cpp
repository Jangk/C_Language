#include "stdafx.h"
#include "Field.h"
#include "Player.h"
#include "Monster.h"

CField::CField()
	: m_pPlayer(nullptr), m_pMonster(nullptr)
{

}

CField::~CField()
{
	Release();
}

void CField::SetPlayer(CPlayer* pPlayer)
{
	m_pPlayer = pPlayer;
}

void CField::Initialize()
{
	if (nullptr == m_pMonster)
	{
		m_pMonster = new CMonster;
		m_pMonster->Initialize();
	}
}

void CField::Update()
{
	if (nullptr == m_pPlayer)
		return;

	int iSelect = 0;

	while (true)
	{
		system("cls");

		m_pPlayer->Render();

		cout << "1.�ʱ� 2.�߱� 3.��� 4.�ڷΰ���" << endl;
		cout << "����: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pMonster->SetInfo("������", 3, 30, 1, 30);
			break;
		case 2:
			m_pMonster->SetInfo("�����", 6, 60, 2, 50);
			break;
		case 3:
			m_pMonster->SetInfo("��", 9, 90, 3, 70);
			break;
		case 4:
			return;
		default:
			cout << "�ٽ� �����ϼ���." << endl;
			system("pause");
			continue;
		}

		Battle();
	}
}

void CField::Release()
{
	SAFE_DELETE(m_pMonster);
}

void CField::Battle()
{
	int iSelect = 0;

	while (true)
	{
		system("cls");

		m_pPlayer->Render();
		m_pMonster->Render();

		if (0 >= m_pPlayer->GetInfo().iHp)
		{
			m_pPlayer->InitHp();

			cout << "����Ͽ����ϴ�." << endl;
			system("pause");
			return;
		}
		else if (0 >= m_pMonster->GetInfo().iHp)
		{
			m_pPlayer->LevelUp(m_pMonster->GetInfo().iExp);

			cout << "��� ����!" << endl;
			system("pause");
			return;
		}

		cout << "1.���� 2.����" << endl;
		cout << "����: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pMonster->SetDemage(m_pPlayer->GetInfo().iAtt);
			m_pPlayer->SetDamage(m_pMonster->GetInfo().iAtt);
			break;
		case 2:
			return;
		}
	}
}