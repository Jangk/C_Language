#include <iostream>
using namespace std;

// 템플릿 T선언
template <typename T>

// 템플릿 클래스도 가능
template <class CT>

// 위 2개의 typename과 class는 차이가 없다고봐도됨.

T Add(T t1, T t2);

void main()
{
	// 템플릿  
	// - 코드를 자료형마다 안만들어도 됨
	// ex) 템플릿 함수명<자료형>(함수인자);
	cout << Add<int>(10, 10);				// 앞에 자료형을 지정하면 동일한 자료형으로만 가능 .

	// 템플릿을 사용하는 자료형이 많아질수록 exe파일 용량 증가함.(inline과 비슷)
	// 컴파일 속도에 영향을 줌. (런타임은 영향이 없다.)
	// 컴파일 단계에서 다형성을 부여함.


	// main.cpp 컴파일될때 다른 클래스의 헤더를 읽을 순 있지만, 다른 cpp를 참조하지못함.(나중에 따로 컴파일댐)
	// 즉 template class를 쓸땐 헤더에 template 함수, 변수를 써야한다. cpp에가면 못 읽음.

	// object를 선언할땐 꼭 타입을 명시해야됨.
	// ex)
	// testClass abc ;					// 오류
	// testClass<int> abc;				// 정석.

}

template<typename T>
T Add(T t1, T t2)
{
	return t1+t2;
}
