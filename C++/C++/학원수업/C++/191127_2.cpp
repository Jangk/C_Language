#include <iostream>

using namespace std;

struct tagPlayer
{
	// ����ü�� ����� �⺻ public�̴�.
	char szName[32];
	int iAtt;
	int iSpeed;
};

void Init(tagPlayer& t)
{
	strcpy_s(t.szName, "����");
	t.iAtt = 10;
	t.iSpeed = 5;
}

void Attack(tagPlayer& t)
{
	cout << t.szName << "��(��) " << t.iAtt << "��ŭ �����մϴ�." << endl;
}

void Move(tagPlayer& t)
{
	cout << t.szName << "��(��) " << t.iSpeed << "��ŭ �̵��մϴ�" << endl;
}

void main()
{
	tagPlayer tPlayer;

	Init(tPlayer);
	Attack(tPlayer);
	Move(tPlayer);
}