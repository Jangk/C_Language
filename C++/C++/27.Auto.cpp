#include <iostream>
using namespace std;


void main()
{
	// auto
	// - 자료형을 자동으로 추론해줌
	// - java의 동적인 형과는 다르다. (실행중에 바뀌는 구조가아님)
	// - 컴파일 단계에서 결정됨.( 무조건 선언과 동시에 초기화해줘야댐)
	// - 초기화되는 데이터가 const면 const로 적용됨
	// - 포인터와 참조도 모두 받을 수 있다.	// 포인터랑 참조의 경우 결과가 다름
	// ex) pointer
	int* a = new int(3);
	auto testAuto = a;				// a의 주소와 testAuto의 주소는 같다.
	auto* aPointer = a;				// 위와 동일하지만 auto에 *를 달아 포인터형임을 명시적으로 표현
	cout << a << endl;
	cout << testAuto << endl;		// 셋다 주소가 같음.
	cout << aPointer << endl;

	// ex) reference
	int b = 0;
	int& ref = b;					
	auto auto1 = ref;				// auto1은 레퍼런스가 되는게 아니라 ref의 주소를 가진 포인터 변수가됨.

	cout << &b << endl;
	cout << &ref << endl;			// auto만 다른 주소를 가짐.
	cout << &auto1 << endl;



	// auto를 레퍼런스로 받기
	const int constInt = 0;			
	const auto auto2 = constInt;	// const를 달지않아도 되지만 명시적으로 표현
	auto& auto3 = ref;				// auto&로 선언하면 레퍼런스변수로 적용되어 b와 주소가 같음.
	
	cout << &auto2 << endl;
}

