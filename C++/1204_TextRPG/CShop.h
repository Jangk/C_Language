#pragma once
#ifndef __CShop_H__
#include "CItem.h"
class CCharacter;
class CShop
{
private:
	CItem m_Item[3];
	CCharacter* m_Player;

public:
	void Initialize(CCharacter* m_Player);
	void SetItem();
	void Update();
	void Render();
	void Release();


public:
	CShop();
	~CShop();
};
#define __CShop_H__
#endif // !__CShop_H__