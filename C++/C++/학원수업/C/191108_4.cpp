#include <iostream>

using namespace std;

// ##1. ��� �Լ� (Recursive Function)
// �ڱ� �ڽ��� ȣ���ϴ� �Լ�.
// �󸶳� �ݺ����� �𸣴� ��Ȳ�� ���� �����ϴ�,
void Recursive(int n)
{	
	// ����Լ��� Ż�������� �ʼ���.
	// Ż�������� ���ٸ� Stack overflow ������ �Ͼ��.
	if (0 == n)
		return;

	cout << "Hello" << endl;

	Recursive(n - 1); // ��� ȣ��
}

void main()
{
	Recursive(100);
}