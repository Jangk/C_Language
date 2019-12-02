#include <iostream>
using namespace std;

int main()
{
	int x = 0, y = 0, z = 0, e = 0, total = 0;
	cin >> x;	//if 45

	// 첫번째
	e = (x / 4);				// 이번에 이벤트로 참여 한 병수 11
	z = x % 4;					// 45 % 4			 =  1
	y = x + e;					// 45 + 11	         =  56
	
	y += e / 4 ;				// 11 / 4 		 	 = 56 + 2
	z += e % 4;					// 11 % 4			 = 1  + 3
	
	cout << y << " " << z;
}