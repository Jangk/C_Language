#include <iostream>
using namespace std;


class OperFunc
{
private:
	int m_x;
	int m_y;

public:
	void SetValue(int x, int y);


	friend std::ostream& operator<<(std::ostream& os, const OperFunc & operFunc);
	OperFunc operator+ (const OperFunc& operFunc)const;
	OperFunc();
};



void main()
{
	// 레퍼런스 변수 앞에 붙는 & 단항연산자가 아니지만
	// 주소연산자인 &는 단항연산자
	OperFunc a, b, c;
	a.SetValue(10, 10);
	b.SetValue(20, 20);
	c = a + b;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	//cout << 변수
	//cout.opertator<<(변수)    두 문장 모두 같은 뜻
	//ex)
	//int num = 10;
	//cout << num;
	//cout.operator<<(num);
	// =,(),[],-> 등 특정 연산자들은 멤버함수를 이용해서만 오버로딩이 가능하다.




	// ####################################################
	// friend 함수 
	// 다른 클래스나 함수에서 private나 protected 접근 허용
	// ex) 클래스 접근제어자(public, protected, private)에 선언
	// friend class classname;						// classname이란 class에 접근 허용
	// friend returnType FunctionName(Parametor)	// FunctionName 함수에 접근허용
													// friend를 받는 대상함수가 전역함수여야한다.
	//												   friend함수는 멤버함수가 아님.
	cout << c << endl;
}



void OperFunc::SetValue(int x, int y)
{
	m_x = x;
	m_y = y;
}



// 함수 정의부
// 연산자 오버로딩 : 리턴형(클래스) operator(사용할 연산자)(const 클래스& 변수명)const //대입한 인자는 바뀌지않음
OperFunc OperFunc::operator+(const OperFunc & operFunc)const
{
	OperFunc val;
	val.m_x = m_x + operFunc.m_x;
	val.m_y = m_y + operFunc.m_y;
	return val;
}



// 생성자		      초기화 리스트
OperFunc::OperFunc() : m_x(0), m_y(0)
{
}



// 프렌드 함수 대상이 전역함수여야한다.
// cout에 사용될 연산자 오버로딩을 만들기위해
// cout 타입으로 반환
std::ostream& operator<<(std::ostream & os, const OperFunc & operFunc)
{
	os << operFunc.m_x << "," << operFunc.m_y;
	return os;
}
