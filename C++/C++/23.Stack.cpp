#include <iostream>
#include <stack>
using namespace std;


void main()
{
	// stack
	// - 후입 선출(나중에 들어온게 먼저나감.
	stack<int> testStack;
	testStack.push(1);
	testStack.push(2);
	testStack.push(3);
	testStack.push(4);
	testStack.push(5);
	

	while (!testStack.empty())
	{	// testStack.top  == 가장 나중에 들어온 데이터.
		cout << testStack.top() << endl;
		testStack.pop();					// 리턴 값없음.
	}
	
}