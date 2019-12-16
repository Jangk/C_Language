#pragma once
#include <iostream>
using namespace std;
class Parents
{
private:
	virtual void Render() = 0;
	virtual void Set(int a) = 0;
protected:
	int iParent = 0;
};

