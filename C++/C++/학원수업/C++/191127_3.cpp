#include <iostream>

using namespace std;

// C++�� ����ü�� "����Լ�"�� ������ �� �ִ�.

struct tagPlayer
{
private:
	// ��� ����
	char	m_szName[32];
	int		m_iAtt;
	int		m_iSpeed;

public:
	// ��� �Լ�
	void Init()
	{
		strcpy_s(m_szName, "����");
		m_iAtt = 10;
		m_iSpeed = 5;
	}

	void Attack()
	{
		cout << m_szName << "��(��) " << m_iAtt << "��ŭ �����մϴ�." << endl;
	}

	void Move()
	{
		cout << m_szName << "��(��) " << m_iSpeed << "��ŭ �̵��մϴ�" << endl;
	}
};

void main()
{
	tagPlayer player;

	player.Init();
	player.Attack();
	player.Move();
}