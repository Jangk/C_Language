#include <iostream>
using namespace std;


class Animals
{
public:
	virtual void Talk();		// 동적 바인딩
	//void Talk();				// 정적 바인딩
private:
};


//class 클래스명 : 접근지정자 상속할 클래스명
class Cat : public Animals
{
public:
	void Talk();
private:
};



void main()
{
	// 다형성
	// 한형태에 여러가지 결과가 나오는 것

	// 정적 바인딩
	// 컴파일시 미리 어떤 함수가 먼저 실행될지 결정되는것.
	// c++에선 기존의 자기 형태를 우선시 함(내용물보단 무늬 따라감)
	// ex)
	Cat* cat	 = new Cat;		// 자식 = 자식
	Animals* ani = new Cat;		// 부모 = 자식
	cat->Talk();				// cat의 talk
	ani->Talk();				// animals를 new cat을 해서 공간을 할당해서 cat의 talk가 나와야하지만 animals나옴
	// c++에선 부모와 자식의 공간이 따로 구분되어 메모리가 할당되기떄문에 처음할당된값(무늬)를 기준으로 실행




	// 동적 바인딩
	// 컴파일시 미리 어떤 함수가 먼저 실행될지 결정하지않고 런타임시에 판단함.
	// 정적 바인딩과 다르게 무늬가 아니라 속을 보고 판단한다. ( virtual)
	// ex)
	// 부모클래스에서 동적 바인딩할 함수명 앞에 virtual 키워드를 붙이고 위와 같은 코드를 실행하면
	// Cat* cat = new Cat;		
	// Animals* ani = new Cat;	
	// cat->Talk();				// cat의 talk 실행
	// ani->Talk();				// cat의 talk 실행
	// virtual 키워드를 사용하면 런타임때 해당 값안에 무엇이 들어있는가(내용물)을 기준으로 실행
	// virtual 함수는 4바이트를 할당댐(가상테이블떄문에 )


	// 가상테이블(가상 함수 테이블)
	// 동적바인딩이 기능하기 위해선 가상 테이블이 사용되며 모든 가상 멤버함수의 주소를 포함한다.
	// 테이블은 선언된 순서대로 차례대로 가상 테이블에 저장됨.
	// 인스턴스가 처음 생성될때 가상 테이블 주소가 함께 저장된다. 

}


void Cat::Talk()
{
	cout << "i'm Cat" << endl;
}


void Animals::Talk()
{
	cout << "i'm Animals" << endl;
}