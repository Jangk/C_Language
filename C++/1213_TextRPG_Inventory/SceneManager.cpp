#include "pch.h"
#include "SceneManager.h"
#include "Dungeon.h"
#include "Shop.h"
#include "Inventory.h"

SceneManager* SceneManager::m_Instance = nullptr;


SceneManager* SceneManager::GetInstance()
{
	if (m_Instance == nullptr)
		m_Instance = new SceneManager;
	return m_Instance;
}


void SceneManager::Init(Character& Player)
{
	m_Scenes[static_cast<int>(SceneType::Dungeon)] = new Dungeon;
	m_Scenes[static_cast<int>(SceneType::Shop)] = new Shop;
	m_Scenes[static_cast<int>(SceneType::Inventory)] = new Inventory;

	m_Scenes[static_cast<int>(SceneType::Dungeon)]->Init(Player);
	m_Scenes[static_cast<int>(SceneType::Shop)]->Init(Player);
	m_Scenes[static_cast<int>(SceneType::Inventory)]->Init(Player);

	dynamic_cast<Shop*>(m_Scenes[static_cast<int>(SceneType::Shop)])->SetItem();
}


void SceneManager::PlayScene(SceneType sceneName)
{
	m_Scenes[static_cast<int>(sceneName)]->Play();
}


void SceneManager::Release()
{
	SAFE_DELETE(m_Instance);
}


SceneManager::~SceneManager()
{
	Release();
}