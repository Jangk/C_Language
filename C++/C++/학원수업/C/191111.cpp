#include <iostream>

using namespace std;

// int ptr[] 형식은 함수의 인자로만 사용할 수 있다.
void BubbleSort(int ptr[] /* == int* ptr */, int iLength)
{
	for (int i = 0; i < iLength; ++i)
	{
		for (int j = 0; j < iLength - 1; ++j)
		{
			if (ptr[j] > ptr[j + 1])
			{
				int iTemp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = iTemp;
			}
		}
	}
}

void main()
{
	// 문제1. 버블정렬 함수를 완성하시오. (오름차순)
	int iArr[5] = { 4, 3, 5, 1, 2 };
	int iLength = sizeof(iArr) / sizeof(iArr[0]);	

	BubbleSort(iArr, iLength);

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;






	//// ##6. const와 포인터
	//int iA = 10, iB = 20;

	//// 1.
	//const int* ptr1 = &iA; // 상수의 포인터

	//*ptr1 = 100; // Error 상수의 포인터
	//ptr1 = &iB;	// Ok


	//// 2.
	//int* const ptr2 = &iA; // 상수 포인터

	//*ptr2 = 100; // Ok
	//ptr2 = &iB; // Error 상수 포인터

	//// 3.
	//const int* const ptr3 = &iA; // 상수의 상수 포인터

	//*ptr3 = 100; // Error
	//ptr3 = &iB; // Error 







	//// ##5. 인덱스 연산 => 포인터 연산
	//int iArr[5] = { 1, 2, 3, 4, 5 };

	////// 시작 주소로부터 2번 이동한 곳의 값을 읽어들여라.
	//cout << iArr[2] << endl;		// 인덱스 연산
	//cout << *(iArr + 2) << endl;	// 포인터 연산


	// ##4. 포인터 연산
	// 포인터에 +, - 연산을 할 수 있다. 
	// 단, 연속된 공간이어야 한다.
	//int iArr[5] = { 1, 2, 3, 4, 5 };
	//iArr += 1; // Error! 축약 연산 X
	//++iArr; // Error! 증감 연산 X

	//int* ptr = iArr; // Ok
	//ptr += 1; // ok 1번 인덱스의 주소로 이동.
	//ptr -= 1; // ok 0번 인덱스의 주소로 이동.
	//++ptr; // ok 1번 인덱스의 주소로 이동.
	//--ptr; // ok 0번 인덱스의 주소로 이동.

	//cout << iArr << endl;
	//cout << &iArr[0] << endl;
	//cout << "-----------------" << endl;

	//// 포인터 + N: 현재 주소로부터 자료형의 크기 * N만큼 이동해라.
	//cout << iArr + 1 << endl;
	//cout << &iArr[1] << endl;
	//cout << "-----------------" << endl;

	//cout << iArr + 3 << endl;
	//cout << &iArr[3] << endl;


	//// ##3. 배열의 이름
	//// 배열의 이름은 포인터다.
	//int iArr[5] = {};

	//int iA = 100;
	//iArr = &iA;	// Error! 배열의 이름은 상수 포인터이다.

	//
	//// 배열의 이름은 연속된 메모리 중 첫번째 메모리의 주소이다. (시작 주소)
	//cout << iArr << endl;
	//cout << &iArr[0] << endl;







	//// ##2. 배열과 포인터
	//// 배열은 연속된 메모리를 갖는다.
	//int iArr1[5] = {};	// 4바이트 메모리가 5개 연속되게 할당된다.

	//// 배열의 이름을 sizeof 연산하면 배열의 총 메모리 크기가 나온다.
	//cout << sizeof(iArr1) << endl;
	//cout << "----------------------" << endl;

	//double dArr2[5] = {}; // 8바이트 메모리가 5개 연속되게 할당된다.

	//cout << sizeof(dArr2) << endl;







	//// ##1. 이중 포인터
	//int iA = 100;
	//int* ptr = &iA;

	//cout << "iA의 주소: " << &iA << endl;
	//cout << "ptr의 값: " << ptr << endl;
	//cout << "-----------------------------" << endl;

	//// 이중 포인터
	//int** pp = &ptr;

	//cout << "ptr의 주소: " << &ptr << endl;
	//cout << "pp의 값: " << pp << endl;
	//cout << "iA의 주소: " << *pp << endl;
	//cout << "iA의 값: " << **pp << endl;
}