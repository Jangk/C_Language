#include <iostream>

using namespace std;

class CSortRule
{
public:
	virtual bool operator()(int a, int b) = 0;
};

// 오름 차순
class CLess : public CSortRule
{
public:
	virtual bool operator()(int a, int b)
	{
		return a > b;
	}
};

// 내림 차순
class CGreater : public CSortRule
{
public:
	virtual bool operator()(int a, int b)
	{
		return a < b;
	}
};

void BubbleSort(int ptr[], int iLength, CSortRule& functor)
{
	for (int i = 0; i < iLength; ++i)
	{
		for (int j = 0; j < iLength - 1; ++j)
		{
			// 함수 객체 호출
			if (functor(ptr[j], ptr[j + 1]))
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
	int iArr[5] = { 1, 5, 2, 4, 3 };

	// 함수 객체를 이용해서 알고리즘의 조건을 제공할 수 있다.
	CLess less;
	BubbleSort(iArr, 5, less);

	//// 임시 객체 활용
	//BubbleSort(iArr, 5, CLess());
	//BubbleSort(iArr, 5, CGreater());

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;
}