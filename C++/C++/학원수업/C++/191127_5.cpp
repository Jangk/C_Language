#include <iostream>

using namespace std;

// ##1. ĸ��ȭ: ���� ������ �ܺηκ��� ����.

class C�๰��
{
public:
	void ����()
	{
		cout << "�๰�� �ܴ´�." << endl;
	}
};

class C��ä���
{
public:
	void ����()
	{
		cout << "��ä�Ⱑ �ܴ´�." << endl;
	}
};

class C�ڸ�����
{
public:
	void ����()
	{
		cout << "�ڰ� �ո���." << endl;
	}
};

// ĸ��ȭ
class C����600
{
private:
	C��ä���		cap1;
	C�๰��		cap2;
	C�ڸ�����		cap3;

public:
	void ����()
	{
		cap1.����();
		cap2.����();
		cap3.����();
	}
};

void main()
{
	// ĸ��ȭ O
	C����600 cap;

	// �����ϴ� ���忡���� ���� ������ ���� ������ �ʿ䰡 ����. -> ĸ��ȭ.
	cap.����();



	//// ĸ��ȭ X
	//C��ä���		cap1;
	//C�๰��		cap2;
	//C�ڸ�����		cap3;

	//// ���� ��������� �� ���Ѿ� �Ѵٸ�?
	//cap1.����();
	//cap2.����();
	//cap3.����();
}