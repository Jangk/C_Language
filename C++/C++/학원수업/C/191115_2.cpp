#include <iostream>

using namespace std;

// ##1. 동적할당
// 프로그래머가 필요에따라 메모리를 할당하고 해제(반환)하는 문법.
// 이 때 Heap영역을 사용한다.

// ##2. 지역 변수의 주소를 반환한 경우.
char* InputString()
{
	char szName[32] = "";
	cin >> szName;

	return szName;
}

// ##8. 동적할당으로 해결.
char* InputStringEx()
{
	char* ptr = new char[32]{};

	cin >> ptr;

	return ptr;
}


void main()
{
	// ##8. 동적할당으로 해결.
	char* p = InputStringEx();

	cout << p << endl;

	delete[] p;
	p = nullptr;


	//// ##7. C++의 동적배열.
	//int iCount = 0;

	//cout << "몇 개?: ";
	//cin >> iCount;

	////int* ptr = new int[iCount];	// 모든 원소 쓰레기 값 초기화
	//int* ptr = new int[iCount] {};	// 모든 원소 0 초기화

	//for (int i = 0; i < iCount; ++i)
	//	cout << ptr[i] << endl;

	//// 동적배열 해제
	//delete[] ptr;
	//ptr = nullptr;









	//// ##6. C++의 동적할당.
	//// new 연산자로 할당하고 delete 연산자로 해제한다.

	//// 1.
	////int* ptr = new int;	// Heap영역에 int 메모리 할당.
	////cout << *ptr << endl; // 쓰레기 값 초기화.

	////delete ptr;
	////ptr = nullptr;

	//// 2.
	//int* ptr = new int(10);	// 할당과 동시에 10 초기화

	//cout << *ptr << endl; 

	//delete ptr;
	//ptr = nullptr;







	//////////////////////////////////////////////////////////////////////////////

	//// ##5. calloc

	//int iCount = 0;

	//// 동적배열은 런타임 때 배열의 길이를 정할 수 있다.
	//cout << "몇 개?: ";
	//cin >> iCount;

	//// 동적배열
	//int* ptr = (int*)calloc(iCount, sizeof(int)); // malloc과 달리 자동 0 초기화.

	//// cout << sizeof(ptr) << endl; // 동적배열 크기 X

	//for (int i = 0; i < iCount; ++i)
	//	cout << ptr[i] << endl;

	//free(ptr);
	//ptr = nullptr;





	//// ##4. malloc
	//// 동적할당 함수. 할당된 Heap영역의 주소를 반환해준다.

	//// 이제 ptr은 Heap영역의 주소를 갖고 있다. 이 공간은 int타입에 4바이트 공간이다.
	//int* ptr = (int*)malloc(sizeof(int));

	//// malloc은 최초 쓰레기 값으로 초기화 된다.
	//cout << *ptr << endl;

	//*ptr = 100;
	//cout << *ptr << endl;

	//// free함수: 동적할당 공간 해제(반환).
	//free(ptr);
	//ptr = nullptr; // 댕글링 포인터 방지 차원.

	//if(ptr) // 댕글링 포인터 방지 차원.
	//	*ptr = 200;



	// ##3. C언어에서의 동적할당 표준함수들.
	// malloc, calloc






	//// ##2. 지역 변수의 주소를 반환한 경우.
	//char* p = InputString();

	//// p는 이미 해제된 공간의 주소를 갖고 있다 -> Dangling Pointer (댕글링 포인터)
	//cout << p << endl;
}