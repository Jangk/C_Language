#include <iostream>

using namespace std;

// ##1. Ŭ������ const

class CTest
{
public:
	CTest()
		: m_iVal(100), m_iA(0)	// ##2. �̴ϼȶ�����: ����� ���ÿ� �ʱ�ȭ.
	{
		//m_iVal = 100; // Error, �̹� �޸� �Ҵ� ������. �� ���� �Ұ�.
	}

	CTest(int a, int b)
		: m_iVal(a), m_iA(b) // ##2. �̴ϼȶ�����: ����� ���ÿ� �ʱ�ȭ.
	{

	}

public:
	// ##3. const ��� �Լ�: Ŭ������ ���� �ִ� ������� ���� ���� ���ϰ� ���´�.
	void Func() const
	{
		//m_iA = 100; // Error
		//Func2(); // Error, �Ϲ� ����Լ��� ȣ���� �� ����.

		int i = 0;
		i = 100; // Ok, �������� �� ������ �����ϴ�.
		Func3(); // Ok, const ��� �Լ� �ȿ��� �Ǵٸ� const ��� �Լ� ȣ���� �����ϴ�.
	}

	void Func2()
	{
		Func(); // Ok, �Ϲ� ��� �Լ� �ȿ��� const ��� �Լ� ȣ�� ����.
	}

	void Func3() const
	{

	}

	void TestFunc()
	{
		cout << "�Ϲ� ��� �Լ�" << endl;
	}

	void TestFunc() const
	{
		cout << "const ��� �Լ�" << endl;
	}


private:
	const int m_iVal;
	int m_iA;
};

void main()
{
	// ##4. const ��ü
	const CTest obj;
	//obj.Func2(); // Error! const ��ü�� const ����Լ��� ȣ���� �� �ִ�.
	obj.TestFunc(); // const Ű���� ������ ���� �����ε��� ����.
}