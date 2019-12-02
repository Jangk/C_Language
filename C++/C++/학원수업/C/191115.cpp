#include <iostream>

using namespace std;

void main()
{
	// ##4. memmove
	// 메모리 이동(복사) 함수
	// memmove는 복사 과정에서 임시버퍼를 거침.

	//int iSrc[5] = { 10, 20, 30, 40, 50 };
	//int iDest[5] = {};

	////// iSize: 얼마만큼 이동할 것이냐!
	//////memmove(void* pDest, const void* pSrc, size_t iSize)

	//memmove(iDest, iSrc, sizeof(iSrc));

	//for (int i = 0; i < 5; ++i)
	//{
	//	cout << iSrc[i] << endl;
	//	cout << "--------------------" << endl;
	//	cout << iDest[i] << endl;
	//	cout << "--------------------" << endl;
	//}

	/*int iArr[5] = { 10, 20, 30, 40, 50 };

	memmove(iArr + 2, iArr, sizeof(int) * 3);

	for (int i = 0; i < 5; ++i)
		cout << iArr[i] << endl;*/







	//// ##3. memcpy
	//// 메모리 복사 함수
	// memcpy는 임시버퍼를 거치지 않음.

	//int iSrc[5] = { 10, 20, 30, 40, 50 };
	//int iDest[5] = {};

	////// iSize: 얼마만큼 복사해줄 것이냐!
	//////memcpy(void* pDest, const void* pSrc, size_t iSize)

	//memcpy(iDest, iSrc, sizeof(iSrc));

	//for (int i = 0; i < 5; ++i)
	//	cout << iDest[i] << endl;
	







	// ##2. memset
	// 메모리 초기화 함수.	
		
	// iValue값을 1바이트 단위로 초기화.
	//memset(void* pDest, int iValue, size_t iSize)

	/*int iA;

	memset(&iA, 0, sizeof(iA));

	cout << iA << endl;*/

	/*int iArr[10];

	memset(iArr, 0, sizeof(iArr));

	for (int i = 0; i < 10; ++i)
		cout << iArr[i] << endl;*/






	// ##1. 메모리 관련 표준함수
	// 메모리에 대해 1바이트씩 연산하도록 설계.
	// memset, memcpy, memmove

}