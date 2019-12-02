#include <iostream>

using namespace std;

// ##1. 디폴트 매개변수 (C++ 함수 문법)
// 디폴트 매개변수는 반드시 오른쪽부터 채워 나간다.
int Add(int a, int b, int c = 0)
{
	return a + b + c;
}

void main()
{
	// 디폴트 매개변수도 프로그래밍을 좀 더 유연하게 구성할 수 있게 도와준다.
	cout << Add(10, 20) << endl;		// c의 값은 0이다.
	cout << Add(10, 20, 30) << endl;	// c의 값은 30이다.
}