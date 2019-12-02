#include <iostream>
using namespace std;

int main()
{		//	        86400  3600	  60
	int insert = 0, d = 0, h = 0, m = 0, s = 0;
	cin >> insert;

	if (insert >= 86400)
	{
		d = insert / 86400;
		insert %= 86400;
	}

	if (insert >= 3600)
	{
		h = insert / 3600;
		insert %= 3600;
	}

	if (insert >= 60)
	{
		m = insert / 60;
		insert %= 60;
	}

	if (insert >= 1)
		s = insert;

	cout << d << " " << h << " " << m << " " << s << " " << endl;
	return 0;
}