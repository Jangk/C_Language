#include <iostream>
#include <stdio.h>
#define CHARACTER_MAX 512
using namespace std;

void main()
{	//�Է¹��� ���ڿ� ����� ���
	char ch[CHARACTER_MAX];
	char ch2[CHARACTER_MAX];
	int count   = 0;


	cout << "���ڿ���" << CHARACTER_MAX <<"�� ���Ϸ� �Է��Ͻÿ�" << endl;
	cin.getline(ch, CHARACTER_MAX);											// getline�� ��� ����(�����̽���)�� �Է¹����� �ֱ⶧����.
	if (cin.fail())															// ���������� �Էµ� ���� ���� ������ �����϶�(������ ���϶�)
	{
		cin.clear();														// �ȿ� �� ���۰�(�����Ⱚ �Ǵ� ������ ���� �����ϋ�) �ʱ�ȭ
		return;
	}

	// Ǯ�̿��� ���
	char* start = ch;						// �Է¹��� ���ڿ��� ù�ּ�
	char* last  = start + strlen(ch) -1;	// �Է¹��� ���ڿ��� ���ּ�
	while (start < last )					// ���ּҰ� �����ּҺ��� �۾����� ����
	{
		char temp = *start;
		*start = *last;
		*last = temp;
		++start;
		--last;
	}
	cout << ch << endl;

	// ���� �� ���
	//for (int i = 0; i < CHARACTER_MAX; i++)
	//{
	//	if (ch[i] == '\0')
	//	{
	//		for (int j = i - 1; j > -1; j--)
	//		{
	//			ch2[count] = ch[j];
	//			count++;
	//		}
	//		ch2[i] = '\0';
	//		break;
	//	}
	//}
	//cout << ch2 << endl;
}