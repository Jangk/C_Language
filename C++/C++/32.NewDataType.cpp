#include <iostream>
using namespace std;

void main()
{
	// nullptr
	// - c++에서 생긴 포인터 주소형 NULL


	// 고정폭 정수형
	// #include <cstdint>
	// - 실제로 데이터 타입은 표준은 바이트 제한이없다. (int가 4바이트든 8바이트든 표준이 정해져있지않다)
	// int8_t , uint8_t, int16_t .... 등 자료형에 바이트 크기를 명시적으로 선언한 데이터 타입.


	// Enum Class
	// - 기존 c스타일 enum은 정수에 대입하고 비교연산이 전부 작동이되 매우 위험한 구조였음
	// - 정수형으로 암시적 캐스팅이없음
	// - 자료형 검사를 함
	// - enum에 할당할 바이트 양을 설정가능. (파일에 저장할땐 용량을 알아야되기 때문.)
	// ex)
	enum class EnumClassName : uint8_t				// 8비트 unsigned int에 넣겠다 선언. (크기 8비트)
	{
		ENUM1,
		ENUM2,
		ENUM3,
		ENUM4,
		FINAL = 0x100			// 크기를 초과했지만 경고만 뜨고 에러는 안뜸.
	};
	
	EnumClassName::ENUM1;		// 사용방법.

}