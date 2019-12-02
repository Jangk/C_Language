#include <iostream>

using namespace std;

// ##1. 구조체 (structure)
// 사용자 정의 자료형.
// 연관된 데이터 집합.

// ##2. 구조체 정의
struct tagPlayer
{
	// 멤버 변수
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
	// 과제: 성적표 프로그램 (배열 + 함수 + 문자열 + 구조체)
	// 총 5명의 학생 정보를 관리.

	// 메뉴 구성: 1.성적표 입력 2.성적표 출력 3.성적표 검색
	// 성적표 입력: 5명의 이름, 국, 영, 수를 입력하는 메뉴
	// 성적표 출력: 5명의 성적표를 출력하는 메뉴
	// 성적표 검색: 학생 이름을 검색하면 해당 학생의 성적표 출력하는 메뉴








	//// ##7. 구조체 포인터
	//tagPoint tPos = { 100, 200 };

	//// 구조체 변수의 주소는 첫번째 멤버의 주소와 같다.
	//// 즉, 구조체 변수의 주소는 해당 메모리의 시작주소이다.
	///*cout << &tPos << endl;
	//cout << &(tPos.x) << endl;
	//cout << &(tPos.y) << endl;*/

	//tagPoint* ptr = &tPos;

	//// 구조체 변수의 주소만 알면 모든 멤버에 접근 가능.
	///*cout << (*ptr).x << endl;
	//cout << (*ptr).y << endl;*/

	//// 구조체 포인터는 "화살표 연산자"를 이용해서 역참조 한다.
	//cout << ptr->x << endl;
	//cout << ptr->y << endl;






	//// ##6. 데이터 복사
	//tagGrade tGrade1 = { "홍길동", 90, 80, 100 };
	//tGrade1.iTotal = tGrade1.iKor + tGrade1.iEng + tGrade1.iMath;
	//tGrade1.fAver = float(tGrade1.iTotal) / 3;

	//// 구조체를 이용하면 여러 데이터를 한 번에 처리할 수 있다.
	//tagGrade tGrade2 = tGrade1;

	//cout << tGrade2.szName << endl;
	//cout << tGrade2.iKor << endl;
	//cout << tGrade2.iEng << endl;
	//cout << tGrade2.iMath << endl;
	//cout << tGrade2.iTotal << endl;
	//cout << tGrade2.fAver << endl;





	// ##5. 연습
	/*tagGrade tGrade = {};

	cout << "이름: ";
	cin >> tGrade.szName;

	cout << "국어: ";
	cin >> tGrade.iKor;

	cout << "영어: ";
	cin >> tGrade.iEng;

	cout << "수학: ";
	cin >> tGrade.iMath;

	tGrade.iTotal = tGrade.iKor + tGrade.iEng + tGrade.iMath;
	tGrade.fAver = float(tGrade.iTotal) / 3;

	cout << "결과 ############" << endl;
	cout << "이름: " << tGrade.szName << endl;
	cout << "국어: " << tGrade.iKor << endl;
	cout << "영어: " << tGrade.iEng << endl;
	cout << "수학: " << tGrade.iMath << endl;
	cout << "총점: " << tGrade.iTotal << endl;
	cout << "평균: " << tGrade.fAver << endl;*/







	//// ##3. 구조체 변수 선언.
	//// 구조체의 멤버들은 연속된 메모리에 저장된다.
	//tagPlayer tPlayer1 = {};	// 모든 멤버 변수들이 0 초기화.
	//tagPlayer tPlayer2 = { "전사" }; // 첫번째 멤버는 "전사"로 초기화되고 나머지는 0 초기화.
	//tagPlayer tPlayer3 = { "마법사", 30, 500 }; // 정의된 멤버 순서대로 초기화 진행.

	//// ##4. 멤버 접근 (dot연산자)
	//cout << tPlayer3.szName << endl;
	//cout << tPlayer3.iAttPoint << endl;
	//cout << tPlayer3.iHealthPoint << endl;
}