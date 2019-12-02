#include <iostream>
#include <ctime>

using namespace std;

const int g_iCount = 5;

void ShuffleBingoBoard(int(*ptr)[g_iCount]);
void PrintBingoBoard(int(*ptr)[g_iCount]);
void SelectNumber(int(*ptr)[g_iCount]);
int CheckLineWidth(int(*ptr)[g_iCount]);
int CheckLineHeight(int(*ptr)[g_iCount]);
int CheckLineDiagonal(int(*ptr)[g_iCount]);
void PlayBingo();

void main()
{
	PlayBingo();
}

void ShuffleBingoBoard(int(*ptr)[g_iCount])
{
	srand(unsigned(time(nullptr)));

	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
		{
			ptr[i][j] = (i * g_iCount + j) + 1;
		}
	}

	int iTemp = 0;
	int iSrcIdx1 = 0, iDestIdx1 = 0;
	int iSrcIdx2 = 0, iDestIdx2 = 0;


	for (int i = 0; i < 5000; ++i)
	{
		iSrcIdx1 = rand() % g_iCount;
		iDestIdx1 = rand() % g_iCount;

		iSrcIdx2 = rand() % g_iCount;
		iDestIdx2 = rand() % g_iCount;

		iTemp = ptr[iSrcIdx1][iDestIdx1];
		ptr[iSrcIdx1][iDestIdx1] = ptr[iSrcIdx2][iDestIdx2];
		ptr[iSrcIdx2][iDestIdx2] = iTemp;
	}
}

void PrintBingoBoard(int(*ptr)[g_iCount])
{
	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
		{
			cout << ptr[i][j] << '\t';
		}

		cout << endl;
	}
}

void SelectNumber(int(*ptr)[g_iCount])
{
	int iSelect = 0;

	cout << "선택: ";
	cin >> iSelect;

	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
		{
			if (iSelect == ptr[i][j])
			{
				ptr[i][j] = 0;
				break;
			}
		}
	}
}

int CheckLineWidth(int(*ptr)[g_iCount])
{
	int iWidthCount = 0;

	for (int i = 0; i < g_iCount; ++i) // 행
	{
		int iCount = 0;

		for (int j = 0; j < g_iCount; ++j) // 열
		{
			if (0 == ptr[i][j])
				++iCount;
		}

		iWidthCount += iCount / g_iCount;
	}

	return iWidthCount;
}

int CheckLineHeight(int(*ptr)[g_iCount])
{
	int iHeightCount = 0;

	for (int i = 0; i < g_iCount; ++i) // 열
	{
		int iCount = 0;

		for (int j = 0; j < g_iCount; ++j) // 행
		{
			if (0 == ptr[j][i])
				++iCount;
		}

		iHeightCount += iCount / g_iCount;
	}

	return iHeightCount;
}

int CheckLineDiagonal(int(*ptr)[g_iCount])
{
	int iDiagonalCount = 0;
	int iCount1 = 0;
	int iCount2 = 0;

	for (int i = 0; i < g_iCount; ++i) // 행
	{
		for (int j = 0; j < g_iCount; ++j) // 열
		{
			if ((i == j) && (0 == ptr[i][j]))
				++iCount1;

			if ((g_iCount - 1 == i + j) && (0 == ptr[i][j]))
				++iCount2;
		}		
	}

	iDiagonalCount += iCount1 / g_iCount;
	iDiagonalCount += iCount2 / g_iCount;

	return iDiagonalCount;
}

void PlayBingo()
{
	int iBingo[g_iCount][g_iCount] = {};
	int iBingoCount = 0, iWidthCount = 0, iHeightCount = 0, iDiagonalCount = 0;

	ShuffleBingoBoard(iBingo);

	while (true)
	{
		system("cls");

		PrintBingoBoard(iBingo);
		SelectNumber(iBingo);

		iWidthCount = CheckLineWidth(iBingo);
		iHeightCount = CheckLineHeight(iBingo);
		iDiagonalCount = CheckLineDiagonal(iBingo);

		iBingoCount = iWidthCount + iHeightCount + iDiagonalCount;

		cout << iBingoCount << "빙고 완성!" << endl;

		if (iBingoCount >= 5)
			break;

		system("pause");
	}
}