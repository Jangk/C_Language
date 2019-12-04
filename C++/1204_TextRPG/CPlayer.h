#pragma once
#ifndef __CPLAYER_H__
class CCharacter;
class CPlayer : public CCharacter
{
private :
public :
	virtual void Initialize() override;
	virtual void SetInfo(const char* szName, int iLev, int iAtt, int iHP, int iMoney = 0, int iMaxExp = 100) override;
	virtual void Update()override;
	virtual void Render() override;
	virtual void Release() override;
	void LevelUp(int iExp);


};


#define __CPLAYER_H__
#endif // !__CPLAYER_H__