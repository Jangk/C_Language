#include <iostream>
using namespace std;

int main()
{
	int money = 1000, x = 0, big = 0, medium = 0, small =0;
	cin >> x;
	money -= x;
	while (true)
	{
		if (money >= 100)
		{
			big += 1;
			money -= 100;
		}
		else if (money >= 50)
		{
			medium += 1;
			money -= 50;
		}
		else if (money >= 10)
		{
			small += 1;
			money -= 10;
		}
		else
			break;
	}
	cout << big << " " << medium << " " << small << endl;
}