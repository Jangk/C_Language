#include <iostream>
using namespace std;


void main()
{
	// default --- ex) 암시적 생성자.
	// - default 키워드를 사용하면 컴파일러가 특정한 생성자, 연산자 및 소멸자를 만들어낼수있음.
	// - 비어있는 생성자나 소멸자들을 구체화 할필요 X
	// - 기본생성자를 명시적으로 표현가능.

	// delete
	// - new delete할때와 다른 키워드
	// - default의 기능의 반대. 즉 자동 생성자나 소멸자 같은 기능을 컴파일러가 자동으로 생성 하지못하게함.
	class Dog
	{
	public:
		Dog() = default;					// 생성자는 컴파일러가 만들게함.(안적어도 만들어주지면 명시적 표현)
		Dog(const Dog& other) = default;	// 기본 복사생성자 생성 차단.
	private:
		std::string mName;
	};
}