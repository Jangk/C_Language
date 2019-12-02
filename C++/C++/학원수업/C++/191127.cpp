#include <iostream>

using namespace std;

// ***** 객체지향 프로그래밍 (Object Oriented Programming, OOP)
// 프로그램은 객체 기반으로 설계되고 객체 기반으로 동작한다.
// 따라서, OOP는 프로그램을 구성하는 객체들 간의 유기적인 소통을 표현한 프로그래밍이다.

// 1. 정보 은닉이 가능하다.
// 2. 캡슐화가 가능하다.
// 3. 상속을 통해 코드 재사용을 극대화 시킨다.
// 4. 다형성을 통해 프로그래밍을 더 유연하게 작성할 수 있다.
// 5. 모듈화가 가능하다.
// 6. 유지보수가 뛰어나다.
// 7. 규모 큰 프로그램에 적합하다.

// ##1. 클래스 (Class)
// C++에서 객체를 표현하기 위한 사용자 정의 자료형이다.
// 객체를 추상화시켜 놓은 것이다.
// *추상화: 공통된 요소들의 집합.

// 멤버 접근 지정자 (멤버에 대한 접근 권한)
// public: 클래스 내, 외부 모두 접근 가능.
// protected: 상속 관계에서만 접근 가능. 외부에서의 접근은 불가.
// private: 클래스 내부에서만 접근 가능. 외부에서의 접근은 불가.


// ##3.*************** 클래스의 4대 속성
// 1.은닉화: 클래스의 멤버는 기본 private이다 -> 정보 은닉 -> 정보 보호.
// 2.캡슐화: 구현 내용을 외부로부터 은닉.
// 3.상속성
// 4.다형성


class CPlayer
{
//private:
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
	// ##2. 객체 (Object)
	// 정의한 클래스가 메모리 상에 등록됬을 때 -> Object
	// Instance: 메모리에 등록된 실체.
	CPlayer player;

	player.Init();
	player.Attack();
	player.Move();

	// 클래스의 멤버는 기본적으로 private 속성을 갖고 있다.
	player.m_iAtt = 50;
}