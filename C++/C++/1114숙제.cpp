#include <iostream>
#define STUDENT_MAX 5
using namespace std;

enum GRADE_SELECT
{
	INSERT =1,
	PRINT,
	SEARCH,
	SEARCH_DELETE
};

struct Student
{
	char szName[32];
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float iAver;
};

void InsertStudent(Student* student);
void PrintStudent(Student* student);
void SearchStudent(Student* student);
void SearchDeleteStudent(Student* student);
void SortingStudent(Student* students);
int iIndex = 0;
void main()
{
	// ���� 1. ����ǥ ���α׷� ���׷��̵�
	// ���� 2. ����ǥ�� ����Ҷ� ��� ���� ���� �������� �����Ͽ� ���.
	// ���� 3. �˻� ������� �߰�.
	int iChoice = 0;
	GRADE_SELECT eGradeSelect;
	Student students[STUDENT_MAX] = {};
	while (true)
	{
		system("cls");
		cout << "1. ����ǥ �Է�" << endl;
		cout << "2. ����ǥ ���" << endl;
		cout << "3. ����ǥ �˻�" << endl;
		cout << "4. ����ǥ ����" << endl;
		cin >> iChoice;
		eGradeSelect = (GRADE_SELECT)iChoice;
		switch (eGradeSelect)
		{
		case INSERT:
			InsertStudent(students);
			break;

		case PRINT:
			PrintStudent(students);
			break;

		case SEARCH:
			SearchStudent(students);
			break;

		case SEARCH_DELETE:
			SearchDeleteStudent(students);
		}
	}
}


void InsertStudent(Student* student)
{
	int iException = 0;

	while (true)
	{
		system("cls");
		switch (iException)
		{
		case 0:
		case 1:
			cout << "�̸��� �Է��ϼ���" << endl;
			cin >> student[iIndex].szName;
			if (strlen(student[iIndex].szName) >= 32)
			{
				iException = 1;
				continue;
			}


		case 2:
			cout << "���� ������ �Է��ϼ���" << endl;
			cin >> student[iIndex].iKor;
			if (student[iIndex].iKor < 0 || student[iIndex].iKor >100)
			{
				iException = 2;
				continue;
			}


		case  3:
			cout << "���� ������ �Է��ϼ���" << endl;
			cin >> student[iIndex].iEng;
			if (student[iIndex].iEng < 0 || student[iIndex].iEng > 100)
			{
				iException = 3;
				continue;
			}


		case 4:
			cout << "���� ������ �Է��ϼ���" << endl;
			cin >> student[iIndex].iMath;
			if (student[iIndex].iMath < 0 || student[iIndex].iMath >100)
			{
				iException = 4;
				continue;
			}
		}
		student[iIndex].iTotal = student[iIndex].iKor + student[iIndex].iEng + student[iIndex].iMath;
		student[iIndex].iAver = student[iIndex].iTotal / 3.0f;
		if (++iIndex == STUDENT_MAX)
			iIndex = 0;
		break;
	}
	SortingStudent(student);
	cout << "�Է¿Ϸ�" << endl;
	system("pause");
}


void PrintStudent(Student* student)
{
	system("cls");
	for (int i = 0; i < STUDENT_MAX; ++i)
	{
		if (!strlen(student[i].szName))
		{
			cout << "�л� ����" << endl;
			break;
		}
		cout << "================================" << endl;
		cout << i + 1 << "�� �л�" << endl;
		cout << "�̸� : " << student[i].szName << endl;
		cout << "���� : " << student[i].iKor << endl;
		cout << "���� : " << student[i].iEng << endl;
		cout << "���� : " << student[i].iMath << endl;
		cout << "���� : " << student[i].iTotal << endl;
		cout << "��� : " << student[i].iAver << endl;
		cout << "================================" << endl << endl;
	}
	system("pause");
}


void SearchStudent(Student * student)
{
	system("cls");
	char szInsert[32];
	cout << "�˻��� �̸� �Է�" << endl;
	cin >> szInsert;
	for (int i = 0; i < STUDENT_MAX; ++i)
	{
		if (!strcmp(student[i].szName, szInsert))
		{
			cout << i + 1 << "�� �л�" << endl;
			cout << "�̸� : " << student[i].szName << endl;
			cout << "���� : " << student[i].iKor << endl;
			cout << "���� : " << student[i].iEng << endl;
			cout << "���� : " << student[i].iMath << endl;
			cout << "���� : " << student[i].iTotal << endl;
			cout << "��� : " << student[i].iAver << endl;
			cout << "================================" << endl << endl;
			break;
		}
		else if (i == 4)
			cout << "404 Not Found" << endl;
	}
	system("pause");
}


void SearchDeleteStudent(Student* student)
{
	system("cls");
	char szInsert[32];
	cout << "�˻��� �̸� �Է�" << endl;
	cin >> szInsert;
	for (int i = 0; i < STUDENT_MAX; ++i)
	{
		if (!strcmp(student[i].szName, szInsert))
		{
			for (int j = i; j < STUDENT_MAX-1; ++j)
				student[j] = student[j + 1];
			--iIndex;
			break;
		}
		else if (i == 4)
			cout << "404 Not Found" << endl;
	}
	system("pause");
}


void SortingStudent(Student* student)
{
	for (int i = 0; i < STUDENT_MAX; ++i)
	{
		for (int j = i; j < STUDENT_MAX; ++j)
		{
			if (!strlen(student[j].szName))
				break;
				
			if (student[i].iAver < student[j].iAver)
			{
				Student temp = student[i];
				student[i] = student[j];
				student[j] = temp;
			}
		}
	}
}