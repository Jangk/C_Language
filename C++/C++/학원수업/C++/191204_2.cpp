#include <iostream>

using namespace std;

class CFigure
{
public:
	virtual ~CFigure() { }

public:
	// ���� �����Լ�
	virtual void Draw() = 0;
};

class CTriangle : public CFigure
{
public:
	// ���� �����Լ��� �ڽĿ��� �������̵� �ϵ��� �����Ѵ�.
	virtual void Draw()
	{
		cout << "�ﰢ���� �׸���" << endl;
	}
};

class CRectangle : public CFigure
{
public:
	// ���� �����Լ��� �ڽĿ��� �������̵� �ϵ��� �����Ѵ�.
	virtual void Draw()
	{
		cout << "�簢���� �׸���" << endl;
	}
};

void main()
{
	// ���� �����Լ��� �ϳ��� �����ϸ� �ش� Ŭ������ "�߻� Ŭ����"�� �θ���.
	// �߻� Ŭ������ ���� ��üȭ �� �� ����!
	// �̷ν� �θ� Ŭ������ ������ �߻����� ����� ���� �� �ִ�.
	//CFigure figure; // Error!

	// ***** ������
	CFigure* pFigure = new CTriangle;
	pFigure->Draw();
	delete pFigure;

	cout << "----------------------------" << endl;

	pFigure = new CRectangle;
	pFigure->Draw();
	delete pFigure;
}