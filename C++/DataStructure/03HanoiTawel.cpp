#include <iostream>
using namespace std;


void HanoiTowel(int val, char a, char b, char c);


void main()
{
	// ������ A���� B�� ���� C�� �ȱ�
	// �ѹ��� �ϳ��� �ȱ�� �ְ�  ū ������ ���� ���� ���� ����ȵ�.
	HanoiTowel(3, 'A', 'B', 'C');	
	
}

void HanoiTowel(int val, char a, char b, char c)
{
	if (val == 1)
	{

	}

	HanoiTowel(val - 1, a, c, b);

	HanoiTowel(val - 1, b, a, c);
}