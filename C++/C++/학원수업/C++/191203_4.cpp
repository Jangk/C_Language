#include <iostream>

using namespace std;

class CFigure
{
public:
	void Draw()
	{
		cout << "������ �׸���." << endl;
	}
};

class CTriangle : public CFigure
{
public:
	// �������̵�: �θ��� �Լ��� �ڽĿ��� �Ȱ��� �ۼ��Ͽ� �������� ����.
	void Draw()
	{
		cout << "�ﰢ���� �׸���." << endl;
	}
};

class CRectangle : public CFigure
{
public:
	void Draw()
	{
		cout << "�簢���� �׸���." << endl;
	}
};

void main()
{
	// ������: ���� �ٸ� ��ü�� ������ ������ ���ؼ� ���� �ٸ� ����� ����.
	// ���α׷��� ���� �����ϰ� ������ �� �ִ�.
	CFigure figure;
	figure.Draw();

	cout << "-----------------------" << endl;

	CTriangle tri;
	tri.Draw();

	cout << "-----------------------" << endl;

	CRectangle rect;
	rect.Draw();
}