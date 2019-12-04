#pragma once
#ifndef __CGAMEMANAGER_H__
#include "CCharacter.h"
#include "Field.h"
#include "CShop.h"
class CGameManager
{
private:
	static CGameManager* m_Instace;
	CCharacter* m_Player;
	Field m_Field;
	CShop m_Shop;
	int m_iSelector;



	void CreatePlayer();


public :
	static CGameManager* GetInstance();
	void Initialize();
	void Update();
	void Release();
	bool PlayGame();
	void Save();
	void Load();


public:
	CGameManager();
	~CGameManager();
};
#define __CGAMEMANAGER_H__
#endif // !__CGAMEMANAGER_H__

