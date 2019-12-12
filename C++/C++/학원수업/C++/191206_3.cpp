#include <iostream>

using namespace std;

class CTest
{
public:
	CTest(const char* pName)
	{
		strcpy_s(m_szName, pName);

		cout << m_szName << "의 생성자" << endl;
	}

	~CTest()
	{
		cout << m_szName << "의 소멸자" << endl;
	}

private:
	char m_szName[32];
};

void main()
{
	CTest	obj("일반 객체");

	// ##1. 임시객체
	// 이름이 없는 객체. 이 때 임시 메모리에 등록. 코드 라인을 벗어나는 즉시 소멸.
	// 코드 간결화.
	// 메모리 효율 증대.
	CTest("임시 객체");

	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
	cout << "Hello world" << endl;
}