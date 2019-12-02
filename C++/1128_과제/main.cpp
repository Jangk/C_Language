#include <iostream>
#include "ScoreBoard.h"
using namespace std;


void main()
{
	// 과제1 
	// - 성적표 프로그램 클래스로 작성.
	// - 입력, 출력, 검색 출력, 검색 삭제
	// - 출력시 평균 점수로 내림차순
	// - 몇명 입력할 것인가 입력받을것
	// - 추가기능 : 추가 입력 가능(동적 배열로 성적표 관리하기)
	//   몇명이나 더 추가할 것인가 ? 입력받을 것

	ScoreBoard CScoreBoard;
	string strName;
	int iSelect = 0;
	int iStudentsMax = 0;

	cout << "최대 학생수를 입력하세요 : ";
	cin >> iStudentsMax;

	CScoreBoard.InitScoreBoard(iStudentsMax);
	system("pause");
	system("cls");


	while (true)
	{
		cout << "1. 입력" << endl;
		cout << "2. 출력" << endl;
		cout << "3. 검색" << endl;
		cout << "4. 검색 삭제" << endl;
		cout << "5. 학생 추가" << endl;

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
			cout << "찾을 학생 입력 " << endl;
			cin >> strName;
			CScoreBoard.SearchStudents(strName);
			break;

		case 4:
			cout << "지울 학생 입력 " << endl;
			cin >> strName;
			CScoreBoard.SearchDelete(strName);
			break;

		case 5:
			cout << "추가할 학생 수를 입력하세요 " << endl;
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
