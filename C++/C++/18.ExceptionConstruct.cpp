#include <iostream>
#include <cassert>
using namespace std;


// 예외 처리를 위한 생성자   : stl 예외 처리과련 클래스를 상속
struct slotNullException : public std::exception
{
	const char* what() const throw()
	{
		return "slot in NULL";
	}
};


class test
{
public :
	const int* mSlot;
	test(int count)
	{
		mSlot = new int[count];
		if (mSlot == NULL)
		{
			throw slotNullException();
		}
	}
private :
};



void main()
{
	// 예외 생성자.
	// test(int count)
	// {
	//    mSlot = new int[count];
	// }
	// 위의 test 클래스의 생성자에 mSlot이 null이면 리턴값이 없기 때문에 알 수가없다.
	// 이럴떄를 위해서 예외 생성자를 써야함.

	// 예외 처리 생성자는 위를 참조
	test tt(0);



	// 예외 처리를 해야되는 3가지 상황
	// 1. 유효성 검사/예외는 오직 경계에서만 
	//	  - 밖에서 오는 데이터는 제어할 수 없기 때문		ex) 파일 읽기 쓰기, 외부 라이브러리
	// 2. 일단 시스템에 들어온 데이터는 다 옳다고 처리해야됨.
	//	  - assert를 이용하여 개발중 문제를 찾고 고칠것.
	// 3. 예외상황이 발생할떄 NULL을 능동적으로 사용 
	//    - 하지만 기본적으로 함수가 null 반환하거나 받는 일은 없어야댐 
	//    - 코딩표준!!! 만약 null을 반환하거나 받는다면 함수이름을 매우 잘지어야됨.
	

	// assert 함수 (디버깅 모드)
	// - 에러가 날거같은 부분에 넣어두면 프로그램이 개발자에게 알려줌
	// 사용하려면 cassert 헤더를 포함해야되며 Debug 모드에서만 작동함. (release에선 미작동)
	int a = 5;
	while (true)
	{
		assert(a <= 0);				// a < =0 조건이 성립되면 버그 발생위치 call stack등 정보가 나옴. 
		--a;						// 
		cout << a << endl;
	}
	// 예외 처리는 나중에 다시 공부할것; 
}