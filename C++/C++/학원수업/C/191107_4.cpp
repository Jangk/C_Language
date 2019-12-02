#include <iostream>

using namespace std;

// ##1. 전역변수
// Data영역에 등록되는 변수다. 프로그램 시작 시 할당되고 프로그램 종료 시 소멸.
// 지역과 상관없이 어디서든 접근할 수 있다.
int iA = 100;

void FunA()
{
	iA = 200;
}

void FuncB()
{
	iA = 30;
}

void main()
{
	FunA();
	cout << iA << endl;

	FuncB();
	cout << iA << endl;
}