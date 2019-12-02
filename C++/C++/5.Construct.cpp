#include <iostream>
using namespace std;


class TestClass
{
public:
	// �׽�Ʈ�ϱ� ���� �ۺ�
	int* m_num;
	TestClass();							// ������
	TestClass(const TestClass& copy);		// ���� ������
	~TestClass();							// �Ҹ���
};






// ������
// �����ڴ� ������Ʈ�� �����ɶ� ����Ǹ�, �����ڰ� ���� �����ڸ� ������ ������
// ������ �ܰ迡�� �ڵ� ����.

// ������ ����							   �ʱ�ȭ ����Ʈ  : ���������(�ʱ�ȭ �Ұ�)
TestClass::TestClass() : m_num(0)		// ������Ʈ �����Ǹ鼭 ����Ǳ⶧���� ����� ���������� �ʱ�ȭ����
{										
	m_num = new int;
	*m_num = 0;							// �̺κ��� �ʱ�ȭó�� �������� ����� ������Ʈ�� �����ǰ� 0�� �����Ѱ�.
	cout << "������" << endl;
}




// ���������
// ��������ڵ� �����ڿ� ���� �����ڰ� ������������ �����ǳ� �̰�� ���� ���簡 �Ͼ

// ���� ������ ����(���� ����)
TestClass::TestClass(const TestClass& copy)			// �ٸ� ������Ʈ�� �״�� �����ͼ� ������.
{
	m_num = copy.m_num;		// ���� copy�� �����Ǹ� ���Ե� ���� �Ҿ����
							// (�����ּҸ� �Ҿ ������ ���� ����)
  cout<<"���� ���� ������" << endl;
}


// ���� ������ ����(���� ����)								// �����Ҵ��� ����ߵ�
//TestClass::TestClass(const TestClass& copy)			// �ٸ� ������Ʈ�� �״�� �����ͼ� ������.
//{
//	m_num = new int;
//	memcpy(m_num, copy.m_num, sizeof(int));
//	cout << "���� ���� ������" << endl;
//}






// �Ҹ���
// �Ҹ��ڴ� ������Ʈ�� ���ŵɶ� ����Ǹ�, �����ڰ� ���� �Ҹ��ڸ� ������ ������
// ������ �ܰ迡�� �ڵ� ����.

// �Ҹ��� ����
TestClass::~TestClass()
{
	delete(m_num);
	cout << "�Ҹ���" << endl;
}



void main()
{
	TestClass t1;
	if (true)
	{
		TestClass t2(t1);
		cout << "t2 :" << *t2.m_num << endl;
	}		// ���� ����ÿ� t2�� ����� ���� �Ҿ������ ���⼭ �޸� ������
	cout << "t1 :" << *t1.m_num << endl;
}