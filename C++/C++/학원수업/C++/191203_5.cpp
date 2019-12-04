#include <iostream>

using namespace std;

class CFigure
{
public:
	void Draw()
	{
		cout << "도형을 그린다." << endl;
	}
};

class CTriangle : public CFigure
{
public:
	void Draw()
	{
		cout << "삼각형을 그린다." << endl;
	}
};

class CRectangle : public CFigure
{
public:
	void Draw()
	{
		cout << "사각형을 그린다." << endl;
	}
};


//// 자식타입으로 인자를 구성하면 코드 유연성 X
//void SetDamageFromPlayer(CPlayer* pPlayer, CMonster* pMonster);
//void SetDamageFromMonster(CPlayer* pPlayer, CMonster* pMonster);
//
//// 부모타입으로 인자를 구성하면 코드 유연성이 극대화.
//void SetDamage(CGameObject* pTo, CGameObject* pFrom);

void main()
{
	// ##1. 객체 포인터
	CTriangle	tri;
	CRectangle	rect;	

	// 부모 타입의 포인터는 자식의 주소를 대입할 수 있다. (묵시적인 업캐스팅)
	// 포인터 뿐만아니라 레퍼런스도 마찬가지.
	CFigure* ptr1 = &tri;
	CFigure* ptr2 = &rect;

	// 컴파일러는 Draw함수를 호출할 때 누구의 Draw를 호출할 것인가를
	// ptr1과 ptr2의 타입을보고 구분한다. -> 정적 바인딩.
	ptr1->Draw();
	ptr2->Draw();
}