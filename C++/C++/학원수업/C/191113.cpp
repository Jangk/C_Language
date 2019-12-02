#include <iostream>

using namespace std;

void main()
{
	// ##5. 문자열 비교 함수 strcmp
	/*char szName1[32] = "Hello";
	char szName2[32] = "Hello";*/

	//// 단순히 두 포인터끼리 주소를 비교하고 있다. 의미 없다.
	//if (szName1 == szName2) 
	//	cout << "두 문자열은 같다" << endl;
	//else
	//	cout << "두 문자열은 다르다" << endl;

	
	//// strcmp는 비교하는 두 문자열이 같을 때 0을 반환.
	//// 다르면 0이 아닌 값을 반환.
	//if (!strcmp(szName1, szName2))
	//	cout << "두 문자열은 같다" << endl;
	//else
	//	cout << "두 문자열은 다르다" << endl;





	// ##4. 문자열 결합 함수 strcat_s
	//char szName1[32] = "Hello";
	//char szName2[32] = "World";

	//szName1 + szName2; // Error
	//szName1 += szName2; // Error

	// 1. dest자리에 문자(배)열이 전달되는 경우
	//// strcat_s(dest, src): dest의 null문자 자리부터 src를 이어붙임.
	//strcat_s(szName1, szName2);
	//cout << szName1 << endl;

	// 2. dest자리에 단순히 char*가 전달되는 경우
	//// strcat_s(dest, size, src)
	//char* p = szName1;
	//strcat_s(p, 32, szName2);

	//cout << szName1 << endl;






	// ##3. 문자열 복사 함수 strcpy_s
	//char szName1[32] = "Hello";
	//char szName2[32] = "";

	// szName2 = szName1; // Error

	// 1. dest자리에 문자(배)열이 전달되는 경우
	// strcpy_s(dest, src): dest에 src를 복사
	//strcpy_s(szName2, szName1); 
	//cout << szName2 << endl;

	// 2. dest자리에 단순히 char*가 전달되는 경우
	// strcpy_s(dest, size, src)
	//char* p = szName2;

	// 두번째 인자에 size도 전달해야함.
	//strcpy_s(p, 32, szName1);
	//cout << szName2 << endl;






	//// ##2. 문자열 길이 함수 strlen
	//// null문자를 제외한 순수 문자열 길이 반환.
	//char szName[32] = "Hello";

	////cout << sizeof(szName) << endl; // 32바이트
	//cout << strlen(szName) << endl;




	// ##1. 문자열에 관한 표준함수들.. <string.h>
	// strlen, strcpy_s, strcat_s, strcmp
}