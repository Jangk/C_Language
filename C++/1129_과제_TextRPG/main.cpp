#include <iostream>
#include "GameManager.h"
using namespace std;


void main()
{
	int iVal = 0;
	GameManager::GetInstance()->Intro();
	cout << "1. 신규 캐릭 작성 " << endl;
	cout << "2. 불러오기 " << endl;
	cin >> iVal;
	switch (iVal)
	{
	case 1:
		GameManager::GetInstance()->Init();				// 캐릭터 생성ㅉ
		break;

	case 2:
		GameManager::GetInstance()->Load();
		break;
	}
	GameManager::GetInstance()->Update();
}