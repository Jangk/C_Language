#include <iostream>

using namespace std;

// ##1. ��������
// Data������ ��ϵǴ� ������. ���α׷� ���� �� �Ҵ�ǰ� ���α׷� ���� �� �Ҹ�.
// ������ ������� ��𼭵� ������ �� �ִ�.
int iA = 100;

void FunA()
{
	iA = 200;
}

void FuncB()
{
	iA = 30;
}

void main()
{
	FunA();
	cout << iA << endl;

	FuncB();
	cout << iA << endl;
}