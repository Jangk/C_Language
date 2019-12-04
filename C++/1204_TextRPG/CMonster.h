#pragma once
#ifndef __CMONSTER_H__
#include "CCharacter.h"

class CMonster : public CCharacter
{
private :
	

public:
	virtual void Initialize() override;
	virtual void SetInfo(const char* szName, int iLev, int iAtt, int iHP, int iMoneyint, int iMaxExp) override;
	virtual void Update() override;
	virtual void Render() override;
	virtual void Release() override;
};
#define __CMONSTER_H__
#endif // !__CMONSTER_H__