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
{	// 과제1. text rpg
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
		player->m_szName = "전사";
		player->m_iLevel = 1;
		player->m_iAttackDamege = 10;
		player->m_iMaxExp = 100;
		player->m_iCurrentExp = 0;
		player->m_iMaxHealth = 200;
		player->m_iCurrentHealth = player->m_iMaxHealth;
		return true;


	case Wizard:
		player->m_playerJob = Wizard;
		player->m_szName = "마법사";
		player->m_iLevel = 1;
		player->m_iAttackDamege = 20;
		player->m_iMaxExp = 100;
		player->m_iCurrentExp = 0;
		player->m_iMaxHealth = 100;
		player->m_iCurrentHealth = player->m_iMaxHealth;
		return true;


	case Thief:
		player->m_playerJob = Thief;
		player->m_szName = "도적";
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
		monster->m_szName = "잡몹";
		monster->m_iMaxHealth = 50;
		monster->m_iCurrentHealth = monster->m_iMaxHealth;
		monster->m_iAttackDamege = 5;
		return true;
		break;


	case Normal:
		monster->m_szName = "중간몹";
		monster->m_iMaxHealth = 100;
		monster->m_iCurrentHealth = monster->m_iMaxHealth;
		monster->m_iAttackDamege = 15;
		return true;
		break;


	case Hard:
		monster->m_szName = "보스 몹";
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
		cout << "전투에서 패배했습니다" << endl;
		system("pause");
		return false;
	}

	if (monster->m_iCurrentHealth <= 0)
	{
		player->m_iCurrentExp += monster->m_iAttackDamege *10;// 몬스터 공격력*10만큼 경험치줌
		cout << "전투에서 승리했습니다" << endl;
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
	cout << "레벨업 승리했습니다" << endl;
	system("pause");
}

void DrawIntro()
{
	while (!_kbhit())
	{
		cout << "인트로 임시" << endl;
		system("cls");
	}
}

void DrawJobSelect()
{
	cout << "**********************************" << endl;
	cout << endl;
	cout << "	직업을 선택하세요" << endl;
	cout << "  1.전사  2.마법사  3.도적	 " << endl;
	cout << endl;
	cout << "**********************************" << endl;
}

void DrawDifficulty()
{
	cout << "**********************************" << endl;
	cout << endl;
	cout << "\t난이도를 선택해주세요" << endl;
	cout << "1.쉬움\t2.보통\t3.어려움" << endl;
	cout << endl;
	cout << "**********************************" << endl;
}

void DrawBattle(Player* player, Monster* monster)
{
	cout << "**********************************" << endl;
	cout << "직업\t:\t" << player->m_szName << endl;
	cout << "레벨\t:\t" << player->m_iLevel << endl;
	cout << "공격력\t:\t" << player->m_iAttackDamege << endl;
	cout << "체력\t:\t" << player->m_iCurrentHealth << "/" << player->m_iMaxHealth << endl;
	cout << "경험치\t:\t" << player->m_iCurrentExp << "/" << player->m_iMaxExp << endl;
	cout << "**********************************" << endl << endl << endl;
	cout << "**********************************" << endl;
	cout << "이름\t:\t" << monster->m_szName << endl;
	cout << "공격력\t:\t" << monster->m_iAttackDamege << endl;
	cout << "체력\t:\t" << monster->m_iCurrentHealth << "/" << monster->m_iMaxHealth << endl;
	cout << "**********************************" << endl;
	cout << "1.전투\t2.도주\t" << endl;
}
