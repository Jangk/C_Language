#include <iostream>
using namespace std;

class testclass
{

};

void main()
{	
	// 캐스팅(형변환)
	// ########################################################################################
	// 1.static_cast									// 정적바인딩처럼 컴파일러에서 판단함.
	// 두 숫자형간의 변환 == 출력되는 값을 일정하게 변환 (2진수 표기법상으론 달라짐)
	// 이진수 표기로는 달라질 수 있음 (정수에서 실수로 강제형변환하면 나중에 2진수 값이 달라짐)


	// int int1 = 0;
	// float float1 = 0.f;
	// int1 = static_cast<int>(float1);


	// 개체 포인터형 ( 같은static_cast지만 아예 다른거라 생각하는게 편하다.)
	// " 변수형 체크" 후 부모클래스를 자식클래스로 변환
	//  - 상속관계가 맞는지 체크한다. 아니면 에러
	// 컴파일시에만 자료형을 체크하기떄문에 런타임 도중 여전히 오류확률 높음


	// ex)
	// Animals* ani = new Cat;
	// Cat* myCat = static_cast<Cat*> ani;			  //  ani는 캣이라 문법 오류없이 잘 작동
	// Dog* myDog = static_cast<Dog*> dog;			  // 문법 오류는 아니나, ani는 cat이여서 dog 함수나 데이터를
	//												     사용하려하면 에러가 남
	// Testclass* test = static_cast<Testclass*<(ani);// testclass와 ani는 상속관계가 아니라 컴파일 에러가 발생
	//					↑ 잘못된 클래스에 대입하는 경우를 막아줌으로 기존 캐스팅보다 에러확률이 낮다.








	// ########################################################################################
	// 2.reinterpret_cast	
	// static_cast와 달리 상속관계가 아니여도 형변환 가능.
	// 포인트변수와 일반변수로도 형변환가능.
	// 이진수 표기로 달라지지 않는다. (그냥 읽는 방식만 바낌.)
	// 포인터 주소를 int형으로 바꿔서 그냥 주소를 사용하는데도 이용! <---- 중요 ?


	//ex) 
	//int* reinCast = new int(-10);					 reinCast는 첫비트를 부호비트를 써서 1000 .... 1010
	//unsigned int* unsignedRein = reinterpret_cast<unsigned int*>(reinCast);
	//												 signed를 unsigned로 강제 형변환 해서 
	//												 첫 부호 비트도 정수값으로 변해서 값이 4294967286로 바낌





	// ########################################################################################
	// 3.const_cast			
	// 형변환을 하는 것이 아닌 const와 volatile을 제거할때 사용, 포인터형 변수만 const 제거하는 게 맞다. 
	// Animals* ani =  new Animals;
	// const Animals myAni = ani;
	// Animals*s testAni = const_cast<Animals*>(myAni);		// 위에서 myAni는 상수로 만들어서 변경 불가능하지만
															// const_cast는 상수를 제거가능하다.






	// ########################################################################################
	// 4.dynamic_cast										// 동적바인딩처럼 런타임에서 판단함.
	// 상속관계가 아닐경우 NULL을 리턴한다.
	// 하지만 이 캐스팅을 쓸려면 컴파일중에 RTTI(실시간 타입 정보)를 켜야한다.
	// RTTI를 키지않으면 static_cast로 작동한다.				// 정적바인딩처럼 컴파일러에서 판단함.
	

}