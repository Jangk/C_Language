#include "Character.h"


void Character::LevelUp()
{
	int iCount = 0;
	while (true)
	{
		if (m_iCurExp >= m_iMaxExp)
		{
			cout << "�������߽��ϴ�" << endl;
			system("pause");
			iCount++;
			m_iCurExp -= m_iMaxExp;
		}
		else
			break;
	}


	m_iLevel	+= iCount;
	m_iAtt		+= iCount *3;
	m_iMaxHp	+= iCount * 50;
	m_iCurHp	= m_iMaxHp;
	m_iMaxExp	+= iCount * 50;
}


void Character::LoadPlayer()
{
	
}


void Character::InitCharacter(bool bIsPlayable, int iMonsterLevel)	// MonsterLevelMax == 3
{
	int iSelector = 0;
	bool bIsLoop = true;
	if (bIsPlayable)
	{	// �÷��̾� ĳ����
		while (bIsLoop)
		{
			system("cls");
			cout << "������ �����ϼ��� " << endl;
			cout << "1. ����" << endl;
			cout << "2. ����" << endl;
			cout << "3. ������" << endl;
			cin >> iSelector;
			switch (iSelector)
			{
			case Warrior:
				m_strName	= "Warrior";
				m_iAtt		= 10;
				m_iMaxHp	= 200;
				bIsLoop		= false;
				m_iLevel = 1;
				m_iCurHp = m_iMaxHp;
				m_iMaxExp = 100;
				m_iCurExp = 0;
				break;


			case Theif:
				m_strName	= "Theif";
				m_iAtt		= 15;
				m_iMaxHp	= 100;
				bIsLoop		= false;
				m_iLevel = 1;
				m_iCurHp = m_iMaxHp;
				m_iMaxExp = 100;
				m_iCurExp = 0;
				break;


			case Wizard:
				m_strName	= "Wizard";
				m_iAtt		= 15;
				m_iMaxHp	= 100;
				bIsLoop		= false;
				m_iLevel = 1;
				m_iCurHp = m_iMaxHp;
				m_iMaxExp = 100;
				m_iCurExp = 0;
				break;


			default:
				break;
			}
		}
		
	}
	else
	{	// ����
		switch (iMonsterLevel+3)
		{
		case Lv1_Monster:
			m_strName	= "Rabbit";
			m_iLevel	= 1;
			m_iAtt		= 10;
			m_iMaxHp	= 50;
			m_iCurHp	= m_iMaxHp;
			m_iMaxExp	= 0;
			m_iCurExp	= 0;
			bIsLoop		= false;
			break;


		case Lv2_Monster:
			m_strName	= "Orc";
			m_iLevel	= 2;
			m_iAtt		= 25;
			m_iMaxHp	= 100;
			m_iCurHp	= m_iMaxHp;
			m_iMaxExp	= 0;
			m_iCurExp	= 0;
			bIsLoop		= false;
			break;


		case Lv3_Monster:
			m_strName	= "Dragon";
			m_iLevel	= 3;
			m_iAtt		= 50;
			m_iMaxHp	= 200;
			m_iCurHp	= m_iMaxHp;
			m_iMaxExp	= 0;
			m_iCurExp	= 0;
			bIsLoop		= false;
			break;


		default:
			cout << iMonsterLevel << "�� ������ ������ �� �����ϴ�." << endl;
			system("pause");
			break;
		}
	}
}


void Character::PrintState()
{
	cout << "================================" << endl;
	cout << "�̸�\t:\t" << m_strName << endl;
	cout << "����\t:\t" <<m_iLevel << endl;
	cout << "���ݷ�\t:\t" <<m_iAtt << endl;
	cout << "ü��\t:\t" << m_iCurHp << "/" << m_iMaxHp << endl;
	if(m_iMaxExp != 0)
		cout << "����ġ\t:\t" << m_iCurExp << "/" << m_iMaxExp << endl;
	cout << "================================" << endl;
}


bool Character::FightTarger(Character & Target)
{
	m_iCurHp		-= Target.m_iAtt;				// private�ε� �� �Ǵ��� ��
	Target.m_iCurHp -= m_iAtt;


	if (m_iCurHp <= 0)
	{	// ������ ����ġ �� ����.
		cout << "���� �й�" << endl;
		system("pause");
		m_iCurHp  = m_iMaxHp;
		m_iCurExp = 0;
		return true;
	}


	else if (Target.m_iCurHp <= 0)
	{
		m_iCurExp += Target.m_iAtt * 5;

		if (m_iCurExp >= m_iMaxExp)
			LevelUp();
		return true;
	}
	return false;
}


Character::Character()
{
}


Character::~Character()
{
}
