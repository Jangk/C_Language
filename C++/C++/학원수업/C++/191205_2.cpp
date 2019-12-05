#include <iostream>

using namespace std;

class CGameObject
{
public:
	CGameObject(int n)
		: m_iVal(n)
	{

	}

public:
	void PrintVal()
	{
		// this ������: �Լ��� ȣ���� ���� ������Ʈ�� �ּҸ� ����ִ� ������.
		cout << this->m_iVal << endl;
		cout << "---------------" << endl;

		CGameObject temp(400);

		// this �����ʹ� ��� �������̴�.
		// this = &temp; // Error!
	}

private:
	int m_iVal;
};

void main()
{
	CGameObject obj1(100);
	CGameObject obj2(200);
	CGameObject obj3(300);

	obj1.PrintVal();
	obj2.PrintVal();
	obj3.PrintVal();
}