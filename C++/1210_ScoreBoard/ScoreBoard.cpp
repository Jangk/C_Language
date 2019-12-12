#include "pch.h"
#include "ScoreBoard.h"


void ScoreBoard::Init(int iMax)
{
	m_iStudentsMax = iMax;
	m_CStudents.reserve(m_iStudentsMax);
}


void ScoreBoard::Insert()
{
	CStudent* temp = new CStudent;
	char szName[32];
	int kor = 0, eng = 0, math = 0, err = 0;
	while (true)
	{
		system("cls");
		switch (err)
		{
		case 0:
			cout << "이름 : ";
			cin >> szName;

		case 1:
			cout << "국어 : ";
			cin >> kor;
			if (kor > 100)
			{
				err = 1;
				continue;	
			}

		case 2:
			cout << "영어 : ";
			cin >> eng;
			if (eng > 100)
			{
				err = 2;
				continue;
			}

		case 3:
			cout << "수학 : ";
			cin >> math;
			if (math > 100)
			{
				err = 3;
				continue;
			}

		default:
			temp->Init(szName, kor, eng, math);
			m_CStudents.push_back(temp);
			Sort();
			return;
		}
	}
}


void ScoreBoard::Render()
{
	for (int i = 0; i < m_CStudents.size(); ++i)
	{
		cout << "---------------------------" << endl;
		m_CStudents[i]->Render();
		cout << "---------------------------" << endl;
	}
	system("pause");
}


void ScoreBoard::SearchDelete()
{
	char szName[32];
	int iCount = 0;
	cout << "지울 학생 이름 : ";
	cin >> szName;

	// 이 식의 조건을 들어있는 최대 원소값까지로 바꿔야댐
	for (int i = 0; i < m_CStudents.size(); ++i)
	{
		if (!strcmp(m_CStudents[i]->GetInfo().szName, szName))
		{
			m_CStudents.erase(m_CStudents.begin() + i);
			break;
		}
	}
}


void ScoreBoard::Sort()
{
	for (int i = 0; i < m_CStudents.size(); ++i)
	{
		for (int j = i; j < m_CStudents.size(); ++j)
		{
			if (m_CStudents[i]->GetInfo().fAver < m_CStudents[j]->GetInfo().fAver)
			{
				CStudent tempStudent = *m_CStudents[i];
				*m_CStudents[i] = *m_CStudents[j];
				*m_CStudents[j] = tempStudent;
			}
		}
	}
}


void ScoreBoard::Release()
{
	CStudent* temp;
	for (auto iter = m_CStudents.begin(); iter != m_CStudents.end();)
	{
		temp = *iter;
		iter = m_CStudents.erase(iter);
		delete(temp);
		//++iter;
	}
}


ScoreBoard::ScoreBoard() : m_iStudentsMax(0)
{
	
}


ScoreBoard::~ScoreBoard()
{
	Release();
}