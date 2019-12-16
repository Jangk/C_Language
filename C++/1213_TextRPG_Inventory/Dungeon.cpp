#include "pch.h"
#include "Dungeon.h"
#include "Monster.h"



void Dungeon::CreateMonster(int iDifficult)
{
	m_Monster = new Monster;
	m_Monster->Init();
	switch (iDifficult)
	{
	case 1:
		m_Monster->SetInfo("������", 5, 50, 50, 0, 100, 1);
		break;
	case 2:
		m_Monster->SetInfo("��ũ", 15, 250, 150, 5, 500, 2);
			break;
	case 3:
		m_Monster->SetInfo("�巡��", 40, 550, 400, 10, 1000, 3);
			break;
	}
}


void Dungeon::Play()
{
	int iInsert = 0;
	bool isPlay = true;

	while (isPlay)
	{
		system("cls");
		cout << "���̵� ����" << endl;
		cin >> iInsert;
		switch (iInsert)
		{
		case 1:
		case 2:
		case 3:
			CreateMonster(iInsert);
			isPlay = false;
			break;
		}
	}

	isPlay = true;

	while (isPlay)
	{
		system("cls");
		Render();
		cout << "1.����. 2.����" << endl;
		cin >> iInsert;
		switch (iInsert)
		{
		case 1:
			m_Player->SetDamage(*m_Monster);
			m_Monster->SetDamage(*m_Player);
			if (m_Player->IsDead())
			{
				dynamic_cast<Player*>(m_Player)->Reset();
				isPlay = false;
			}
			else if(m_Monster->IsDead())
			{
				dynamic_cast<Player*>(m_Player)->FightWin(*m_Monster);
				isPlay = false;
			}
			break;


		case 2:
			return;
		}
	}
	Release();
}


void Dungeon::Render()
{
	m_Player->Render();
	cout << "*******************************" << endl;
	m_Monster->Render();
}


void Dungeon::Release()
{
	SAFE_DELETE(m_Monster);
}
