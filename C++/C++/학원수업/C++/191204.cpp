#include <iostream>

using namespace std;

class CGameObject
{
public:
	// 가상 소멸자
	virtual ~CGameObject()
	{
		cout << "부모 소멸자" << endl;
	}
};

class CPlayer : public CGameObject
{
public:
	virtual ~CPlayer()
	{
		cout << "자식 소멸자" << endl;
	}
};

void main()
{
	CGameObject* pPlayer = new CPlayer;

	// 이 때도 정적 바인딩이 일어난다. 소멸자 호출도 동적 바인딩으로 변경해야한다.
	delete pPlayer;
}