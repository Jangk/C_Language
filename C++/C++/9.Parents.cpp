#include <iostream>
using namespace std;

class Animals
{
public:
	void AnimalsFunction1();
	Animals(int age);

private:
	int m_Age;
};


//class Ŭ������ : ���������� ����� Ŭ������
class Cat : public Animals
{
public:
	// �������̵�
	// �θ��� ����� ���� �Լ��� �ڽ��� �Ȱ��� �̸����� �Լ��� �������ؼ� �ϴ� ��.
	void AnimalsFunction1();
	Cat(int age, const char* name);

private:
	char* m_Name;
};


void main()
{
	// ���  
	// �ڽ� Ŭ������ �θ� ��ӹ޾� �θ��� ��� ����, �޼��带 �����.

	// is a  = ����(�θ�) �����(�ڽ�), ����� is a ����
	// has a = �ڵ���(�θ�) ����(�ڽ�), ���� is a �ڵ���(���� X)  ������ has a �ڵ���(������ �ڵ��� ��ǰ�̴� )
	
	Cat cat(10, "����");
	// cat ���ο� AnimalsFunction�̶�� �Լ��� ������ �θ𿡼� ã��
	// cat ���ο� �Լ��� ������ cat �����Լ��� �ҷ��� ( �������̵�)
	cat.AnimalsFunction1();


	// ����� �� ��ü�� �����Ǹ�, �θ� ������ - > �ڽ� ������ ������ �ߵ�
	// ����� �� ��ü�� ���ŵǸ�, �ڽ� �Ҹ��� - > �θ� �Ҹ��� ������ �ߵ�


	// �θ� ������ �߿� Ư�� �����ڸ� ����ҷ��� �ʱ�ȭ ����Ʈ�� ����ؾ���
	//		�ڽ��� ������						 : �θ��� ������(�ڽĻ������� �Լ����� x, y)
	// ex)  chidrensConstruct( int x, int y) : parents(x, y);


	// �θ�Ŭ�������� �Լ����ڰ� ���� �����ڰ� ���� ���  
	// ex) parents::parents(int x, int y);  <--- �Լ����ڰ� �ִ� �����ڸ� �������
	// �ڽĿ��� �Լ����ھ��� �ʱ�ȭ�� �õ��ϸ� ������ ���� 
}







// �Լ� ���Ǻ�

void Animals::AnimalsFunction1()
{
	cout << "Animals Function" << endl;
}

Animals::Animals(int age)
{
	m_Age = age;
}

void Cat::AnimalsFunction1()
{
	cout << "Cat Function" << endl;
}


//									   �θ��� ������ ȣ��
Cat::Cat(int age, const char * name) : Animals(age)
{
	size_t size = strlen(name) + 1;		// ���ڿ� ������ /n ������
	m_Name = new char[size];
	strcpy_s(m_Name, size, name);
}
