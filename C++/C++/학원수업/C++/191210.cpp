#include <iostream>

using namespace std;

#include "Calc.h"
#include "Point.h"

// ���ø��� ���� ������ cpp�� ���� �������־�� �Ѵ�.
#include "Calc.cpp"
#include "Point.cpp"

void main()
{
	Add<int>(10, 20);
	Mul<int>(2, 2);

	CPoint<int>	pos(100, 100);
	pos.Print();
}