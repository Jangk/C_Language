#pragma once
#ifndef __SCENEMANAGER_H__
#define __SCENEMANAGER_H__


class SceneManager
{
public:
	static SceneManager* GetInstance();
private:
	static SceneManager* m_Instance;
};


#endif // !__SCENEMANAGER_H__