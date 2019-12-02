#include <iostream>

using namespace std;

// ##1. 은닉화
// 클래스의 멤버는 기본 private이다 -> 정보 은닉 -> 정보 보호.

class CCharacter
{
private:
	int m_iAtt;
	int m_iDef;
	int m_iHp;

public:
	// Set함수. 쓰기 전용.
	void SetDamaged(int iAtt)
	{
		m_iHp -= iAtt;
	}

	// Get함수. 읽기 전용.
	int GetAtt()
	{
		return m_iAtt;
	}

public:
	void Init()
	{
		m_iAtt = 5;
		m_iDef = 10;
		m_iHp = 200;
	}
};

void main()
{
	CCharacter player;
	CCharacter monster;

	player.Init();
	monster.Init();
	//monster.m_iAtt = 5; // 외부 접근 X, 은닉화.
	//monster.m_iHp -= 10; // 외부 접근 X, 은닉화.

	// 은닉된 데이터를 제어할 함수가 따로 필요하다.
	// 은닉된 데이터는 사용자가 마련한 특정 경로를 통해서만 제어할 수 있다.
	monster.SetDamaged(player.GetAtt());

}