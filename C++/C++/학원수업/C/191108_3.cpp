#include <iostream>

using namespace std;

// ##1. ����Ʈ �Ű����� (C++ �Լ� ����)
// ����Ʈ �Ű������� �ݵ�� �����ʺ��� ä�� ������.
int Add(int a, int b, int c = 0)
{
	return a + b + c;
}

void main()
{
	// ����Ʈ �Ű������� ���α׷����� �� �� �����ϰ� ������ �� �ְ� �����ش�.
	cout << Add(10, 20) << endl;		// c�� ���� 0�̴�.
	cout << Add(10, 20, 30) << endl;	// c�� ���� 30�̴�.
}