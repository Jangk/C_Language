#include <iostream>
using namespace std;


int ChoiceMenu(int iMoney);
int Buy(int iItem, int iMoney);
int Machine(int iMoney);

void main()
{	// 함수
	//자판기 함수단위
	int iMoney = 0;
	
	cout << "금액입력" << endl;
	cin >> iMoney;


	Machine(iMoney);
}


int ChoiceMenu(int iMoney)
{
	int iChoice = 0;
	system("cls");
	cout << "현재 잔액 : " << iMoney << endl;
	cout << "1.콜라(700)"<< endl<< "2.사이다(500)" << endl << "3.환타(300)" << endl << "4. 잔액반환" << endl;
	cin >> iChoice;
	return iChoice;
}


int Buy(int iItem, int iMoney)
{
	if (iMoney < iItem)
		cout << "잔액 부족" << endl;
	else
	{
		iMoney -= iItem;
		cout << "구매해주셔서 감사합니다" << endl;
	}
	system("pause");
	return iMoney;
}


int Machine(int iMoney)
{
	int iCola = 700, iCider = 500, iFanta = 300;
	while (true)
	{
		switch (ChoiceMenu(iMoney))
		{
		case 1:
			iMoney = Buy(iCola, iMoney);
			break;
		case 2:
			iMoney = Buy(iCider, iMoney);
			break;
		case 3:
			iMoney = Buy(iFanta, iMoney);
			break;
		case 4:
			cout << "남은잔액 : " << iMoney << "원 반환됬습니다" << endl;
			return;
		default:
			cout << "잘 못 입력하셨습니다. 다시 입력하세요" << endl;
		}
	}
}