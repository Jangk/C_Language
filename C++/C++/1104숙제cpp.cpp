#include <iostream>
using namespace std;

void main()
{
	// 1
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}


	// 2
	for (int i = 5; i > 0; i--)
	{
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}


	// 3
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < i; j++)
			cout << " ";
		for (int j = 5; j > i; j--)
			cout << "*";
		cout << endl;
	}


	// 4
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
			cout << " ";
		for (int j = 0; j < i; j++)
			cout << "*";
		cout << endl;
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j > i; j--)
			cout << "*";
		for (int j = 0; j < i; j++)
			cout << " ";
		cout << endl;
	}


	// 2. 자판기 
	// 2-1 사용자부터 금액받음
	// 2-2 메뉴를 고름
	// 2-3 메뉴를 선택할떄 사용자 금액보다 작다면 구매 실패
	// 2-4 구매 성공하면 물건값만큼 차감
	// 2-5 사용자 종료ㅏ면 잔액 출력
	// 2-6 현재금액은 상단에 항상 표기
	system("pause");
	system("cls");
	int money = 0;
	int menu = 0;
	cout << "금액 투입 " << endl;
	cin >> money;

	while (true)
	{
		cout << "현재 금액 :" << money << endl;
		cout << "1. 사이다(700)  2. 콜라(500) 3. 환타(300) 4.잔액반환" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			if (money < 700)
				cout << "돈 부족" << endl;
			else
			{
				cout << "구입 완료" << endl;
				money -= 700;
			}
			break;


		case 2:
			if (money < 500)
				cout << "돈 부족" << endl;
			else
			{
				cout << "구입 완료" << endl;
				money -= 500;
			}
			break;


		case 3:
			if (money < 300)
				cout << "돈 부족" << endl;
			else
			{
				cout << "구입 완료" << endl;
				money -= 300;
			}
			break;


		case 4:
			cout << "잔액 " << money << "원 반환" << endl;
			return;

		default:
			cout << "오류" << endl;
			break;
		}
		system("Pause");
		system("cls");
	}
}