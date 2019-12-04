#include <iostream>

using namespace std;

// ##1. C++�� ĳ���� ������ (C++�� ����� ����ȯ)
// static_cast, dynamic_cast, const_cast, reinterpret_cast

class CGameObject
{
public:
	virtual ~CGameObject() {}
};

class CPlayer : public CGameObject
{
public:
	void Draw()
	{
		cout << "�ڽ� �Լ���." << endl;
	}
};

//const int* Get()
//{
//	return;
//}
//
//void Set(int* ptr)
//{
//
//}

void main()
{
	// ##5. reinterpret_cast
	// ����ȯ ����� �����ͳ� ���۷����̴�.
	// ���� ����ȯ.

	////int iA = 100;
	////char* ptr = reinterpret_cast<char*>(&iA); // Ok

	//int iA = 100;
	//void* ptr = &iA;

	//*reinterpret_cast<int*>(ptr) = 200;
	//cout << iA << endl;





	//// ##4. const_cast
	//const int iA = 100;

	//// const_cast�� ����ȯ ����� �����ͳ� ���۷����̴�.
	////int iB = const_cast<int>(iA);

	//// const int*�� int*�� ����ȯ.
	//int* ptr = const_cast<int*>(&iA);

	//*ptr = 200; // const_cast�� �Ѵ��ص� ��� ������ �״�� ���� �ִ�. �� ���� X
	//cout << iA << endl;





	//// ##3. dynamic_cast
	//// ����ȯ ������ ��Ÿ�� ���̴�.
	// ����ȯ ����� virtual ����� ���� �ִ� Ŭ������ �����ͳ� ���۷����̴�.

	////CGameObject* pObj = new CGameObject;
	////static_cast<CPlayer*>(pObj)->Draw(); // ���� �ּҰ� �ڽ����� �θ����� ������ �ɷ��� ����...

	//CGameObject* pObj = new CPlayer;

	//CPlayer* pPlayer = dynamic_cast<CPlayer*>(pObj);

	//// dynamic_cast�� �߸��� ����ȯ�� �� nullptr�� ��ȯ�Ѵ�.
	//if (nullptr == pPlayer)
	//{
	//	cout << "�߸��� ����ȯ�Դϴ�." << endl;
	//	return;
	//}

	//pPlayer->Draw();




	//// ##2. static_cast
	//// ����ȯ ������ ������ �����̴�.

	//int iA = (int)3.14f;	// C�� ����� ����ȯ.
	//int iB = static_cast<int>(3.14f);	// C++�� ����� ����ȯ.

	//char* ptr1 = (char*)&iA; // C�� ����ȯ�� ���� ����ȯ�̴�. ���� �� �ڵ�� ������ ����ų ������ ����.
	//char* ptr2 = static_cast<char*>(&iB); // ���� ����ȯ�� ������ �������� �����ش�.
}