#include <iostream>

using namespace std;

// ##1. 생성자 (Constructor)
// 객체 생성 시 자동 호출되는 함수의 일종.
// 프로그래머가 생성자를 정의하지 않으면 컴파일러가 기본 생성자를 자동 생성해준다.
// 프로그래머가 생성자를 정의한다면 컴파일러는 기본 생성자를 만들어주지 않는다.

class CTest
{
public:
	CTest() // 기본 생성자(디폴트 생성자)
	{
		m_iA = 0;
		cout << "기본 생성자" << endl;
	}

	CTest(int a) // 인자있는 생성자
	{
		m_iA = a;
		cout << "인자있는 생성자" << endl;
	}

private:
	int m_iA;
};

void main()
{
	//// ##4. 객체 배열
	////CTest Arr1[3] = {};
	//CTest* pArr2 = new CTest[3];							// 연속된 3개의 공간

	//cout << "----------------------------------------" << endl;

	//// 객체 포인터 배열
	////CTest* Arr3[3] = {};
	//CTest* Arr4[3] = { new CTest, new CTest, new CTest };	// 3개 따로










	// ##3. 동적할당 시 생성자 호출
	//CTest* ptr1 = new CTest;	// 기본 생성자 호출
	//CTest* ptr2 = new CTest(100); // 인자있는 생성자 호출
	//CTest* ptr3;					// 객체를 생성하느게 아닌 객체 위치를 저장할 변수임( 생성자 호출 X)

	// malloc과 calloc함수는 생성자 호출 X
	//CTest* ptr3 = (CTest*)malloc(sizeof(CTest));



	//// ##2. 객체 생성 과정.
	//// 메모리 할당 -> 생성자 호출
	//CTest obj1;	// 기본 생성자 호출
	//CTest obj2(100); // 인자있는 생성자 호출



	// 서로가 서로의 헤더를 참조하는 것을 가리켜 "상호참조"라 한다.
	// 이 때 무한루프에 빠져 컴파일 할 수가 없다.
	//#include "Player.h"

	// 전방선언
	// 상호참조 현상을 해결하는 문법.
	// 단순히 외부에 이러한 클래스가 존재할 것임을 알려주는 용도.
	// ex) class 선언할클래스명;			// 기존 클래스보다 위에 있어야한다.
}