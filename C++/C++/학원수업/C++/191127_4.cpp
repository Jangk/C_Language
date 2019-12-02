#include <iostream>

using namespace std;

// ##1. ����ȭ
// Ŭ������ ����� �⺻ private�̴� -> ���� ���� -> ���� ��ȣ.

class CCharacter
{
private:
	int m_iAtt;
	int m_iDef;
	int m_iHp;

public:
	// Set�Լ�. ���� ����.
	void SetDamaged(int iAtt)
	{
		m_iHp -= iAtt;
	}

	// Get�Լ�. �б� ����.
	int GetAtt()
	{
		return m_iAtt;
	}

public:
	void Init()
	{
		m_iAtt = 5;
		m_iDef = 10;
		m_iHp = 200;
	}
};

void main()
{
	CCharacter player;
	CCharacter monster;

	player.Init();
	monster.Init();
	//monster.m_iAtt = 5; // �ܺ� ���� X, ����ȭ.
	//monster.m_iHp -= 10; // �ܺ� ���� X, ����ȭ.

	// ���е� �����͸� ������ �Լ��� ���� �ʿ��ϴ�.
	// ���е� �����ʹ� ����ڰ� ������ Ư�� ��θ� ���ؼ��� ������ �� �ִ�.
	monster.SetDamaged(player.GetAtt());

}