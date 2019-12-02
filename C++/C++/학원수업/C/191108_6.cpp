#include <iostream>

using namespace std;

// ##1. ������ (pointer)

// ����: Ư�� �޸𸮿� �����ϴ� ����
// ��������: ����, ���۷���
// ��������: ������

void Add(int n)
{
	cout << "n�� �ּ�: " << &n << endl;
	++n;
}

void Add(int* p)
{
	++(*p);
}

// ����.1 Swap �Լ� ����.
void Swap(int* p1, int* p2)
{
	int iTemp = *p1;
	*p1 = *p2;
	*p2 = iTemp;
}

void main()
{
	// ##6. �������� ũ��
	// 32��Ʈ ȯ�濡���� 4Bytes
	// 64��Ʈ ȯ�濡���� 8Bytes
	char*	a = nullptr;
	short*	b = nullptr;
	int*	c = nullptr;
	double* d = nullptr;

	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(d) << endl;




	/*int iA = 10, iB = 20;

	Swap(&iA, &iB);

	cout << iA << ", " << iB << endl;*/


	//// ##5. Call by Pointer
	//int iA = 10;

	//Add(&iA); // Call by Pointer (���� ����)

	//cout << iA << endl;




	// ##4. ������ ����� �ʱ�ȭ
	// ������ ����: �ּҸ� �����ϴ� "����"

	//// ������ ���� �� �ڷ����� ��Ȯ�� ��� ���� ��.
	//int* p1 = nullptr;	// ������ 0 �ʱ�ȭ
	//short* p2 = nullptr; // ������ 0 �ʱ�ȭ

	//int iA = 10;
	//int* pA = &iA;

	//cout << &iA << endl;
	//cout << pA << endl; // ������ ������ "�ּ�"�� ��Ƴ���.

	//// ��������
	//// ������ ����: *�����ͺ���
	//*pA = 100; // pA���� �����ִ� �ּ� ������ �����ؼ� �� �޸𸮿� 100�� �����ض�.

	//cout << iA << endl;





	// ##3. ��巹�� ������ &
	//// �ǿ������� �޸� �ּҸ� ��ȯ.
	//int iA = 0, iB = 0;

	//cout << &iA << endl;
	//cout << &iB << endl;




	//// ##2. Call by Value
	//int iA = 10;

	//cout << "iA�� �ּ�: " << &iA << endl;
	//Add(iA); // Call by Value (�� ����)

	//cout << iA << endl;
}