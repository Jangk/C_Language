#include <iostream>
#include "GameManager.h"
using namespace std;


void main()
{
	int iVal = 0;
	GameManager::GetInstance()->Intro();
	cout << "1. �ű� ĳ�� �ۼ� " << endl;
	cout << "2. �ҷ����� " << endl;
	cin >> iVal;
	switch (iVal)
	{
	case 1:
		GameManager::GetInstance()->Init();				// ĳ���� ������
		break;

	case 2:
		GameManager::GetInstance()->Load();
		break;
	}
	GameManager::GetInstance()->Update();
}