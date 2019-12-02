#include <iostream>
using namespace std;

struct AAA
{
	int a;
	double b;
	int c;
	char d;

};

int main()
{
	// offsetof(시작지점, 거리를 알고싶은 것)
	// - 상대적인 위치 구하기
	// - 특정 멤버가 본인인을 포함한 자료구조의 시작점 부터 몇바이트나 떨어져있는지 알려줌
	AAA aaa;
	cout << offsetof(AAA, a) << endl;		// 출력값 : 0
	cout << offsetof(AAA, b) << endl;		// 출력값 : 8
	cout << offsetof(AAA, c) << endl;		// 출력값 : 16
	cout << offsetof(AAA, d) << endl;		// 출력값 : 20
}