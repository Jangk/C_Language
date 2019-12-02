#include <iostream>

using namespace std;

// ##1. 함수(Function)
// 앞으로 프로그램에서 행위(기능)를 구현할 때 함수 단위로 작성한다. -> 코드 재사용.
// 프로그램은 행위(함수)의 순서로 이루어진다. -> 절차지향 프로그래밍.

// 프로그래밍에서의 함수의 4가지 형태
// y = f(x)	-> 인자와 반환 값이 있는 경우.
// y = f(); -> 인자는 없지만 반환 값이 있는 경우 ex)rand함수
// f(x)	-> 인자만 있는 경우 ex)srand함수
// f() -> 인자와 반환 값 둘 다 없는 경우

void PrintHello() // 인자X 반환X
{
	cout << "Hello" << endl;	
}

void main()
{
	// 함수 호출
	PrintHello();
}