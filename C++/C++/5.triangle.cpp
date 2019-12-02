#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	float x = 0, y = 0;
	cin >> x;
	cin >> y;
	cout.precision(2);
	cout << std::fixed << (x*y) / 2 << endl;
	return 0;
}