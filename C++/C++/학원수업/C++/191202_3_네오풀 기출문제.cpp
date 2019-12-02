#include <iostream>

using namespace std;

class CTest
{
public:
	// �⺻ ���� ������ ���� (���� ������ ������ ����)
	//CTest(const CTest& _obj)
	//{
	//	m_pName = _obj.m_pName; // ���� ���� (���� ���� �����ϴ°� �ƴ϶� �ּҸ� �����ϰ� �ִ�)
	//	m_iLen = _obj.m_iLen;
	//}

	CTest(const CTest& _obj)
	{		
		m_iLen = _obj.m_iLen;

		// ���� ����� ���� ����� �ذ��Ѵ�.		
		m_pName = new char[m_iLen + 1];

		// ���� �� ����.
		strcpy_s(m_pName, m_iLen + 1, _obj.m_pName);
	}

	CTest(const char* pName)
	{
		m_iLen = strlen(pName);

		m_pName = new char[m_iLen + 1];
		strcpy_s(m_pName, m_iLen + 1, pName);
	}

	~CTest()
	{
		if (m_pName)
		{
			delete[] m_pName;
			m_pName = nullptr;
		}
	}

public:
	const char* GetName() const
	{
		return m_pName;
	}

private:
	char*	m_pName;
	int		m_iLen;
};

void Print(CTest _obj)
{
	cout << _obj.GetName() << endl;
}

void main()
{
	CTest obj("Hello");

	Print(obj);
}