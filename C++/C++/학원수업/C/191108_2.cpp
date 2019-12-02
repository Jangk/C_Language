#include <iostream>

using namespace std;

// ##1. 함수 오버로딩 (C++ 함수 문법)
// 과거 C에서는 같은 이름의 함수를 정의할 수 없다.
// C++ 넘어오면서 같은 이름의 함수를 정의할 수 있게 됬다. 단, 인자가 다를 경우에만 해당.
// 프로그래밍을 좀 더 유연하게 구성할 수 있다.

int Add(int a, int b)
{
	cout << "int 2개 덧셈" << endl;

	return a + b;
}

int Add(int a, int b, int c)
{
	cout << "int 3개 덧셈" << endl;

	return a + b + c;
}

float Add(float a, float b)
{
	cout << "float 덧셈" << endl;

	return a + b;
}

// 함수 오버로딩은 반환 값으로 같은 이름의 함수를 구별하지 않는다.
//int Func()
//{
//
//}
//
//float Func() // Error!!!
//{
//
//}

void main()
{
	//// 2. 함수 오버로딩은 같은 이름의 함수를 호출할 때 인자 "개수"로 구별한다.
	//Add(10, 20);
	//Add(10, 20, 30);

	//// 1. 함수 오버로딩은 같은 이름의 함수를 호출할 때 인자 "타입"으로 구별한다.
	//Add(10, 20);
	//Add(3.14f, 3.14f);
	//Add(10, 3.14f); // Error! 모호하다..
}