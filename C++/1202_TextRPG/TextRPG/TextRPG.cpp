// TextRPG.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Maingame.h"

int main()
{
	CMaingame maingame;
	
	maingame.Initialize();
	maingame.Update();

    return 0;
}

