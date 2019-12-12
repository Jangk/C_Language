#include <iostream>

using namespace std;

class CGameObject
{
public:
	void Draw()
	{
		cout << "GameObject" << endl;
	}
};

class CPlayer : public CGameObject
{
public:
	void Draw()
	{
		cout << "Player" << endl;
	}
};

class CWarrior : public CPlayer
{
public:
	void Draw()
	{
		cout << "Warrior" << endl;
	}
};

void main()
{
	CGameObject		gameobj;
	CPlayer			player;
	CWarrior		warrior;

	/*gameobj.Draw();
	player.Draw();
	warrior.Draw();*/

	CGameObject* ptr1 = &gameobj;
	CGameObject* ptr2 = &player;
	CPlayer* ptr3 = &warrior;

	ptr1->Draw();
	ptr2->Draw();
	ptr3->Draw();

}