#include <iostream>

using namespace std;

// ##1. ����ü (enumeration)
// ����� ���� �ڷ���
// ��� ���� �̸��� �ο��ϰ� �ش� ����� �ڷ����� �ο��Ѵ�.

enum STATE_TYPE 
{ 
	IDLE,		/* 0 */
	MOVE = 2,	/* 2 */	
	ATTACK		/* 3 */
};

enum DRINK_TYPE
{
	COKE,		/* 0 */
	CIDER,		/* 1 */
	FANTA,		/* 2 */
	TYPE_END	/* 3 */
};

void main()
{
	// ����. ����ǥ ���α׷� ���׷��̵�!
	// �л����� ����ǥ�� ����� �� ��� ���� �������� �������� �����Ͽ� ����ϱ�.
	// �˻� ���� ��� �߰��ϱ�.

	









	// ����ü ����.
	int iDrink[TYPE_END] = {};

	iDrink[COKE] = 100;
	iDrink[CIDER] = 200;
	iDrink[FANTA] = 300;

	int iSelect = 0;

	cout << "1.�ݶ� 2.���̴� 3.ȯŸ" << endl;
	cin >> iSelect;

	switch (iSelect - 1)
	{
	case COKE:
		cout << "�ݶ� ����!" << endl;
		cout << iDrink[COKE] << "��" << endl;
		break;
	case CIDER:
		cout << "���̴� ����!" << endl;
		cout << iDrink[CIDER] << "��" << endl;
		break;
	case FANTA:
		cout << "ȯŸ ����!" << endl;
		cout << iDrink[FANTA] << "��" << endl;
		break;
	}



	//// ##3. ����ü�� ����� ���
	//// ����ü ������ �������� ������ ���� ������ �� �ִ�!
	//STATE_TYPE eState = MOVE;
	//STATE_TYPE eState2 = 2; // Error!

	//switch (eState)
	//{
	//case IDLE: // �������� ������ ������ ��� ������ ���Ѵ�.
	//	cout << "��� ����" << endl;
	//	break;
	//case MOVE:
	//	cout << "�̵� ����" << endl;
	//	break;
	//case ATTACK:
	//	cout << "���� ����" << endl;
	//	break;
	//}


	//// ##2. ����ü�� ������� ���� ���
	//int iState = 1;

	//switch (iState)
	//{
	//case 0:
	//	cout << "��� ����" << endl;
	//	break;
	//case 1:
	//	cout << "�̵� ����" << endl;
	//	break;
	//case 2:
	//	cout << "���� ����" << endl;
	//	break;
	//}
}