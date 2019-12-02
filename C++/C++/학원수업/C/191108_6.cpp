#include <iostream>

using namespace std;

// ##1. 포인터 (pointer)

// 참조: 특정 메모리에 접근하는 행위
// 직접참조: 변수, 레퍼런스
// 간접참조: 포인터

void Add(int n)
{
	cout << "n의 주소: " << &n << endl;
	++n;
}

void Add(int* p)
{
	++(*p);
}

// 문제.1 Swap 함수 구현.
void Swap(int* p1, int* p2)
{
	int iTemp = *p1;
	*p1 = *p2;
	*p2 = iTemp;
}

void main()
{
	// ##6. 포인터의 크기
	// 32비트 환경에서는 4Bytes
	// 64비트 환경에서는 8Bytes
	char*	a = nullptr;
	short*	b = nullptr;
	int*	c = nullptr;
	double* d = nullptr;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;




	/*int iA = 10, iB = 20;

	Swap(&iA, &iB);

	cout << iA << ", " << iB << endl;*/


	//// ##5. Call by Pointer
	//int iA = 10;

	//Add(&iA); // Call by Pointer (간접 참조)

	//cout << iA << endl;




	// ##4. 포인터 선언과 초기화
	// 포인터 변수: 주소를 저장하는 "변수"

	//// 포인터 선언 시 자료형을 명확히 명시 해줄 것.
	//int* p1 = nullptr;	// 포인터 0 초기화
	//short* p2 = nullptr; // 포인터 0 초기화

	//int iA = 10;
	//int* pA = &iA;

	//cout << &iA << endl;
	//cout << pA << endl; // 포인터 변수는 "주소"를 담아낸다.

	//// 간접참조
	//// 역참조 연산: *포인터변수
	//*pA = 100; // pA에가 갖고있는 주소 공간에 접근해서 그 메모리에 100을 대입해라.

	//cout << iA << endl;





	// ##3. 어드레스 연산자 &
	//// 피연산자의 메모리 주소를 반환.
	//int iA = 0, iB = 0;

	//cout << &iA << endl;
	//cout << &iB << endl;




	//// ##2. Call by Value
	//int iA = 10;

	//cout << "iA의 주소: " << &iA << endl;
	//Add(iA); // Call by Value (값 복사)

	//cout << iA << endl;
}