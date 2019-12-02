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

		cout << "1.�Է� 2.��� 3.�˻� 4.���� 5.����" << endl;
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
		cout << "�̸�: ";
		cin >> ptr[i].szName;

		cout << "����: ";
		cin >> ptr[i].iKor;

		cout << "����: ";
		cin >> ptr[i].iEng;

		cout << "����: ";
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
		cout << "����ǥ�� �������� �ʽ��ϴ�." << endl;
		return;
	}

	for (int i = 0; i < g_iMaxCount; ++i)
	{
		if (!strcmp("", ptr[i].szName))
			continue;

		cout << "�̸�\t����\t����\t����\t����\t���" << endl;
		cout << ptr[i].szName << '\t' << ptr[i].iKor << '\t' 
			<< ptr[i].iEng << '\t' << ptr[i].iMath << '\t' 
			<< ptr[i].iTotal << '\t' << ptr[i].fAver << endl;
	}
}

void SearchGrade(GRADE ptr[])
{
	char szSearch[32] = "";

	cout << "�˻�: ";
	cin >> szSearch;

	for (int i = 0; i < g_iMaxCount; ++i)
	{
		if(strcmp(szSearch, ptr[i].szName))
			continue;

		cout << "�̸�\t����\t����\t����\t����\t���" << endl;
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
		cout << "����ǥ�� �������� �ʽ��ϴ�." << endl;
		return;
	}

	for (int i = 0; i < g_iMaxCount; ++i)
	{
		if (!strcmp("", ptr[i].szName))
			continue;

		cout << i << "��) " << ptr[i].szName << "\t\t" << ptr[i].iKor << '\t'
			<< ptr[i].iEng << '\t' << ptr[i].iMath << '\t'
			<< ptr[i].iTotal << '\t' << ptr[i].fAver << endl;
	}

	int iSelect = 0;

	cout << "����: ";
	cin >> iSelect;	

	int iCount = g_iMaxCount - (iSelect + 1);

	memmove(ptr + iSelect, ptr + iSelect + 1, sizeof(GRADE) * iCount);
	memset(ptr + (g_iMaxCount - 1), 0, sizeof(GRADE));
}
