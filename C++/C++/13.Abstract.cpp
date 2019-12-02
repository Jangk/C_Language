#include <iostream>
using namespace std;

// 추상 클래스
// 순수 가상함수를 가지고 있는 클래스를 추상클래스라 칭함.
class Animals
{
public:
	// 순수가상함수 ( 아무것도 가지지않는 함수)
	// 순수가상함수를 가진 클래스의 자식은 순수가상함수를 무조건 오버라이딩 해야된다.
	// 순수가상함수는 포인터, 레퍼런스 변수로만 선언할수있음. 아무것도 가지지않아서 일반 변수로 선언 불가.
	// - 포인터형으로 자식을 대입해서 사용 ex) Animals* ani = new Animals <- 불가능하나 자식클래스로 new 하는 건 가능


	// 순수가상함수 사용법 ↓	
	virtual void Speak() = 0;
private:
};

class Cat : public Animals
{
public:
	void Speak();
private:
};


void main()
{

}