#include <iostream>

using namespace std;

// 부모 클래스: == 기반 클래스, Base Class, 상위 클래스
// 자식 클래스: == 확장 클래스, Derived Class, 하위 클래스

class CBase
{
public:
	CBase()
	{
		cout << "부모의 기본 생성자" << endl;
	} 

	CBase(int a)
	{
		cout << "부모의 인자 있는 생성자" << endl;
	}

	~CBase()
	{
		cout << "부모 소멸자" << endl;
	}
};

class CChild : public CBase
{
public:
	CChild()
	{
		cout << "자식의 기본 생성자" << endl;
	}

	CChild(int a)
	//	: CBase(a) // 부모의 인자있는 생성자를 명시적으로 호출하지 않으면 부모의 기본 생성자 호출.
	{
		cout << "자식의 인자 있는 생성자" << endl;
	}

	~CChild()
	{
		cout << "자식 소멸자" << endl;
	}
};

void main()
{
	// ##1. ***** 자식 객체 생성과정
	// 메모리 할당 -> 부모 생성자 -> 자식 생성자 호출
	CChild obj(10);

	cout << "main 함수 끝!" << endl;

	// ##2. ***** 자식 객체 소멸과정
	// 자식 소멸자 -> 부모 소멸자 호출 -> 메모리 반환
}