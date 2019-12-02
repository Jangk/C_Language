#include <iostream>

using namespace std;

// ##1. 사용자 정의 자료형
// 사용자가 필요에 따라 직접 정의해서 사용하는 자료형.
// typedef, struct, union, enum, class 등...

// ##2. typedef
// 기존 자료형을 사용자가 새로운 이름으로 정의하는 문법.

typedef int MY_INT, *MY_PTR;

void main()
{
	// typedef을 적극 활용하면 타입 교체가 수월해진다. (유지보수 효율 증대)
	MY_INT a = 0; // int a = 0;
	MY_PTR p = &a;

	//cout << sizeof(MY_INT) << endl;
}