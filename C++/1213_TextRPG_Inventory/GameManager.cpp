#include "pch.h"
#include "Player.h"
#include "GameManager.h"

GameManager* GameManager::m_Instance = nullptr;


GameManager* GameManager::GetInstance()
{
	if (m_Instance == nullptr)
		m_Instance = new GameManager;
	return m_Instance;
}


void GameManager::Init()
{
	m_Player = new Player;
	m_Player->Init();
}


void GameManager::CreateCharacter()
{
	int m_iSelector = 0;
	while (true)
	{
		system("cls");
		cout << "�ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�" << endl << endl;
		cout << "\t������ �����ϼ��� " << endl;
		cout << "1.����\t2.����\t3.������\t4.�ҷ�����" << endl;
		cout << endl << endl << "�ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ�" << endl;
		cin >> m_iSelector;


		switch (m_iSelector)
		{
		case 1:
			dynamic_cast<Player*>(m_Player)->SetInfo("����", 10, 200);
			return;

		case 2:
			dynamic_cast<Player*>(m_Player)->SetInfo("����", 15, 150);
			return;

		case 3:
			dynamic_cast<Player*>(m_Player)->SetInfo("������", 20, 100);
			return;

		case 4:
			Load();
			return;
		}
	}
}


void GameManager::RunGame()
{
	int iSelector = 0;
	while (true)
	{
		system("cls");
		m_Player->Render();
		cout << "�޴��� �������ּ���" << endl;
		cout << "1.����\t2.����\t3.�κ��丮\t4.����\t4.����" << endl;
		cin >> iSelector;


		switch (iSelector)
		{
		case 1:
			break;

		case 2:
			break;

		case 3:
			break;
		
		case 4:
			Save();
			break;

		case 5:
			return;
		}
	}
}


void GameManager::Release()
{
	SAFE_DELETE(m_Player);
}


void GameManager::Save()
{
	FILE* fp;
	errno_t err = fopen_s(&fp, "../TextRPG.txt", "wb");
	if (0 == err)
	{
		fwrite(m_Player, sizeof(Player), 1, fp);
		cout << "����Ϸ�" << endl;
		system("pause");
	}

	fclose(fp);
}


void GameManager::Load()
{
	FILE* fp;
	Player temp;
	errno_t err = fopen_s(&fp, "../TextRPG.txt", "rb");
	if (0 == err)
	{
		fread(&temp, sizeof(Player), 1, fp);
		cout << "�ҷ�����" << endl;
		system("pause");
	}
	*m_Player = *(dynamic_cast<Character*>(&temp));
	fclose(fp);
}


GameManager::GameManager()
{
}


GameManager::~GameManager()
{
	Release();
}
