#include <iostream>

using namespace std;

// ##1. ***** 클래스 4대 속성
// 1.은닉화: 데이터 은닉 -> 정보 보호
// 2.캡슐화: 구현 내용을 외부로부터 은닉.
// 3.상속: 부모 클래스는 자식 클래스들에게 자신의 멤버들을 물려줄 수 있다. -> 코드 재사용 증대.
// 상속 관계에서 위로 갈수록 추상화, 아래로 갈수록 세분화 된다.
// 즉, 부모 클래스는 자식 클래스들을 추상화시킨 존재이다.

// 4.다형성

class CPerson
{
public:
	CPerson()
	{

	}

	CPerson(const char* pName, int iAge)
		: m_iAge(iAge)
	{
		strcpy_s(m_szName, pName);
	}

public:
	void WhatIsYourName()
	{
		cout << "My name is " << m_szName << endl;
	}

	void HowOldAreYou()
	{
		cout << "I`m " << m_iAge << "year(s) old." << endl;
	}

protected:
	char	m_szName[32];
	int		m_iAge;
};

class CStudent : public CPerson
{
public:
	CStudent(const char* pName, int iAge, const char* pMajor)
		: CPerson(pName, iAge) // 부모 생성자를 명시적으로 호출.
	{
		strcpy_s(m_szMajor, pMajor);
	}

public:
	void WhatIsYourMajor()
	{
		cout << "My major is " << m_szMajor << endl;
	}

private:
	char m_szMajor[64];
};

class CWorker : public CPerson
{
public:
	CWorker(const char* pName, int iAge, const char* pJob)
		: CPerson(pName, iAge)
	{
		//strcpy_s(m_szName, pName);
		//m_iAge = iAge;

		strcpy_s(m_szJob, pJob);
	}

public:
	void WhatIsYourJob()
	{
		cout << "My job is " << m_szJob << endl;
	}

private:
	char m_szJob[64];
};

void main()
{
	CPerson	person("Tom", 25);
	person.WhatIsYourName();
	person.HowOldAreYou();

	//person.WhatIsYourMajor(); // Error! 부모는 자식의 멤버를 다룰 수 없다.

	cout << "--------------------" << endl;

	CStudent stu("Jane", 21, "Game Programming");
	stu.WhatIsYourName();
	stu.HowOldAreYou();
	stu.WhatIsYourMajor();

	cout << "--------------------" << endl;

	CWorker work("Smith", 41, "Game Programmer");
	work.WhatIsYourName();
	work.HowOldAreYou();
	work.WhatIsYourJob();
}