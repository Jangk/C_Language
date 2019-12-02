#include <iostream>
#define STUDENT_MAX 5
using namespace std;


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

void main()
{
	// ����ü�� �Ἥ ����ǥ ���α׷�
	// 1. ����ǥ �Է�  2. ����ǥ ���   3. ����ǥ �˻�
	int iChoice = 0;
	Student students[STUDENT_MAX] = {};
	while (true)
	{
		system("cls");
		cout << "1. ����ǥ �Է�" << endl;
		cout << "2. ����ǥ ���" << endl;
		cout << "3. ����ǥ �˻�" << endl;
		cin >> iChoice;
		switch (iChoice)
		{
		case 1:
			InsertStudent(students);
			break;

		case 2:
			PrintStudent(students);
			break;

		case 3:
			SearchStudent(students);
			break;
		}
	}
}


void InsertStudent(Student* student)
{
	static int iIndex = 0;
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
