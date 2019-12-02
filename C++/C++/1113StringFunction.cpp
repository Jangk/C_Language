#include <iostream>
using namespace std;


void main()
{
	char a[10] = "abc";
	char b[10] = "";

	strcpy_s(b, a);			// 문자열 복사
	strcpy_s(b, 4, a);		// 복사될 문자 크기를 받는이유는 char* 형으로 인자에 넣을시 크기 측정 불가여서.
	cout << a << " " << b << endl;

	strcat_s(a, b);			// 문자열 붙이기.
	strcat_s(a, 10, b);		// 위와같은 이유 -- 문자열 2개의 크기 + 1(\n)
	cout << a << endl;


	//if(a == b)			// 문자내용비교가 아닌 a,b의 시작주소 비교라서 false
	strcmp(a, b);			// a와 b의 문자열을 검사해서 전부같으면 0 리턴;
}