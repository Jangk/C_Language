#include <iostream>
#include <ctime>
#define	BINGO_ICON 255
using namespace std;


void InitBingo(int iPlayer[][5], int x, int y);
void InputBingo(int* iPlayerInput, int* iCpuInput);
void DrawBingo(int iPlayer[][5], int x, int y, int iBingoTotal);
void UpdateBingo(int iPlayer[][5], int x, int y, int input, int* iBingoTotal);
bool IsGameOver(int iBingoTotal, int iCpuTotal);


//����2
void RotateArr(int iPlayer[][3], int x, int y);
void DrawArr(int iPlayer[][3], int x, int y);


void main()
{
	// ����1. ������� �Լ�+ 2���� �迭�� 
	int iPlayerMap[5][5] = {};
	int iCpuMap[5][5] = {};
	int iPlayerInput = 0, iCpuInput = 0, iPlayerBingoTotal = 0, iCpuBingoTotal = 0, iChoice =0;
	int iMap_X = sizeof(iPlayerMap[0]) / sizeof(iPlayerMap[0][0]);
	int iMap_Y = sizeof(iPlayerMap) / sizeof(iPlayerMap[0]);
	bool isPlayerTurn = false;


	cout << "1. ���� ����" << endl;
	cout << "2. 2���� �迭 ȸ��" << endl;
	cin >> iChoice;
	switch (iChoice)
	{
	case 1:
		system("cls");
		InitBingo(iPlayerMap, iMap_X, iMap_Y);
		InitBingo(iCpuMap, iMap_X, iMap_Y);
		while (true)
		{
			InputBingo(&iPlayerInput, &iCpuInput);
			system("cls");
			UpdateBingo(iPlayerMap, iMap_X, iMap_Y, iPlayerInput, &iPlayerBingoTotal);
			UpdateBingo(iCpuMap, iMap_X, iMap_Y, iCpuInput, &iCpuBingoTotal);
			DrawBingo(iPlayerMap, iMap_X, iMap_Y, iPlayerBingoTotal);
			DrawBingo(iCpuMap, iMap_X, iMap_Y, iCpuBingoTotal);
			if (IsGameOver(iPlayerBingoTotal, iCpuBingoTotal))
				break;
		}
		break;


	case 2:
		// ����2. 2���� �迭�� �̿��Ͽ� ������ ���� ȸ���ؿ���
		// 1 2 3				7 4 1					9 8 7
		// 4 5 6		->		8 5 2			->		6 5 4
		// 7 8 9				9 6 3					3 2 1
		int iRotate[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		DrawArr(iRotate, 3, 3);
		while (true)
		{
			system("pause");
			system("cls");
			RotateArr(iRotate, 3, 3);
			DrawArr(iRotate, 3, 3);
		}
		break;
	}
}





// �Լ� ���Ǻ�
void InitBingo(int iPlayer[][5], int x, int y)
{
	srand((unsigned)time(nullptr));
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
			iPlayer[i][j] = i*y + j + 1;
	}


	// �� ����
	for (int i = 0; i < 50; ++i)
	{
		int temp = 0, m_x1 = 0, m_y1 = 0, m_x2 = 0, m_y2 = 0;
		m_x1 = rand() % x;
		m_y1 = rand() % y;
		m_x2 = rand() % x;
		m_y2 = rand() % y;
		temp = iPlayer[m_y1][m_x1];
		iPlayer[m_y1][m_x1] = iPlayer[m_y2][m_x2];
		iPlayer[m_y2][m_x2] = temp;
	}
	DrawBingo(iPlayer, x, y, 0);
}


void InputBingo(int* iPlayerInput, int* iCpuInput)
{
	while (true)
	{
		cout << "���� ���� : ";
		cin >> *iPlayerInput;
		if (*iPlayerInput <= 0 || *iPlayerInput > 25)
			cout << "�ٽ� �Է��ϼ���" << endl;
		else
		{
			srand((unsigned)time(nullptr));
			*iCpuInput = rand() % 25;
			break;
		}
	}
}


void DrawBingo(int iPlayer[][5], int x, int y, int iBingoTotal)
{
	cout << "\t\t������ " << endl;
	cout << "===================================" << endl;
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
		{
			if (iPlayer[i][j] == BINGO_ICON)
				cout << "��\t";
			else
				cout << iPlayer[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "===================================" << endl;
	cout << "�� ���� �� :  " << iBingoTotal << endl;
}


void UpdateBingo(int iPlayer[][5], int x, int y, int input, int* iBingoTotal)
{
	int m_iChoice_X = 0, m_iChoice_Y = 0, m_iBingoCount = 0;
	int m_iBingoHorizon = 0, m_iBingoVertical = 0, m_iLeftDiagonal = 0, m_iRightDiagonal = 0;
	

	
	// �÷��̾��� �Է��� �� ��ǥ
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (iPlayer[i][j] == input)
			{
				iPlayer[i][j] = BINGO_ICON;
				m_iChoice_X = j;
				m_iChoice_Y = i;
				break;
			}
		}
	}

	
	// ���� üũ.
	for (int i = 0; i < y; ++i)
	{	// ��
		for (int j = 0; j < x; ++j)
		{
			if (iPlayer[i][j] == BINGO_ICON)
				m_iBingoCount++;
		}
		m_iBingoHorizon += m_iBingoCount / 5;
		m_iBingoCount	 = 0;


		// ��
		for (int j = 0; j < x; ++j)
		{
			if (iPlayer[j][i] == BINGO_ICON)
				m_iBingoCount++;
		}
		m_iBingoVertical += m_iBingoCount / 5;
		m_iBingoCount	  = 0;
	}


	for (int i = 0; i < y; i++)
	{
		if (iPlayer[i][i] == BINGO_ICON)
			m_iBingoCount++;
	}
	m_iLeftDiagonal += m_iBingoCount / 5;
	m_iBingoCount = 0;


	// ��
	for (int i = 0; i < y; i++)
	{
		if (iPlayer[y -1 - i][i] == BINGO_ICON)
			m_iBingoCount++;
	}
	m_iRightDiagonal += m_iBingoCount / 5;
	m_iBingoCount = 0;

	*iBingoTotal = m_iBingoHorizon + m_iBingoVertical + m_iLeftDiagonal + m_iRightDiagonal;
}


bool IsGameOver(int iPlayerTotal, int iCpuTotal)
{	
	if (iPlayerTotal == 5)
	{
		cout << "Player �� ����" << endl;
		return true;
	}
	else if (iCpuTotal == 5)
	{
		cout << "CPU ����" << endl;
		return true;
	}
	return false;
}


void RotateArr(int iPlayer[][3], int x, int y)
{
	int temp[3][3] = {};
	// ȸ��
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
			temp[i][j] = iPlayer[y - j - 1][i];
	}

	// ���� �����Ϳ� ����
	for (int i = 0; i < y; ++i)
	{
		for (int j = 0; j < x; ++j)
			iPlayer[i][j] = temp[i][j];
	}
}


void DrawArr(int iPlayer[][3], int x, int y)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
			cout << iPlayer[i][j];
		cout << endl;
	}
}


