#include <iostream>
using namespace std;


template <typename T, typename ... ARGS>
void Goo(T a, ARGS ... args)
{
	static int n = 0;
	++n;

	cout << n << ": " << typeid(T).name() << " : " << a << endl;

	// 꺼낼 때는 'recursive'한 방법으로 꺼내야 한다.
	// recursive한 방식으로 동작하므로 작은 코드에 대해서만 사용해야한다.
	Goo(args...);
}


// 재귀의 종료를 위해 인자없는 Goo 함수가 필요하다.
void Goo()
{
	cout << "Goo 종료" << endl;
}


void main()
{
	// 가변 인자 템플릿
	// - 함수 인자 갯수를 무한대로 늘릴수있음.
	// - 매개변수 목록에서 ... 씀


	// 가변 인자 템플릿 클래스
	// template<typename ... Arguments>				// arguments  : 매개변수 여러개를 의미
	// class classname{};


	// 가변 인자 템플릿 함수
	// template<typename ... Arguments>
	// returnType FunctionName(Arguments ... arg) {}
	int a = 0, b = 0;

	Goo(10, 20, 30, 40 ,50);
}