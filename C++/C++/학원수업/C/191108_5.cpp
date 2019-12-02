#include <iostream>

using namespace std;

// 팩토리얼 (순차곱)

// 3! = 3 * 2 * 1
// 5! = 5 * 4 * 3 * 2 * 1
// N! = N * (N - 1) * (N - 2) * .... * 1

// 문제.1 재귀 함수를 이용해서 5!을(를) 구현해보아라.
int Factorial(int n);

void main()
{
	int iFac = Factorial(3);

	cout << iFac << endl;
}

int Factorial(int n)
{
	if (0 == n) // 탈출 조건
		return 1;

	return n * Factorial(n - 1);
}