#include "ScoreBoard.h"


void ScoreBoard::InitScoreBoard(int iStudentsMax)
{
	m_iStudentsMax = iStudentsMax;
	m_CStudents = new Student[m_iStudentsMax];
	cout << "최대 학생수는 " << m_iStudentsMax << "명 입니다. " << endl;
}


void ScoreBoard::InsertStudents()
{
	string strName;
	int iKor = 0;
	int iEng = 0;
	int iMath = 0;
	int iException = 0;


	for (int i = 0; i < m_iStudentsMax; ++i)
	{
		if (m_CStudents[i].CheckEmptyStudent())
		{
			while (iException != -1)
			{
				switch (iException)
				{
				case 0:
					cout << "이름을 입력하세요 " << endl;
					cin >> strName;


				case 1:
					cout << "국어 성적을 입력하세요 " << endl;
					cin >> iKor;
					if (iKor < 0 || iKor>100)
					{
						iException = 1;
						continue;
					}


				case 2:
					cout << "영어 성적을 입력하세요 " << endl;
					cin >> iEng;
					if (iEng < 0 || iEng>100)
					{
						iException = 2;
						continue;
					}


				case 3:
					cout << "수학 성적을 입력하세요 " << endl;
					cin >> iMath;
					if (iMath < 0 || iMath>100)
					{
						iException = 3;
						continue;
					}
					m_CStudents[i].InitStudent(strName, iKor, iEng, iMath);
					SortScoreBoard();
					iException = -1;
					return;
				}
			}
		}
	}

	// 모두 꽉차있으면
	cout << "학생수가 최대치 입니다." << endl;
}


void ScoreBoard::PritnStudents()
{
	for (int i = 0; i < m_iStudentsMax; ++i)
	{
		if (m_CStudents[i].CheckEmptyStudent())
			break;
		cout << "=============================" << endl;
		m_CStudents[i].PrintStudent();
		cout << "=============================" << endl;
	}
}


void ScoreBoard::SearchStudents(string strName)
{
	for (int i = 0; i < m_iStudentsMax; ++i)
	{
		if (m_CStudents[i].CheckEmptyStudent())
			break;

		if (m_CStudents[i].GetName() == strName)
		{
			cout << "=============================" << endl;
			m_CStudents[i].PrintStudent();
			cout << "=============================" << endl;
			return;
		}
	}
	cout << "해당 학생을 찾지 못했습니다." << endl;
}


void ScoreBoard::SearchDelete(string strName)
{
	for (int i = 0; i < m_iStudentsMax; ++i)
	{
		if (m_CStudents[i].CheckEmptyStudent())
			break;

		if (m_CStudents[i].GetName() == strName)
		{
			for (int j = i; j < m_iStudentsMax; ++j)
			{
				if (m_CStudents[j + 1].CheckEmptyStudent() || (j + 1) == m_iStudentsMax)
				{
					m_CStudents[j].ClearStudent();
					return;
				}
				m_CStudents[j] = m_CStudents[j+1];
				m_CStudents[j + 1].ClearStudent();
				return;
			}
		}
	}
	cout << "못찾음" << endl;
}


void ScoreBoard::AddStudentsMax(int iVal)
{
	int lastMax = m_iStudentsMax;
	Student* instance = m_CStudents;
	
	
	m_iStudentsMax += iVal;
	m_CStudents = new Student[m_iStudentsMax];
	//memcpy_s(m_CStudents, sizeof(Student)*(m_iStudentsMax),
	//		 instance   , sizeof(Student)*lastMax);
	for (int i = 0; i < lastMax; ++i)
		m_CStudents[i] = instance[i];
	delete[] instance;
}


void ScoreBoard::SortScoreBoard()
{
	for (int i = 0; i < m_iStudentsMax; ++i)
	{
		for (int j = i; j < m_iStudentsMax; ++j)
		{
			if (m_CStudents[j].CheckEmptyStudent())
				break;

			if (m_CStudents[i].GetAver() < m_CStudents[j].GetAver())
			{
				Student tempStudent = m_CStudents[i];
				m_CStudents[i] = m_CStudents[j];
				m_CStudents[j] = tempStudent;
			}
		}
	}
}


ScoreBoard::ScoreBoard() : m_CStudents(nullptr), m_iStudentsMax(0)
{
}


ScoreBoard::~ScoreBoard()
{
	
}
