#include <iostream><
using namespace std;


void main()
{
	// assert(bool) 
	// - 런타임 도중 특정 조건을 만족하지 못햇을때 발생하게하고 그부분을 알려주는 함수
	// - debug 빌드에서만 작동, release에선 그냥 무시
	// - 많이 사용해도 손해 X
	// - assert부분이 적힌 코드가 실행되지 않으면 작동안함.


	// static_assert(bool 조건, 출력될 문자);
	// - assert와 다르게 컴파일 중에 과정을 검사함.
	// - 컴파일러가 참인지 거짓인지 모를 조건이면 오류표기
	// - 조건이 false면 에러.
}