#include <iostream>
using namespace std;


void main()
{
	// default --- ex) �Ͻ��� ������.
	// - default Ű���带 ����ϸ� �����Ϸ��� Ư���� ������, ������ �� �Ҹ��ڸ� ����������.
	// - ����ִ� �����ڳ� �Ҹ��ڵ��� ��üȭ ���ʿ� X
	// - �⺻�����ڸ� ��������� ǥ������.

	// delete
	// - new delete�Ҷ��� �ٸ� Ű����
	// - default�� ����� �ݴ�. �� �ڵ� �����ڳ� �Ҹ��� ���� ����� �����Ϸ��� �ڵ����� ���� �������ϰ���.
	class Dog
	{
	public:
		Dog() = default;					// �����ڴ� �����Ϸ��� �������.(����� ����������� ����� ǥ��)
		Dog(const Dog& other) = default;	// �⺻ ��������� ���� ����.
	private:
		std::string mName;
	};
}