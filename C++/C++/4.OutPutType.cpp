#include <iostream>
#include <iomanip>	// 자료출력형식을 지정하기 위해 쓰는 헤더 (조정자)
					// 출력 지정자
// ex1)
namespace Jangk
{
	void TangK();
}

void main()
{
	Jangk::TangK();
}


void Jangk::TangK()
{	//ex1)
	int num = 100;

	// setw(필요칸수)를 제외한 한번 설정한 값은 유지된다.( 8진수로 설정후, 나중에 다른것을 출력해도 8진수로 나옴)
	// 출력형식 지정
	std::cout << std::showbase << std::hex << 123 << std::endl;					// 다른 진수 표기법 표시 (0x7b 출력	)
	std::cout << std::noshowbase << std::hex << 123 << std::endl;				// 표기법 비표기 (7b 출력)
	std::cout << std::dec << 123 << std::endl;									// 10진수로 출력
	std::cout << std::hex << 123 << std::endl;									// 16진수로 출력
	std::cout << std::oct << 123 << std::endl;									//  8진수로 출력


	std::cout << std::uppercase << 'a' << std::endl;							// 소문자를 대문자로
	std::cout << std::nouppercase << 'a' << std::endl;							// 소문자를 건드리지않음 ( 이미변경된건 신경X)


																				// 출력 정렬
	std::cout << std::dec << std::endl;											// 위에서 마지막에 8진수로 출력 설정해놔서 10진수로 되돌림
	std::cout << std::setw(10) << 123 << std::endl;								// 출력할 글자 칸수 설정 
	std::cout << std::setfill('*') << std::setw(10) << 123 << std::endl;		// 함수인자를 남은 공간에 넣음(이후로 빈칸도 적용)
	std::cout << std::setw(6) << std::left << -123 << std::endl;				// 부호와 숫자 전부   왼쪽정렬
	std::cout << std::setw(6) << std::internal << -123 << std::endl;			// 부호는 왼쪽 숫자는 오른정렬
	std::cout << std::setw(6) << std::right << -123 << std::endl;				// 부호와 숫자 전부   오른정렬


																				// 소숫점 생략
	std::cout << std::noshowpoint << 100.0f << ",   " << 100.002f << std::endl;	// 앞의 필요없는 뒤의 소숫점이하값 버림
	std::cout << std::showpoint << 100.0f << ",   " << 100.002f << std::endl;	// 소숫점 3자리 까지 출력

																				// 소숫점 표기방식
	std::cout << std::setprecision(4) << 123.456789 << std::endl;				// 소수점 표현할 자릿수 설정(정수부 포함하며, 반올림함)
	std::cout << std::fixed << 123.456789 << std::endl;							// 일반 실수 표기 (123.45678 출력)
	std::cout << std::scientific << 123.456789 << std::endl;					// 부동소수점 표기(1.2345678e+02)
}