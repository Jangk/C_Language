#include <iostream>

using namespace std;

// 계산기
int Add(int a, int b) // 인자 == 매개변수 == 파라미터
{
	int iResult = a + b;

	// return: 함수종료 키워드.
	return iResult; // 함수 종료할 때 iResult를 반환한다.
}

void main()
{
	//// 함수는 오로지 하나의 값만 반환할 수 있다.
	//int a = Add(10, 30);

	//cout << a << endl;

	//return; // 반환 없이 함수를 종료한다.

	//cout << Add(10, 30) << endl;
}