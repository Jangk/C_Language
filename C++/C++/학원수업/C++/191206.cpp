#include <iostream>

using namespace std;

// ����ü�� ������, �Ҹ���, ���������, ���Կ����� ���� ���´�.
// ��� �� ������ ���� �����ϴ�.
struct tagInfo
{
	tagInfo()
	{
		cout << "�⺻ ������" << endl;
	}

	tagInfo(int a, float b)
		: iA(a), fB(b)
	{
		cout << "�����ִ� ������" << endl;
	}

	~tagInfo()
	{
		cout << "�⺻ �Ҹ���" << endl;
	}
	
	int		iA;
	float	fB;
};

class CTest
{
public:
	CTest(int a, float b)
		: m_tInfo(a, b) // �����ִ� �����ڸ� ���� ��� ������ �ʱ�ȭ
	{

	}

private:
	tagInfo	m_tInfo;
};

void main()
{
	//tagInfo t(100, 3.14f);

	CTest obj(100, 3.14f);
}