#include <iostream>
using namespace std;

class Animals
{
public:
	~Animals();					// ���� ���ε�
	virtual ~Animals();			// ���� ���ε� - �θ� �Ҹ��ڰ� virtual�̸� �ڽ� �Ҹ��ڵ� virtual�� �ȴ�.	
private:
};


//class Ŭ������ : ���������� ����� Ŭ������
class Cat : public Animals
{
public:
	~Cat();
private:
};


void main()
{
	// ���� �Ҹ���
	// ���� ���ε����� �Ҹ��ڸ� �ҷ����� ���빰���� ���� ���¸� ���� 
	Cat* cat     = new Cat;
	Animals* ani = new Cat;
	delete(ani);				// ���� ���ε��� �Ͼ cat �Ҹ��ڰ� �ƴ϶� �θ��� animals �Ҹ��ڸ�
								// �ҷ��� cat�� �Ҹ��ڴ� �۵�����. (cat �����Ҵ� ���ֱ⶧���� �޸� ����)


	// ��� �Ҹ��ڿ��� virtual ���̴� ���� ����.(�޸� ���� ���� ����)
	
}

Animals::~Animals()
{
}

Cat::~Cat()
{
}
