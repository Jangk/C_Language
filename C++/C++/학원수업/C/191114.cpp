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
	tag4*	d;	// 멤버로 자신의 타입을 정의하고 싶다면 포인터를 활용해라!
}TAG_4;

void Swap(MY_POINT* ptr);

void main()
{
	// ##1. 구조체 크기
	// 멤버(기본자료형) 중에 메모리가 가장 큰 녀석을 기준으로 할당해나간다.
	// 멤버 순서에 따라 크기가 좌우된다.

	//cout << sizeof(MY_POINT) << endl;
	//cout << sizeof(TAG_1) << endl;
	//cout << sizeof(TAG_2) << endl;
	//cout << sizeof(TAG_3) << endl;






	//// 문제1. Swap함수 완성하기.
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