#include <iostream>

using namespace std;

// C++의 구조체는 "멤버함수"를 포함할 수 있다.

struct tagPlayer
{
private:
	// 멤버 변수
	char	m_szName[32];
	int		m_iAtt;
	int		m_iSpeed;

public:
	// 멤버 함수
	void Init()
	{
		strcpy_s(m_szName, "전사");
		m_iAtt = 10;
		m_iSpeed = 5;
	}

	void Attack()
	{
		cout << m_szName << "가(이) " << m_iAtt << "만큼 공격합니다." << endl;
	}

	void Move()
	{
		cout << m_szName << "가(이) " << m_iSpeed << "만큼 이동합니다" << endl;
	}
};

void main()
{
	tagPlayer player;

	player.Init();
	player.Attack();
	player.Move();
}