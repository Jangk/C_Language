#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// Ȧ¦
	srand(unsigned(time(nullptr)));

	int iCom = 0, iPlayer = 0, iWin = 0, iLose = 0;

	for (int i = 0; i < 3; ++i)
	{
		system("cls");

		iCom = (rand() % 10) + 1;		

		cout << "1.Ȧ 2.¦" << endl;
		cout << "����: ";
		cin >> iPlayer;		

		switch (iPlayer)
		{
		case 1:
		case 2:
			if ((iPlayer - 1) != (iCom % 2))
			{
				cout << "����!" << endl;
				++iWin;
			}
			else
			{
				cout << "����!" << endl;
				++iLose;
			}
			break;
		}

		cout << "��ǻ��: " << iCom << endl;
		system("pause");
	}

	cout << iWin << "�� " << iLose << "��" << endl;
}