#include "pch.h"
#include "CGameManager.h"
#include "CCharacter.h"
#include "CPlayer.h"
#include "Field.h"


CGameManager* CGameManager::m_Instace = nullptr;


void CGameManager::CreatePlayer()
{
	while (true)
	{
		system("cls");
		cout << "\t������ �����ϼ��� " << endl;
		cout << "1.����\t2.����\t3.������\t4.�ҷ�����" << endl;
		cin >> m_iSelector;


		switch (m_iSelector)
		{
		case 1:
			dynamic_cast<CPlayer*>(m_Player)->SetInfo("����", 1, 10, 200);
			return;

		case 2:
			dynamic_cast<CPlayer*>(m_Player)->SetInfo("����", 1, 15, 150);
			return;

		case 3:
			dynamic_cast<CPlayer*>(m_Player)->SetInfo("������", 1, 20, 100);
			return;

		case 4:
			Load();
			return;
		}
	}
}


CGameManager* CGameManager::GetInstance()
{
	if (nullptr == m_Instace)
		m_Instace = new CGameManager;
	return m_Instace;
}


void CGameManager::Initialize()
{
	m_Player->Initialize();
	m_Field.Initialize(m_Player);
	m_Shop.Initialize(m_Player);
	CreatePlayer();
}


void CGameManager::Update()
{
	bool isGameOver = false;
	while (!isGameOver)
		isGameOver = PlayGame();
}


void CGameManager::Release()
{
	SAFE_DELETE(m_Player);
}


bool CGameManager::PlayGame()
{
	int iSelector = 0;

	while (true)
	{
		system("cls");
		cout << "�޴��� �������ּ���" << endl;
		cout << "1.����\t2.����\t3.����\t4.����" << endl;
		cin >> iSelector;


		switch (iSelector)
		{
		case 1:
			m_Field.Dungeon();
			return false;

		case 2:
			m_Shop.Update();
			return false;

		case 3:
			Save();
			return false;

		case 4:
			return true;
		}
	}
	return false;
}


void CGameManager::Save()
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "../TextRPG.txt", "wb");
	if (0 == err)
	{
		fwrite(m_Player, sizeof(CPlayer), 1, fp);
		cout << "����Ϸ�" << endl;
		system("pause");
	}
	
	fclose(fp);
	
}


void CGameManager::Load()
{
	FILE* fp;
	CPlayer temp; 
	errno_t err = fopen_s(&fp, "../TextRPG.txt", "rb");
	if (0 == err)
	{
		fread(&temp, sizeof(CPlayer), 1, fp);
		cout << "�ҷ�����" << endl;
		system("pause");
	}
	*m_Player = *(dynamic_cast<CCharacter*>(&temp));
	fclose(fp);
}


CGameManager::CGameManager() : m_iSelector(0)
{
	m_Player = new CPlayer;
}


CGameManager::~CGameManager()
{
	Release();
	SAFE_DELETE(m_Instace);
}
