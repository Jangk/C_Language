#include <iostream>

using namespace std;

class CTest
{
public:
	explicit CTest(int a)
	{
		cout << "�����ִ� ������" << endl;
	}
};

void main()
{
	CTest obj1(100);

	// �� �� 100�� CTest Ÿ������ ������ ����ȯ�� �Ͼ��.
	// ����, �Ʒ��� ���� ������ ������ ȥ���� �� �� �����Ƿ� 
	// explicitŰ���带 �̿��Ͽ� ������ ����ȯ�� �����Ѵ�.
	//CTest obj2 = 100;
}