#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

enum GAME_STATE
{
	JobSelect,
	DifficutlySelector,
	Battle
};

enum PLAYER_JOB
{
	Warrior =1,
	Wizard,
	Thief
};

enum DIFFICUTLY
{
	Easy = 1,
	Normal,
	Hard
};

enum BATTLE_CHOICE
{
	Attack = 1,
	RunAway
};

struct Player
{
	PLAYER_JOB m_playerJob;
	string m_szName;
	int m_iLevel;
	int m_iCurrentHealth;
	int m_iMaxHealth;
	int m_iCurrentExp;
	int m_iMaxExp;
	int m_iAttackDamege;
	bool m_bIsDead;
};

struct Monster
{
	string m_szName;
	int m_iCurrentHealth;
	int m_iMaxHealth;
	int m_iAttackDamege;
	bool m_bIsDead;
};


bool InitPlayer(int& iJobSelector, Player* player);
bool InitMonster(int& iDifficultySelector, Monster* monster);
bool CheckDifficultySelected(int& iDifficultySelector);
bool FightBattle(int& iBattleSelector, Player* player, Monster* Monster);
void LevelUpPlayer(Player* player);
void DrawIntro();
void DrawJobSelect();
void DrawDifficulty();
void DrawBattle(Player* player, Monster* monster);


//  ########################################################################
//	
//
//
//  ########################################################################


void main()
{	// ����1. text rpg
	Player player;
	GAME_STATE gameState	= JobSelect;
	int iJobSelector		= 0;
	int iDifficultySelector = 0;
	int iBattleSelector		= 0;
	bool isSelected			= false;
	bool isGameOver			= false;

	//DrawIntro();
	while (!isGameOver)
	{
		switch (gameState)
		{
		case JobSelect:
			isSelected = false;
			while (!isSelected)
			{
				DrawJobSelect();
				cin >> iJobSelector;
				isSelected = InitPlayer(iJobSelector, &player);
				std::system("cls");
			}
			gameState = DifficutlySelector;
			break;


		case DifficutlySelector:
			isSelected = false;
			while (!isSelected)
			{
				DrawDifficulty();
				cin >> iDifficultySelector;
				isSelected = CheckDifficultySelected(iDifficultySelector);
				std::system("cls");
			}
			gameState = Battle;
			break;


		case Battle:
			Monster* monster = new Monster;
			isSelected = false;
			InitMonster(iDifficultySelector, monster);
			while (!isSelected)
			{
				DrawBattle(&player, monster);
				cin >> iBattleSelector;
				isSelected = !FightBattle(iBattleSelector, &player, monster);
				system("cls");
			}
			gameState = DifficutlySelector;
			break;
		}
	}
}

bool InitPlayer(int& iJobSelector, Player* player)
{
	switch (PLAYER_JOB(iJobSelector))
	{
	case Warrior:
		player->m_playerJob = Warrior;	
		player->m_szName = "����";
		player->m_iLevel = 1;
		player->m_iAttackDamege = 10;
		player->m_iMaxExp = 100;
		player->m_iCurrentExp = 0;
		player->m_iMaxHealth = 200;
		player->m_iCurrentHealth = player->m_iMaxHealth;
		return true;


	case Wizard:
		player->m_playerJob = Wizard;
		player->m_szName = "������";
		player->m_iLevel = 1;
		player->m_iAttackDamege = 20;
		player->m_iMaxExp = 100;
		player->m_iCurrentExp = 0;
		player->m_iMaxHealth = 100;
		player->m_iCurrentHealth = player->m_iMaxHealth;
		return true;


	case Thief:
		player->m_playerJob = Thief;
		player->m_szName = "����";
		player->m_iLevel = 1;
		player->m_iAttackDamege = 15;
		player->m_iMaxExp = 100;
		player->m_iCurrentExp = 0;
		player->m_iMaxHealth = 150;
		player->m_iCurrentHealth = player->m_iMaxHealth;
		return true;


	default:
		return false;
	}
}

bool InitMonster(int& iDifficultySelector, Monster* monster)
{
	switch (DIFFICUTLY(iDifficultySelector))
	{
	case Easy:
		monster->m_szName = "���";
		monster->m_iMaxHealth = 50;
		monster->m_iCurrentHealth = monster->m_iMaxHealth;
		monster->m_iAttackDamege = 5;
		return true;
		break;


	case Normal:
		monster->m_szName = "�߰���";
		monster->m_iMaxHealth = 100;
		monster->m_iCurrentHealth = monster->m_iMaxHealth;
		monster->m_iAttackDamege = 15;
		return true;
		break;


	case Hard:
		monster->m_szName = "���� ��";
		monster->m_iMaxHealth = 500;
		monster->m_iCurrentHealth = monster->m_iMaxHealth;
		monster->m_iAttackDamege = 20;
		return true;
		break;


	default:
		return false;
		break;
	}
}

bool CheckDifficultySelected(int& iDifficultySelector)
{
	switch (DIFFICUTLY(iDifficultySelector))
	{
	case Easy:
		return true;
		break;


	case Normal:
		return true;
		break;


	case Hard:
		return true;
		break;


	default:
		return false;
		break;
	}
}

bool FightBattle(int& iBattleSelector, Player* player, Monster* monster)
{
	switch (BATTLE_CHOICE(iBattleSelector))
	{
	case Attack:
		player->m_iCurrentHealth -= monster->m_iAttackDamege;
		monster->m_iCurrentHealth -= player->m_iAttackDamege;
		break;

	case RunAway:
		return false;

	default:
		break;
	}


	if (player->m_iCurrentHealth <= 0)
	{
		player->m_iCurrentHealth = player->m_iMaxHealth;
		cout << "�������� �й��߽��ϴ�" << endl;
		system("pause");
		return false;
	}

	if (monster->m_iCurrentHealth <= 0)
	{
		player->m_iCurrentExp += monster->m_iAttackDamege *10;// ���� ���ݷ�*10��ŭ ����ġ��
		cout << "�������� �¸��߽��ϴ�" << endl;
		system("pause");
		if (player->m_iCurrentExp >= player->m_iMaxExp)
			LevelUpPlayer(player);
		return false;
	}
	return true;
}

void LevelUpPlayer(Player* player)
{
	++player->m_iLevel;
	player->m_iCurrentExp = 0;
	player->m_iMaxExp = player->m_iLevel * 100;
	player->m_iMaxHealth += 50;
	player->m_iCurrentHealth = player->m_iMaxHealth;
	player->m_iAttackDamege += 15;
	cout << "������ �¸��߽��ϴ�" << endl;
	system("pause");
}

void DrawIntro()
{
	while (!_kbhit())
	{
		cout << "��Ʈ�� �ӽ�" << endl;
		system("cls");
	}
}

void DrawJobSelect()
{
	cout << "**********************************" << endl;
	cout << endl;
	cout << "	������ �����ϼ���" << endl;
	cout << "  1.����  2.������  3.����	 " << endl;
	cout << endl;
	cout << "**********************************" << endl;
}

void DrawDifficulty()
{
	cout << "**********************************" << endl;
	cout << endl;
	cout << "\t���̵��� �������ּ���" << endl;
	cout << "1.����\t2.����\t3.�����" << endl;
	cout << endl;
	cout << "**********************************" << endl;
}

void DrawBattle(Player* player, Monster* monster)
{
	cout << "**********************************" << endl;
	cout << "����\t:\t" << player->m_szName << endl;
	cout << "����\t:\t" << player->m_iLevel << endl;
	cout << "���ݷ�\t:\t" << player->m_iAttackDamege << endl;
	cout << "ü��\t:\t" << player->m_iCurrentHealth << "/" << player->m_iMaxHealth << endl;
	cout << "����ġ\t:\t" << player->m_iCurrentExp << "/" << player->m_iMaxExp << endl;
	cout << "**********************************" << endl << endl << endl;
	cout << "**********************************" << endl;
	cout << "�̸�\t:\t" << monster->m_szName << endl;
	cout << "���ݷ�\t:\t" << monster->m_iAttackDamege << endl;
	cout << "ü��\t:\t" << monster->m_iCurrentHealth << "/" << monster->m_iMaxHealth << endl;
	cout << "**********************************" << endl;
	cout << "1.����\t2.����\t" << endl;
}
