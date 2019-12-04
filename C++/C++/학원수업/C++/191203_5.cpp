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


//// �ڽ�Ÿ������ ���ڸ� �����ϸ� �ڵ� ������ X
//void SetDamageFromPlayer(CPlayer* pPlayer, CMonster* pMonster);
//void SetDamageFromMonster(CPlayer* pPlayer, CMonster* pMonster);
//
//// �θ�Ÿ������ ���ڸ� �����ϸ� �ڵ� �������� �ش�ȭ.
//void SetDamage(CGameObject* pTo, CGameObject* pFrom);

void main()
{
	// ##1. ��ü ������
	CTriangle	tri;
	CRectangle	rect;	

	// �θ� Ÿ���� �����ʹ� �ڽ��� �ּҸ� ������ �� �ִ�. (�������� ��ĳ����)
	// ������ �Ӹ��ƴ϶� ���۷����� ��������.
	CFigure* ptr1 = &tri;
	CFigure* ptr2 = &rect;

	// �����Ϸ��� Draw�Լ��� ȣ���� �� ������ Draw�� ȣ���� ���ΰ���
	// ptr1�� ptr2�� Ÿ�������� �����Ѵ�. -> ���� ���ε�.
	ptr1->Draw();
	ptr2->Draw();
}