#include <iostream>
using namespace std;


void test1(int& ref)
{	// ���۷����� �޾ƿ��⶧���� �����ͳ� ���۷��� ������ �ƴϿ��� �� ����
	ref = 10;
}


void test2(int ref)
{	// �Ϲݺ����� ���۷����� �־ �� ���� ����� �ȹٳ�
	ref = 20;
}


void test3(const int& ref)		// �Լ� ������ ���۷��������� const�� �б� �������� ����� �ִ�.
{								// �Լ� �̸����� ������� ������ �б��������� �˼�������.
	//ref = 20;					// �б� �����̶� �ٲܷ��� �ҽÿ� ������
}

void main()
{
	int a = 1;
	int b = 2;
	int& ref = a;
	int& ref2 = b;


	test1(b);
	cout << b << endl;
	test1(ref);
	cout << ref << endl;
	test2(ref);
	cout << ref << endl;
	test3(ref2);
	cout << ref2 << endl;

//
//void printElements(int(&arr)[4])
//{ //�̷������� �Լ����ڸ� �޾ƿü��ִ�.ũ�� ������ ������ �ؾߵ�. (�����Ϳ���ó�� �ּҿ� ���� �������� ������ ����)
//	int length{ sizeof(arr) / sizeof(arr[0]) };
//	for (int i{ 0 }; i < length; ++i)
//	{
//		std::cout << arr[i] << std::endl;
//	}
//}
//
//
//int main() 
//{
//	int arr[]{ 99, 20, 14, 80 };
//	printElements(arr); 
//	return 0; 
}