#include <iostream>

using namespace std;

int Add(int a, int b);
int Min(int a, int b);
int Mul(int a, int b);
int Div(int a, int b);

void main()
{	
	int iA = 0, iB = 0, iSelect = 0;

	cout << "2�� ���� �Է�: ";
	cin >> iA >> iB;

	cout << "1.���� 2.���� 3.���� 4.������" << endl;
	cin >> iSelect;

	// �Լ� ������ �迭
	int(*ptr[4])(int, int) = { Add, Min, Mul, Div };	

	cout << "���: " << ptr[iSelect - 1](iA, iB) << endl;


	/////////////////////////////////////////////////////////////////////

	/*int iA = 0, iB = 0, iSelect = 0;

	cout << "2�� ���� �Է�: ";
	cin >> iA >> iB;

	cout << "1.���� 2.���� 3.���� 4.������" << endl;
	cin >> iSelect;

	int(*ptr)(int, int) = nullptr;

	switch (iSelect)
	{
	case 1:
		ptr = Add;
		break;
	case 2:
		ptr = Min;
		break;
	case 3:
		ptr = Mul;
		break;
	case 4:
		ptr = Div;
		break;
	}

	cout << "���: " << ptr(iA, iB) << endl;*/
}

int Add(int a, int b)
{
	return a + b;
}

int Min(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

int Div(int a, int b)
{
	return a / b;
}