#include <iostream>

using namespace std;

int Func()
{
	// �������� (static ����)
	// Data������ ��ϵǴ� ����. ���α׷� ���� �� �Ҵ�, ���α׷� ���� �� �Ҹ� (��ȯ)
	static int iSum;  // �ڵ� 0�ʱ�ȭ. ����� �ʱ�ȭ�� ���� �ѹ��� �̷������. ���α׷� ���� ��
	return ++iSum;	
}

void main()
{
	int iResult = 0;

	for (int i = 0; i < 5; ++i)
		iResult = Func();

	cout << iResult << endl;

	// ���������� Data������ ��ϵǴ��� ������ ���� Ư���� ���� �ִ�. 
	// (����� ���������� ���� ����)
	// cout << iSum << endl; // Error
}