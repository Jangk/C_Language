#include <iostream>

using namespace std;

#include "Calc.h"
#include "Point.h"

// 템플릿의 파일 분할은 cpp도 같이 포함해주어야 한다.
#include "Calc.cpp"
#include "Point.cpp"

void main()
{
	Add<int>(10, 20);
	Mul<int>(2, 2);

	CPoint<int>	pos(100, 100);
	pos.Print();
}