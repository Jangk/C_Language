#include <iostream>

using namespace std;

// ##1. 인라인 함수 (inline)
// 컴파일 시점에서 함수 호출 구문에 해당 함수의 코드가 삽입됨.

// 인라인이 되지 않는 경우
// 1. 재귀 호출할 때
// 2. 함수 포인터로 다룰 때

inline int Add(int a, int b)
{
	return a + b;
}

class CPlayer
{
public:
	// 내부 정의: 인라인 대상 O
	void Func1()
	{

	}

	void Func2();
};

// 외부 정의: 인라인 대상 X
void CPlayer::Func2()
{

}

void main()
{
	Add(10, 20);
}