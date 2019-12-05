#include <iostream>
using namespace std;


void HanoiTowel(int iVal, int iMax, char a, char b, char c);


void main()
{
	// ������ A���� B�� ���� C�� �ȱ�
	// �ѹ��� �ϳ��� �ȱ�� �ְ�  ū ������ ���� ���� ���� ����ȵ�.
	HanoiTowel(1, 3, 'A', 'B', 'C');	
	
}

void HanoiTowel(int iVal, int iMax, char a, char b, char c)
{
	/*
	1 -> C
	2 -> B
	1 -> B
	3 -> C
	1 -> A
	2 -> C
	1 -> C
	*/
	if (iMax == iVal)
	{
		cout << "�ִ뿡 ����" << endl;
		return;
	}

	HanoiTowel(iVal + 1, iMax, a, c, b);

	HanoiTowel(iVal + 1, iMax, b, a, c);
}