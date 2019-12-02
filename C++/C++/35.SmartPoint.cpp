#include <iostream>
#include <memory>
#include <vector>
using namespace std;


struct MyStruct
{
	int x;
	int y;
};


void main()
{	
	// 스마트 포인터 또는 오토 포인터
	// - 기존 포인터를 원시 포인터 또는 naked 포인터라고 부름
	// - 스마트포인터를 쓰면 delete를 안써도 된다.
	// - 포인터 전혀 안쓰일때 제거됨.
	// - 가비지 컬렉터 보다 빠르다.


	// unique_ptr
	// - 소유자말곤 사용할 수 없는 포인터 ( 대입 및 복사 불가능)
	// - 소유자가 소멸시 자동으로 삭제됨.
	// #include <memory> 필수
	std::unique_ptr<MyStruct> myStruct(new MyStruct);	// * 포인터 표시는 없지만.
	myStruct->x;										// 포인터처럼 작동한다.
														// delete 하지않아도 됨

	// 유니크 포인터 사용하기 좋은곳 3가지
	// 1. 클래스 멤버 변수  ---- 소멸자에서 따로 정리하지않아도 된다. 생성자에서 동적할당 잘해야담
	// 2. 함수내에서만 쓸때 ?
	// 3. 여러 데이터를 가지고 있는 벡터에 유니크 포인터를쓰면 나중에 clear만하면 됨.


	// 유니크 포인터 잘못 사용한 예시
	int* a = new int;
	std::unique_ptr<int> uniPtr(a);				// a의 주소를 가진 uniPtr 선언
	std::unique_ptr<int> uniPtr2(a);			// a의 주소를 가진 uniPtr 선언 
												// - 유니크 ptr은 하나만 소유해야해서 문제가 있지만
												//   unique_ptr로 같은 포인터를 가르켜도 컴파일 에러는 없음
												//	 사용의의에 매우 벗어남
	uniPtr2 = nullptr;							// unique ptr은 nullptr을 넣을시 자동으로 소멸자 호출
												// - 이로인해 uniPtr과 a는 쓰레기값을 가짐;


	// 위같은 실수를 막기위해 c++ 14에서 make_unique를 통해 new 선언부를 생략 시킴
	// make_unique<자로형>(생성자 함수인자);
	// - new 키워드를 생략 시키고 같은 주소를 가르키는 변수의 생성을 방지
	// - 내부적으로 원리는 new와 동일한 원시 포인터임.
	// - 유니크 포인터안에 유니크 포인터를 넣을려고 해도 에러.
	//std::unique_ptr<int> uniPtr3 = std::make_unique<int>(8);	// make_unique를 통해 생성하게해서
	//cout << *uniPtr3 << endl;									// 같은 주소를 가르키는 유니크 포인터
																// 여러개 생기는 상황을 방지.


	// 유니크포인터.reset()
	// - 유니크 함수 안의 값을 다른 값으로 변경하는 것.
	// ex)
	//uniPtr3.reset(new  int(5));		// 가지고 있던 원시 포인터는 자동으로 삭제.
	//cout << *uniPtr3 << endl;
	//uniPtr3.reset();				// uniPtr3 = nullptr 과 기능을 동일
	//cout << *uniPtr3 << endl;


	// 유니크포인터.get()
	// - 유니티 포인터의 원시 포인터 반환.


	// 유니크포인터.release()
	// - 기존 원시포인터를 삭제하지않고 풀어주고, nullptr로 값바낌





	// std::move(유니크 포인터);
	// 유니크 포인터끼리 소유권을 옴길순 있음.
	//std::unique_ptr<int> uni1 = std::make_unique<int>(8);
	//std::unique_ptr<int> uni2 = std::move(uni1);				// 소유권 이전 ( 매우 안전하다)
	//const std::unique_ptr<int> uni3 = std::make_unique<int>(8);
	//std::unique_ptr<int> uni2 = std::move(uni3);				// const unique_ptr은 소유권 이전 불가능
	// - stl vector에 넣을때 그냥 push_back에 넣으면 문제가 생김
	//   그래서 push_back(std::move(유니크포인터));로 넣어야된다.


}