#include <iostream>
using namespace std;


class Parents1
{
public:
	// 부모끼리 상속을 하지않았으므로 오버라이딩이 아니다.
	void ParentsFunction() { cout << "부모1 함수" << endl; }
	Parents1() { cout << "부모1 생성자" << endl; }
};
class Parents2
{
public:
	// 부모끼리 상속을 하지않았으므로 오버라이딩이 아니다.
	void ParentsFunction() { cout << "부모2 함수" << endl; }
	Parents2() { cout << "부모2 생성자" << endl; }
};


// 다중 상속
// 생성자는 먼저 상속받은 Parents1 부터 불러와짐.
class Children : public Parents1, public Parents2
{
public:
	// 초기화리스트로 parents2의 생성자부터 호출해도 상속순으로 불러온다.
	Children() : Parents2(), Parents1() { cout << "자식 생성자" << endl; }
};

void main()
{
	Children* ch = new Children;
	
	// 양 부모가 가진 함수를 사용시 누구의 함수인지 모호함. 에러.
	//ch->ParentsFunction();

	// 사용할 부모를 지정해줘야 사용가능
	ch->Parents1::ParentsFunction();



	// 가상 부모 클래스 (객체지향적으로 좋은방법이 아님)							ㅁ			(부모)
	// 부모 밑에 자식2명이 있고 그 밑에 손자(자식2개 다 부모로 두는 자식)		ㅁ        ㅁ (자식1  자식2)
	// 부모 밑에 있는 자식 한명당 부모를 하나씩가지고 있어서 부모가2개가됨			ㅁ			(손자)
	// 그 경우 부모를 하나만 사용하기 위해 virtual 부모로 상속을 받아
	// 부모를 한개만 받음
}