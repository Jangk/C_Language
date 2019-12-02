#include <iostream>
using namespace std;

class Animals
{
public:
	void AnimalsFunction1();
	Animals(int age);

private:
	int m_Age;
};


//class 클래스명 : 접근지정자 상속할 클래스명
class Cat : public Animals
{
public:
	// 오버라이딩
	// 부모의 기능을 가진 함수를 자식이 똑같은 이름으로 함수를 재정의해서 하는 것.
	void AnimalsFunction1();
	Cat(int age, const char* name);

private:
	char* m_Name;
};


void main()
{
	// 상속  
	// 자식 클래스가 부모를 상속받아 부모의 멤버 변수, 메서드를 사용함.

	// is a  = 동물(부모) 고양이(자식), 고양이 is a 동물
	// has a = 자동차(부모) 엔진(자식), 엔진 is a 자동차(성립 X)  엔진은 has a 자동차(엔진은 자동차 부품이다 )
	
	Cat cat(10, "나비");
	// cat 내부에 AnimalsFunction이라는 함수가 없으면 부모에서 찾음
	// cat 내부에 함수가 있을시 cat 내부함수를 불러옴 ( 오버라이딩)
	cat.AnimalsFunction1();


	// 상속이 된 객체가 생성되면, 부모 생성자 - > 자식 생성자 순으로 발동
	// 상속이 된 객체가 제거되면, 자식 소멸자 - > 부모 소멸자 순으로 발동


	// 부모 생성자 중에 특정 생성자를 사용할려면 초기화 리스트를 사용해야함
	//		자식의 생성자						 : 부모의 생성자(자식생성자의 함수인자 x, y)
	// ex)  chidrensConstruct( int x, int y) : parents(x, y);


	// 부모클래스에서 함수인자가 없는 생성자가 없을 경우  
	// ex) parents::parents(int x, int y);  <--- 함수인자가 있는 생성자만 있을경우
	// 자식에서 함수인자없이 초기화를 시도하면 컴파일 에러 
}







// 함수 정의부

void Animals::AnimalsFunction1()
{
	cout << "Animals Function" << endl;
}

Animals::Animals(int age)
{
	m_Age = age;
}

void Cat::AnimalsFunction1()
{
	cout << "Cat Function" << endl;
}


//									   부모의 생성자 호출
Cat::Cat(int age, const char * name) : Animals(age)
{
	size_t size = strlen(name) + 1;		// 문자열 마지막 /n 때문에
	m_Name = new char[size];
	strcpy_s(m_Name, size, name);
}
