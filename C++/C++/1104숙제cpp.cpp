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


	// 2. ���Ǳ� 
	// 2-1 ����ں��� �ݾ׹���
	// 2-2 �޴��� ��
	// 2-3 �޴��� �����ҋ� ����� �ݾ׺��� �۴ٸ� ���� ����
	// 2-4 ���� �����ϸ� ���ǰ���ŭ ����
	// 2-5 ����� ���᤿�� �ܾ� ���
	// 2-6 ����ݾ��� ��ܿ� �׻� ǥ��
	system("pause");
	system("cls");
	int money = 0;
	int menu = 0;
	cout << "�ݾ� ���� " << endl;
	cin >> money;

	while (true)
	{
		cout << "���� �ݾ� :" << money << endl;
		cout << "1. ���̴�(700)  2. �ݶ�(500) 3. ȯŸ(300) 4.�ܾ׹�ȯ" << endl;
		cin >> menu;
		switch (menu)
		{
		case 1:
			if (money < 700)
				cout << "�� ����" << endl;
			else
			{
				cout << "���� �Ϸ�" << endl;
				money -= 700;
			}
			break;


		case 2:
			if (money < 500)
				cout << "�� ����" << endl;
			else
			{
				cout << "���� �Ϸ�" << endl;
				money -= 500;
			}
			break;


		case 3:
			if (money < 300)
				cout << "�� ����" << endl;
			else
			{
				cout << "���� �Ϸ�" << endl;
				money -= 300;
			}
			break;


		case 4:
			cout << "�ܾ� " << money << "�� ��ȯ" << endl;
			return;

		default:
			cout << "����" << endl;
			break;
		}
		system("Pause");
		system("cls");
	}
}