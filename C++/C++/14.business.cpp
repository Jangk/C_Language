#include <iostream>
using namespace std;

int main()
{	 // ����      , ����     , ��¥��  , �Ž�����
	int origin = 0, price = 0, fake = 0, turn = 0;
	int total = 0, pay = 0;

	// ���� ����
	//if (origin < price)
	//else if (fake <= price + turn)

	cin >> origin>> price >> fake >> turn;
	total = price + turn;						// �մ��� �� �ݾ�
	pay  = ((total - fake) - turn - origin)*-1;	// (������ �ݾ�) - �Ž�����
	cout << pay;
	return 0;
}