#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(const char* pName)
	{
		strcpy_s(m_szName, pName);

		cout << m_szName << "�� ������" << endl;
	}

	~CTest()
	{
		cout << m_szName << "�� �Ҹ���" << endl;
	}

private:
	char m_szName[32];
};

void main()
{
	CTest	obj("�Ϲ� ��ü");

	// ##1. �ӽð�ü
	// �̸��� ���� ��ü. �� �� �ӽ� �޸𸮿� ���. �ڵ� ������ ����� ��� �Ҹ�.
	// �ڵ� ����ȭ.
	// �޸� ȿ�� ����.
	CTest("�ӽ� ��ü");

	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
}