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

		cout << "1.초급 2.중급 3.고급 4.뒤로가기" << endl;
		cout << "선택: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pMonster->SetInfo("슬라임", 3, 30, 1, 30);
			break;
		case 2:
			m_pMonster->SetInfo("오우거", 6, 60, 2, 50);
			break;
		case 3:
			m_pMonster->SetInfo("골렘", 9, 90, 3, 70);
			break;
		case 4:
			return;
		default:
			cout << "다시 선택하세요." << endl;
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

			cout << "사망하였습니다." << endl;
			system("pause");
			return;
		}
		else if (0 >= m_pMonster->GetInfo().iHp)
		{
			m_pPlayer->LevelUp(m_pMonster->GetInfo().iExp);

			cout << "사냥 성공!" << endl;
			system("pause");
			return;
		}

		cout << "1.공격 2.도망" << endl;
		cout << "선택: ";
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