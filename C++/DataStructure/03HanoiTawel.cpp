#include <iostream>
using namespace std;


void HanoiTowel(int iVal, int iMax, char a, char b, char c);


void main()
{
	// 원반을 A에서 B를 통해 C로 옴김
	// 한번에 하나만 옴길수 있고  큰 원반이 작은 원반 위로 오면안됨.
	HanoiTowel(1, 3, 'A', 'B', 'C');	
	
}

void HanoiTowel(int iVal, int iMax, char a, char b, char c)
{
	/*
	1 -> C
	2 -> B
	1 -> B
	3 -> C
	1 -> A
	2 -> C
	1 -> C
	*/
	if (iMax == iVal)
	{
		cout << "최대에 도달" << endl;
		return;
	}

	HanoiTowel(iVal + 1, iMax, a, c, b);

	HanoiTowel(iVal + 1, iMax, b, a, c);
}