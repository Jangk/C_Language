#include <iostream>
using namespace std;

// int iArr[] <---- �� ������ �Լ��� ���ڷθ� ��밡��.
// const int* a	= �ּ�;	== �� ��  ������ �� ����
// int* const a	= �ּ�;	== �ּҸ� ������ �� ����.


// 2���� �迭���� iarr+1���ϸ� �� �� �����ŭ �̵�
// ex)
// int iarr[2][3] = {};
// iarr+1							// �ڷ��� * ���Ǳ��̸�ŭ(int X 3) 12����Ʈ �̵�.
// 2���� �迭�� 2�������Ͱ� �ƴ�.

// 2���� �迭�� ������ Ÿ��
// ����Ÿ�� (*�����ͺ���)[���Ǳ���]
// ex)
// int(*ptr)[3] = iArr;				// 2���� �迭�� �������� ������ Ÿ���� ������.


void BubbleSort(int* iArr, int size)
{	
	for (int i = 0; i < size; i++)
	{	// ��������
		for (int j = i; j < size; j++)
			iArr[i] > iArr[j] ? iArr[i] ^= iArr[j] ^= iArr[i] ^= iArr[j] : false;
	}

	for (int i = 0; i < size; i++)
		cout << iArr[i] << '\n';
}


void main()
{
	int iArr[5] = { 4,3,5,1,2 };

	BubbleSort(iArr, sizeof(iArr) / sizeof(int));
}