#include <iostream>
#include <string>

using namespace std;

// ##1. string 클래스
// 문자열을 다루기 위한 각종 편의를 제공해준다.

// 과제: string 클래스 직접 구현해오기.

void main()
{	
	string str1 = "hello";	// 인자있는 생성자
	string str2 = str1;		// 복사 생성자
	string str3;
	str3 = str2;	// 대입 연산자
	str3 = "world"; // 대입 연산자

	//if (str1 == str2)	// 비교 연산자
	//	cout << "같다" << endl;

	//if (str1 != str3)	// 비교 연산자
	//	cout << "다르다" << endl;

	cout << str1.length() << endl; // 문자열 길이 반환

 

	//str2 = str1 + str3;			// 덧셈 연산자
	////str3 = str1 + "world";		// 덧셈 연산자
	////str3 = "!!!" + str1;		// 덧셈 연산자
	//cout << str3 << endl;			// string 출력

	////str2 += "!!!!";		// 축약 연산자
	//str2 += str3;			// 축약 연산자
	//cout << str2 << endl;

}