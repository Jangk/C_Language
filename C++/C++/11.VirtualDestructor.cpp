#include <iostream>
using namespace std;

class Animals
{
public:
	~Animals();					// 정적 바인딩
	virtual ~Animals();			// 동적 바인딩 - 부모 소멸자가 virtual이면 자식 소멸자도 virtual이 된다.	
private:
};


//class 클래스명 : 접근지정자 상속할 클래스명
class Cat : public Animals
{
public:
	~Cat();
private:
};


void main()
{
	// 가상 소멸자
	// 정적 바인딩으로 소멸자를 불러오면 내용물보단 기존 형태를 따라가 
	Cat* cat     = new Cat;
	Animals* ani = new Cat;
	delete(ani);				// 정적 바인딩이 일어나 cat 소멸자가 아니라 부모인 animals 소멸자만
								// 불러서 cat의 소멸자는 작동안함. (cat 동적할당 되있기때문에 메모리 누수)


	// 모든 소멸자에는 virtual 붙이는 것이 좋다.(메모리 누수 사전 방지)
	
}

Animals::~Animals()
{
}

Cat::~Cat()
{
}
