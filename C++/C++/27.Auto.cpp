#include <iostream>
using namespace std;


void main()
{
	// auto
	// - �ڷ����� �ڵ����� �߷�����
	// - java�� ������ ������ �ٸ���. (�����߿� �ٲ�� �������ƴ�)
	// - ������ �ܰ迡�� ������.( ������ ����� ���ÿ� �ʱ�ȭ����ߴ�)
	// - �ʱ�ȭ�Ǵ� �����Ͱ� const�� const�� �����
	// - �����Ϳ� ������ ��� ���� �� �ִ�.	// �����Ͷ� ������ ��� ����� �ٸ�
	// ex) pointer
	int* a = new int(3);
	auto testAuto = a;				// a�� �ּҿ� testAuto�� �ּҴ� ����.
	auto* aPointer = a;				// ���� ���������� auto�� *�� �޾� ������������ ��������� ǥ��
	cout << a << endl;
	cout << testAuto << endl;		// �´� �ּҰ� ����.
	cout << aPointer << endl;

	// ex) reference
	int b = 0;
	int& ref = b;					
	auto auto1 = ref;				// auto1�� ���۷����� �Ǵ°� �ƴ϶� ref�� �ּҸ� ���� ������ ��������.

	cout << &b << endl;
	cout << &ref << endl;			// auto�� �ٸ� �ּҸ� ����.
	cout << &auto1 << endl;



	// auto�� ���۷����� �ޱ�
	const int constInt = 0;			
	const auto auto2 = constInt;	// const�� �����ʾƵ� ������ ��������� ǥ��
	auto& auto3 = ref;				// auto&�� �����ϸ� ���۷��������� ����Ǿ� b�� �ּҰ� ����.
	
	cout << &auto2 << endl;
}

