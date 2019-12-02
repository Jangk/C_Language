#include <iostream>

using namespace std;

struct tagPlayer
{
	// 구조체의 멤버는 기본 public이다.
	char szName[32];
	int iAtt;
	int iSpeed;
};

void Init(tagPlayer& t)
{
	strcpy_s(t.szName, "전사");
	t.iAtt = 10;
	t.iSpeed = 5;
}

void Attack(tagPlayer& t)
{
	cout << t.szName << "가(이) " << t.iAtt << "만큼 공격합니다." << endl;
}

void Move(tagPlayer& t)
{
	cout << t.szName << "가(이) " << t.iSpeed << "만큼 이동합니다" << endl;
}

void main()
{
	tagPlayer tPlayer;

	Init(tPlayer);
	Attack(tPlayer);
	Move(tPlayer);
}