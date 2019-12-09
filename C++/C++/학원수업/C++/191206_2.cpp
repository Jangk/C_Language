#include <iostream>

using namespace std;

// ##1. 연산자 오버로딩 (연산자 함수)
// 연산자를 재정의하는 C++의 문법.

class CPoint
{
public:
	CPoint()
		: m_iX(0), m_iY(0) {}
	CPoint(int x, int y)
		: m_iX(x), m_iY(y) {}

public:
	// 대입 연산자 정의
	CPoint& operator=(const CPoint& _obj)
	{
		m_iX = _obj.m_iX;
		m_iY = _obj.m_iY;

		cout << "대입 연산자" << endl;

		return *this;
	}	

	CPoint operator+(CPoint _obj)
	{		
		// 임시 객체를 활용하면 코드를 간소화 시킬 수 있다.
		return CPoint(m_iX + _obj.m_iX, m_iY + _obj.m_iY);
	}

	CPoint operator+(int iMove)
	{
		return CPoint(m_iX + iMove, m_iY + iMove);
	}

	// 축약 연산자
	CPoint& operator+=(const CPoint& _obj)
	{
		return *this = *this + _obj;
	}

	// 전위 연산자 
	CPoint& operator++()
	{
		++m_iX;
		++m_iY;

		return *this;
	}

	// 후위 연산자
	CPoint operator++(int) // 위에 정의된 전위 연산과 구분할 목적으로 int키워드를 삽입.
	{
		CPoint temp(m_iX, m_iY);

		++m_iX;
		++m_iY;

		return temp;
	}

public:
	void Print()
	{
		cout << m_iX << ", " << m_iY << endl;
	}

private:
	int	m_iX;
	int m_iY;
};

// 전역 연산자 오버로딩
// 이 때 인자 중 최소 하나 이상은 객체 타입이거나 객체의 레퍼런스 타입이어야 한다.
// 삼항 연산자는 연산자 오버로딩 대상이 될 수 없다.
CPoint operator+(int iMove, CPoint _obj)
{
	return _obj + iMove;
}

void Func(CPoint _obj)
{

}

void main()
{
	// 임시 객체를 활용하면 메모리를 더 효율적으로 사용 가능.
	//Func(CPoint(100, 100));

	//// ##5. 증감 연산자 오버로딩
	//CPoint pos1(100, 100);
	//CPoint pos2(100, 100);

	////// 전위 연산자는 피연산자의 원본을 반환함.
	//CPoint pos3 = ++pos1;	// pos1.operator++();
	//pos3.Print();

	//cout << "----------------------" << endl;

	//// 후위 연산은 전위 연산과 달리 사본을 반환함.
	//CPoint pos4 = pos2++; // pos1.operator++(int);
	//pos4.Print();



	

	



	//// ##4. 축약 연산자 오버로딩
	//CPoint	pos1(100, 100);
	//CPoint	pos2(200, 200);

	//pos1 += pos2;
	//pos1.Print();

	






	//// ##3. 대입 연산자 오버로딩
	//// 프로그래머가 대입 연산자를 정의하지 않으면 컴파일러가 기본 대입 연산자를 정의해준다.
	//CPoint	pos1(100, 100);
	//CPoint	pos2(200, 200);
	//CPoint	pos3;

	//pos3 = pos1 + pos2;
	//pos3.Print();






	//// ##2. 덧셈 연산자 오버로딩
	//CPoint	pos1(100, 100);
	//CPoint	pos2(200, 200);

	// 언어에서 제공해주는 기본 연산자들은 기본 자료형에 대해서만 연산이 가능하다.
	// 따라서, 사용자 정의 자료형에 연산을 하고 싶으면 연산자를 오버로딩해라!
	//CPoint	pos3 = pos1 + pos2; // CPoint pos3 = pos1.operator+(pos2);
	//pos3.Print();

	//CPoint pos4 = pos1 + 400; // CPoint pos4 = pos1.operator+(400);
	//pos4.Print();

	//CPoint pos5 = 400 + pos1; // CPoint pos5 = operator+(400, pos1);
	//pos5.Print();
}