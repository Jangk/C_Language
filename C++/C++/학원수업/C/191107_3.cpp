#include <iostream>

using namespace std;

// ##1. ��������
// Stack������ �Ҵ�ȴ�. ������������ "�Ű�����"�� ���Եȴ�.
// Stack������ LIFO �����̴�. LIFO == Last In First Out (���Լ���)

int Add(int a, int b) 
{
	int iResult = a + b;
	return iResult; 
}

void main()
{
	// a�� b, iResult�� Add�Լ� ������ ����� ���������̹Ƿ� main�Լ� �������� ������ �� ����.
	// a = 10, b = 20; // Error
	// iResult = 200; // Error

	// 
	int a = 10, b = 20;
	int iResult = 0;

	iResult = Add(a, b);
}