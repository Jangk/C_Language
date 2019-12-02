#include <iostream>

using namespace std;


// ##4. ****************** 컴파일러가 자동 생성하는 4가지.
// 1. 기본 생성자 (디폴트 생성자)
// 2. 기본 소멸자 (디폴트 소멸자)
// 3. 기본 복사생성자 (디폴트 복사생성자)
// 4. 기본 대입연산자 (추후 연산자 오버로딩 때 다룰 내용)


// ##1. 복사 생성자
// 프로그래머가 복사 생성자를 정의하지 않으면 컴파일러가 기본 복사생성자를 만들어준다.
// 프로그래머가 복사 생성자를 정의하면 컴파일러가 기본 복사생성자를 만들어주지 않는다.

class CTest
{
public:
	CTest() {}
	explicit CTest(int a, int b)
		: m_iA(a), m_iB(b)
	{

	}

	// ##2. 기본 복사생성자의 원형
	CTest(const CTest& _obj)
	{
		cout << "복사 생성자" << endl;

		m_iA = _obj.m_iA;
		m_iB = _obj.m_iB;
	}

public:
	void Print()
	{
		cout << m_iA << endl;
		cout << m_iB << endl;
		cout << "-----------------" << endl;
	}

private:
	int m_iA;
	int m_iB;
};

void Func1(CTest obj)
{

}

CTest Func2()
{
	CTest obj;
	return obj;
}


void main()
{	
	CTest obj1(10, 20);
	obj1.Print();

	// ##3. ***** 복사 생성자 호출 시점 3가지.
	//// 1. 객체 생성과 동시에 다른 객체로 초기화할 때. (생성자로 다른 객체를 전달할 때)
	////CTest obj2(obj1);
	//////CTest obj2 = obj1;
	////obj2.Print();

	//CTest* ptr = new CTest(obj1);
	//ptr->Print();

	// 2. 함수 인자로 객체가 전달될 때 (Call by Value)
	//Func1(obj1); 

	// 3. 함수의 반환 값이 객체일 때 (Call by Value)
	//Func2();
}