#include <iostream>

using namespace std;

// ##1. �ζ��� �Լ� (inline)
// ������ �������� �Լ� ȣ�� ������ �ش� �Լ��� �ڵ尡 ���Ե�.

// �ζ����� ���� �ʴ� ���
// 1. ��� ȣ���� ��
// 2. �Լ� �����ͷ� �ٷ� ��

inline int Add(int a, int b)
{
	return a + b;
}

class CPlayer
{
public:
	// ���� ����: �ζ��� ��� O
	void Func1()
	{

	}

	void Func2();
};

// �ܺ� ����: �ζ��� ��� X
void CPlayer::Func2()
{

}

void main()
{
	Add(10, 20);
}