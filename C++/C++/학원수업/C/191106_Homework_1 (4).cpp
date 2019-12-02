#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// 숫자 야구게임
	srand(unsigned(time(nullptr)));

	int iArray[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int iBaseBall[3] = {};
	int iPlayer[3] = {};

	// 숫자 섞기

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

		cout << "정답: ";

		for (int i = 0; i < 3; ++i)
			cout << iBaseBall[i] << ' ';

		cout << endl;

		cout << "숫자 3개를 순서대로 입력하세요." << endl;
		cout << "입력: ";		
	
		for (int i = 0; i < 3; ++i)
			cin >> iPlayer[i];

		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 3; ++j)
			{
				if (i != j && iPlayer[i] == iPlayer[j])
				{
					cout << "중복된 입력입니다." << endl;
					cout << "다시 입력하세요." << endl;
					system("pause");

					goto PLAYER_INPUT;
				}
			}			
		}

		// 스크라이크, 볼 판정
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
			cout << "맞췄습니다!" << endl;
			break;
		}		
	}
}