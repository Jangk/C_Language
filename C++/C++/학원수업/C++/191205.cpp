#include <iostream>

using namespace std;

class CGameObject
{
public:
	CGameObject(int n)
		//: m_iStatic(100) // Error! ���������� �̴ϼȶ������� ���� ����� ���ÿ� �ʱ�ȭ�� �� ����.
		: m_iVal(n)
	{
		//m_iStatic = 100; // Ok! ����� ���ÿ� �ʱ�ȭ�� �ƴ϶� �ܼ� �� ���濡 �Ұ��ϴ�.
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
		cout << "static ��� �Լ�" << endl;

		//// �Ϲ� ��� �Լ� ȣ�� X
		//PrintValue(); // Error!

		// �Ϲ� ��� ���� ��� X
		//m_iVal = 100; // Error!

		m_iStatic = 500; // Ok
		Func(); // Ok

		int i = 100; // Ok
	}

	static void Func()
	{

	}

public:
	static int m_iStatic; // static ��� ����
	int m_iVal;
};

// ##1. static ������� �ʱ�ȭ ���� (cpp �������� ����)
int CGameObject::m_iStatic = 100; // ����� ���ÿ� �ʱ�ȭ

void main()
{
	CGameObject	obj1(10);
	CGameObject obj2(20);
	CGameObject obj3(30);

	//// ##3. CGameObject�� static ����� CGameObjectŸ������ ������ ��ü ��ΰ� ������ �� �ִ�.
	//CGameObject::m_iStatic += 50;

	//obj1.PrintValue();
	//obj2.PrintValue();
	//obj3.PrintValue();





	//// ##2. static ����� ��ü�� �������� �ʾƵ� ����� �� �ִ�.
	////cout << CGameObject::m_iVal << endl; // Error!
	//cout << CGameObject::m_iStatic << endl; // Ok!

	//CGameObject::PrintValue(); // Error!

	// namespace�� �޷��ִ� �����Լ���� �����ϸ� �ȴ�!
	CGameObject::StaticFunc(); // Ok!
}