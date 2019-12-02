#include <iostream>
using namespace std;

// 인터페이스 1   ---- 데이터를 정의하지않는다.
class IFlyable
{
public:
	virtual void Fly() = 0;
};

// 인터페이스 2
class IWalkable
{
public:
	virtual void Walk() = 0;
};


// 인터페이스 사용예 1
class Bat : public IFlyable, public IWalkable
{
public:
	void Fly();
	void Walk();
};

// 인터페이스 사용예 2
class Cat : public IWalkable
{
public:
	void Walk();
};

void main()
{
	// 인터페이스 : 순수추상클래스
	// 추상 클래스와 비슷하지만 데이터를 정의하지 않고 추상 함수만 들어있는 것. // 넣는다고 컴파일에러가 뜨진않음
}