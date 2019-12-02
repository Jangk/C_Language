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
		cout << "������ �����ϼ��� " << endl;
		cout << "1. ���� ���� �� " << endl;
		cout << "2. Ȧ ¦" << endl;
		cout << "3. �ζ�" << endl;
		cout << "4. ���� �߱� ���� " << endl;
		cout << "5. �� ��" << endl;
		cout << "===========================" << endl;
		cin >> gameSelector;
		system("cls");
		
		
		switch (gameSelector)
		{
		case 1:
			// 1. ���� ���� ��
			//    ���� 3���� ���
			for (int i = 0; i < 3; ++i)
			{
				cout << i + 1 << "����!" << endl;
				cout << "1. ���� " << endl;
				cout << "2. ���� " << endl;
				cout << "3. ��" << endl;
				cout << "======================" << endl;
				cin >> playerChoice;
				com = rand() % 3 + 1;


				if (com == playerChoice)
				{
					--i;
					cout << "�����ϴ�" << endl << endl;
				}
				else
				{
					switch (playerChoice)
					{
						// ����
					case 1:
						if (com == 2)			// ��ǻ�Ͱ� ������
							isWinRPS[i] = false;
						else
							isWinRPS[i] = true;
						break;


						// ����
					case 2:
						if (com == 1)
							isWinRPS[i] = true;
						else
							isWinRPS[i] = false;
						break;


						// ��
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
						name = "����";
						break;
					case 2:
						name = "����";
						break;
					case 3:
						name = "��";
						break;
					}
					cout << "��ǻ�ʹ� " << name << ", ";

					switch (playerChoice)
					{
					case 1:
						name = "����";
						break;
					case 2:
						name = "����";
						break;
					case 3:
						name = "��";
						break;
					}
					cout << "�÷��̾�� " << name << endl;

					if (isWinRPS[i])
						cout << "�÷��̾� ��!" << endl << endl;
					else
						cout << "��ǻ�� ��!" << endl <<endl;
				}
				//system("pause");
			}


			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << "����� ";
				if (isWinRPS[i])
					cout << "�̰���ϴ�" << endl;
				else
					cout << "�����ϴ�." << endl;
			}
			break;





		case 2:
			// 2. Ȧ¦
			// 0~10������ ��ǻ�Ͱ� ����ϰ� Ȧ¦���߱�
			// 3���� ����
			com = rand() % 10;

			for (int i = 0; i < 3; ++i)
			{
				cout << "0 ~ 10������ ���� �Է��Ͻÿ� " ;
				cin >> playerChoice;
				if (0 > playerChoice || playerChoice > 10)
				{
					cout << "���� ������ ���" << endl;
					--i;
					continue;
				}
				cout << i + 1 << "���� !" << endl;
				cout << "��ǻ�ʹ� " << com << ", �÷��̾�� " << playerChoice ;
				if (com == playerChoice)
				{
					cout << " ������ϴ�." << endl;
					isWinOddAndEven[i] = true;
				}
				else
				{
					cout << " �� ������ϴ�." << endl;
					isWinOddAndEven[i] = false;
				}
				system("pause");
				system("cls");

			}


			for (int i = 0; i < 3; i++)
			{
				cout << i + 1 << "����� ";
				if (isWinOddAndEven[i])
					cout << "�̰���ϴ�" << endl;
				else
					cout << "�����ϴ�." << endl;
			}
			break;






		case 3:
			// 3. �ζ�
			// 1~45������ �� �� �ߺ����� 6�� �̾Ƴ���
			// �� 6ȸ ���� . �� ȸ������ 6ȸ �������� ���� ���
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
				cout << i + 1 << "���� �ζ� ��ȣ��" << lotto[i] << " " << endl;
			break;


		case 4:
			// 4. ���� �߱� ����
			// 1~9���� ���ڸ� �����ϰ� 3��, �̶� 3���� �ߺ��ȵ�
			// ����ڰ� 1 ~ 9 ������ ���� 3�� �ߺ������ʰ� �Է�
			// ex) ��ǻ�Ͱ� 1 2 3, ����ڰ� 1 3 2�ϋ�
			// 1��Ʈ����ũ 2��
			// ���ڿ� �ڸ����� ������ ��Ʈ����ũ, �ڸ����� �ٸ����� ���ڰ� ������ ��, 3��Ʈ����ũ�� �ɋ����� ��.
			// ��ǻ�ʹ� ó�� ���� ���ڴ� �ȹٳ�
			for (int i = 0; i < 3; ++i)
			{
				baseballCpu[i] = rand() % 9 + 1;
				for (int j = 0; j < i; ++j)
				{	// �ߺ��� �ٽ� rand()
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
					cout << i + 1 << "��° �� �Է� " << endl;
					cin >> baseballPlayer[i];
					if (1 > baseballPlayer[i] || baseballPlayer[i] > 9)
					{
						cout << "���� ������ ���" << endl;
						--i;
						continue;
					}
					for (int j = 0; j < i; j++)
					{
						if (baseballPlayer[i] == baseballPlayer[j])
						{
							--i;
							cout << "���� �ߺ� ����ϴ�. �ٽ� �Է��ϼ���" << endl;
							break;
						}
					}
				}

				for (int i = 0; i < 3; i++)
					cout << baseballCpu[i]<< ", ";
				cout << endl;


				for (int i = 0; i < 3; i++)
				{	// ��Ʈ����ũ �˻�
					if (baseballCpu[i] == baseballPlayer[i])
					{
						++strikeCount;
						cout << strikeCount << "��Ʈ����ũ" << endl;
						if (strikeCount >= 3)
						{
							cout << "���� �ƿ� ! ���� ����" << endl;
							isWinBaseBall = true;
							isGameOver = true;
							break;
						}
					}


					// �� �˻�
					for (int j = 0; j < 3; j++)
					{
						if (baseballCpu[i] == baseballPlayer[j])
						{
							++ballCount;
							cout << ballCount << "��!" << endl;
							if (ballCount >= 4)
							{
								cout << "4��! �й� " << endl;
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