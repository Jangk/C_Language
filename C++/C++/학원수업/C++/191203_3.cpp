#include <iostream>

using namespace std;

// ##1. ����� ����
// Is - a ����� ����� ������ �ȴ�.
// ex) �л��� ����̴�. �κδ� ����̴�.

// Has - a ����� ����� ������ �ƴϴ�.
// ������ ���� �����ϰ� �ִ�.
class CGun
{
public:
	void Using()
	{
		cout << "���� ����" << endl;
	}
};

class CHandCuff
{
public:
	void Using()
	{
		cout << "�̶��� ��Ģ ����" << endl;
	}
};

//// Has - a ���踦 ������� �������� ���� ���.
//class CPoliceMan : public CGun, public CHandCuff // Has - a ����� ���߻���� ������ �ִ�.
//{
//
//};

// Has - a ����� ����� �ƴ� "���� ����"�� �����Ѵ�.
class CPoliceMan
{
private:
	CGun		m_Gun;
	CHandCuff	m_HandCuff;
};


void main()
{
	////// Has - a ���踦 ������� �������� ���� ���.
	//CPoliceMan officer;
	//officer.Using(); // ���߻���� ���� ū �������� "��ȣ��"�̴�.
}