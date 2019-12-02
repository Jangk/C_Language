#include <iostream>
#include <set>
using namespace std;

void main()
{
	// set
	// - 중복되지 않는 key를 저장함. key는 value과 같다.
	// - 이진 탐색 트리 기반, 자동으로 정렬됨.
	// ex)
	set<int> testSet;
	testSet.insert(10);
	testSet.insert(20);


	// 장단점  = map과 동일



	for (set<int>::iterator it = testSet.begin(); it != testSet.end(); ++it)
		// key와 value가 같아서 first, second가 없다.
		cout << *it << endl;
}