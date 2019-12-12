#include <iostream>

using namespace std;

class CGameObject
{
public:
	CGameObject(int n)
		//: m_iStatic(100) // Error! 정적변수는 이니셜라이져를 통해 선언과 동시에 초기화할 수 없음.
		: m_iVal(n)
	{
		//m_iStatic = 100; // Ok! 선언과 동시에 초기화가 아니라 단순 값 변경에 불과하다.
	}

public:
	void PrintValue()
	{
		//cout << m_iVal << endl;
		cout << m_iStatic << endl;
		cout << "-----------------" << endl;

		StaticFunc(); // Ok
	}

	static void StaticFunc()
	{
		cout << "static 멤버 함수" << endl;

		//// 일반 멤버 함수 호출 X
		//PrintValue(); // Error!

		// 일반 멤버 변수 사용 X
		//m_iVal = 100; // Error!

		m_iStatic = 500; // Ok
		Func(); // Ok

		int i = 100; // Ok
	}

	static void Func()
	{

	}

public:
	static int m_iStatic; // static 멤버 변수
	int m_iVal;
};

// ##1. static 멤버변수 초기화 문법 (cpp 전역에서 진행)
int CGameObject::m_iStatic = 100; // 선언과 동시에 초기화

void main()
{
	CGameObject	obj1(10);
	CGameObject obj2(20);
	CGameObject obj3(30);

	//// ##3. CGameObject의 static 멤버는 CGameObject타입으로 생성된 객체 모두가 공유할 수 있다.
	//CGameObject::m_iStatic += 50;

	//obj1.PrintValue();
	//obj2.PrintValue();
	//obj3.PrintValue();





	//// ##2. static 멤버는 객체가 생성되지 않아도 사용할 수 있다.
	////cout << CGameObject::m_iVal << endl; // Error!
	//cout << CGameObject::m_iStatic << endl; // Ok!

	//CGameObject::PrintValue(); // Error!

	// namespace가 달려있는 전역함수라고 이해하면 된다!
	CGameObject::StaticFunc(); // Ok!
}