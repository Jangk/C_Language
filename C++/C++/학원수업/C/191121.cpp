#include <iostream>

using namespace std;

// ##1. 매크로
// 반복적으로 자주 사용될만한 문장들을 매크로로 정의한다.
// #define으로 정의하는 전처리기이다.
// 매크로는 컴파일 전에 단순 치환된다. -> 전처리기 특징.

// ##2. 매크로 상수
// 상수에 이름을 짓고 사용한다. 뒤에 세미콜론은 생략한다.
#define PI 3.14f
#define GRAVITY 9.8f
#define MAX_COUNT 5

// ##3. 매크로 함수
// 자주 사용할 "짧은 문장"들을 매크로로 정의한다.
#define SQUARE(X) (X) * (X)
#define AREA_CIRCLE(R) SQUARE(R) * PI

// 두 줄 이상의 매크로를 정의할 때 \를 사용하라! 그러면 다음줄까지 매크로로 인식한다.
#define SAFE_DELETE(P)	\
if(P)					\
{						\
	delete P;			\
	P = nullptr;		\
}

void main()
{
	// ##3. 매크로 함수
	int* ptr = new int(10);

	SAFE_DELETE(ptr);


	/*int iA = SQUARE(2);
	cout << iA << endl;

	iA = SQUARE(2 + 2);
	cout << iA << endl;*/



	//// ##2. 매크로 상수
	//cout << PI << endl;
	//cout << GRAVITY << endl;

	//int iArr[MAX_COUNT] = {};
}