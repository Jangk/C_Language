#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// ����������
	srand(unsigned(time(nullptr)));

	int iComputer = 0, iPlayer = 0;
	int iWin = 0, iDraw = 0, iLose = 0;

	for (int i = 0; i < 3; ++i)
	{
		system("cls");
		cout << "1.���� 2.���� 3.��" << endl;
		cout << "����: ";
		cin >> iPlayer;

		iComputer = (rand() % 3) + 1;

		switch (iPlayer)
		{
		case 1:
			if (iPlayer == iComputer)
			{
				cout << "�÷��̾�: ����" << endl;
				cout << "��ǻ��: ����" << endl;
				cout << "�����ϴ�!" << endl;
				++iDraw;
			}
			else if (2 == iComputer)
			{
				cout << "�÷��̾�: ����" << endl;
				cout << "��ǻ��: ����" << endl;
				cout << "�����ϴ�!" << endl;
				++iLose;
			}
			else
			{
				cout << "�÷��̾�: ����" << endl;
				cout << "��ǻ��: ��" << endl;
				cout << "�̰���ϴ�!" << endl;
				++iWin;
			}
			break;
		case 2:
			if (iPlayer == iComputer)
			{
				cout << "�÷��̾�: ����" << endl;
				cout << "��ǻ��: ����" << endl;
				cout << "�����ϴ�!" << endl;
				++iDraw;
			}
			else if (3 == iComputer)
			{
				cout << "�÷��̾�: ����" << endl;
				cout << "��ǻ��: ��" << endl;
				cout << "�����ϴ�!" << endl;
				++iLose;
			}
			else
			{
				cout << "�÷��̾�: ����" << endl;
				cout << "��ǻ��: ����" << endl;
				cout << "�̰���ϴ�!" << endl;
				++iWin;
			}
			break;
		case 3:
			if (iPlayer == iComputer)
			{
				cout << "�÷��̾�: ��" << endl;
				cout << "��ǻ��: ��" << endl;
				cout << "�����ϴ�!" << endl;
				++iDraw;
			}
			else if (1 == iComputer)
			{
				cout << "�÷��̾�: ��" << endl;
				cout << "��ǻ��: ����" << endl;
				cout << "�����ϴ�!" << endl;
				++iLose;
			}
			else
			{
				cout << "�÷��̾�: ��" << endl;
				cout << "��ǻ��: ����" << endl;
				cout << "�̰���ϴ�!" << endl;
				++iWin;
			}
			break;
		}

		system("pause");
	}

	cout << iWin << "�� " << iDraw << "�� " << iLose << "��" << endl;
}