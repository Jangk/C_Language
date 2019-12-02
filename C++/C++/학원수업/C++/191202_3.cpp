#include <iostream>

using namespace std;

class CTest
{
public:
	// 기본 복사 생성자 원형 (얕은 복사의 위험이 존재)
	//CTest(const CTest& _obj)
	//{
	//	m_pName = _obj.m_pName; // 얕은 복사 (실제 값을 복사하는게 아니라 주소만 복사하고 있다)
	//	m_iLen = _obj.m_iLen;
	//}

	CTest(const CTest& _obj)
	{		
		m_iLen = _obj.m_iLen;

		// 얕은 복사는 깊은 복사로 해결한다.		
		m_pName = new char[m_iLen + 1];

		// 실제 값 복사.
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