#include <iostream>

using namespace std;

// ##1. ������ �����ε� (������ �Լ�)
// �����ڸ� �������ϴ� C++�� ����.

class CPoint
{
public:
	CPoint()
		: m_iX(0), m_iY(0) {}
	CPoint(int x, int y)
		: m_iX(x), m_iY(y) {}

public:
	// ���� ������ ����
	CPoint& operator=(const CPoint& _obj)
	{
		m_iX = _obj.m_iX;
		m_iY = _obj.m_iY;

		cout << "���� ������" << endl;

		return *this;
	}	

	CPoint operator+(CPoint _obj)
	{		
		// �ӽ� ��ü�� Ȱ���ϸ� �ڵ带 ����ȭ ��ų �� �ִ�.
		return CPoint(m_iX + _obj.m_iX, m_iY + _obj.m_iY);
	}

	CPoint operator+(int iMove)
	{
		return CPoint(m_iX + iMove, m_iY + iMove);
	}

	// ��� ������
	CPoint& operator+=(const CPoint& _obj)
	{
		return *this = *this + _obj;
	}

	// ���� ������ 
	CPoint& operator++()
	{
		++m_iX;
		++m_iY;

		return *this;
	}

	// ���� ������
	CPoint operator++(int) // ���� ���ǵ� ���� ����� ������ �������� intŰ���带 ����.
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

// ���� ������ �����ε�
// �� �� ���� �� �ּ� �ϳ� �̻��� ��ü Ÿ���̰ų� ��ü�� ���۷��� Ÿ���̾�� �Ѵ�.
// ���� �����ڴ� ������ �����ε� ����� �� �� ����.
CPoint operator+(int iMove, CPoint _obj)
{
	return _obj + iMove;
}

void Func(CPoint _obj)
{

}

void main()
{
	// �ӽ� ��ü�� Ȱ���ϸ� �޸𸮸� �� ȿ�������� ��� ����.
	//Func(CPoint(100, 100));

	//// ##5. ���� ������ �����ε�
	//CPoint pos1(100, 100);
	//CPoint pos2(100, 100);

	////// ���� �����ڴ� �ǿ������� ������ ��ȯ��.
	//CPoint pos3 = ++pos1;	// pos1.operator++();
	//pos3.Print();

	//cout << "----------------------" << endl;

	//// ���� ������ ���� ����� �޸� �纻�� ��ȯ��.
	//CPoint pos4 = pos2++; // pos1.operator++(int);
	//pos4.Print();



	

	



	//// ##4. ��� ������ �����ε�
	//CPoint	pos1(100, 100);
	//CPoint	pos2(200, 200);

	//pos1 += pos2;
	//pos1.Print();

	






	//// ##3. ���� ������ �����ε�
	//// ���α׷��Ӱ� ���� �����ڸ� �������� ������ �����Ϸ��� �⺻ ���� �����ڸ� �������ش�.
	//CPoint	pos1(100, 100);
	//CPoint	pos2(200, 200);
	//CPoint	pos3;

	//pos3 = pos1 + pos2;
	//pos3.Print();






	//// ##2. ���� ������ �����ε�
	//CPoint	pos1(100, 100);
	//CPoint	pos2(200, 200);

	// ���� �������ִ� �⺻ �����ڵ��� �⺻ �ڷ����� ���ؼ��� ������ �����ϴ�.
	// ����, ����� ���� �ڷ����� ������ �ϰ� ������ �����ڸ� �����ε��ض�!
	//CPoint	pos3 = pos1 + pos2; // CPoint pos3 = pos1.operator+(pos2);
	//pos3.Print();

	//CPoint pos4 = pos1 + 400; // CPoint pos4 = pos1.operator+(400);
	//pos4.Print();

	//CPoint pos5 = 400 + pos1; // CPoint pos5 = operator+(400, pos1);
	//pos5.Print();
}