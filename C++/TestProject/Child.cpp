#include "Child.h"

void Child::Render()
{
	//cout << "�ڽ� " << iChild;
	cout << "�θ� " << iParent;
}

void Child::Set(int a)
{
	//iChild = a;
	iParent = a;
}

Child::Child()
{
}
