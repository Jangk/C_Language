#include <iostream>
using namespace std;

void Func1(double a, int b)
{	//1��  �Լ�
	cout << a + b << endl;
}


void Func1(bool a, int b)
{	//2��  �Լ�
	cout << b + 10 << endl;
}


void Func1(char a, int b)
{	//3��  �Լ�
	cout << b + 20 << endl;
}


void Func1(int a, int b = 50)			// ����Ʈ ��
{	//4��  �Լ�
	cout << a + b << endl;
}


void main()
{	// 1�� �Լ��� ������� int�� double�� "ǥ�غ�ȯ"�Ǿ� ���Ե�����
	// 2�� �Լ��� ������� int�� ǥ�غ�ȯ���� �ָŸ�ȣ�ؼ� ������ �ٿ�
	// 3�� �Լ��� ������ �� �� int == bool == char ���� ������ ���а���
	//Func1(3, 4.3f);


	// 4�� �Լ��� �Լ����ڸ� �Ѱ��� ������ b�� ����Ʈ ������ 50�� ���Եǰ�
	//           �Լ����ڸ� �Ѵ� ������ �Ϲ� �Լ�ó�� �۵�
	Func1(3);
}