#include "..\1203_����_TextRPG_���\GameManager.h"
#include "GameManager.h"


GameManager* GameManager::instance = nullptr;


GameManager* GameManager::GetInstance()
{
	if (instance == nullptr)
		instance = new GameManager;
	return instance;
}


void GameManager::Battle(int iMonsterLevel)
{
	Character CMonster;
	int iChoice = 0;


	CMonster.InitCharacter(false, iMonsterLevel);


	system("cls");
	while (true)
	{
		system("cls");
		m_CPlayer.PrintState();
		CMonster.PrintState();
		cout << "1. ����\t2.����" << endl;
		cin >> iChoice;

		switch (iChoice)
		{
		case 1:
			if (m_CPlayer.FightTarger(CMonster))
				return;
			break;


		case 2:
			return;
			break;
		}
	}
}


void GameManager::Save()
{
	FILE *fp = nullptr;
	fopen_s(&fp, "../textRPG_SaveFile.txt", "wb");
	fwrite(&m_CPlayer, sizeof(Character), 1, fp);
	fclose(fp);
}



void GameManager::Load()
{
	FILE* fp = nullptr;
	errno_t err = fopen_s(&fp, "../textRPG_SaveFile.txt", "rb");
	if (err == 0)
		fread(&m_CPlayer, sizeof(Character), 1, fp);
	else
		cout << "�б� ����" << endl;

	fclose(fp);
}


void GameManager::Intro()
{
	cout << "�� �� �� ��" << endl;
	system("pause");
}


void GameManager::Init()
{
	m_CPlayer.InitCharacter(true);
}


void GameManager::Update()
{
	int iMenuSelect = 0;
	system("cls");

	while (true)
	{
		system("cls");
		cout << "=============== �޴� ���� =====================" << endl;
		cout << "1. �ʱ� ����" << endl;
		cout << "2. �߱� ����" << endl;
		cout << "3. ��� ����" << endl;
		cout << "4. ���� �ϱ�" << endl;
		cout << "5. ���� ����" << endl;
		cin >> iMenuSelect;

		switch (iMenuSelect)
		{
		case 1:
		case 2:
		case 3:
			Battle(iMenuSelect);
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
}


GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}
