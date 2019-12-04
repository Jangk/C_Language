#include <iostream>

using namespace std;

class CFigure
{
public:
	// virtual 키워드의 목적 -> 동적 바인딩.
	// 가상 함수
	virtual void Draw()
	{
		cout << "도형을 그린다." << endl;
	}
};

class CTriangle : public CFigure
{
public:
	virtual void Draw()
	{
		cout << "삼각형을 그린다." << endl;
	}
};

class CRectangle : public CFigure
{
public:
	virtual void Draw()
	{
		cout << "사각형을 그린다." << endl;
	}
};

void main()
{
	cout << sizeof(CFigure) << endl;
	cout << sizeof(CTriangle) << endl;
	cout << sizeof(CRectangle) << endl;

	// 클래스 내부에 virtual 키워드가 하나라도 존재할 때
	// 컴파일러는 클래스의 멤버로 "가상함수 포인터(vfptr)"를 마련하고
	// 가상함수 포인터는 "가상함수 테이블(vftable)"을 참조하게 만든다.
	// 가상함수 테이블에는 실제 오브젝트가 호출해야할 함수의 번지들이 배열 형식으로 들어있다.
	CTriangle	tri;
	CRectangle	rect;

	CFigure* ptr1 = &tri;
	CFigure* ptr2 = &rect;

	// 가상함수 호출할 때 컴파일 시점에서 누구의 것을 호출할지 보류해두었다가
	// 런타임 때 가상함수 포인터와 테이블을 확인하여 어떤 함수를 호출할지 결정 -> 동적 바인딩.
	ptr1->Draw();
	ptr2->Draw();


}