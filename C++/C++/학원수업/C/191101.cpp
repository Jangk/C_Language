#include <iostream>

using namespace std;

void main()
{
	// 숙제 종합 선물 세트

	// 1. 성적표 숙제
	// 사용자로부터 국, 영, 수 점수 입력받아 총점과 평균점수를 출력하는 프로그램 작성.
	// 이 떄 평균은 소수 점까지 표현.
	// 평균 점수 토대로 학점도 A ~ F학점까지 매기기 (if버전, switch버전)







	// ##8. 분기문
	// 코드의 실행흐름을 나누는 문법.
	// if, switch, goto

	// 3. goto
	// 일정 조건과 상관이 사용자 마음대로 코드 흐름을 나눌 수 있다.



	//// 2. switch
	//// 정수 분기문. 

	//int iSelect = -1;

	//switch (iSelect) // 조건에는 "정수"만 올 수 있다.
	//{
	//case 0:	// "상수"만 올 수 있다. 이 때 "정수"타입이어야 한다.
	//	cout << "종료합니다" << endl;
	//	break;
	//case 1:
	//	cout << "Hello" << endl;
	//	break;
	//case 2:
	//	cout << "World" << endl;
	//	break;
	//default: // 예외처리
	//	cout << "0 ~ 2만 입력하세요" << endl;
	//	break;
	//}






	// 1. if문
	// if에 오는 조건이 참이냐 거짓이냐에 따라 코드 흐름이 나뉜다.
	//if (-1) // 0이 아닌 모든 수는 "참"으로 본다.
	//{
	//	cout << "Hello" << endl;
	//}
	//else // 흑백논리
	//{
	//	cout << "world" << endl;
	//}


	/*int iSelect = 1;

	if (0 == iSelect)
	{
		cout << "종료합니다" << endl;
	}
	else if (1 == iSelect)
	{
		cout << "Hello" << endl;
	}

	else if (2 == iSelect)
	{
		cout << "World" << endl;
	}
	else
	{
		cout << "0 ~ 2만 선택해주세요" << endl;
	}*/

	





	// ##7. 비트단위 시프트 연산자
	// 피연산자는 정수만 취급한다.

	// 좌측 시프트 연산자 <<
	//int a = 1;
	//int b = a << 3;	// a가 가진 값의 비트열을 좌측으로 3칸 모두 이동.
	//cout << b << endl;

	//// X << N == X * 2^N
	//int c = b << 2;
	//cout << c << endl;
	

	//// 우측 시프트 연산자 >>
	//int a = 8;

	//// X >> N == X / 2^N
	//int b = a >> 2;	// a가 가진 값의 비트열을 우측으로 2칸 모두 이동.
	//cout << b << endl;





	// ##6. 비트단위 논리 연산자
	// 피연산자는 정수만 취급한다.

	// And	& (이항 연산자)
	// 비교하는 두 비트열이 모두 1이라면 결과는 1. 하나라도 0이면 결과는 0.
	//short a = 10;		// 0000 0000 0000 1010
	//short b = 3;		// 0000 0000 0000 0011	
	//short c = a & b;	// 0000 0000 0000 0010	
	//cout << c << endl;

	// or	| (이항 연산자)
	// 비교하는 두 비트열이 모두 0이라면 결과는 0. 하나라도 1이면 결과는 1.
	//short a = 10;		// 0000 0000 0000 1010
	//short b = 3;		// 0000 0000 0000 0011	
	//short c = a | b;	// 0000 0000 0000 1011	
	//cout << c << endl;

	// xor	^ (이항 연산자)
	//// 비교하는 두 비트열이 같으면 결과는 0. 다르면 결과는 1.
	//short a = 10;		// 0000 0000 0000 1010
	//short b = 3;		// 0000 0000 0000 0011	
	//short c = a ^ b;	// 0000 0000 0000 1001	
	//cout << c << endl;

	//// not	~ (단항 연산자)
	//// 현재 피연산자가 가진 값의 비트열을 모두 반전 시킨다.
	//short a = 10;					// 0000 0000 0000 1010
	//cout << ~a << endl;			// 1111 1111 1111 0101 -> 1의 보수
	//cout << ~a + 1 << endl;		// 2의 보수


	//// 비트단위 논리연산 응용.	
	//const unsigned short 공격속도 = 0x0001;	// 0000 0000 0000 0001
	//const unsigned short 이동속도 = 0x0002;	// 0000 0000 0000 0010
	//const unsigned short 공격증가 = 0x0004;	// 0000 0000 0000 0100

	//// 0000 0000 0000 0011
	//unsigned short 플레이어버프 = 공격속도 | 이동속도; // 플래그 연산.

	//if (플레이어버프 & 공격속도)
	//	cout << "공격속도 증가!" << endl;
	//if (플레이어버프 & 이동속도)
	//	cout << "이동속도 증가!" << endl;
	//if (플레이어버프 & 공격증가)
	//	cout << "공격력 증가!" << endl;
	





	//// ##5. 증감 연산자 (단항 연산자) 
	//// ++, -- 
	//// 피연산자의 값을 1씩 증가 또는 감소시키는 연산자.

	//// 전위 연산
	//// 선 증감 후 연산
	//int a = 10;
	//int tempA = ++a;

	//cout << tempA << endl;
	//cout << a << endl;

	//cout << "----------------------" << endl;

	//// 후위 연산
	//// 선 연산 후 증감
	//int b = 10;
	//int tempB = b++;

	//cout << tempB << endl;
	//cout << b << endl;







	// ##4. 축약 연산자
	//int a = 10;
	//a += 5; // a = a + 5;
	//a *= 2; // a = a * 2;
	//a /= 2; // a = a / 2;
	//a %= 2; // a = a % 2;

	//int b = 10, c = 20, d = 30;

	//// 오른쪽부터 진행.
	//b += c += d;

	//cout << b << endl;
	//cout << c << endl;
	//cout << d << endl;


	






	// ##3. 형변환 (type casting)

	// 2. 산술 연산 시 형변환.
	
	//// 정수 vs 실수 간의 연산에는 실수 타입으로 "묵시적 형변환"이 일어난다.
	//int a = 10;
	//float b = 3.14f;

	//cout << sizeof(a * b) << endl;
	//cout << (a * b) << endl;

	//// 같은 종류끼리 연산 시에는 메모리가 큰 쪽으로 "묵시적 형변환"이 일어난다.
	//float a = 3.14f;
	//double b = 10.0;

	//cout << sizeof(a * b) << endl;
	//cout << (a * b) << endl;




	// 1. 대입 연산 시 형변환.
	//int a = 3.14f; // 이 때 3.14f는 3이라는 int타입으로 "묵시적 형변환"이 일어난다.
	//cout << a << endl;

	//int b = (int)3.14f;	// "명시적 형변환"








	//// ##2. 컴퓨터가 연산을 처리하려면 연산에 필요한 
	//// 피연산자와 명령어는 메모리에 등록되어야한다.
	//// 연산 결과도 메모리에 등록된다.
	//int a = 10, b = 20;

	//cout << (a + b) << endl;

	//// 이 때 10과 20은 임시 메모리에 보관된다.
	//// 임시 메모리는 해당 연산 처리를 마치자마자 메모리를 반환해버린다.
	//// 이렇게 10과 20처럼 이미 값이 정해진 상수를 "리터럴 상수"라고 부른다.
	//cout << (10 + 20) << endl;









	// ##1. 변수와 상수
	// 변수: 저장되어있는 값을 얼마든지 변경할 수 있다.
	/*int a = 0;
	cout << a << endl;

	a = 10;
	cout << a << endl;

	a = 20;
	cout << a << endl;*/

	// 상수(constant): 한번 저장된 값을 변경할 수 없다.
	//const int b = 100; // 상수는 반드시 선언과 동시에 초기화가 이루어져야한다.
	// b = 10; // Error

}