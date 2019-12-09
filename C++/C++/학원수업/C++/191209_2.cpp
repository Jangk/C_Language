#include <iostream>

using namespace std;

// ##1. 클래스 템플릿
template <typename T>
class CPoint
{
public:
	CPoint()
		: m_X(0), m_Y(0) {}
	CPoint(T x, T y)
		: m_X(x), m_Y(y) {}

private:
	T m_X;
	T m_Y;
};

template <typename T>
class CAdd
{
public:
	T operator()(T a, T b)
	{
		return a + b;
	}
};

// ##2. 클래스 템플릿 특수화
template <>
class CAdd <char*>
{
public:
	char* operator()(char* a, char* b)
	{
		int iLen = strlen(a) + strlen(b);
		char* pName = new char[iLen + 1];

		strcpy_s(pName, iLen + 1, a);
		strcat_s(pName, iLen + 1, b);

		return pName;
	}
};

// ##3. 템플릿 인수가 변수일 때 (디폴트 매개 변수도 가능)
template <typename T, int iLen = 20>
class CArray
{
private:
	T m_Array[iLen];
};

// ##4. 클래스 템플릿에 static 멤버를 작성했을 때
template <typename T>
class CTest
{
public:
	void Print()
	{
		cout << m_Static << endl;
	}

public:
	static T m_Static;
};

template <typename T>
T CTest<T>::m_Static = 0;

void main()
{
	CTest<int>::m_Static += 50;

	CTest<int>		obj1;
	CTest<int>		obj2;

	CTest<float>::m_Static += 30;

	CTest<float>	obj3;
	CTest<float>	obj4;

	obj1.Print();
	obj2.Print();
	obj3.Print();
	obj4.Print();






	//// ##3. 템플릿 인수가 변수일 때
	//CArray<int, 5>	arr1;
	//CArray<int, 10>	arr2;
	//CArray<int>	arr3;



	//// ##2. 클래스 템플릿 특수화
	//CAdd<char*> functor;
	//char* pName = functor("Hello", "World");

	//cout << pName << endl;
	//delete[] pName;


	//// 템플릿 클래스: 이 때 int타입에 대응되는 코드가 컴파일 시점에 생성됨.
	//CPoint<int>	pos1;

	//// 이 때 float타입에 대응되는 코드가 컴파일 시점에 생성됨.
	//CPoint<float> pos2;
}