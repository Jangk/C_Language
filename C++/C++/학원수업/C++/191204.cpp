#include <iostream>

using namespace std;

class CGameObject
{
public:
	// ���� �Ҹ���
	virtual ~CGameObject()
	{
		cout << "�θ� �Ҹ���" << endl;
	}
};

class CPlayer : public CGameObject
{
public:
	virtual ~CPlayer()
	{
		cout << "�ڽ� �Ҹ���" << endl;
	}
};

void main()
{
	CGameObject* pPlayer = new CPlayer;

	// �� ���� ���� ���ε��� �Ͼ��. �Ҹ��� ȣ�⵵ ���� ���ε����� �����ؾ��Ѵ�.
	delete pPlayer;
}