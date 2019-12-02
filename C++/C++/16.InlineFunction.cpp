#include <iostream>
#define TEST_MACRO(x) (x)*(x)
using namespace std;

inline int inlineFunc(int x)
{
	return x*x;
}


void main()
{
	// 매크로 
	// 맨위의 #define 수식처럼 이용가능
	// 디버깅 및 범위, 콜스택 등 이용불가능.
	cout << TEST_MACRO(3) << endl;



	// 인라인 함수 - 가독성(함수화)와 성능을 잡음
	// 함수의 오버헤드없이 컴파일러가 코드를 복사해서 붙이는 형식이라 성능이 뛰어남
	// 간단한 기능을 구현에 뛰어남   ex) getter setter 등
	cout << inlineFunc(3);			// 이 수식을 컴파일러에서 cout << 3*3 으로 바꿔줌


	// 인라인 단점 
	// ** inline 함수가 아니라도 컴파일러가 inline 함수로 만들 수도 있다.
	// 컴파일러가 결정하는것이라 작동안될 수도있음.
	// 컴파일러가 다른 함수에 마음대로 적용할 수도 있음.
	// 인라인 함수의 헤더(선언부)에 함수 정의가 있어야됨. ---- 컴파일러가 즉시 복사할수 있어야되기떄문 *** 중요 ***
	// 코드 복사하는 원리라 많이 쓰면 파일 용량이 커짐
}