#include <iostream>
#include <cassert>
using namespace std;


// ���� ó���� ���� ������   : stl ���� ó������ Ŭ������ ���
struct slotNullException : public std::exception
{
	const char* what() const throw()
	{
		return "slot in NULL";
	}
};


class test
{
public :
	const int* mSlot;
	test(int count)
	{
		mSlot = new int[count];
		if (mSlot == NULL)
		{
			throw slotNullException();
		}
	}
private :
};



void main()
{
	// ���� ������.
	// test(int count)
	// {
	//    mSlot = new int[count];
	// }
	// ���� test Ŭ������ �����ڿ� mSlot�� null�̸� ���ϰ��� ���� ������ �� ��������.
	// �̷����� ���ؼ� ���� �����ڸ� �����.

	// ���� ó�� �����ڴ� ���� ����
	test tt(0);



	// ���� ó���� �ؾߵǴ� 3���� ��Ȳ
	// 1. ��ȿ�� �˻�/���ܴ� ���� ��迡���� 
	//	  - �ۿ��� ���� �����ʹ� ������ �� ���� ����		ex) ���� �б� ����, �ܺ� ���̺귯��
	// 2. �ϴ� �ý��ۿ� ���� �����ʹ� �� �Ǵٰ� ó���ؾߵ�.
	//	  - assert�� �̿��Ͽ� ������ ������ ã�� ��ĥ��.
	// 3. ���ܻ�Ȳ�� �߻��ҋ� NULL�� �ɵ������� ��� 
	//    - ������ �⺻������ �Լ��� null ��ȯ�ϰų� �޴� ���� ����ߴ� 
	//    - �ڵ�ǥ��!!! ���� null�� ��ȯ�ϰų� �޴´ٸ� �Լ��̸��� �ſ� ������ߵ�.
	

	// assert �Լ� (����� ���)
	// - ������ ���Ű��� �κп� �־�θ� ���α׷��� �����ڿ��� �˷���
	// ����Ϸ��� cassert ����� �����ؾߵǸ� Debug ��忡���� �۵���. (release���� ���۵�)
	int a = 5;
	while (true)
	{
		assert(a <= 0);				// a < =0 ������ �����Ǹ� ���� �߻���ġ call stack�� ������ ����. 
		--a;						// 
		cout << a << endl;
	}
	// ���� ó���� ���߿� �ٽ� �����Ұ�; 
}