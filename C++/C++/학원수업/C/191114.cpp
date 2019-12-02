#include <iostream>

using namespace std;

typedef struct tagPoint
{
	int x, y;
}MY_POINT;

typedef struct tag1
{
	char	a;
	short	b;
	int		c;
}TAG_1;

typedef struct tag2
{
	char	a;
	int		b;
	short	c;	
}TAG_2;

typedef struct tag3
{
	char	a;
	short	b;
	int		c;
	tag2	d;
}TAG_3;

typedef struct tag4
{
	char	a;
	short	b;
	int		c;
	tag4*	d;	// ����� �ڽ��� Ÿ���� �����ϰ� �ʹٸ� �����͸� Ȱ���ض�!
}TAG_4;

void Swap(MY_POINT* ptr);

void main()
{
	// ##1. ����ü ũ��
	// ���(�⺻�ڷ���) �߿� �޸𸮰� ���� ū �༮�� �������� �Ҵ��س�����.
	// ��� ������ ���� ũ�Ⱑ �¿�ȴ�.

	//cout << sizeof(MY_POINT) << endl;
	//cout << sizeof(TAG_1) << endl;
	//cout << sizeof(TAG_2) << endl;
	//cout << sizeof(TAG_3) << endl;






	//// ����1. Swap�Լ� �ϼ��ϱ�.
	//MY_POINT tPos = { 100, 200 };

	//Swap(&tPos);

	//cout << tPos.x << ", " << tPos.y << endl;
}

void Swap(MY_POINT* ptr)
{
	int iTemp = ptr->x;
	ptr->x = ptr->y;
	ptr->y = iTemp;
}