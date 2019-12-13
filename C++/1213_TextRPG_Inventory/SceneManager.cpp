#include "pch.h"
#include "SceneManager.h"

SceneManager* SceneManager::m_Instance = nullptr;

SceneManager* SceneManager::GetInstance()
{
	if (m_Instance == nullptr)
		m_Instance = new SceneManager;
	return m_Instance;
}

