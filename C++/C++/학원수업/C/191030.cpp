// #include: 현재 소스 파일에 다른 파일을 포함하도록 지시하는 전처리 지시자.
// <iostream>: C++의 표준 입출력 헤더 파일
#include <iostream>

// namespace: 중복된 이름 충돌 방지. C++문법.
using namespace std;

void _main() // 메인함수: 프로그램 실행시 가장 먼저 호출(실행)된다. 현재 프로그램의 진입점(시작점)
{
	// "문자열"	ex) "ABC"
	// '단일문자'	 ex) 'A'
	cout << "Hello world" << endl;
}