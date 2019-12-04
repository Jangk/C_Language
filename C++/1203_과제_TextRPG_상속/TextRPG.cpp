#include "TextRPG.h"


TextRPG* TextRPG::instance = nullptr;


TextRPG* TextRPG::GetInstace()
{
	if (instance == nullptr)
		instance = new TextRPG;
	return instance;
}


void TextRPG::Init()
{
	m_CPlayer = new Player;
	m_CMonster = new Monster;
	int iSelector = 0;
	FILE* fp;
	
	while (true)
	{

		system("cls");
		cout << "직업을 선택하세요 " << endl;
		cout << "1.도적, 2.전사, 3.마법사, 4. 로드" << endl;
		cin >> iSelector;
		switch (iSelector)
		{
		case 1:
			m_CPlayer->Init("도적", 1, 150, 15);
			return;

		case 2:
			m_CPlayer->Init("전사", 1, 200, 10);
			return;

		case 3:
			m_CPlayer->Init("마법사", 1, 100, 20);
			return;

		case 4:
			fopen_s(&fp, "../textRPG.txt", "rb");
			fread(&m_CPlayer, sizeof(m_CPlayer), 1,  fp);
			fclose(fp);
			return;

		default:
			cout << "다시 입력하세요" << endl;
			break;
		}
	}
}


void TextRPG::Update()
{
	while (true)
	{
		ChoiceDifficult();
		Battle();
	}
}


void TextRPG::Release()
{
	delete instance;
	delete m_CPlayer;
	delete m_CMonster;
}


void TextRPG::ChoiceDifficult()
{
	int iSelector = 0;
	while (true)
	{
		system("cls");
		cout << "난이도 선택" << endl;
		cout << "1.초급, 2. 중급. 3. 고급, 4. 저장" << endl;
		cin >> iSelector;

		switch (iSelector)
		{
		case 1:
			m_CMonster->Init("고블린", 1, 150, 10);
			return;
		case 2:
			m_CMonster->Init("오우거", 2, 300, 15);
			return;
		case 3:
			m_CMonster->Init("드래곤", 3, 500, 30);
			return;
		case 4:
			Save();
			return;
		default:
			cout << " 다시 입력" << endl;
			break;
		}
	}
}


void TextRPG::Battle()
{
	int iSelect = 0;
	while (true)
	{
		system("cls");
		cout << "=========================" << endl;
		m_CPlayer->Print();
		cout << "=========================" << endl;
		m_CMonster->Print();
		cout << "=========================" << endl;
		cout << "1. 공격, 2. 도주" << endl;
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_CPlayer->Fight(*m_CMonster);
			if (m_CPlayer->IsDead())
			{
				cout << "패배했습니다" << endl;
				return;
			}
			else if (m_CMonster->IsDead())
			{
				cout << "이겼습니다" << endl;
				m_CPlayer->LevelUp(m_CMonster->GetAtt());
				return;
			}
			break;

		case 2:
			cout << "빤스런 쳤습니다" << endl;
			system("pause");
			return;
		}
	}
	
}


void TextRPG::Save()
{
	FILE* fp;
	fopen_s(&fp, "../textRPG.txt", "wb");
	fwrite(&m_CPlayer, sizeof(m_CPlayer), 1, fp);
	fclose(fp);
}


TextRPG::TextRPG()
{
}


TextRPG::~TextRPG()
{
	Release();
}
