#include <iostream>

using namespace std;

// ##1. ����ü (union)
// ����� ���� �ڷ���

struct tagBox
{
	int a;
	int b;
};

union uniBox
{
	int a;
	int b;
};

union uniMatrix
{
	struct 
	{
		int _11, _12, _13;
		int _21, _22, _23;
		int _31, _32, _33;
	};

	int m[3][3];
};

void main()
{
	//// ����ü ����.
	//uniMatrix mat;
	//mat.m[1][2] = 100;
	//cout << mat._23 << endl;



	//// ##1. ����ü�� ��� ����� �ϳ��� �޸�(��� �� ū �޸�)�� �����Ѵ�.
	//cout << sizeof(tagBox) << endl;
	//cout << sizeof(uniBox) << endl;

	//uniBox u;
	//cout << &u.a << endl;
	//cout << &u.b << endl;

	//uniBox u = { 10, 20 }; // Error
	//cout << u.a << endl;
	//cout << u.b << endl;

}