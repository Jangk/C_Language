#include <iostream>
#include "ScoreBoard.h"
using namespace std;


void main()
{
	// ����1 
	// - ����ǥ ���α׷� Ŭ������ �ۼ�.
	// - �Է�, ���, �˻� ���, �˻� ����
	// - ��½� ��� ������ ��������
	// - ��� �Է��� ���ΰ� �Է¹�����
	// - �߰���� : �߰� �Է� ����(���� �迭�� ����ǥ �����ϱ�)
	//   ����̳� �� �߰��� ���ΰ� ? �Է¹��� ��

	ScoreBoard CScoreBoard;
	string strName;
	int iSelect = 0;
	int iStudentsMax = 0;

	cout << "�ִ� �л����� �Է��ϼ��� : ";
	cin >> iStudentsMax;

	CScoreBoard.InitScoreBoard(iStudentsMax);
	system("pause");
	system("cls");


	while (true)
	{
		cout << "1. �Է�" << endl;
		cout << "2. ���" << endl;
		cout << "3. �˻�" << endl;
		cout << "4. �˻� ����" << endl;
		cout << "5. �л� �߰�" << endl;

		cin >> iSelect;
		switch (iSelect)
		{
		case 1:
			CScoreBoard.InsertStudents();
			break;

		case 2:
			CScoreBoard.PritnStudents();
			break;

		case 3:
			cout << "ã�� �л� �Է� " << endl;
			cin >> strName;
			CScoreBoard.SearchStudents(strName);
			break;

		case 4:
			cout << "���� �л� �Է� " << endl;
			cin >> strName;
			CScoreBoard.SearchDelete(strName);
			break;

		case 5:
			cout << "�߰��� �л� ���� �Է��ϼ��� " << endl;
			cin >> iStudentsMax;
			CScoreBoard.AddStudentsMax(iStudentsMax);
			break;

		default:
			return;
		}
		system("pause");
		system("cls");
	}

}
