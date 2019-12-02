#include <iostream>

using namespace std;

// ##1. 지역변수
// Stack영역에 할당된다. 지역변수에는 "매개변수"도 포함된다.
// Stack영역은 LIFO 구조이다. LIFO == Last In First Out (후입선출)

int Add(int a, int b) 
{
	int iResult = a + b;
	return iResult; 
}

void main()
{
	// a와 b, iResult는 Add함수 지역에 선언된 지역변수이므로 main함수 지역에서 접근할 수 없다.
	// a = 10, b = 20; // Error
	// iResult = 200; // Error

	// 
	int a = 10, b = 20;
	int iResult = 0;

	iResult = Add(a, b);
}