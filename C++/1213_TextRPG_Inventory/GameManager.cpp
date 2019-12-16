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
	SceneManager::GetInstance()->Init(*m_Player);
}


void GameManager::CreateCharacter()
{
	int m_iSelector = 0;
	while (true)
	{
		system("cls");
		cout << "★☆★☆★☆★☆★☆★☆★☆★☆★☆" << endl << endl;
		cout << "\t직업을 선택하세요 " << endl;
		cout << "1.전사\t2.도적\t3.마법사\t4.불러오기" << endl;
		cout << endl << endl << "★☆★☆★☆★☆★☆★☆★☆★☆★☆" << endl;
		cin >> m_iSelector;


		switch (m_iSelector)
		{
		case 1:
			dynamic_cast<Player*>(m_Player)->SetInfo("전사", 10, 200);
			return;

		case 2:
			dynamic_cast<Player*>(m_Player)->SetInfo("도적", 15, 150);
			return;

		case 3:
			dynamic_cast<Player*>(m_Player)->SetInfo("마법사", 20, 100);
			return;

		case 4:
			if (Load())
				return;
			break;
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
		cout << "메뉴를 선택해주세요" << endl;
		cout << "1.던전\t2.상점\t3.인벤토리\t4.저장\t5.종료" << endl;
		cin >> iSelector;


		switch (iSelector)
		{
		case 1:       
			SceneManager::GetInstance()->PlayScene(SceneType::Dungeon);
			break;

		case 2:
			SceneManager::GetInstance()->PlayScene(SceneType::Shop);
			break;

		case 3:
			SceneManager::GetInstance()->PlayScene(SceneType::Inventory);
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


bool GameManager::Save()
{
	return dynamic_cast<Player*>(m_Player)->Save();

}


bool GameManager::Load()
{
	return dynamic_cast<Player*>(m_Player)->Load();
}


GameManager::GameManager()
{
	m_Player = nullptr;
}


GameManager::~GameManager()
{
	Release();
}
