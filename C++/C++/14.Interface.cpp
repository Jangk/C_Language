#include <iostream>
using namespace std;

// �������̽� 1   ---- �����͸� ���������ʴ´�.
class IFlyable
{
public:
	virtual void Fly() = 0;
};

// �������̽� 2
class IWalkable
{
public:
	virtual void Walk() = 0;
};


// �������̽� ��뿹 1
class Bat : public IFlyable, public IWalkable
{
public:
	void Fly();
	void Walk();
};

// �������̽� ��뿹 2
class Cat : public IWalkable
{
public:
	void Walk();
};

void main()
{
	// �������̽� : �����߻�Ŭ����
	// �߻� Ŭ������ ��������� �����͸� �������� �ʰ� �߻� �Լ��� ����ִ� ��. // �ִ´ٰ� �����Ͽ����� ��������
}