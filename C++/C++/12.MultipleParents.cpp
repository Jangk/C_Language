#include <iostream>
using namespace std;


class Parents1
{
public:
	// �θ𳢸� ����� �����ʾ����Ƿ� �������̵��� �ƴϴ�.
	void ParentsFunction() { cout << "�θ�1 �Լ�" << endl; }
	Parents1() { cout << "�θ�1 ������" << endl; }
};
class Parents2
{
public:
	// �θ𳢸� ����� �����ʾ����Ƿ� �������̵��� �ƴϴ�.
	void ParentsFunction() { cout << "�θ�2 �Լ�" << endl; }
	Parents2() { cout << "�θ�2 ������" << endl; }
};


// ���� ���
// �����ڴ� ���� ��ӹ��� Parents1 ���� �ҷ�����.
class Children : public Parents1, public Parents2
{
public:
	// �ʱ�ȭ����Ʈ�� parents2�� �����ں��� ȣ���ص� ��Ӽ����� �ҷ��´�.
	Children() : Parents2(), Parents1() { cout << "�ڽ� ������" << endl; }
};

void main()
{
	Children* ch = new Children;
	
	// �� �θ� ���� �Լ��� ���� ������ �Լ����� ��ȣ��. ����.
	//ch->ParentsFunction();

	// ����� �θ� ��������� ��밡��
	ch->Parents1::ParentsFunction();



	// ���� �θ� Ŭ���� (��ü���������� ��������� �ƴ�)							��			(�θ�)
	// �θ� �ؿ� �ڽ�2���� �ְ� �� �ؿ� ����(�ڽ�2�� �� �θ�� �δ� �ڽ�)		��        �� (�ڽ�1  �ڽ�2)
	// �θ� �ؿ� �ִ� �ڽ� �Ѹ�� �θ� �ϳ��������� �־ �θ�2������			��			(����)
	// �� ��� �θ� �ϳ��� ����ϱ� ���� virtual �θ�� ����� �޾�
	// �θ� �Ѱ��� ����
}