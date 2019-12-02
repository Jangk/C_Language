#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// ���� �߱�����
	srand(unsigned(time(nullptr)));

	int iArray[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int iBaseBall[3] = {};
	int iPlayer[3] = {};

	// ���� ����

	int iSrcIndex = 0, iDestIndex = 0, iTemp = 0;

	for (int i = 0; i < 500; ++i)
	{
		iSrcIndex = rand() % 9;
		iDestIndex = rand() % 9;

		iTemp = iArray[iSrcIndex];
		iArray[iSrcIndex] = iArray[iDestIndex];
		iArray[iDestIndex] = iTemp;
	}

	for (int i = 0; i < 3; ++i)
		iBaseBall[i] = iArray[i];

	while (true)
	{
	PLAYER_INPUT:

		system("cls");

		cout << "����: ";

		for (int i = 0; i < 3; ++i)
			cout << iBaseBall[i] << ' ';

		cout << endl;

		cout << "���� 3���� ������� �Է��ϼ���." << endl;
		cout << "�Է�: ";		
	
		for (int i = 0; i < 3; ++i)
			cin >> iPlayer[i];

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (i != j && iPlayer[i] == iPlayer[j])
				{
					cout << "�ߺ��� �Է��Դϴ�." << endl;
					cout << "�ٽ� �Է��ϼ���." << endl;
					system("pause");

					goto PLAYER_INPUT;
				}
			}			
		}

		// ��ũ����ũ, �� ����
		int iStrike = 0, iBall = 0;

		for (int i = 0; i < 3; ++i)
		{
			if (iBaseBall[i] == iPlayer[i])
				++iStrike;

			for (int j = 0; j < 3; ++j)
			{
				if (i != j && iBaseBall[i] == iPlayer[j])
					++iBall;
			}
		}

		cout << iStrike << "strike!!! " << iBall << "ball!" << endl;
		system("pause");

		if (iStrike >= 3)
		{
			cout << "������ϴ�!" << endl;
			break;
		}		
	}
}