#include <iostream>

using namespace std;

// ##1. 템플릿 (template)
// 특정 기능에 여러 자료형이 호환되게 작성을 도와주는 C++ 기능.
// 함수 템플릿
// 클래스 템플릿

// ##2. 함수 템플릿
template <typename T>
T Add(T a, T b)
{
	return a + b;
}

// ##3. 템플릿 특수화
template <>
char* Add(char* a, char* b)
{
	int iLen = strlen(a) + strlen(b);
	char* pName = new char[iLen + 1];

	strcpy_s(pName, iLen + 1, a);
	strcat_s(pName, iLen + 1, b);

	return pName;
}

// ##4. typename이 2개 이상인 함수 템플릿
template <typename Type_A, typename Type_B, typename Type_C>
void Func(Type_A a, Type_B b, Type_C c)
{
	cout << sizeof(a) << endl;
	cout << sizeof(b) << endl;
	cout << sizeof(c) << endl;
}

// ##5. 템플릿을 이용한 배열 원본 인자로 받아내기.
template <typename T, int iLen>
void ArrayFunc(T (&array)[iLen])
{
	cout << sizeof(array) << endl;
}

void main()
{
	//// ##5. 템플릿을 이용한 배열 원본 인자로 받아내기.
	int iArr[5] = { 10, 20, 30, 40, 50 };
	ArrayFunc(iArr);

	//// ##4. typename이 2개 이상인 템플릿 함수
	//Func<short, int, double>(2, 100, 3.14);


	//// ##3. 템플릿 특수화: 특정 자료형에 대해 예외 상황이 발생됬을 때 해결.
	//char* pName = Add<char*>("Hello", "world");
	//cout << pName << endl;
	//delete[] pName;


	//// 템플릿 함수: 호출 문장이 있어야만 컴파일 시점에 해당 함수 코드가 생성된다.
	//int n = Add<int>(10, 20);
	//cout << n << endl;

	//// 위에서 생성해 놓은 함수 코드를 재사용한다.
	//n = Add<int>(100, 200);
	//cout << n << endl;

	//// float 타입에 대응되는 함수코드가 새로 생성된다.
	//float f = Add<float>(3.14f, 3.14f);
	//cout << f << endl;	
}