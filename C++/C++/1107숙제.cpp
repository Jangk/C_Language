#include <iostream>
using namespace std;


int ChoiceMenu(int iMoney);
int Buy(int iItem, int iMoney);
int Machine(int iMoney);

void main()
{	// �Լ�
	//���Ǳ� �Լ�����
	int iMoney = 0;
	
	cout << "�ݾ��Է�" << endl;
	cin >> iMoney;


	Machine(iMoney);
}


int ChoiceMenu(int iMoney)
{
	int iChoice = 0;
	system("cls");
	cout << "���� �ܾ� : " << iMoney << endl;
	cout << "1.�ݶ�(700)"<< endl<< "2.���̴�(500)" << endl << "3.ȯŸ(300)" << endl << "4. �ܾ׹�ȯ" << endl;
	cin >> iChoice;
	return iChoice;
}


int Buy(int iItem, int iMoney)
{
	if (iMoney < iItem)
		cout << "�ܾ� ����" << endl;
	else
	{
		iMoney -= iItem;
		cout << "�������ּż� �����մϴ�" << endl;
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
			cout << "�����ܾ� : " << iMoney << "�� ��ȯ����ϴ�" << endl;
			return;
		default:
			cout << "�� �� �Է��ϼ̽��ϴ�. �ٽ� �Է��ϼ���" << endl;
		}
	}
}