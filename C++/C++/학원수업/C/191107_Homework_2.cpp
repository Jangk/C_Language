#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	srand(unsigned(time(nullptr)));

	int iArray[25] = {};
	int iBingoCount = 0, iHorizonCount = 0, iVerticalCount = 0, iDiagonalCount = 0;
	int iSelect = 0;

	for (int i = 0; i < 25; ++i)
		iArray[i] = i + 1;

	// 셔플
	int iSrcIndex = 0, iDestIndex = 0, iTemp = 0;

	for (int i = 0; i < 500; ++i)
	{
		iSrcIndex = rand() % 25;
		iDestIndex = rand() % 25;

		iTemp = iArray[iSrcIndex];
		iArray[iSrcIndex] = iArray[iDestIndex];
		iArray[iDestIndex] = iTemp;
	}

	while (true)
	{
		system("cls");

		// 숫자판 출력
		for (int i = 0; i < 5; ++i) // 행
		{
			for (int j = 0; j < 5; ++j) // 열
			{
				cout << iArray[i * 5 + j] << '\t';
			}

			cout << endl;
		}

		cout << "선택: ";
		cin >> iSelect;

		for (int i = 0; i < 25; ++i)
		{
			if (iArray[i] == iSelect)
			{
				iArray[i] = 0;
				break;
			}
		}

		// 가로 개수 판정
		iHorizonCount = 0;

		for (int i = 0; i < 5; ++i) // 행
		{
			int iCount = 0;

			for (int j = 0; j < 5; ++j) // 열
			{
				if (0 == iArray[i * 5 + j])
					++iCount;
			}

			iHorizonCount += iCount / 5;
		}

		// 세로 개수 판정
		iVerticalCount = 0;		

		for (int i = 0; i < 5; ++i) // 열
		{
			int iCount = 0;

			for (int j = 0; j < 5; ++j) // 행
			{
				// 행 * 열의너비 + 열
				if (0 == iArray[j * 5 + i])
					++iCount;
			}

			iVerticalCount += iCount / 5;
		}


		// 대각선 개수 판정
		iDiagonalCount = 0;

		int iCount1 = 0;
		int iCount2 = 0;

		for (int i = 0; i < 5; ++i) // 행
		{
			for (int j = 0; j < 5; ++j) // 열
			{
				if ((0 == i - j) && (0 == iArray[i * 5 + j]))
					++iCount1;

				if ((4 == i + j) && (0 == iArray[i * 5 + j]))
					++iCount2;
			}					
		}

		iDiagonalCount += iCount1 / 5;
		iDiagonalCount += iCount2 / 5;


		iBingoCount = iHorizonCount + iVerticalCount + iDiagonalCount;

		cout << "현재 빙고: " << iBingoCount << endl;
		system("pause");

		if (5 <= iBingoCount)
		{
			cout << "빙고를 완성했습니다." << endl;
			break;
		}
	}
}