#include <iostream>
#include <string>

using namespace std;

// ##1. string Ŭ����
// ���ڿ��� �ٷ�� ���� ���� ���Ǹ� �������ش�.

// ����: string Ŭ���� ���� �����ؿ���.

void main()
{	
	string str1 = "hello";	// �����ִ� ������
	string str2 = str1;		// ���� ������
	string str3;
	str3 = str2;	// ���� ������
	str3 = "world"; // ���� ������

	//if (str1 == str2)	// �� ������
	//	cout << "����" << endl;

	//if (str1 != str3)	// �� ������
	//	cout << "�ٸ���" << endl;

	cout << str1.length() << endl; // ���ڿ� ���� ��ȯ

 

	//str2 = str1 + str3;			// ���� ������
	////str3 = str1 + "world";		// ���� ������
	////str3 = "!!!" + str1;		// ���� ������
	//cout << str3 << endl;			// string ���

	////str2 += "!!!!";		// ��� ������
	//str2 += str3;			// ��� ������
	//cout << str2 << endl;

}