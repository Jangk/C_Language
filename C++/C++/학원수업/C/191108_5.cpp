#include <iostream>

using namespace std;

// ���丮�� (������)

// 3! = 3 * 2 * 1
// 5! = 5 * 4 * 3 * 2 * 1
// N! = N * (N - 1) * (N - 2) * .... * 1

// ����.1 ��� �Լ��� �̿��ؼ� 5!��(��) �����غ��ƶ�.
int Factorial(int n);

void main()
{
	int iFac = Factorial(3);

	cout << iFac << endl;
}

int Factorial(int n)
{
	if (0 == n) // Ż�� ����
		return 1;

	return n * Factorial(n - 1);
}