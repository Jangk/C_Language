#include <iostream>
using namespace std;


class TestClass
{
public:
private:
	TestClass();
	~TestClass();
	TestClass(const TestClass& test);
};



void main()
{
	// Ŭ������ �������� ����Ʈ �Լ� 
	// �Ű����� ���� ������
	// �Ҹ���
	// ���������
	// ���� ������		= ��� ��������� �����ϴ� ����


	// Ŭ������ �⺻ 4���Լ��� private�� ����.(����� �ܺο��� �ҷ��ü����)
	// - �Լ� ���Ǳ��� �����ʰ� private�� �Լ� ���� �ϰ� ;�ص� �ȴ�.
	//TestClass test1;					// �Ѵ� private�� �����Ҽ� ��� ���Ұ�.
	//TestClass test2(test1);			// �Ѵ� private�� �����Ҽ� ��� ���Ұ�.

}