#include <iostream>

using namespace std;

// ##1. ���۷��� (C++�� ���� ���)
// �������� ���.
// ������ �Ǵٸ� ��Ī�� �ο��Ѵ�.

void Swap(int& r1, int& r2)
{
	int t = r1;
	r1 = r2;
	r2 = t;
}

int Add(const int& a, const int& b)
{
	return a + b;
}

// �迭 ���۷���
void Func(int(&r)[5])
{
	//cout << sizeof(r) << endl;

	for (int i = 0; i < 5; ++i)
		cout << r[i] << endl;
}

void main()
{
	// ##5. �迭 ���۷���
	int iArr[5] = { 10, 20, 30, 40, 50 };

	Func(iArr);





	//// ##4. const Reference
	//const int iA = 10;
	//const int& r = iA;

	//// �� �� 100�� ����� �޸𸮿� r1�̶�� ��Ī�� �ο��Ǹ鼭 ������ ����Ѵ�.
	//const int& r1 = 100;
	//Add(10, 20);






	//// ##3. Call by Reference
	//int a = 10, b = 20;

	//Swap(a, b);

	//cout << a << ", " << b << endl;




	//// ##2. ���۷��� ����.
	//int iA = 10, iB = 20;

	//// iA��� �޸� ������ r�̶�� �Ǵٸ� ��Ī�� �ο�.
	//int& r = iA; // ���۷��� ���� �� �ʱ�ȭ.

	//// ���۷����� ���� ��� ���� ����� �� ����.
	//// �ݸ鿡 �����ʹ� ���� ��� ���̵� ���� �� nullptr �ʱ�ȭ�� �����ϴ�.
	////int& r2; // Error

	//r = 100;
	//cout << iA << endl;
	//cout << "----------------------" << endl;

	//cout << &iA << endl;
	//cout << &r << endl;

	//cout << "----------------------" << endl;

	//// ���۷����� �����Ϳ� �޸� ���� ����� ������ �� ����.
	//r = iB; // iA ���� iB�� ������ �����ض�.

	//cout << &iA << endl;
	//cout << &r << endl;
	//cout << iA << endl;

}