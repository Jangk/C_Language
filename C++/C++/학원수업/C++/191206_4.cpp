#include <iostream>

using namespace std;

// ##1. �Լ� ��ü (functor, �Լ���)
// �Լ� ȣ�� ������ "()" �� �����ε� �Ѵ�.
// �Ϲ� �Լ��� �ٷ� �� ���� ���, ���, ������ ��� �����ϴ�.

class CAdd
{
public:
	// �Լ� ȣ�� ������ �����ε��� ���� ���� ������ ����.
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void main()
{
	CAdd functor;

	// ��ü�� �Լ�ó�� �ٷ� �� �ִ� -> �Լ���ü.
	cout << functor(10, 20) << endl; // functor.operator()(10, 20);
}