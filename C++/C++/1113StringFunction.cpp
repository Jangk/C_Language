#include <iostream>
using namespace std;


void main()
{
	char a[10] = "abc";
	char b[10] = "";

	strcpy_s(b, a);			// ���ڿ� ����
	strcpy_s(b, 4, a);		// ����� ���� ũ�⸦ �޴������� char* ������ ���ڿ� ������ ũ�� ���� �Ұ�����.
	cout << a << " " << b << endl;

	strcat_s(a, b);			// ���ڿ� ���̱�.
	strcat_s(a, 10, b);		// ���Ͱ��� ���� -- ���ڿ� 2���� ũ�� + 1(\n)
	cout << a << endl;


	//if(a == b)			// ���ڳ���񱳰� �ƴ� a,b�� �����ּ� �񱳶� false
	strcmp(a, b);			// a�� b�� ���ڿ��� �˻��ؼ� ���ΰ����� 0 ����;
}