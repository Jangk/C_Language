#include <iostream>
#include "Node.h"
using namespace std;


void main()
{
	int iSelector = 0;
	int iValue = 0;
	while (true)
	{
		cout << "1. �Է� " << endl;
		cout << "2. ��� " << endl;
		cin >> iSelector;
		switch (iSelector)
		{
		case 1:
			cout << "��";
			cin >> iValue;
			Node::GetInstance()->InsertNode(iValue);
			break;

		case 2:
			break;

		default:
			return;
		}
	}

}