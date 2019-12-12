#include "191210Point.h"

template <typename T>
CPoint<T>::CPoint()
	: m_X(0), m_Y(0)
{

}

template <typename T>
CPoint<T>::CPoint(T x, T  y)
	: m_X(x), m_Y(y)
{

}

template <typename T>
void CPoint<T>::Print()
{
	cout << m_X << ", " << m_Y << endl;
}
