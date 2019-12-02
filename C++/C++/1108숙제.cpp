#include <iostream>
using namespace std;


unsigned int Factorial(int x);
void ChoiceMenu(int iMoney);
void Buy(int iItem, int* iMoney);
void Machine(int* iMoney);
void SwapPointer(int* a, int* b);


void main()
{	//���Ǳ� �Լ�����
	int iMoney = 0, iFatorial = 0, iSwap1 = 0, iSwap2 = 0, iQuestChoice = 0;

	while (true)
	{
		cout << "������ �����ϼ��� " << endl;
		cin >> iQuestChoice;
		switch (iQuestChoice)
		{
		case 1:
			// ��� ���丮��
			cout << "���丮�� �� �� �Է� ";
			cin >> iFatorial;
			cout << Factorial(iFatorial) << endl;
			break;


		case 2:
			// ���Ǳ� ��������
			cout << "�ݾ��Է�" << endl;
			cin >> iMoney;
			Machine(&iMoney);
			break;


		case 3:
			// ����1 ���� �����ͷ� 
			cout << "��2�� �Է�" << endl;
			cin >> iSwap1 >> iSwap2;
			SwapPointer(&iSwap1, &iSwap2);
			break;


		default:
			cout << "�� ������" << endl;
			system("pause");
			system("cls");
		}
	}
}


unsigned int Factorial(int x)
{
	if (x == 2)					// 2���ϴ� 1�̶� ���ص� 1�̶� ���ʿ� X
		return x;
	return x * Factorial(x - 1);
}


void ChoiceMenu(int iMoney)
{
	system("cls");
	cout << "���� �ܾ� : " << iMoney << endl;
	cout << "1.�ݶ�(700)" << endl << "2.���̴�(500)" << endl << "3.ȯŸ(300)" << endl << "4. �ܾ׹�ȯ" << endl;
}


void Buy(int iItem, int* iMoney)
{
	if (*iMoney < iItem)
		cout << "�ܾ� ����" << endl;
	else
	{
		*iMoney -= iItem;
		cout << "�������ּż� �����մϴ�" << endl;
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
			cout << "�����ܾ� : " << *iMoney << "�� ��ȯ����ϴ�" << endl;
			return;
		default:
			cout << "�� �� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���" << endl;
		}
	}
}


void SwapPointer(int * a, int * b)
{
	int *temp = a;
	a = b;
	b = temp;
}
