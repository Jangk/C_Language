#include <iostream>
using namespace std;


// 구조체는 기본자료형 중에서 가장 큰 바이트 자료형을 찾고 그 자료형 크기에 다음
// 만약 char int short 순서로 있으면
//      1 + 4  는 4바이트를 넘어서 
//      4   4   4 바이트를 먹어서 12바이트가 됨
typedef struct tagPoint
{
	char a;			// 1바이트라서 4바이트 크기에 담음 (1/4)
	short b;		// 2바이트라서 4바이트 크기에 담음 (3/4)		남는 부분을 패딩 바이트라고 함.(비어잇는)
	int x, y;		// 4바이트 2개 
}MY_POINT;			// 총 12바이트


// 구조체는 멤버로 자기 자신의 일반 변수를 가질 수 없다.(크기 할당에 문제가 있어서
//		   멤버 변수로 자기 자신을 쓰려면 포인터 변수로 써야한다.





// UNION 공용체
// 모든 멤버가 가장큰 자료형의 메모리를 공유함.
union UNI
{
	int x;
	int y;					// int형 2개지만 4바이트
};





// enum 열거체
// 안의 값 중 하나를 선택
// 따로 값을 넣지않으면 0부터 순서대로 배정
enum BloodType
{
	A,
	B,
	C,
	O
};


union UNI_ARR
{
	struct
	{
		int _1, _2, _3;
		int _4, _5, _6;
		int _7, _8, _9;
	};

	int m[3][3];				// 크기를 공유하기때문에 m[0][0] == _1, m[0][1] ==_2.... 동일함
								//  == 코드로 눈에 보이기때문에 가독성이 좋음.
};



void Swap(MY_POINT& myPos);

void main()
{
	MY_POINT tPos = { 100, 200 };

	Swap(tPos);

	cout << tPos.x << ", " << tPos.y << endl;
}

void Swap(MY_POINT& myPos)
{
	myPos.x ^= myPos.y ^= myPos.x ^= myPos.y;
	//myPos.x ^= myPos.y;
	//myPos.y ^= myPos.x;
	//myPos.x ^= myPos.y;
}