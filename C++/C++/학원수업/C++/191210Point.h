#pragma once

template <typename T>
class CPoint
{
public:
	CPoint();
	CPoint(T x, T y);

public:
	void Print();

private:
	T m_X;
	T m_Y;
};
