#include <iostream>
using namespace std;

int main()
{
	int h = 0, m = 0, s = 0, cook = 0, total = 0;
	cin >> h >> m >> s;
	cin >> cook;
	total = h * 3600 + m * 60 + s + cook;

	h      = total / 3600;
	total %= 3600;

	m      = total / 60;
	s      = total % 60;
	if (h >= 24)
		h %= 24;

	cout << h << " " << m << " " << s << endl;
	return 0;
}