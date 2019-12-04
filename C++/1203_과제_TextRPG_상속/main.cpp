#include <iostream>
#include "TextRPG.h"
using namespace std;


void main()
{
	TextRPG::GetInstace()->Init();
	TextRPG::GetInstace()->Update();
	TextRPG::GetInstace()->Release();
}