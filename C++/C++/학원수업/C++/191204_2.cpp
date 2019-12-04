#include <iostream>

using namespace std;

class CFigure
{
public:
	virtual ~CFigure() { }

public:
	// 순수 가상함수
	virtual void Draw() = 0;
};

class CTriangle : public CFigure
{
public:
	// 순수 가상함수는 자식에게 오버라이딩 하도록 유도한다.
	virtual void Draw()
	{
		cout << "삼각형을 그린다" << endl;
	}
};

class CRectangle : public CFigure
{
public:
	// 순수 가상함수는 자식에게 오버라이딩 하도록 유도한다.
	virtual void Draw()
	{
		cout << "사각형을 그린다" << endl;
	}
};

void main()
{
	// 순수 가상함수가 하나라도 존재하면 해당 클래스를 "추상 클래스"라 부른다.
	// 추상 클래스는 절대 객체화 할 수 없다!
	// 이로써 부모 클래스를 완전히 추상적인 존재로 만들어낼 수 있다.
	//CFigure figure; // Error!

	// ***** 다형성
	CFigure* pFigure = new CTriangle;
	pFigure->Draw();
	delete pFigure;

	cout << "----------------------------" << endl;

	pFigure = new CRectangle;
	pFigure->Draw();
	delete pFigure;
}