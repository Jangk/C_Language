#include <iostream>

using namespace std;

// 조건자: 특정 알고리즘의 조건을 내려주기 위한 함수포인터나 함수객체를 의미.
bool Less(int a, int b);	// 오름차순
bool Greater(int a, int b); // 내림차순

void BubbleSort(int ptr[], int iLength, bool(*pred)(int, int));

void main()
{
	int iArr[5] = { 4, 5, 1, 3, 2 };

	// 함수 포인터는 특정 알고리즘의 조건을 정해줄 때 사용한다.
	BubbleSort(iArr, 5, Greater);

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;
}

bool Less(int a, int b) // 오름차순
{
	return a > b;
}

bool Greater(int a, int b) // 내림차순
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
