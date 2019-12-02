#include <iostream>

using namespace std;

const int g_iMaxCount = 3;

typedef struct tagGrade
{
	char szName[32];
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAver;
}GRADE;

void InputGrade(GRADE ptr[]);
void PrintGrade(GRADE ptr[]);
void SearchGrade(GRADE ptr[]);
void BubbleSort(GRADE ptr[]);
void RemoveGrade(GRADE ptr[]);

void main()
{

	GRADE tGradeArr[g_iMaxCount] = {};
	int iSelect = 0;

	void(*pFunc[])(GRADE*) = { InputGrade, PrintGrade, SearchGrade, RemoveGrade };

	while (true)
	{
		system("cls");

		cout << "1.입력 2.출력 3.검색 4.삭제 5.종료" << endl;
		cin >> iSelect;

		switch (iSelect)
		{	
		case 5:
			return;
		}

		pFunc[iSelect - 1](tGradeArr);

		system("pause");
	}
}

void InputGrade(GRADE ptr[])
{
	for (int i = 0; i < g_iMaxCount; ++i)
	{
		cout << "이름: ";
		cin >> ptr[i].szName;

		cout << "국어: ";
		cin >> ptr[i].iKor;

		cout << "영어: ";
		cin >> ptr[i].iEng;

		cout << "수학: ";
		cin >> ptr[i].iMath;

		ptr[i].iTotal = ptr[i].iKor + ptr[i].iEng + ptr[i].iMath;
		ptr[i].fAver = float(ptr[i].iTotal) / 3;
	}

	BubbleSort(ptr);
}

void PrintGrade(GRADE ptr[])
{
	if (!strcmp("", ptr[0].szName))
	{
		cout << "성적표가 존재하지 않습니다." << endl;
		return;
	}

	for (int i = 0; i < g_iMaxCount; ++i)
	{
		if (!strcmp("", ptr[i].szName))
			continue;

		cout << "이름\t국어\t영어\t수학\t총점\t평균" << endl;
		cout << ptr[i].szName << '\t' << ptr[i].iKor << '\t' 
			<< ptr[i].iEng << '\t' << ptr[i].iMath << '\t' 
			<< ptr[i].iTotal << '\t' << ptr[i].fAver << endl;
	}
}

void SearchGrade(GRADE ptr[])
{
	char szSearch[32] = "";

	cout << "검색: ";
	cin >> szSearch;

	for (int i = 0; i < g_iMaxCount; ++i)
	{
		if(strcmp(szSearch, ptr[i].szName))
			continue;

		cout << "이름\t국어\t영어\t수학\t총점\t평균" << endl;
		cout << ptr[i].szName << '\t' << ptr[i].iKor << '\t'
			<< ptr[i].iEng << '\t' << ptr[i].iMath << '\t'
			<< ptr[i].iTotal << '\t' << ptr[i].fAver << endl;
	}
}

void BubbleSort(GRADE ptr[])
{
	for (int i = 0; i < g_iMaxCount; ++i)
	{
		for (int j = 0; j < g_iMaxCount - 1; ++j)
		{
			if (ptr[j].fAver < ptr[j + 1].fAver)
			{
				GRADE tTemp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = tTemp;
			}
		}
	}
}

void RemoveGrade(GRADE ptr[])
{
	if (!strcmp("", ptr[0].szName))
	{
		cout << "성적표가 존재하지 않습니다." << endl;
		return;
	}

	for (int i = 0; i < g_iMaxCount; ++i)
	{
		if (!strcmp("", ptr[i].szName))
			continue;

		cout << i << "번) " << ptr[i].szName << "\t\t" << ptr[i].iKor << '\t'
			<< ptr[i].iEng << '\t' << ptr[i].iMath << '\t'
			<< ptr[i].iTotal << '\t' << ptr[i].fAver << endl;
	}

	int iSelect = 0;

	cout << "선택: ";
	cin >> iSelect;	

	int iCount = g_iMaxCount - (iSelect + 1);

	memmove(ptr + iSelect, ptr + iSelect + 1, sizeof(GRADE) * iCount);
	memset(ptr + (g_iMaxCount - 1), 0, sizeof(GRADE));
}
