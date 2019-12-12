#include <iostream>

using namespace std;

class CGameObject
{
private:
	static int m_iA;
	static int m_iB;
	static int m_iC;
};

int CGameObject::m_iA = 100;
int CGameObject::m_iB = 200;
int CGameObject::m_iC = 300;

void main()
{
	cout << sizeof(CGameObject) << endl;
}