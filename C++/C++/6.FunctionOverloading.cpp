#include <iostream>
using namespace std;

void Func1(double a, int b)
{	//1번  함수
	cout << a + b << endl;
}


void Func1(bool a, int b)
{	//2번  함수
	cout << b + 10 << endl;
}


void Func1(char a, int b)
{	//3번  함수
	cout << b + 20 << endl;
}


void Func1(int a, int b = 50)			// 디폴트 값
{	//4번  함수
	cout << a + b << endl;
}


void main()
{	// 1번 함수만 있을경우 int가 double로 "표준변환"되어 대입되지만
	// 2번 함수도 있을경우 int의 표준변환형이 애매모호해서 에러를 뛰움
	// 3번 함수도 에러가 뜸 즉 int == bool == char 전부 정수로 구분가능
	//Func1(3, 4.3f);


	// 4번 함수는 함수인자를 한개만 넣을시 b는 디폴트 값으로 50이 대입되고
	//           함수인자를 둘다 넣을시 일반 함수처럼 작동
	Func1(3);
}