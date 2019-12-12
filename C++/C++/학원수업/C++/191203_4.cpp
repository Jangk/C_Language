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
	// 오버라이딩: 부모의 함수를 자식에게 똑같이 작성하여 다형성을 실현.
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

void main()
{
	// 다형성: 각기 다른 객체가 동일한 문장을 통해서 각기 다른 기능을 수행.
	// 프로그램을 더욱 유연하게 구성할 수 있다.
	CFigure figure;
	figure.Draw();

	cout << "-----------------------" << endl;

	CTriangle tri;
	tri.Draw();

	cout << "-----------------------" << endl;

	CRectangle rect;
	rect.Draw();
}