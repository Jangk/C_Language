#include <iostream>
using namespace std;


void HanoiTowel(int val, char a, char b, char c);


void main()
{
	// 원반을 A에서 B를 통해 C로 옴김
	// 한번에 하나만 옴길수 있고  큰 원반이 작은 원반 위로 오면안됨.
	HanoiTowel(3, 'A', 'B', 'C');	
	
}

void HanoiTowel(int val, char a, char b, char c)
{
	if (val == 1)
	{

	}

	HanoiTowel(val - 1, a, c, b);

	HanoiTowel(val - 1, b, a, c);
}