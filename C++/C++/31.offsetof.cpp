#include <iostream>
using namespace std;

struct AAA
{
	int a;
	double b;
	int c;
	char d;

};

int main()
{
	// offsetof(��������, �Ÿ��� �˰���� ��)
	// - ������� ��ġ ���ϱ�
	// - Ư�� ����� �������� ������ �ڷᱸ���� ������ ���� �����Ʈ�� �������ִ��� �˷���
	AAA aaa;
	cout << offsetof(AAA, a) << endl;		// ��°� : 0
	cout << offsetof(AAA, b) << endl;		// ��°� : 8
	cout << offsetof(AAA, c) << endl;		// ��°� : 16
	cout << offsetof(AAA, d) << endl;		// ��°� : 20
}