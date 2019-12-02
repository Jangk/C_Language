#include <iostream>
using namespace std;


template <typename T, typename ... ARGS>
void Goo(T a, ARGS ... args)
{
	static int n = 0;
	++n;

	cout << n << ": " << typeid(T).name() << " : " << a << endl;

	// ���� ���� 'recursive'�� ������� ������ �Ѵ�.
	// recursive�� ������� �����ϹǷ� ���� �ڵ忡 ���ؼ��� ����ؾ��Ѵ�.
	Goo(args...);
}


// ����� ���Ḧ ���� ���ھ��� Goo �Լ��� �ʿ��ϴ�.
void Goo()
{
	cout << "Goo ����" << endl;
}


void main()
{
	// ���� ���� ���ø�
	// - �Լ� ���� ������ ���Ѵ�� �ø�������.
	// - �Ű����� ��Ͽ��� ... ��


	// ���� ���� ���ø� Ŭ����
	// template<typename ... Arguments>				// arguments  : �Ű����� �������� �ǹ�
	// class classname{};


	// ���� ���� ���ø� �Լ�
	// template<typename ... Arguments>
	// returnType FunctionName(Arguments ... arg) {}
	int a = 0, b = 0;

	Goo(10, 20, 30, 40 ,50);
}