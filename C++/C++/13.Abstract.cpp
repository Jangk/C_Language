#include <iostream>
using namespace std;

// �߻� Ŭ����
// ���� �����Լ��� ������ �ִ� Ŭ������ �߻�Ŭ������ Ī��.
class Animals
{
public:
	// ���������Լ� ( �ƹ��͵� �������ʴ� �Լ�)
	// ���������Լ��� ���� Ŭ������ �ڽ��� ���������Լ��� ������ �������̵� �ؾߵȴ�.
	// ���������Լ��� ������, ���۷��� �����θ� �����Ҽ�����. �ƹ��͵� �������ʾƼ� �Ϲ� ������ ���� �Ұ�.
	// - ������������ �ڽ��� �����ؼ� ��� ex) Animals* ani = new Animals <- �Ұ����ϳ� �ڽ�Ŭ������ new �ϴ� �� ����


	// ���������Լ� ���� ��	
	virtual void Speak() = 0;
private:
};

class Cat : public Animals
{
public:
	void Speak();
private:
};


void main()
{

}