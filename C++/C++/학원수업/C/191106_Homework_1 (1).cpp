#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// 가위바위보
	srand(unsigned(time(nullptr)));

	int iComputer = 0, iPlayer = 0;
	int iWin = 0, iDraw = 0, iLose = 0;

	for (int i = 0; i < 3; ++i)
	{
		system("cls");
		cout << "1.가위 2.바위 3.보" << endl;
		cout << "선택: ";
		cin >> iPlayer;

		iComputer = (rand() % 3) + 1;

		switch (iPlayer)
		{
		case 1:
			if (iPlayer == iComputer)
			{
				cout << "플레이어: 가위" << endl;
				cout << "컴퓨터: 가위" << endl;
				cout << "비겼습니다!" << endl;
				++iDraw;
			}
			else if (2 == iComputer)
			{
				cout << "플레이어: 가위" << endl;
				cout << "컴퓨터: 바위" << endl;
				cout << "졌습니다!" << endl;
				++iLose;
			}
			else
			{
				cout << "플레이어: 가위" << endl;
				cout << "컴퓨터: 보" << endl;
				cout << "이겼습니다!" << endl;
				++iWin;
			}
			break;
		case 2:
			if (iPlayer == iComputer)
			{
				cout << "플레이어: 바위" << endl;
				cout << "컴퓨터: 바위" << endl;
				cout << "비겼습니다!" << endl;
				++iDraw;
			}
			else if (3 == iComputer)
			{
				cout << "플레이어: 바위" << endl;
				cout << "컴퓨터: 보" << endl;
				cout << "졌습니다!" << endl;
				++iLose;
			}
			else
			{
				cout << "플레이어: 바위" << endl;
				cout << "컴퓨터: 가위" << endl;
				cout << "이겼습니다!" << endl;
				++iWin;
			}
			break;
		case 3:
			if (iPlayer == iComputer)
			{
				cout << "플레이어: 보" << endl;
				cout << "컴퓨터: 보" << endl;
				cout << "비겼습니다!" << endl;
				++iDraw;
			}
			else if (1 == iComputer)
			{
				cout << "플레이어: 보" << endl;
				cout << "컴퓨터: 가위" << endl;
				cout << "졌습니다!" << endl;
				++iLose;
			}
			else
			{
				cout << "플레이어: 보" << endl;
				cout << "컴퓨터: 바위" << endl;
				cout << "이겼습니다!" << endl;
				++iWin;
			}
			break;
		}

		system("pause");
	}

	cout << iWin << "승 " << iDraw << "무 " << iLose << "패" << endl;
}