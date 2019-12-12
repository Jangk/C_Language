#include <iostream>

using namespace std;

// ##1. ***** Ŭ���� 4�� �Ӽ�
// 1.����ȭ: ������ ���� -> ���� ��ȣ
// 2.ĸ��ȭ: ���� ������ �ܺηκ��� ����.
// 3.���: �θ� Ŭ������ �ڽ� Ŭ�����鿡�� �ڽ��� ������� ������ �� �ִ�. -> �ڵ� ���� ����.
// ��� ���迡�� ���� ������ �߻�ȭ, �Ʒ��� ������ ����ȭ �ȴ�.
// ��, �θ� Ŭ������ �ڽ� Ŭ�������� �߻�ȭ��Ų �����̴�.

// 4.������

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
		: CPerson(pName, iAge) // �θ� �����ڸ� ��������� ȣ��.
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

	//person.WhatIsYourMajor(); // Error! �θ�� �ڽ��� ����� �ٷ� �� ����.

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