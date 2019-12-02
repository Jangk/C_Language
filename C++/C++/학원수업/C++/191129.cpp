#include <iostream>

using namespace std;

// ##1. 클래스와 const

class CTest
{
public:
	CTest()
		: m_iVal(100), m_iA(0)	// ##2. 이니셜라이저: 선언과 동시에 초기화.
	{
		//m_iVal = 100; // Error, 이미 메모리 할당 끝났음. 값 수정 불가.
	}

	CTest(int a, int b)
		: m_iVal(a), m_iA(b) // ##2. 이니셜라이저: 선언과 동시에 초기화.
	{

	}

public:
	// ##3. const 멤버 함수: 클래스가 갖고 있는 멤버들의 값을 변경 못하게 막는다.
	void Func() const
	{
		//m_iA = 100; // Error
		//Func2(); // Error, 일반 멤버함수도 호출할 수 없다.

		int i = 0;
		i = 100; // Ok, 지역변수 값 수정은 가능하다.
		Func3(); // Ok, const 멤버 함수 안에서 또다른 const 멤버 함수 호출은 가능하다.
	}

	void Func2()
	{
		Func(); // Ok, 일반 멤버 함수 안에서 const 멤버 함수 호출 가능.
	}

	void Func3() const
	{

	}

	void TestFunc()
	{
		cout << "일반 멤버 함수" << endl;
	}

	void TestFunc() const
	{
		cout << "const 멤버 함수" << endl;
	}


private:
	const int m_iVal;
	int m_iA;
};

void main()
{
	// ##4. const 객체
	const CTest obj;
	//obj.Func2(); // Error! const 객체는 const 멤버함수만 호출할 수 있다.
	obj.TestFunc(); // const 키워드 유무에 따라 오버로딩도 가능.
}