#include <iostream>
#include <set>
using namespace std;

void main()
{
	// set
	// - �ߺ����� �ʴ� key�� ������. key�� value�� ����.
	// - ���� Ž�� Ʈ�� ���, �ڵ����� ���ĵ�.
	// ex)
	set<int> testSet;
	testSet.insert(10);
	testSet.insert(20);


	// �����  = map�� ����



	for (set<int>::iterator it = testSet.begin(); it != testSet.end(); ++it)
		// key�� value�� ���Ƽ� first, second�� ����.
		cout << *it << endl;
}