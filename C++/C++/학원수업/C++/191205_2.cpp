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
		// this 포인터: 함수를 호출한 현재 오브젝트의 주소를 담고있는 포인터.
		cout << this->m_iVal << endl;
		cout << "---------------" << endl;

		CGameObject temp(400);

		// this 포인터는 상수 포인터이다.
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