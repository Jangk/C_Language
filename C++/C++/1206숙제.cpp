#include <iostream>
using namespace std;


class MyClass
{
private:
	char* m_szChar;
	int m_iStrlen;
	int m_iOpacity;


public:
	friend ostream& operator<<(ostream& os, const MyClass& other);
	MyClass& operator=(const MyClass& other);
	MyClass operator+(const MyClass& other);
	MyClass& operator+=(const MyClass& other);
	

public:
	MyClass(const MyClass& other);
	MyClass(const char* ptr);
	MyClass(int iOpacity);
	MyClass();
	~MyClass();
};


void main()
{	//덧셈 
	//string 클래스를 정의해야됨.
	//문자열 초기화, 문자열끼리 더하기, cout<< 출력도 가능하게
	MyClass test1("abc");
	MyClass test2("def");


	cout << "test1 : " << test1 << endl;
	cout << "test2 : " << test2 << endl;
	cout << "test1 +test2 : " << (test1 + test2) << endl;
	cout << "test2 += test1 : " << (test2 += test1) << endl;
	cout << "MyClass(''아무거나입력'') : " << MyClass("아무거나입력") << endl;
	cout << "MyClass(test1) : " << MyClass(test1) << endl;
}


ostream& operator<<(ostream& os, const MyClass& other)
{
	if (nullptr == other.m_szChar)
		os << "문자열이 비어있습니다" << endl;
	else
		os << other.m_szChar;
	return os;
}


MyClass& MyClass::operator=(const MyClass& other)
{
	if (m_iOpacity < other.m_iOpacity)
	{	
		if (m_iOpacity <= m_iStrlen)
			m_iOpacity = m_iStrlen;
		delete(m_szChar);
		m_iStrlen = other.m_iStrlen;
		m_iOpacity = m_iStrlen + 1;
		m_szChar = new char[m_iOpacity];
	}


	memcpy(m_szChar, other.m_szChar, other.m_iOpacity);
	m_iStrlen = other.m_iStrlen;
	m_iOpacity = m_iStrlen + 1;
	return *this;
}


MyClass MyClass::operator+(const MyClass& other)
{
	int iStrMax = other.m_iStrlen + m_iStrlen;
	MyClass temp(iStrMax + 1);
	temp.m_iStrlen = iStrMax;
	strcpy_s(temp.m_szChar, temp.m_iOpacity, m_szChar);
	strcat_s(temp.m_szChar, temp.m_iOpacity, other.m_szChar);
	

	return temp;
}


MyClass& MyClass::operator+=(const MyClass& other)
{
	
	return *this = *this + other;
}


//--------------------------생성자 라인.
// 복사 생성자
MyClass::MyClass(const MyClass& other)
{
	m_iStrlen  = other.m_iStrlen;
	m_iOpacity = other.m_iOpacity;
	m_szChar   = new char[m_iOpacity];
	memcpy(m_szChar, other.m_szChar, m_iOpacity);
}


// 문자열 인자 있는 생성자
MyClass::MyClass(const char* ptr)
{
	m_iStrlen	= strlen(ptr);
	m_iOpacity  = m_iStrlen+1;
	m_szChar	= new char[m_iOpacity];
	memcpy(m_szChar, ptr, m_iOpacity);
}


// 할당 크기 생성
MyClass::MyClass(int iOpacity)
{
	m_szChar   = new char[iOpacity];
	m_iOpacity = iOpacity;
	m_iStrlen  = 0;
}


// 기본 생성자
MyClass::MyClass() : m_iStrlen(0), m_iOpacity(0), m_szChar('\0')
{
	m_szChar = new char;
	m_szChar[0] = '\0';
}


MyClass::~MyClass()
{
	if(nullptr != m_szChar)
		delete[](m_szChar);
}