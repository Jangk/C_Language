#include <iostream>

using namespace std;

int Add(int a, int b);

void main()
{
	// ##2. �Լ� ������ Ÿ��
	// ��ȯŸ�� (*�����ͺ���)(����Ÿ��)
	int(*ptr)(int, int) = nullptr;

	ptr = Add;

	cout << ptr(10, 20) << endl;
	cout << Add(10, 20) << endl;



	// ##1. �Լ� ������
	// �Լ� �ڵ�� ���̳ʸ� ���·� Code������ ����ȴ�.
	// �Լ� �̸��� �ش� �Լ��� �ڵ尡 ������ �޸��� �ּ��̴�.
	//cout << Add << endl;	
}

int Add(int a, int b)
{
	return a + b;
}