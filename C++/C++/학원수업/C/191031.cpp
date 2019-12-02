#include <iostream>

using namespace std;

void main()
{
	// ##5. 기본 연산자
	// 대입 연산자, 산술 연산자, 관계 연산자, 논리 연산자, 
	// 증감 연산자, 축약 연산자, sizeof 연산자, 비트단위 논리 연산자


	// 6. 어드레스 연산자 (단항 연산자)
	// &
	// 피연산자의 메모리 주소를 반환.
	/*int a = 0, b = 0, c = 0;

	cout << &a << endl;
	cout << &b << endl;
	cout << &c << endl;*/



	// 5. sizeof 연산자 (단항 연산자)
	// 피연산자의 메모리 크기를 byte단위로 반환.

	/*cout << "char: " << sizeof(char) << endl;
	cout << "bool: " << sizeof(bool) << endl;
	cout << "short: " << sizeof(short) << endl;
	cout << "int: " << sizeof(int) << endl;
	cout << "long: " << sizeof(long) << endl;
	cout << "long long: " << sizeof(long long) << endl;
	cout << "float: " << sizeof(float) << endl;
	cout << "double: " << sizeof(double) << endl;
	cout << "long double: " << sizeof(long double) << endl;*/

	/*int a = 0;
	cout << sizeof(a) << endl;

	char b = 0;
	cout << sizeof(b) << endl;*/

	//// 정수 값은 기본 int로 취급.
	//cout << sizeof(100) << endl;

	//// 정수 값이 int범위를 넘어서면 long long으로 취급.
	//cout << sizeof(4294967296) << endl;

	//// 연산 결과가 정수이기에 int 취급.
	//char a = 10, b = 10;
	//cout << sizeof(a + b) << endl;

	//// f키워드가 있어야 float으로 인식. 없으면 double로 인식.
	//cout << sizeof(3.14f) << endl;




	// 4. 논리 연산자
	// &&, ||, !

	// && (And 연산자, 이항 연산자)
	// a && b	a와 b 모두 참일 때 &&연산자는 참을 반환한다. 하나라도 거짓이면 거짓을 반환.

	// 이때 a가 false라면 b는 검사(실행)하지 않는다.
	/*int a = 0, b = 0;

	(a = 0) && (b = 100);	

	cout << a << endl;
	cout << b << endl;*/




	// || (Or 연산자, 이항 연산자)
	// a || b	a와 b 중 하나라도 참일 때 참을 반환한다. 둘 다 거짓일 때 거짓을 반환.

	// 이때 a가 true라면 b는 검사(실행)하지 않는다.
	/*int a = 0, b = 0;

	(a = 100) || (b = 100);

	cout << a << endl;
	cout << b << endl;*/

	// ! (Not 연산자, 단항 연산자)
	// !true	참이 아니다. -> 거짓
	// !false	거짓이 아니다. -> 참

	//int a = 10, b = 200, c = 30;
	//cout << (a <= b && b <= c) << endl;

	//// a와 b중 하나라도 죽으면 게임은 종료
	//bool bIsDead_A = true;
	//bool bIsDead_B = false;

	//cout << (bIsDead_A || bIsDead_B) << endl;


	// 현재 캐릭터가 점프하지 않으면 지형과 충돌해라.
	//bool bIsJumping = false;
	//if(!bIsJumping)




	// 3. 관계 연산자 (이항 연산자)
	// 두 수의 대소 비교 또는 같은가 다른가에 대해 참 또는 거짓을 반환.
	// <, <=, >, >=, ==, !=

	//cout << (10 < 20) << endl;
	//cout << (20 < 10) << endl;

	//cout << (10 == 10) << endl;
	//cout << (10 != 10) << endl;


	// 2. 산술 연산자 (이항 연산자)
	// +, -, *, /, %

	// 나눗셈 연산자 /
	// 둘을 나눈 몫을 반환
	//cout << (5 / 2) << endl;

	// 나머지 연산자 %
	// 둘을 나눈 나머지를 반환
	//cout << (5 % 2) << endl;

	//// 1234
	//// 일의 자리 값
	//cout << (1234 % 10) << endl;

	//// 십의 자리 값
	//cout << (1234 % 100) / 10 << endl;

	//// 백의 자리 값
	//cout << (1234 % 1000) / 100 << endl;

	//// 천의 자리 값
	//cout << (1234 / 1000) << endl;
	



	//// 1. 대입 연산자 (이항 연산자)
	//int a = 0, b = 0, c = 0;

	//// 우항의 값을 좌항으로 복사하고 좌항의 값을 반환.
	//cout << (a = 100) << endl;
	//b = 200;
	//c = 300;

	//// 대입 연산의 순서는 오른쪽부터 진행.
	//a = b = c;
	





	//// ##4. 입출력

	//// 입력 (키보드로부터 입력)
	//int a = 0, b = 0;
	//cin >> a >> b;

	//// 출력 (모니터로 출력)
	//cout << a << ", " << b << endl;








	// ##3. 2의 보수

	// 10진수			4bits
	// 6				0110

	// 1의보수			1001
	// 2의보수			1001 + 0001

	// -6				1010





	





	//// ##2. unsigned 키워드
	//// 정수 자료형에만 붙일 수 있는 키워드이다.

	//// -32,768 ~ 32,767까지 총 65536개의 음수, 양수를 표현할 수 있다.
	//short a = 65535;

	//// 0 ~ 65535까지 총 65536개의 양의 정수를 표현할 수 있다.
	//unsigned short b = 65535;

	//cout << a << endl;
	//cout << b << endl;






	// ##1. 자료형
	// 자료형은 변수에 어떤 종류의 데이터를 보관할지 결정해준다.
	// 자료형은 변수의 크기를 결정해준다.
	
	//// 문자 자료형
	//char

	//// 논리 자료형
	//bool

	//// 정수 자료형
	//int, short, long, long long

	//// 실수 자료형
	//float, double, long double

	//// 1byte	256개
	//char, bool

	//// 2bytes	65,536개
	//short

	//// 4bytes	4,294,967,296개
	//int, long, float

	//// 8bytes	18,446,744,073,709,551,616개
	//long long, double, long double
}