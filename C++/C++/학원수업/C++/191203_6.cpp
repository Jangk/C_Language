#include <iostream>

using namespace std;

class CFigure
{
public:
	// virtual Ű������ ���� -> ���� ���ε�.
	// ���� �Լ�
	virtual void Draw()
	{
		cout << "������ �׸���." << endl;
	}
};

class CTriangle : public CFigure
{
public:
	virtual void Draw()
	{
		cout << "�ﰢ���� �׸���." << endl;
	}
};

class CRectangle : public CFigure
{
public:
	virtual void Draw()
	{
		cout << "�簢���� �׸���." << endl;
	}
};

void main()
{
	cout << sizeof(CFigure) << endl;
	cout << sizeof(CTriangle) << endl;
	cout << sizeof(CRectangle) << endl;

	// Ŭ���� ���ο� virtual Ű���尡 �ϳ��� ������ ��
	// �����Ϸ��� Ŭ������ ����� "�����Լ� ������(vfptr)"�� �����ϰ�
	// �����Լ� �����ʹ� "�����Լ� ���̺�(vftable)"�� �����ϰ� �����.
	// �����Լ� ���̺��� ���� ������Ʈ�� ȣ���ؾ��� �Լ��� �������� �迭 �������� ����ִ�.
	CTriangle	tri;
	CRectangle	rect;

	CFigure* ptr1 = &tri;
	CFigure* ptr2 = &rect;

	// �����Լ� ȣ���� �� ������ �������� ������ ���� ȣ������ �����صξ��ٰ�
	// ��Ÿ�� �� �����Լ� �����Ϳ� ���̺��� Ȯ���Ͽ� � �Լ��� ȣ������ ���� -> ���� ���ε�.
	ptr1->Draw();
	ptr2->Draw();


}