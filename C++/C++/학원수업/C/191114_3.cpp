#include <iostream>

using namespace std;

// ##1. 열거체 (enumeration)
// 사용자 정의 자료형
// 상수 값에 이름을 부여하고 해당 상수에 자료형도 부여한다.

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
	// 과제. 성적표 프로그램 업그레이드!
	// 학생들의 성적표를 출력할 때 평균 점수 기준으로 내림차순 정렬하여 출력하기.
	// 검색 삭제 기능 추가하기.

	









	// 열거체 응용.
	int iDrink[TYPE_END] = {};

	iDrink[COKE] = 100;
	iDrink[CIDER] = 200;
	iDrink[FANTA] = 300;

	int iSelect = 0;

	cout << "1.콜라 2.사이다 3.환타" << endl;
	cin >> iSelect;

	switch (iSelect - 1)
	{
	case COKE:
		cout << "콜라 구매!" << endl;
		cout << iDrink[COKE] << "원" << endl;
		break;
	case CIDER:
		cout << "사이다 구매!" << endl;
		cout << iDrink[CIDER] << "원" << endl;
		break;
	case FANTA:
		cout << "환타 구매!" << endl;
		cout << iDrink[FANTA] << "원" << endl;
		break;
	}



	//// ##3. 열거체를 사용한 경우
	//// 열거체 변수는 열거형에 나열한 값만 저장할 수 있다!
	//STATE_TYPE eState = MOVE;
	//STATE_TYPE eState2 = 2; // Error!

	//switch (eState)
	//{
	//case IDLE: // 열거형에 나열한 값들은 상수 성격을 지닌다.
	//	cout << "대기 상태" << endl;
	//	break;
	//case MOVE:
	//	cout << "이동 상태" << endl;
	//	break;
	//case ATTACK:
	//	cout << "공격 상태" << endl;
	//	break;
	//}


	//// ##2. 열거체를 사용하지 않은 경우
	//int iState = 1;

	//switch (iState)
	//{
	//case 0:
	//	cout << "대기 상태" << endl;
	//	break;
	//case 1:
	//	cout << "이동 상태" << endl;
	//	break;
	//case 2:
	//	cout << "공격 상태" << endl;
	//	break;
	//}
}