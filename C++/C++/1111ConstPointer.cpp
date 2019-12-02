#include <iostream>
using namespace std;

// int iArr[] <---- 이 형식은 함수의 인자로만 사용가능.
// const int* a	= 주소;	== 값 을  변경할 수 없음
// int* const a	= 주소;	== 주소를 변경할 수 없음.


// 2차원 배열에서 iarr+1을하면 그 행 사이즈만큼 이동
// ex)
// int iarr[2][3] = {};
// iarr+1							// 자료형 * 열의길이만큼(int X 3) 12바이트 이동.
// 2차원 배열은 2중포인터가 아님.

// 2차원 배열의 포인터 타입
// 원소타입 (*포인터변수)[열의길이]
// ex)
// int(*ptr)[3] = iArr;				// 2차원 배열은 독자적인 포인터 타입을 가진다.


void BubbleSort(int* iArr, int size)
{	
	for (int i = 0; i < size; i++)
	{	// 오름차순
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