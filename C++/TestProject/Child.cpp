#include "Child.h"

void Child::Render()
{
	//cout << "자식 " << iChild;
	cout << "부모 " << iParent;
}

void Child::Set(int a)
{
	//iChild = a;
	iParent = a;
}

Child::Child()
{
}
