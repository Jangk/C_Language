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
		cout << "������ �����ϼ��� " << endl;
		cout << "1.����, 2.����, 3.������, 4. �ε�" << endl;
		cin >> iSelector;
		switch (iSelector)
		{
		case 1:
			m_CPlayer->Init("����", 1, 150, 15);
			return;

		case 2:
			m_CPlayer->Init("����", 1, 200, 10);
			return;

		case 3:
			m_CPlayer->Init("������", 1, 100, 20);
			return;

		case 4:
			fopen_s(&fp, "../textRPG.txt", "rb");
			fread(&m_CPlayer, sizeof(m_CPlayer), 1,  fp);
			fclose(fp);
			return;

		default:
			cout << "�ٽ� �Է��ϼ���" << endl;
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
		cout << "���̵� ����" << endl;
		cout << "1.�ʱ�, 2. �߱�. 3. ���, 4. ����" << endl;
		cin >> iSelector;

		switch (iSelector)
		{
		case 1:
			m_CMonster->Init("���", 1, 150, 10);
			return;
		case 2:
			m_CMonster->Init("�����", 2, 300, 15);
			return;
		case 3:
			m_CMonster->Init("�巡��", 3, 500, 30);
			return;
		case 4:
			Save();
			return;
		default:
			cout << " �ٽ� �Է�" << endl;
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
		cout << "1. ����, 2. ����" << endl;
		cin >> iSelect;

		switch (iSelect)
		{
		case 1:
			m_CPlayer->Fight(*m_CMonster);
			if (m_CPlayer->IsDead())
			{
				cout << "�й��߽��ϴ�" << endl;
				return;
			}
			else if (m_CMonster->IsDead())
			{
				cout << "�̰���ϴ�" << endl;
				m_CPlayer->LevelUp(m_CMonster->GetAtt());
				return;
			}
			break;

		case 2:
			cout << "������ �ƽ��ϴ�" << endl;
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
