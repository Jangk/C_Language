#include <iostream>
using namespace std;


void main()
{
	// 값의 분류
	// lvalue (엘밸류)
	// - 단일 식을 넘어 지속되는 개체
	// - 주소가 있음, 이름이 있는 변수, const 변수, 배열 변수, 비트 필드, 공용체,
	//	 클래스 멤버,문자열 등 이때까지 봐왔던 많은 것들


	// rvalue (알밸류)			// 임시적인 것
	// - lvalue가 아닌것 들
	// - ++i, --i는 lvalue이고 i++, i--는 rvalue
	// - 기본연산 산술식, 논리식, 비교식 등
	// - 코드가 한줄 실행 후 사라지는 것들
	// ex) int a = 10;			// 10은 rvalue


	// std::move()
	// - lvalue를 넣으면 참조로 반환
	// - lalue를 rvalue로 변환
	// - 내부적으로 이동 생성자로 구현됨.
	// - 임시적이지 않은 객체를 임시객체로 변환



	// 이동생성자
	// - 값이 복사되지않고 other의 개체의 소유권을 가져옴(레퍼런스 변수와 비슷함)
	// - other는 값을 잃음
	// - 메모리 재할당이 없음. 복사생성자보다 훨씬 빠름.
	// - 인자로 무조건 rvalue가 들어와야댐
	// - 얉은 복사
	// ex)
	class Test
	{
	public:
		Test() {};
		Test(Test&& other) {};				// 이동 생성자
		Test& operator=(Test&& other) {};	// 이동 대입연산자.
	};
	Test a;
	Test b(std::move(a));			// 임시데이터인 rvalue가 들어와야되서 move로 rvalue로 만듬.(const가 아니다)


	// 이동 대입 연산자
	// - 다른 클래스의 소유권을 가져옴.
	// - 자기 자신의 데이터를 지워야댐.
	// - 얉은 복사
	a = std::move(b);				// b를 a의 소유권으로 바낌

	//c++ 11이후로 stl 컨테이너들도 기본적으로 이동 생성자, 이동 대입 연산자를 가지고있음.
}