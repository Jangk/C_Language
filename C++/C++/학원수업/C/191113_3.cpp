#include <iostream>

using namespace std;

// ##1. ����ü (structure)
// ����� ���� �ڷ���.
// ������ ������ ����.

// ##2. ����ü ����
struct tagPlayer
{
	// ��� ����
	char szName[32];
	int iAttPoint;
	int iHealthPoint;
};

struct tagGrade
{
	char szName[32];
	int iKor;
	int iEng;
	int iMath;
	int iTotal;
	float fAver;
};

struct tagPoint
{
	int x;
	int y;
};

void main()
{
	// ����: ����ǥ ���α׷� (�迭 + �Լ� + ���ڿ� + ����ü)
	// �� 5���� �л� ������ ����.

	// �޴� ����: 1.����ǥ �Է� 2.����ǥ ��� 3.����ǥ �˻�
	// ����ǥ �Է�: 5���� �̸�, ��, ��, ���� �Է��ϴ� �޴�
	// ����ǥ ���: 5���� ����ǥ�� ����ϴ� �޴�
	// ����ǥ �˻�: �л� �̸��� �˻��ϸ� �ش� �л��� ����ǥ ����ϴ� �޴�








	//// ##7. ����ü ������
	//tagPoint tPos = { 100, 200 };

	//// ����ü ������ �ּҴ� ù��° ����� �ּҿ� ����.
	//// ��, ����ü ������ �ּҴ� �ش� �޸��� �����ּ��̴�.
	///*cout << &tPos << endl;
	//cout << &(tPos.x) << endl;
	//cout << &(tPos.y) << endl;*/

	//tagPoint* ptr = &tPos;

	//// ����ü ������ �ּҸ� �˸� ��� ����� ���� ����.
	///*cout << (*ptr).x << endl;
	//cout << (*ptr).y << endl;*/

	//// ����ü �����ʹ� "ȭ��ǥ ������"�� �̿��ؼ� ������ �Ѵ�.
	//cout << ptr->x << endl;
	//cout << ptr->y << endl;






	//// ##6. ������ ����
	//tagGrade tGrade1 = { "ȫ�浿", 90, 80, 100 };
	//tGrade1.iTotal = tGrade1.iKor + tGrade1.iEng + tGrade1.iMath;
	//tGrade1.fAver = float(tGrade1.iTotal) / 3;

	//// ����ü�� �̿��ϸ� ���� �����͸� �� ���� ó���� �� �ִ�.
	//tagGrade tGrade2 = tGrade1;

	//cout << tGrade2.szName << endl;
	//cout << tGrade2.iKor << endl;
	//cout << tGrade2.iEng << endl;
	//cout << tGrade2.iMath << endl;
	//cout << tGrade2.iTotal << endl;
	//cout << tGrade2.fAver << endl;





	// ##5. ����
	/*tagGrade tGrade = {};

	cout << "�̸�: ";
	cin >> tGrade.szName;

	cout << "����: ";
	cin >> tGrade.iKor;

	cout << "����: ";
	cin >> tGrade.iEng;

	cout << "����: ";
	cin >> tGrade.iMath;

	tGrade.iTotal = tGrade.iKor + tGrade.iEng + tGrade.iMath;
	tGrade.fAver = float(tGrade.iTotal) / 3;

	cout << "��� ############" << endl;
	cout << "�̸�: " << tGrade.szName << endl;
	cout << "����: " << tGrade.iKor << endl;
	cout << "����: " << tGrade.iEng << endl;
	cout << "����: " << tGrade.iMath << endl;
	cout << "����: " << tGrade.iTotal << endl;
	cout << "���: " << tGrade.fAver << endl;*/







	//// ##3. ����ü ���� ����.
	//// ����ü�� ������� ���ӵ� �޸𸮿� ����ȴ�.
	//tagPlayer tPlayer1 = {};	// ��� ��� �������� 0 �ʱ�ȭ.
	//tagPlayer tPlayer2 = { "����" }; // ù��° ����� "����"�� �ʱ�ȭ�ǰ� �������� 0 �ʱ�ȭ.
	//tagPlayer tPlayer3 = { "������", 30, 500 }; // ���ǵ� ��� ������� �ʱ�ȭ ����.

	//// ##4. ��� ���� (dot������)
	//cout << tPlayer3.szName << endl;
	//cout << tPlayer3.iAttPoint << endl;
	//cout << tPlayer3.iHealthPoint << endl;
}