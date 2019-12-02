#include <iostream>

using namespace std;

// ##1. 조건부 컴파일
// #if ~ #endif		#ifdef ~ #endif		#ifndef ~ #endif
// 조건에 따라 컴파일 하기 위한 전처리기다.

#define RELEASE_VER 1
#define PROJECT_VER 2
#define TEST

void main()
{
	// ##3. #ifndef ~ #endif
	// 특정 매크로가 정의되어 있으면 FALSE, 아니라면 TRUE
//#ifndef TEST
//	cout << "TEST 매크로 정의되어 있지 않음" << endl;
//#else
//	cout << "TEST 매크로 정의되어 있음" << endl;
//#endif





////	// ##2. #ifdef ~ #endif
////	// 특정 매크로가 정의되어 있으면 TRUE, 아니라면 FALSE
////	// #elif 구문은 사용할 수 없다.
//#ifdef TEST
//	cout << "TEST 매크로 정의되어 있음" << endl;
//#else
//	cout << "TEST 매크로 정의되어 있지 않음" << endl;
//#endif





//	//##1. #if ~ #endif	
//	// 참일 때 컴파일, 거짓일 때 !컴파일
//#if (1 == PROJECT_VER)
//	cout << "버전 1 실행" << endl;
//#elif (2 == PROJECT_VER)
//	cout << "버전 2 실행" << endl;
//#else
//	cout << "버전 3 실행" << endl;
//#endif


//#if RELEASE_VER
//	cout << "치트키 생략" << endl;
//#else
//	cout << "치트키 삽입" << endl;
//#endif
}