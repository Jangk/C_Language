#include <iostream>
using namespace std;

// ���ø� T����
template <typename T>

// ���ø� Ŭ������ ����
template <class CT>

// �� 2���� typename�� class�� ���̰� ���ٰ������.

T Add(T t1, T t2);

void main()
{
	// ���ø�  
	// - �ڵ带 �ڷ������� �ȸ��� ��
	// ex) ���ø� �Լ���<�ڷ���>(�Լ�����);
	cout << Add<int>(10, 10);				// �տ� �ڷ����� �����ϸ� ������ �ڷ������θ� ���� .

	// ���ø��� ����ϴ� �ڷ����� ���������� exe���� �뷮 ������.(inline�� ���)
	// ������ �ӵ��� ������ ��. (��Ÿ���� ������ ����.)
	// ������ �ܰ迡�� �������� �ο���.


	// main.cpp �����ϵɶ� �ٸ� Ŭ������ ����� ���� �� ������, �ٸ� cpp�� ������������.(���߿� ���� �����ϴ�)
	// �� template class�� ���� ����� template �Լ�, ������ ����Ѵ�. cpp������ �� ����.

	// object�� �����Ҷ� �� Ÿ���� ����ؾߵ�.
	// ex)
	// testClass abc ;					// ����
	// testClass<int> abc;				// ����.

}

template<typename T>
T Add(T t1, T t2)
{
	return t1+t2;
}
