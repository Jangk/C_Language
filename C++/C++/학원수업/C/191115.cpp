#include <iostream>

using namespace std;

void main()
{
	// ##4. memmove
	// �޸� �̵�(����) �Լ�
	// memmove�� ���� �������� �ӽù��۸� ��ħ.

	//int iSrc[5] = { 10, 20, 30, 40, 50 };
	//int iDest[5] = {};

	////// iSize: �󸶸�ŭ �̵��� ���̳�!
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
	//// �޸� ���� �Լ�
	// memcpy�� �ӽù��۸� ��ġ�� ����.

	//int iSrc[5] = { 10, 20, 30, 40, 50 };
	//int iDest[5] = {};

	////// iSize: �󸶸�ŭ �������� ���̳�!
	//////memcpy(void* pDest, const void* pSrc, size_t iSize)

	//memcpy(iDest, iSrc, sizeof(iSrc));

	//for (int i = 0; i < 5; ++i)
	//	cout << iDest[i] << endl;
	







	// ##2. memset
	// �޸� �ʱ�ȭ �Լ�.	
		
	// iValue���� 1����Ʈ ������ �ʱ�ȭ.
	//memset(void* pDest, int iValue, size_t iSize)

	/*int iA;

	memset(&iA, 0, sizeof(iA));

	cout << iA << endl;*/

	/*int iArr[10];

	memset(iArr, 0, sizeof(iArr));

	for (int i = 0; i < 10; ++i)
		cout << iArr[i] << endl;*/






	// ##1. �޸� ���� ǥ���Լ�
	// �޸𸮿� ���� 1����Ʈ�� �����ϵ��� ����.
	// memset, memcpy, memmove

}