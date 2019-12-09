#include <iostream>

using namespace std;

// ##1. 함수 객체 (functor, 함수자)
// 함수 호출 연산자 "()" 를 오버로딩 한다.
// 일반 함수로 다룰 수 없는 멤버, 상속, 다형성 모두 가능하다.

class CAdd
{
public:
	// 함수 호출 연산자 오버로딩은 인자 개수 제한이 없다.
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void main()
{
	CAdd functor;

	// 객체를 함수처럼 다룰 수 있다 -> 함수객체.
	cout << functor(10, 20) << endl; // functor.operator()(10, 20);
}