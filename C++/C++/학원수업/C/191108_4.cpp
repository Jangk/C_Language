#include <iostream>

using namespace std;

// ##1. 재귀 함수 (Recursive Function)
// 자기 자신을 호출하는 함수.
// 얼마나 반복될지 모르는 상황에 아주 유용하다,
void Recursive(int n)
{	
	// 재귀함수는 탈출조건이 필수다.
	// 탈출조건이 없다면 Stack overflow 현상이 일어난다.
	if (0 == n)
		return;

	cout << "Hello" << endl;

	Recursive(n - 1); // 재귀 호출
}

void main()
{
	Recursive(100);
}