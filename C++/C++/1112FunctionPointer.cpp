#include <iostream>
using namespace std;

int Add(int a, int b);
int Min(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

void main()
{	// �Լ��������� �˰��� �߿�.

	// �Լ� ������.
	// - �Լ� �ڵ�� ���̳ʸ� ���·� Code������ �����.
	// ��ȯ��(�����ͺ���)(�Ű�����);
	int(*ptr)(int, int) = nullptr;						// �Լ��� ������ �����ϱ� ������ ���԰���
	ptr = Add;											// ptr�� add�Լ������� ����
	cout << Add(10, 20) << endl;
	cout << ptr(10, 20) << endl;




	int(*ptr2[4])(int, int) = { Add, Min, Mul, Div };	// �Լ� �迭 ������(�������� ���� �ֱ� �԰���)
	cout << ptr2[0](10, 10) << endl;
	cout << ptr2[1](10, 10) << endl;
	cout << ptr2[2](10, 10) << endl;
	cout << ptr2[3](10, 10) << endl;
}


int Add(int a, int b)
{
	return a + b;
}

int Min(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}