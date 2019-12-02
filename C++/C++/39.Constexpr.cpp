#include <iostream>
using namespace std;


constexpr int Fibonachi(int n)
{
	return n <= 1 ? 1 : n * Fibonachi(n - 1);
}


void main()
{
	// constexpr 함수 (상수식)
	// - 컴파일 시에 값 평가를 강제하기 위해 템플릿 메타프로그램 남용한 것을 막기위해 사용
	// - 컴파일러에게 계산된 값으로 나오게 요청 (컴파일러가 판단하며 키워드를 적지않아도 할때도 있음.)
	// - 프로그래머가 값 평가를 명시적으로 표시하기 위해 사용
	// - 명시적으로 적어도 컴파일러가 판단하에 적용함.
	//int value = 3;
	//int result1 = Fibonachi(value);				// ok
	//constexpr int result2 = Fibonachi(value);		// constexpr 변수는 실행중 변할 수 있는 값(value)를 
	//												// 대입해서 하지못함.
	//constexpr int result3 = Fibonachi(3);			// ok


	// constexpr 변수
	// - 컴파일러가 컴파일 도중에 변수를들을 결정 지어줌. (constexpr 변수는 무조건 해줌. 함수는 컴파일러가 판단.)
	// - 예외적으로 너무 많은 연산(재귀 등)을 하면 컴파일러가 거부할 수도 있음.

	
	// 해쉬 암호 연산할때 주로사용 (빨라짐)
	// const는 멤버함수에만 가능, constexpr는 멤버, 비멤버 모두 가능
}