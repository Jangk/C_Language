#include <iostream>
#include <queue>
using namespace std;

void main()
{
	// Queue ���Լ���
	// - ���� ���� �����Ͱ� ���� ����.
	// ex)
	queue<int> testQueue;
	testQueue.push(100);
	testQueue.push(200);
	testQueue.push(300);
	testQueue.push(400);
	testQueue.push(500);
	testQueue.push(600);

	while (!testQueue.empty())
	{
		cout << testQueue.front() << " " << endl;
		testQueue.pop();				// ���ϰ� ����.
	}
	
}