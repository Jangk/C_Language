#include <iostream>
#include <stack>
using namespace std;


void main()
{
	// stack
	// - ���� ����(���߿� ���°� ��������.
	stack<int> testStack;
	testStack.push(1);
	testStack.push(2);
	testStack.push(3);
	testStack.push(4);
	testStack.push(5);
	

	while (!testStack.empty())
	{	// testStack.top  == ���� ���߿� ���� ������.
		cout << testStack.top() << endl;
		testStack.pop();					// ���� ������.
	}
	
}