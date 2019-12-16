#pragma once
#include "Parents.h"
class Child : public Parents
{
public:
	void Render();
	void Set(int a);
	Child();

private:
	//int iChild = 0;
};

