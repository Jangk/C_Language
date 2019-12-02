#include <iostream>
using namespace std;

int Add(int a, int b);
int Min(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

void main()
{	// 함수포인터의 알고리즘 중요.

	// 함수 포인터.
	// - 함수 코드는 바이너리 형태로 Code영역에 저장됨.
	// 반환값(포인터변수)(매개변수);
	int(*ptr)(int, int) = nullptr;						// 함수의 구조랑 동일하기 때문에 대입가능
	ptr = Add;											// ptr에 add함수포인터 대입
	cout << Add(10, 20) << endl;
	cout << ptr(10, 20) << endl;




	int(*ptr2[4])(int, int) = { Add, Min, Mul, Div };	// 함수 배열 포인터(여러개의 변수 넣기 쌉가능)
	cout << ptr2[0](10, 10) << endl;
	cout << ptr2[1](10, 10) << endl;
	cout << ptr2[2](10, 10) << endl;
	cout << ptr2[3](10, 10) << endl;
}


int Add(int a, int b)
{
	return a + b;
}

int Min(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}