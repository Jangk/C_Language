#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;

	cout.precision(1);	//소수 첫째짜리까지 반올림해서 출력
	cout << fixed << float((1.8 * x) + 32 )<< endl;
	return 0;
}