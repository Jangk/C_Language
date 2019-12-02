#include <iostream>
#include <ctime>
#include <Windows.h>
#include <string>
using namespace std;


void main()
{
	int gameSelector		= 0;
	int com					= 0;
	int playerChoice		= 0;
	int lotto[6]			= {};
	int strikeCount			= 0;
	int ballCount			= 0;
	int baseballCpu[3]		= {};
	int baseballPlayer[3]	= {};
	bool isWinRPS[3]		= {};
	bool isWinOddAndEven[3] = {};
	bool isWinBaseBall		= false ;
	bool isGameOver			= false;
	string name;
	srand((unsigned)time(nullptr));


	while (true)
	{
		cout << "게임을 선택하세요 " << endl;
		cout << "1. 가위 바위 보 " << endl;
		cout << "2. 홀 짝" << endl;
		cout << "3. 로또" << endl;
		cout << "4. 숫자 야구 게임 " << endl;
		cout << "5. 종 료" << endl;
		cout << "===========================" << endl;
		cin >> gameSelector;
		system("cls");
		
		
		switch (gameSelector)
		{
		case 1:
			// 1. 가위 바위 보
			//    승패 3라운드 기록
			for (int i = 0; i < 3; ++i)
			{
				cout << i + 1 << "라운드!" << endl;
				cout << "1. 가위 " << endl;
				cout << "2. 바위 " << endl;
				cout << "3. 보" << endl;
				cout << "======================" << endl;
				cin >> playerChoice;
				com = rand() % 3 + 1;


				if (com == playerChoice)
				{
					--i;
					cout << "비겼습니다" << endl << endl;
				}
				else
				{
					switch (playerChoice)
					{
						// 가위
					case 1:
						if (com == 2)			// 컴퓨터가 바위면
							isWinRPS[i] = false;
						else
							isWinRPS[i] = true;
						break;


						// 바위
					case 2:
						if (com == 1)
							isWinRPS[i] = true;
						else
							isWinRPS[i] = false;
						break;


						// 보
					case 3:
						if (com == 1)
							isWinRPS[i] = false;
						else
							isWinRPS[i] = true;
						break;
					}

					switch (com)
					{
					case 1:
						name = "가위";
						break;
					case 2:
						name = "바위";
						break;
					case 3:
						name = "보";
						break;
					}
					cout << "컴퓨터는 " << name << ", ";

					switch (playerChoice)
					{
					case 1:
						name = "가위";
						break;
					case 2:
						name = "바위";
						break;
					case 3:
						name = "보";
						break;
					}
					cout << "플레이어는 " << name << endl;

					if (isWinRPS[i])
						cout << "플레이어 승!" << endl << endl;
					else
						cout << "컴퓨터 승!" << endl <<endl;
				}
				//system("pause");
			}


			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << "라운드는 ";
				if (isWinRPS[i])
					cout << "이겼습니다" << endl;
				else
					cout << "졌습니다." << endl;
			}
			break;





		case 2:
			// 2. 홀짝
			// 0~10난수를 컴퓨터가 기억하고 홀짝맞추기
			// 3라운드 저장
			com = rand() % 10;

			for (int i = 0; i < 3; ++i)
			{
				cout << "0 ~ 10사이의 수를 입력하시오 " ;
				cin >> playerChoice;
				if (0 > playerChoice || playerChoice > 10)
				{
					cout << "값이 범위를 벗어남" << endl;
					--i;
					continue;
				}
				cout << i + 1 << "라운드 !" << endl;
				cout << "컴퓨터는 " << com << ", 플레이어는 " << playerChoice ;
				if (com == playerChoice)
				{
					cout << " 맞췄습니다." << endl;
					isWinOddAndEven[i] = true;
				}
				else
				{
					cout << " 못 맞췄습니다." << endl;
					isWinOddAndEven[i] = false;
				}
				system("pause");
				system("cls");

			}


			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << "라운드는 ";
				if (isWinOddAndEven[i])
					cout << "이겼습니다" << endl;
				else
					cout << "졌습니다." << endl;
			}
			break;






		case 3:
			// 3. 로또
			// 1~45까지의 수 중 중복없이 6개 뽑아내기
			// 총 6회 저장 . 각 회차마다 6회 오름차순 정렬 출력
			for (int i = 0; i < 6; ++i)
			{
				lotto[i] = rand() % 45 + 1;
				for (int j = 0; j < i; ++j)
				{
					if (lotto[i] == lotto[j])
					{
						--i;
						break;
					}
				}
			}

			for (int i = 0; i < 6; i++)
			{
				for (int j = i; j < 6; j++)
				{
					if (lotto[i] > lotto[j])
					{
						int temp = lotto[i];
						lotto[i] = lotto[j];
						lotto[j] = temp;
					}
				}
			}

			for (int i = 0; i < 6; i++)
				cout << i + 1 << "번쨰 로또 번호는" << lotto[i] << " " << endl;
			break;


		case 4:
			// 4. 숫자 야구 게임
			// 1~9사이 숫자를 랜덤하게 3개, 이때 3개는 중복안됨
			// 사용자가 1 ~ 9 사이의 숫자 3개 중복되지않게 입력
			// ex) 컴퓨터가 1 2 3, 사용자가 1 3 2일떄
			// 1스트라이크 2볼
			// 숫자와 자릿수가 맞으면 스트라이크, 자릿수는 다르지만 숫자가 같으면 볼, 3스트라이크가 될떄까지 함.
			// 컴퓨터는 처음 뽑은 숫자는 안바낌
			for (int i = 0; i < 3; ++i)
			{
				baseballCpu[i] = rand() % 9 + 1;
				for (int j = 0; j < i; ++j)
				{	// 중복시 다시 rand()
					if (baseballCpu[i] == baseballCpu[j])
					{
						--i;
						break;
					}
				}
			}

			
			while (!isGameOver)
			{

				for (int i = 0; i < 3; i++)
				{
					cout << i + 1 << "번째 값 입력 " << endl;
					cin >> baseballPlayer[i];
					if (1 > baseballPlayer[i] || baseballPlayer[i] > 9)
					{
						cout << "값이 범위를 벗어남" << endl;
						--i;
						continue;
					}
					for (int j = 0; j < i; j++)
					{
						if (baseballPlayer[i] == baseballPlayer[j])
						{
							--i;
							cout << "값이 중복 됬습니다. 다시 입력하세요" << endl;
							break;
						}
					}
				}

				for (int i = 0; i < 3; i++)
					cout << baseballCpu[i]<< ", ";
				cout << endl;


				for (int i = 0; i < 3; i++)
				{	// 스트라이크 검사
					if (baseballCpu[i] == baseballPlayer[i])
					{
						++strikeCount;
						cout << strikeCount << "스트라이크" << endl;
						if (strikeCount >= 3)
						{
							cout << "삼진 아웃 ! 게임 종료" << endl;
							isWinBaseBall = true;
							isGameOver = true;
							break;
						}
					}


					// 볼 검사
					for (int j = 0; j < 3; j++)
					{
						if (baseballCpu[i] == baseballPlayer[j])
						{
							++ballCount;
							cout << ballCount << "볼!" << endl;
							if (ballCount >= 4)
							{
								cout << "4볼! 패배 " << endl;
								isWinBaseBall = false;
								isGameOver = true;
								break;
							}
						}
					}
				}
			}


		case 5:
			return;
		}
		system("pause");
		system("cls");
	}
}