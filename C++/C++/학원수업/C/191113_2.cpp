#include <iostream>

using namespace std;

// ##1. ����� ���� �ڷ���
// ����ڰ� �ʿ信 ���� ���� �����ؼ� ����ϴ� �ڷ���.
// typedef, struct, union, enum, class ��...

// ##2. typedef
// ���� �ڷ����� ����ڰ� ���ο� �̸����� �����ϴ� ����.

typedef int MY_INT, *MY_PTR;

void main()
{
	// typedef�� ���� Ȱ���ϸ� Ÿ�� ��ü�� ����������. (�������� ȿ�� ����)
	MY_INT a = 0; // int a = 0;
	MY_PTR p = &a;

	//cout << sizeof(MY_INT) << endl;
}