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
	// 구조체를 써서 성적표 프로그램
	// 1. 성적표 입력  2. 성적표 출력   3. 성적표 검색
	int iChoice = 0;
	Student students[STUDENT_MAX] = {};
	while (true)
	{
		system("cls");
		cout << "1. 성적표 입력" << endl;
		cout << "2. 성적표 출력" << endl;
		cout << "3. 성적표 검색" << endl;
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
			cout << "이름을 입력하세요" << endl;
			cin >> student[iIndex].szName;
			if (strlen(student[iIndex].szName) >= 32)
			{
				iException = 1;
				continue;
			}


		case 2:
			cout << "국어 성적을 입력하세요" << endl;
			cin >> student[iIndex].iKor;
			if (student[iIndex].iKor < 0 || student[iIndex].iKor >100)
			{
				iException = 2;
				continue;
			}


		case  3:
			cout << "영어 성적을 입력하세요" << endl;
			cin >> student[iIndex].iEng;
			if (student[iIndex].iEng < 0 || student[iIndex].iEng > 100)
			{
				iException = 3;
				continue;
			}


		case 4:
			cout << "수학 성적을 입력하세요" << endl;
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

	cout << "입력완료" << endl;
	system("pause");
}


void PrintStudent(Student* student)
{
	system("cls");
	for (int i = 0; i < STUDENT_MAX; ++i)
	{
		if (!strlen(student[i].szName))
		{
			cout << "학생 없음" << endl;
			break;
		}
		cout << "================================" << endl;
		cout << i + 1 << "번 학생" << endl;
		cout << "이름 : " << student[i].szName << endl;
		cout << "국어 : " << student[i].iKor << endl;
		cout << "영어 : " << student[i].iEng << endl;
		cout << "수학 : " << student[i].iMath << endl;
		cout << "총점 : " << student[i].iTotal << endl;
		cout << "평균 : " << student[i].iAver << endl;
		cout << "================================" << endl << endl;
	}
	system("pause");
}


void SearchStudent(Student * student)
{
	system("cls");
	char szInsert[32];
	cout << "검색할 이름 입력" << endl;
	cin >> szInsert;
	for (int i = 0; i < STUDENT_MAX; ++i)
	{
		if (!strcmp(student[i].szName, szInsert))
		{
			cout << i + 1 << "번 학생" << endl;
			cout << "이름 : " << student[i].szName << endl;
			cout << "국어 : " << student[i].iKor << endl;
			cout << "영어 : " << student[i].iEng << endl;
			cout << "수학 : " << student[i].iMath << endl;
			cout << "총점 : " << student[i].iTotal << endl;
			cout << "평균 : " << student[i].iAver << endl;
			cout << "================================" << endl << endl;
			break;
		}
		else if (i == 4)
			cout << "404 Not Found" << endl;
	}
	system("pause");
}
