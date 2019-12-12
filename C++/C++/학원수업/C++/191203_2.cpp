#include <iostream>

using namespace std;

// �θ� Ŭ����: == ��� Ŭ����, Base Class, ���� Ŭ����
// �ڽ� Ŭ����: == Ȯ�� Ŭ����, Derived Class, ���� Ŭ����

class CBase
{
public:
	CBase()
	{
		cout << "�θ��� �⺻ ������" << endl;
	} 

	CBase(int a)
	{
		cout << "�θ��� ���� �ִ� ������" << endl;
	}

	~CBase()
	{
		cout << "�θ� �Ҹ���" << endl;
	}
};

class CChild : public CBase
{
public:
	CChild()
	{
		cout << "�ڽ��� �⺻ ������" << endl;
	}

	CChild(int a)
	//	: CBase(a) // �θ��� �����ִ� �����ڸ� ��������� ȣ������ ������ �θ��� �⺻ ������ ȣ��.
	{
		cout << "�ڽ��� ���� �ִ� ������" << endl;
	}

	~CChild()
	{
		cout << "�ڽ� �Ҹ���" << endl;
	}
};

void main()
{
	// ##1. ***** �ڽ� ��ü ��������
	// �޸� �Ҵ� -> �θ� ������ -> �ڽ� ������ ȣ��
	CChild obj(10);

	cout << "main �Լ� ��!" << endl;

	// ##2. ***** �ڽ� ��ü �Ҹ����
	// �ڽ� �Ҹ��� -> �θ� �Ҹ��� ȣ�� -> �޸� ��ȯ
}