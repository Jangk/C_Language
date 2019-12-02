#include "stdafx.h"
#include "Maingame.h"
#include "Player.h"
#include "Field.h"

CMaingame::CMaingame()
	: m_pPlayer(nullptr), m_pField(nullptr)
{

}

CMaingame::~CMaingame()
{
	Release();
}

void CMaingame::Initialize()
{
	CreatePlayer();

	if (nullptr == m_pField)
	{
		m_pField = new CField;
		m_pField->Initialize();
	}
}

void CMaingame::Update()
{
	if (nullptr == m_pPlayer)
		return;

	int iSelect = 0;

	while (true)
	{
		system("cls");

		m_pPlayer->Render();

		cout << "1.���� 2.���� 3.���� 4.����" << endl;
		cout << "����: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pField->SetPlayer(m_pPlayer);
			m_pField->Update();
			break;
		case 4:
			return;
		}
	}
}

void CMaingame::Release()
{
	SAFE_DELETE(m_pPlayer);
	SAFE_DELETE(m_pField);
}

void CMaingame::CreatePlayer()
{
	if (nullptr == m_pPlayer)
	{
		m_pPlayer = new CPlayer;
		m_pPlayer->Initialize();
	}

	int iSelect = 0;

	while (true)
	{
		system("cls");

		cout << "1.���� 2.������ 3.���� 4.����" << endl;
		cout << "����: ";
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_pPlayer->SetInfo("����", 5, 200);
			return;
		case 2:
			m_pPlayer->SetInfo("������", 20, 100);
			return;
		case 3:
			m_pPlayer->SetInfo("����", 10, 150);
			return;
		case 4:
			SAFE_DELETE(m_pPlayer);
			return;
		default:
			cout << "�ٽ� �����ϼ���." << endl;
			system("pause");
		}
	}
}