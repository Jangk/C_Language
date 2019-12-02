#include <iostream>

using namespace std;


// ##4. ****************** �����Ϸ��� �ڵ� �����ϴ� 4����.
// 1. �⺻ ������ (����Ʈ ������)
// 2. �⺻ �Ҹ��� (����Ʈ �Ҹ���)
// 3. �⺻ ��������� (����Ʈ ���������)
// 4. �⺻ ���Կ����� (���� ������ �����ε� �� �ٷ� ����)


// ##1. ���� ������
// ���α׷��Ӱ� ���� �����ڸ� �������� ������ �����Ϸ��� �⺻ ��������ڸ� ������ش�.
// ���α׷��Ӱ� ���� �����ڸ� �����ϸ� �����Ϸ��� �⺻ ��������ڸ� ��������� �ʴ´�.

class CTest
{
public:
	CTest() {}
	explicit CTest(int a, int b)
		: m_iA(a), m_iB(b)
	{

	}

	// ##2. �⺻ ����������� ����
	CTest(const CTest& _obj)
	{
		cout << "���� ������" << endl;

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

	// ##3. ***** ���� ������ ȣ�� ���� 3����.
	//// 1. ��ü ������ ���ÿ� �ٸ� ��ü�� �ʱ�ȭ�� ��. (�����ڷ� �ٸ� ��ü�� ������ ��)
	////CTest obj2(obj1);
	//////CTest obj2 = obj1;
	////obj2.Print();

	//CTest* ptr = new CTest(obj1);
	//ptr->Print();

	// 2. �Լ� ���ڷ� ��ü�� ���޵� �� (Call by Value)
	//Func1(obj1); 

	// 3. �Լ��� ��ȯ ���� ��ü�� �� (Call by Value)
	//Func2();
}