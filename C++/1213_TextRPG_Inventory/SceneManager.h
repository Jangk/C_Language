#pragma once
#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__
#include "STRUCT.h"

class Character;
class Scene;
class SceneManager
{
public:
	static SceneManager* GetInstance();
	void Init(Character& Player);
	void PlayScene(SceneType sceneName);
	void Release();
	~SceneManager();
private:
	static SceneManager* m_Instance;
	Scene* m_Scenes[static_cast<int>(SceneType::None)];
};


#endif // !__SCENEMANAGER_H__