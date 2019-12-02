#include <iostream>

using namespace std;

// int ptr[] ������ �Լ��� ���ڷθ� ����� �� �ִ�.
void BubbleSort(int ptr[] /* == int* ptr */, int iLength)
{
	for (int i = 0; i < iLength; ++i)
	{
		for (int j = 0; j < iLength - 1; ++j)
		{
			if (ptr[j] > ptr[j + 1])
			{
				int iTemp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = iTemp;
			}
		}
	}
}

void main()
{
	// ����1. �������� �Լ��� �ϼ��Ͻÿ�. (��������)
	int iArr[5] = { 4, 3, 5, 1, 2 };
	int iLength = sizeof(iArr) / sizeof(iArr[0]);	

	BubbleSort(iArr, iLength);

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;






	//// ##6. const�� ������
	//int iA = 10, iB = 20;

	//// 1.
	//const int* ptr1 = &iA; // ����� ������

	//*ptr1 = 100; // Error ����� ������
	//ptr1 = &iB;	// Ok


	//// 2.
	//int* const ptr2 = &iA; // ��� ������

	//*ptr2 = 100; // Ok
	//ptr2 = &iB; // Error ��� ������

	//// 3.
	//const int* const ptr3 = &iA; // ����� ��� ������

	//*ptr3 = 100; // Error
	//ptr3 = &iB; // Error 







	//// ##5. �ε��� ���� => ������ ����
	//int iArr[5] = { 1, 2, 3, 4, 5 };

	////// ���� �ּҷκ��� 2�� �̵��� ���� ���� �о�鿩��.
	//cout << iArr[2] << endl;		// �ε��� ����
	//cout << *(iArr + 2) << endl;	// ������ ����


	// ##4. ������ ����
	// �����Ϳ� +, - ������ �� �� �ִ�. 
	// ��, ���ӵ� �����̾�� �Ѵ�.
	//int iArr[5] = { 1, 2, 3, 4, 5 };
	//iArr += 1; // Error! ��� ���� X
	//++iArr; // Error! ���� ���� X

	//int* ptr = iArr; // Ok
	//ptr += 1; // ok 1�� �ε����� �ּҷ� �̵�.
	//ptr -= 1; // ok 0�� �ε����� �ּҷ� �̵�.
	//++ptr; // ok 1�� �ε����� �ּҷ� �̵�.
	//--ptr; // ok 0�� �ε����� �ּҷ� �̵�.

	//cout << iArr << endl;
	//cout << &iArr[0] << endl;
	//cout << "-----------------" << endl;

	//// ������ + N: ���� �ּҷκ��� �ڷ����� ũ�� * N��ŭ �̵��ض�.
	//cout << iArr + 1 << endl;
	//cout << &iArr[1] << endl;
	//cout << "-----------------" << endl;

	//cout << iArr + 3 << endl;
	//cout << &iArr[3] << endl;


	//// ##3. �迭�� �̸�
	//// �迭�� �̸��� �����ʹ�.
	//int iArr[5] = {};

	//int iA = 100;
	//iArr = &iA;	// Error! �迭�� �̸��� ��� �������̴�.

	//
	//// �迭�� �̸��� ���ӵ� �޸� �� ù��° �޸��� �ּ��̴�. (���� �ּ�)
	//cout << iArr << endl;
	//cout << &iArr[0] << endl;







	//// ##2. �迭�� ������
	//// �迭�� ���ӵ� �޸𸮸� ���´�.
	//int iArr1[5] = {};	// 4����Ʈ �޸𸮰� 5�� ���ӵǰ� �Ҵ�ȴ�.

	//// �迭�� �̸��� sizeof �����ϸ� �迭�� �� �޸� ũ�Ⱑ ���´�.
	//cout << sizeof(iArr1) << endl;
	//cout << "----------------------" << endl;

	//double dArr2[5] = {}; // 8����Ʈ �޸𸮰� 5�� ���ӵǰ� �Ҵ�ȴ�.

	//cout << sizeof(dArr2) << endl;







	//// ##1. ���� ������
	//int iA = 100;
	//int* ptr = &iA;

	//cout << "iA�� �ּ�: " << &iA << endl;
	//cout << "ptr�� ��: " << ptr << endl;
	//cout << "-----------------------------" << endl;

	//// ���� ������
	//int** pp = &ptr;

	//cout << "ptr�� �ּ�: " << &ptr << endl;
	//cout << "pp�� ��: " << pp << endl;
	//cout << "iA�� �ּ�: " << *pp << endl;
	//cout << "iA�� ��: " << **pp << endl;
}