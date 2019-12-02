#include <iostream>
using namespace std;


class OperFunc
{
private:
	int m_x;
	int m_y;

public:
	void SetValue(int x, int y);


	friend std::ostream& operator<<(std::ostream& os, const OperFunc & operFunc);
	OperFunc operator+ (const OperFunc& operFunc)const;
	OperFunc();
};



void main()
{
	// ���۷��� ���� �տ� �ٴ� & ���׿����ڰ� �ƴ�����
	// �ּҿ������� &�� ���׿�����
	OperFunc a, b, c;
	a.SetValue(10, 10);
	b.SetValue(20, 20);
	c = a + b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//cout << ����
	//cout.opertator<<(����)    �� ���� ��� ���� ��
	//ex)
	//int num = 10;
	//cout << num;
	//cout.operator<<(num);
	// =,(),[],-> �� Ư�� �����ڵ��� ����Լ��� �̿��ؼ��� �����ε��� �����ϴ�.




	// ####################################################
	// friend �Լ� 
	// �ٸ� Ŭ������ �Լ����� private�� protected ���� ���
	// ex) Ŭ���� ����������(public, protected, private)�� ����
	// friend class classname;						// classname�̶� class�� ���� ���
	// friend returnType FunctionName(Parametor)	// FunctionName �Լ��� �������
													// friend�� �޴� ����Լ��� �����Լ������Ѵ�.
	//												   friend�Լ��� ����Լ��� �ƴ�.
	cout << c << endl;
}



void OperFunc::SetValue(int x, int y)
{
	m_x = x;
	m_y = y;
}



// �Լ� ���Ǻ�
// ������ �����ε� : ������(Ŭ����) operator(����� ������)(const Ŭ����& ������)const //������ ���ڴ� �ٲ�������
OperFunc OperFunc::operator+(const OperFunc & operFunc)const
{
	OperFunc val;
	val.m_x = m_x + operFunc.m_x;
	val.m_y = m_y + operFunc.m_y;
	return val;
}



// ������		      �ʱ�ȭ ����Ʈ
OperFunc::OperFunc() : m_x(0), m_y(0)
{
}



// ������ �Լ� ����� �����Լ������Ѵ�.
// cout�� ���� ������ �����ε��� ���������
// cout Ÿ������ ��ȯ
std::ostream& operator<<(std::ostream & os, const OperFunc & operFunc)
{
	os << operFunc.m_x << "," << operFunc.m_y;
	return os;
}
