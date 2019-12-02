#include <iostream>

using namespace std;

// ##1. 레퍼런스 (C++의 참조 방식)
// 직접참조 방식.
// 변수에 또다른 별칭을 부여한다.

void Swap(int& r1, int& r2)
{
	int t = r1;
	r1 = r2;
	r2 = t;
}

int Add(const int& a, const int& b)
{
	return a + b;
}

// 배열 레퍼런스
void Func(int(&r)[5])
{
	//cout << sizeof(r) << endl;

	for (int i = 0; i < 5; ++i)
		cout << r[i] << endl;
}

void main()
{
	// ##5. 배열 레퍼런스
	int iArr[5] = { 10, 20, 30, 40, 50 };

	Func(iArr);





	//// ##4. const Reference
	//const int iA = 10;
	//const int& r = iA;

	//// 이 때 100이 저장된 메모리에 r1이라는 별칭이 부여되면서 변수로 취급한다.
	//const int& r1 = 100;
	//Add(10, 20);






	//// ##3. Call by Reference
	//int a = 10, b = 20;

	//Swap(a, b);

	//cout << a << ", " << b << endl;




	//// ##2. 레퍼런스 선언.
	//int iA = 10, iB = 20;

	//// iA라는 메모리 공간에 r이라는 또다른 별칭을 부여.
	//int& r = iA; // 레퍼런스 선언 및 초기화.

	//// 레퍼런스는 참조 대상 없이 선언될 수 없다.
	//// 반면에 포인터는 참조 대상 없이도 선언 및 nullptr 초기화가 가능하다.
	////int& r2; // Error

	//r = 100;
	//cout << iA << endl;
	//cout << "----------------------" << endl;

	//cout << &iA << endl;
	//cout << &r << endl;

	//cout << "----------------------" << endl;

	//// 레퍼런스는 포인터와 달리 참조 대상을 변경할 수 없다.
	//r = iB; // iA 값을 iB의 값으로 대입해라.

	//cout << &iA << endl;
	//cout << &r << endl;
	//cout << iA << endl;

}