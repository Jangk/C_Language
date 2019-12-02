#include <iostream>
using namespace std;

int main()
{	 // 원가      , 가격     , 가짜돈  , 거스름돈
	int origin = 0, price = 0, fake = 0, turn = 0;
	int total = 0, pay = 0;

	// 전제 조건
	//if (origin < price)
	//else if (fake <= price + turn)

	cin >> origin>> price >> fake >> turn;
	total = price + turn;						// 손님이 준 금액
	pay  = ((total - fake) - turn - origin)*-1;	// (실제돈 금액) - 거스름돈
	cout << pay;
	return 0;
}