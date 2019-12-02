#include <iostream>

using namespace std;

int Add(int a, int b);

void main()
{
	// ##2. 함수 포인터 타입
	// 반환타입 (*포인터변수)(인자타입)
	int(*ptr)(int, int) = nullptr;

	ptr = Add;

	cout << ptr(10, 20) << endl;
	cout << Add(10, 20) << endl;



	// ##1. 함수 포인터
	// 함수 코드는 바이너리 형태로 Code영역에 저장된다.
	// 함수 이름은 해당 함수의 코드가 보관된 메모리의 주소이다.
	//cout << Add << endl;	
}

int Add(int a, int b)
{
	return a + b;
}