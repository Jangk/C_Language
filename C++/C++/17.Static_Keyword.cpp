#include <iostream>
#include <exception>					// try catch문을 사용하기 위해서 써야하는 예외 헤더
using namespace std;


void Add(int a)
{
	static int  staticVal = 0;			// 함수에 들어올때마다 초기화하는게 아닌 첫 실행시에만 한번만 0으로 초기화
	staticVal += a;
}


void main()
{
	// static 키워드
	// static이 선언된 곳 외의 다른파일에서 이 변수에 접근 할 수 없음(프로그램 실행에 단 하나만 존재하는 것)
	// main함수에 static이 선언됬으면 main함수 말고는 접근 불가, 초기화는 단 한번만 함.
	// 함수내에도 static변수 사용가능
	// ex) Add(10);								// 첫 실행이라 static을 0으로 초기화후 +10해서 10 
	//	   Add(20);								// static이라 초기화를 하지않고 10 +20 해서 30이 됨.


	// 클래스에서 멤버 static 변수를 초기화할떈  클래스명::static변수명 = 초기화할값; 으로 초기화함.
	// 단 하나만 정의되기떄문에 인스턴스가 늘어난다해도 static변수가 여러개가 되지않음. (메모리를 인스턴스에 잡히지않음)
	// 클래스 멤버 변수/함수로 선언된 경우 클래스명::변수/함수명()로 호출가능
	// ex) TestClass::StaticFunc();



	//extern 키워드
	// 다른 파일에 있는 변수/함수를 접근하게 함.
	// ex) exturn void Print();					// 다른 파일에 정의된 함수의 정의를 불러옴, exturn 변수도 가능.



	//exception    예외
	//tryCatch문			----#include<exception>  필수
	int val1 = 0, val2 = 0;
	cin >> val1 >> val2;
	
	
	try											// 예외검사할 초기식
	{
		int result = val1 / val2;
		//throw result;							// 예외처리 된값을 catch로 보냄
	}
	catch (const std::exception& e)
	{
		std::cerr << "exception" << e.what() << endl;
	}
	catch (int i)								// throw한 값을 i로 받음 (throw를 받지않으면 실행 X)
	{
		cout << "예외처리된 값은 " << i << "입니다" << endl;
	}
}