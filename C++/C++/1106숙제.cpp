#include <iostream>
#include <ctime>
using namespace std;


const int ARRAY_MAX  = 25;
const int BINGO		 = 255;

void main()
{	
	/*
	���� 1
	1�����迭�� �̿��ؼ� ȭ�鿡 ������ ��������ؿͶ�
	1  2  3  4  5
	6  7  8  9  10
	11 12 13 14 15
	16 17 18 19 20
	21 22 23 24 25
	*/
	int playerStage[ARRAY_MAX];


	// �ʱ�ȭ
	for (int i = 0; i < ARRAY_MAX; ++i)
		playerStage[i] = i + 1;
	
	// ��ºκ�
	//cout << "\t\t������" << endl << "===================================" << endl;
	//for (int i = 0; i < 25; ++i)
	//{
	//	if (!(i % 5) && i!=0)
	//		cout << endl;
	//	cout << arr[i] <<"\t";
	//}


	/*
	���� 2
	1�������� �������� �������� �������� ���� ���� ����
	����ڰ� ������ ���ڴ� 0���� �ٲ۴�. ���� �Ǹ� ���� ī����,  5���� ���� ����
	*/


	// init
	// �÷��̾�
	int playerIndex = 0, playerChoice = 0, playerBingoTotal = 0;
	bool playerLeftDiagonal = false, playerRightDiagonal = false;

	// CPU
	int cpuIndex = 0, cpuChoice = 0, cpuBingoTotal = 0;
	bool cpuLeftDiagonal = false, cpuRightDiagonal = false;


	srand(unsigned(time(nullptr)));
	for (int i = 0; i < 50; i++)
	{
		int temp = 0,front = 0, last = 0;

		front = rand() % sizeof(playerStage) / sizeof(int);
		last  = rand() % sizeof(playerStage) / sizeof(int);
		temp	   = playerStage[front];
		playerStage[front] = playerStage[last];
		playerStage[last]  = temp;
	}


	cout << "Bingo : " << playerBingoTotal << endl;
	cout << "\t\t������" << endl << "===================================" << endl;
	for (int i = 0; i < ARRAY_MAX; ++i)
	{
		if (!(i % 5) && i != 0)
			cout << endl;
		cout << playerStage[i] << "\t";
	}
	cout << endl << "===================================" << endl << "������ ���� �����ϼ��� : ";



	while(true)
	{
		// input
		cin >> playerChoice;
		

		// ���� ��ã��
		for (int i = 0; i < ARRAY_MAX; ++i)
		{
			if (playerChoice == playerStage[i])
			{
				playerStage[i] = 0;
				playerIndex = i;
				break;
			}
		}


		// Update
		int playerX = 0, playerY = 0, firstIndex = 0, bingoCount = 0;
		playerX = playerIndex % 5;
		playerY = playerIndex / 5;
		


		// �� ����
		bingoCount = 0;
		firstIndex = playerY * 5;
		for (int i = 0; i < 5; i++)
		{
			if (playerStage[firstIndex] == playerStage[playerY * 5])
			{
				++bingoCount;
				++firstIndex;
			}
			else
				break;
		}		
		if (bingoCount == 5)
		{
			++playerBingoTotal;
			firstIndex = playerY * 5;
			
		}



		// �� ����
		bingoCount = 0;
		firstIndex = playerX;
		for (int i = 0; i < 5; i++)
		{
			if (playerStage[firstIndex] == playerStage[playerX])
			{
				++bingoCount;
				firstIndex += 5;
			}
			else
				break;
		}		
		if (bingoCount == 5)
			++playerBingoTotal;



		// �� ����
		if (!playerLeftDiagonal)
		{
			bingoCount = 0;
			firstIndex = 0;
			for (int i = 0; i < 5; i++)
			{
				if (playerStage[firstIndex] == playerStage[0] )
				{
					++bingoCount;
					firstIndex += 6;
				}
				else
					break;
			}
			if (bingoCount == 5)
			{
				playerLeftDiagonal = true;
				++playerBingoTotal;
			}
		}
		
		
		
		
		// �� ����
		if (!playerRightDiagonal)
		{
			bingoCount = 0;
			firstIndex = 4;
			for (int i = 0; i < 5; i++)
			{
				if (playerStage[firstIndex] == playerStage[4] || playerStage[firstIndex] == BINGO)
				{
					++bingoCount;
					firstIndex += 4;
				}
				else
					break;
			}
			if (bingoCount == 5)
			{
				++playerBingoTotal;
				playerRightDiagonal = true;
 			}
		}




		// Draw
		system("cls");
		cout << "Bingo : " << playerBingoTotal << endl;
		cout << "\t\t������" << endl << "===================================" << endl;
		for (int i = 0; i < ARRAY_MAX; ++i)
		{
			if (!(i % 5) && i != 0)
				cout << endl;
			if (playerStage[i] == BINGO)
				cout << "X\t";
			else
				cout << playerStage[i] << "\t";
		}

		cout << endl << "===================================" << endl << "������ ���� �����ϼ��� : ";
	}
}