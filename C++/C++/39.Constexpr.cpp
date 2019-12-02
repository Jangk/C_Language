#include <iostream>
using namespace std;


constexpr int Fibonachi(int n)
{
	return n <= 1 ? 1 : n * Fibonachi(n - 1);
}


void main()
{
	// constexpr �Լ� (�����)
	// - ������ �ÿ� �� �򰡸� �����ϱ� ���� ���ø� ��Ÿ���α׷� ������ ���� �������� ���
	// - �����Ϸ����� ���� ������ ������ ��û (�����Ϸ��� �Ǵ��ϸ� Ű���带 �����ʾƵ� �Ҷ��� ����.)
	// - ���α׷��Ӱ� �� �򰡸� ��������� ǥ���ϱ� ���� ���
	// - ��������� ��� �����Ϸ��� �Ǵ��Ͽ� ������.
	//int value = 3;
	//int result1 = Fibonachi(value);				// ok
	//constexpr int result2 = Fibonachi(value);		// constexpr ������ ������ ���� �� �ִ� ��(value)�� 
	//												// �����ؼ� ��������.
	//constexpr int result3 = Fibonachi(3);			// ok


	// constexpr ����
	// - �����Ϸ��� ������ ���߿� ���������� ���� ������. (constexpr ������ ������ ����. �Լ��� �����Ϸ��� �Ǵ�.)
	// - ���������� �ʹ� ���� ����(��� ��)�� �ϸ� �����Ϸ��� �ź��� ���� ����.

	
	// �ؽ� ��ȣ �����Ҷ� �ַλ�� (������)
	// const�� ����Լ����� ����, constexpr�� ���, ���� ��� ����
}