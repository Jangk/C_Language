#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	cin >> a >> b >> c >> d;

	cout.precision(2);
	cout << fixed << (a + b + c + d) / 4.0f << endl;
	return 0;
}