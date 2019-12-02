#include <iostream>

using namespace std;

// ������: Ư�� �˰����� ������ �����ֱ� ���� �Լ������ͳ� �Լ���ü�� �ǹ�.
bool Less(int a, int b);	// ��������
bool Greater(int a, int b); // ��������

void BubbleSort(int ptr[], int iLength, bool(*pred)(int, int));

void main()
{
	int iArr[5] = { 4, 5, 1, 3, 2 };

	// �Լ� �����ʹ� Ư�� �˰����� ������ ������ �� ����Ѵ�.
	BubbleSort(iArr, 5, Greater);

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;
}

bool Less(int a, int b) // ��������
{
	return a > b;
}

bool Greater(int a, int b) // ��������
{
	return a < b;
}

void BubbleSort(int ptr[], int iLength, bool(*pred)(int, int))
{
	for (int i = 0; i < iLength; ++i)
	{
		for (int j = 0; j < iLength - 1; ++j)
		{
			if (pred(ptr[j], ptr[j + 1]))
			{
				int iTemp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = iTemp;
			}
		} 
	}
}
