#include <iostream>

using namespace std;

const int g_iCount = 3;

void PrintArray(int(*ptr)[g_iCount]);
void RotationArray(int(*ptr)[g_iCount]);

void main()
{
	int iArr[g_iCount][g_iCount];

	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
		{
			iArr[i][j] = (i * g_iCount + j) + 1;
		}
	}

	PrintArray(iArr);

	RotationArray(iArr);
	PrintArray(iArr);
}

void PrintArray(int(*ptr)[g_iCount])
{
	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
			cout << ptr[i][j] << '\t';

		cout << endl;
	}

	cout << "-----------------------------" << endl;
}

void RotationArray(int(*ptr)[g_iCount])
{
	int iAfter[g_iCount][g_iCount];

	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
			iAfter[j][(g_iCount - 1) - i] = ptr[i][j];
	}

	for (int i = 0; i < g_iCount; ++i)
	{
		for (int j = 0; j < g_iCount; ++j)
			ptr[i][j] = iAfter[i][j];
	}
}