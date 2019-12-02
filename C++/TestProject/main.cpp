#include <iostream>
#include "Node.h"
using namespace std;


void main()
{
	int iSelector = 0;
	int iValue = 0;
	while (true)
	{
		cout << "1. 입력 " << endl;
		cout << "2. 출력 " << endl;
		cin >> iSelector;
		switch (iSelector)
		{
		case 1:
			cout << "값";
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