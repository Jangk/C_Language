#include <iostream>

using namespace std;

// ##1. 공용체 (union)
// 사용자 정의 자료형

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
	//// 공용체 응용.
	//uniMatrix mat;
	//mat.m[1][2] = 100;
	//cout << mat._23 << endl;



	//// ##1. 공용체는 모든 멤버가 하나의 메모리(멤버 중 큰 메모리)를 공유한다.
	//cout << sizeof(tagBox) << endl;
	//cout << sizeof(uniBox) << endl;

	//uniBox u;
	//cout << &u.a << endl;
	//cout << &u.b << endl;

	//uniBox u = { 10, 20 }; // Error
	//cout << u.a << endl;
	//cout << u.b << endl;

}