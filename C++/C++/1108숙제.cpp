#include <iostream>
using namespace std;


unsigned int Factorial(int x);
void ChoiceMenu(int iMoney);
void Buy(int iItem, int* iMoney);
void Machine(int* iMoney);
void SwapPointer(int* a, int* b);


void main()
{	//자판기 함수단위
	int iMoney = 0, iFatorial = 0, iSwap1 = 0, iSwap2 = 0, iQuestChoice = 0;

	while (true)
	{
		cout << "문제를 선택하세요 " << endl;
		cin >> iQuestChoice;
		switch (iQuestChoice)
		{
		case 1:
			// 재귀 팩토리얼
			cout << "팩토리얼 할 값 입력 ";
			cin >> iFatorial;
			cout << Factorial(iFatorial) << endl;
			break;


		case 2:
			// 자판기 포인터형
			cout << "금액입력" << endl;
			cin >> iMoney;
			Machine(&iMoney);
			break;


		case 3:
			// 문제1 스왑 포인터로 
			cout << "값2개 입력" << endl;
			cin >> iSwap1 >> iSwap2;
			SwapPointer(&iSwap1, &iSwap2);
			break;


		default:
			cout << "잘 못선택" << endl;
			system("pause");
			system("cls");
		}
	}
}


unsigned int Factorial(int x)
{
	if (x == 2)					// 2이하는 1이라 곱해도 1이라 할필요 X
		return x;
	return x * Factorial(x - 1);
}


void ChoiceMenu(int iMoney)
{
	system("cls");
	cout << "현재 잔액 : " << iMoney << endl;
	cout << "1.콜라(700)" << endl << "2.사이다(500)" << endl << "3.환타(300)" << endl << "4. 잔액반환" << endl;
}


void Buy(int iItem, int* iMoney)
{
	if (*iMoney < iItem)
		cout << "잔액 부족" << endl;
	else
	{
		*iMoney -= iItem;
		cout << "구매해주셔서 감사합니다" << endl;
	}
	system("pause");
}


void Machine(int* iMoney)
{
	int iCola = 700, iCider = 500, iFanta = 300;
	while (true)
	{
		int iChoice = 0;
		ChoiceMenu(*iMoney);
		cin >> iChoice;
		
		switch (iChoice)
		{
		case 1:
			Buy(iCola, iMoney);
			break;
		case 2:
			Buy(iCider, iMoney);
			break;
		case 3:
			Buy(iFanta, iMoney);
			break;
		case 4:
			cout << "남은잔액 : " << *iMoney << "원 반환됬습니다" << endl;
			return;
		default:
			cout << "잘 못 입력하셨습니다. 다시 입력하세요" << endl;
		}
	}
}


void SwapPointer(int * a, int * b)
{
	int *temp = a;
	a = b;
	b = temp;
}
