#include <iostream>
using namespace std;


class TestClass
{
public:
	// 테스트하기 위해 퍼블릭
	int* m_num;
	TestClass();							// 생성자
	TestClass(const TestClass& copy);		// 복사 생성자
	~TestClass();							// 소멸자
};






// 생성자
// 생성자는 오브젝트가 생성될때 실행되며, 개발자가 따로 생성자를 만들지 않으면
// 컴파일 단계에서 자동 생성.

// 생성자 예시							   초기화 리스트  : 멤버변수명(초기화 할값)
TestClass::TestClass() : m_num(0)		// 오브젝트 생성되면서 실행되기때문에 상수나 참조변수도 초기화가능
{										
	m_num = new int;
	*m_num = 0;							// 이부분은 초기화처럼 보이지만 사실은 오브젝트가 생성되고 0을 대입한것.
	cout << "생성자" << endl;
}




// 복사생성자
// 복사생성자도 생성자와 같이 개발자가 만들지않으면 생성되나 이경우 얕은 복사가 일어남

// 복사 생성자 예시(얕은 복사)
TestClass::TestClass(const TestClass& copy)			// 다른 오브젝트를 그대로 가져와서 대입함.
{
	m_num = copy.m_num;		// 만약 copy가 삭제되면 대입된 값을 잃어버림
							// (원본주소를 잃어서 쓰레기 값을 가짐)
  cout<<"얕은 복사 생성자" << endl;
}


// 복사 생성자 예시(깊은 복사)								// 동적할당을 해줘야됨
//TestClass::TestClass(const TestClass& copy)			// 다른 오브젝트를 그대로 가져와서 대입함.
//{
//	m_num = new int;
//	memcpy(m_num, copy.m_num, sizeof(int));
//	cout << "깊은 복사 생성자" << endl;
//}






// 소멸자
// 소멸자는 오브젝트가 제거될때 실행되며, 개발자가 따로 소멸자를 만들지 않으면
// 컴파일 단계에서 자동 생성.

// 소멸자 예시
TestClass::~TestClass()
{
	delete(m_num);
	cout << "소멸자" << endl;
}



void main()
{
	TestClass t1;
	if (true)
	{
		TestClass t2(t1);
		cout << "t2 :" << *t2.m_num << endl;
	}		// 얕은 복사시에 t2가 사라져 값을 잃어버려서 여기서 메모리 에러남
	cout << "t1 :" << *t1.m_num << endl;
}