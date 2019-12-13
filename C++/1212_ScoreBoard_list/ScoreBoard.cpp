#include "pch.h"
#include "ScoreBoard.h"

void ScoreBoard::Input()
{
	Student* temp = new Student;
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
			m_Student.push_back(temp);
			m_Student.sort(StudentCmp);
			return;
		}
	}
}


void ScoreBoard::Renderer()
{
	for (auto iter = m_Student.begin(); iter != m_Student.end(); ++iter)
	{
		cout << "---------------------------" << endl;
		(*iter)->Render();
		cout << "---------------------------" << endl;
	}
	system("pause");
}


void ScoreBoard::Search()
{
	char szName[32];
	int iCount = 0;
	cout << "지울 학생 이름 : ";
	cin >> szName;

	// 이 식의 조건을 들어있는 최대 원소값까지로 바꿔야댐
	for (auto iter = m_Student.begin(); iter!= m_Student.end(); ++iter)
	{
		if (!strcmp((*iter)->GetInfo().szName, szName))
		{
			m_Student.erase(iter);
			break;
		}
	}
}


void ScoreBoard::Release()
{
	list<Student*>::iterator temp;
	for (auto iter = m_Student.begin(); iter != m_Student.end(); ++iter)
	{
		temp = iter;
		iter = m_Student.erase(iter);
		delete(*temp);
	}
	m_Student.clear();
}


ScoreBoard::ScoreBoard()
{

}


ScoreBoard::~ScoreBoard()
{
	Release();
}


bool StudentCmp(Student* st1, Student* st2)
{
	return st1->GetInfo().fAver < st2->GetInfo().fAver;
}
