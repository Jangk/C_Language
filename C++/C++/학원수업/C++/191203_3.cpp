#include <iostream>

using namespace std;

// ##1. 상속의 조건
// Is - a 관계는 상속의 조건이 된다.
// ex) 학생은 사람이다. 인부는 사람이다.

// Has - a 관계는 상속의 조건이 아니다.
// 경찰이 총을 소지하고 있다.
class CGun
{
public:
	void Using()
	{
		cout << "빵야 빵야" << endl;
	}
};

class CHandCuff
{
public:
	void Using()
	{
		cout << "미란다 원칙 고지" << endl;
	}
};

//// Has - a 관계를 상속으로 구현했을 때의 모습.
//class CPoliceMan : public CGun, public CHandCuff // Has - a 관계는 다중상속의 위험이 있다.
//{
//
//};

// Has - a 관계는 상속이 아닌 "포함 관계"로 구성한다.
class CPoliceMan
{
private:
	CGun		m_Gun;
	CHandCuff	m_HandCuff;
};


void main()
{
	////// Has - a 관계를 상속으로 구현했을 때의 모습.
	//CPoliceMan officer;
	//officer.Using(); // 다중상속의 가장 큰 문제점은 "모호성"이다.
}