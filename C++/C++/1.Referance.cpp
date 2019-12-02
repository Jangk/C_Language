#include <iostream>
using namespace std;


void test1(int& ref)
{	// 레퍼런스로 받아오기때문에 포인터나 레퍼런스 변수가 아니여도 값 변경
	ref = 10;
}


void test2(int ref)
{	// 일반변수에 레퍼런스를 넣어도 콜 바이 밸류라서 안바낌
	ref = 20;
}


void test3(const int& ref)		// 함수 인자인 레퍼런스변수를 const로 읽기 전용으로 만들수 있다.
{								// 함수 이름으로 명시하지 않으면 읽기전용인지 알수가없음.
	//ref = 20;					// 읽기 전용이라 바꿀려고 할시에 에러남
}

void main()
{
	int a = 1;
	int b = 2;
	int& ref = a;
	int& ref2 = b;


	test1(b);
	cout << b << endl;
	test1(ref);
	cout << ref << endl;
	test2(ref);
	cout << ref << endl;
	test3(ref2);
	cout << ref2 << endl;

//
//void printElements(int(&arr)[4])
//{ //이런식으로 함수인자를 받아올수있다.크기 지정은 무조건 해야됨. (포인터연산처럼 주소에 덧셈 뺄셈으로 연산은 못함)
//	int length{ sizeof(arr) / sizeof(arr[0]) };
//	for (int i{ 0 }; i < length; ++i)
//	{
//		std::cout << arr[i] << std::endl;
//	}
//}
//
//
//int main() 
//{
//	int arr[]{ 99, 20, 14, 80 };
//	printElements(arr); 
//	return 0; 
}