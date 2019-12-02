#include <iostream>

using namespace std;

void main()
{
	// 과제.1 문자열 뒤집기
	// tomato를 입력하면 otamot가 출력되게.
	// hello를 입력하면 olleh가 출력되게.

	// 과제.2 문자열 길이 구하는 함수 구현.
	//char szName[32] = "Hello";

	//int iLength = MyStringLength(szName);

	//cout << ilength << endl; // 5글자!

	// 과제.3 문자열 이어붙이는 함수 구현.
	//char szName1[32] = "Hello";
	//char szName2[6] = "world";

	//MyStringCombined(szName1, szName2);

	//cout << szName1 << endl; // Helloworld










	// ##2. 문자열 상수
	//// 문자열 상수는 rData영역에 문자(배)열 형식으로 저장된다.
	// rData: Data영역 중에서도 read only 영역. "읽기 전용"

	//char* p1 = "Hello";
	////cout << p << endl;

	//char* p2 = "Hello";
	//char* p3 = "Hello";

	/*cout << (int*)p1 << endl;
	cout << (int*)p2 << endl;
	cout << (int*)p3 << endl;*/

	//cout << p1[2] << endl;
	//p1[2] = 'L'; // Error!!





	//// ##1. 문자(배)열
	////char szName[6] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	//char szName[6] = "Hello"; // 문자열 초기화 형태

	//// cout이나 printf와 char*가 만나면 문자열을 출력한다.
	//// cout이나 printf는 char*의 시작점부터 '\0'(null문자)까지 출력하게 된다.
	//cout << szName << endl;

	////cout << szName[2] << endl;
	//szName[2] = 'L'; // 인덱스 연산을 통해 값 변경도 가능.
	//cout << szName << endl;


}