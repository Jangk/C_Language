#include <iostream>
using namespace std;


void main()
{
	// final
	// - 상속을 할 수없는 상태로 만듬.
	// - 부모클래스에서 특정 멤버함수에 final을 걸어 자식에서 사용불가 설정 가능
	// - 가상함수에만 사용가능
	// ex)
	//class Dog final					// Dog는 다른 클래스 상속받기 가능.
	//{
	//public:
	//	Dog() = default;
	//private:
	//};
	//
	//class Cat public Dog			// final로 상속을 막아놔서 상속불가능.
	//{
	//
	//};

	// override
	// - 명시적으로 overrride 명시
	// - 가상함수에만 사용가능
	// ex) virtual void Func() override;
}