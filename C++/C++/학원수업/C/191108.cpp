#include <iostream>

using namespace std;

int Func()
{
	// 정적변수 (static 변수)
	// Data영역에 등록되는 변수. 프로그램 시작 시 할당, 프로그램 종료 시 소멸 (반환)
	static int iSum;  // 자동 0초기화. 선언과 초기화는 최초 한번만 이루어진다. 프로그램 시작 시
	return ++iSum;	
}

void main()
{
	int iResult = 0;

	for (int i = 0; i < 5; ++i)
		iResult = Func();

	cout << iResult << endl;

	// 정적변수는 Data영역에 등록되더라도 지역적 접근 특성을 갖고 있다. 
	// (선언된 지역에서만 접근 가능)
	// cout << iSum << endl; // Error
}