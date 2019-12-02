#include <iostream>
#include <queue>
using namespace std;

void main()
{
	// Queue 선입선출
	// - 먼저 들어온 데이터가 먼저 나감.
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
		testQueue.pop();				// 리턴값 없음.
	}
	
}