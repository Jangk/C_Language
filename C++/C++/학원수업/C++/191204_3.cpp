#include <iostream>

using namespace std;

// ##1. C++의 캐스팅 연산자 (C++의 명시적 형변환)
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
		cout << "자식 함수다." << endl;
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
	// 형변환 대상은 포인터나 레퍼런스이다.
	// 강제 형변환.

	////int iA = 100;
	////char* ptr = reinterpret_cast<char*>(&iA); // Ok

	//int iA = 100;
	//void* ptr = &iA;

	//*reinterpret_cast<int*>(ptr) = 200;
	//cout << iA << endl;





	//// ##4. const_cast
	//const int iA = 100;

	//// const_cast의 형변환 대상은 포인터나 레퍼런스이다.
	////int iB = const_cast<int>(iA);

	//// const int*를 int*로 형변환.
	//int* ptr = const_cast<int*>(&iA);

	//*ptr = 200; // const_cast를 한다해도 상수 성질은 그대로 갖고 있다. 값 변경 X
	//cout << iA << endl;





	//// ##3. dynamic_cast
	//// 형변환 시점이 런타임 때이다.
	// 형변환 대상은 virtual 멤버를 갖고 있는 클래스의 포인터나 레퍼런스이다.

	////CGameObject* pObj = new CGameObject;
	////static_cast<CPlayer*>(pObj)->Draw(); // 실제 주소가 자식인지 부모인지 구별할 능력이 없음...

	//CGameObject* pObj = new CPlayer;

	//CPlayer* pPlayer = dynamic_cast<CPlayer*>(pObj);

	//// dynamic_cast는 잘못된 형변환일 때 nullptr를 반환한다.
	//if (nullptr == pPlayer)
	//{
	//	cout << "잘못된 형변환입니다." << endl;
	//	return;
	//}

	//pPlayer->Draw();




	//// ##2. static_cast
	//// 형변환 시점이 컴파일 시점이다.

	//int iA = (int)3.14f;	// C의 명시적 형변환.
	//int iB = static_cast<int>(3.14f);	// C++의 명시적 형변환.

	//char* ptr1 = (char*)&iA; // C의 형변환은 강제 형변환이다. 추후 이 코드는 문제를 일으킬 위험이 높다.
	//char* ptr2 = static_cast<char*>(&iB); // 강제 형변환을 컴파일 시점에서 막아준다.
}