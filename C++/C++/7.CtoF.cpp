#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int x = 0;
	cin >> x;

	cout.precision(1);	//�Ҽ� ù°¥������ �ݿø��ؼ� ���
	cout << fixed << float((1.8 * x) + 32 )<< endl;
	return 0;
}