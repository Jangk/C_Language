#include <iostream>
using namespace std;


class TestClass
{
public:
private:
	TestClass();
	~TestClass();
	TestClass(const TestClass& test);
};



void main()
{
	// 클래스에 딸려오는 디폴트 함수 
	// 매개변수 없는 생성자
	// 소멸자
	// 복사생성자
	// 대입 연산자		= 모든 멤버변수를 대입하는 구조


	// 클래스의 기본 4개함수를 private에 넣음.(선언시 외부에서 불러올수없어서)
	// - 함수 정의까지 하지않고 private에 함수 선언만 하고 ;해도 된다.
	//TestClass test1;					// 둘다 private에 접근할수 없어서 사용불가.
	//TestClass test2(test1);			// 둘다 private에 접근할수 없어서 사용불가.

}