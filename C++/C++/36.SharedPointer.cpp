#include <iostream>
#include <memory>
using namespace std;


void main()
{

	// 자동 메모리 관리 2가지
	// 1. 가비지 콜렉터  -- 자바, c#에서 쓰임
	// - 주기적으로 메모리 사용하는 지 확인
	// - 메모리가 여유가 없게 됬을때도 실행(수동으로도 실행가능)
	// - 매 주기마다 가비지 컬렉터는 "root" 확인 (전역변수, 스택, 레지스터)
	// - 힙에 있는개체를 루트를 통해 접근할 수 있는지 확인
	// - 접근할 수 없으면 가비지로 판단해서 해제

	// * 단점
	// - 사용되지 않는 메모리를 바로 해지하지 않음.
	// - 가비지콜렉터가 작동중에는 프로그램이 느려질수있음.



	// 2. 참조 카운팅  -- swift와 애플 object-c에서 쓰임
	// - 가비지 컬렉터처럼 안쓰는 데이터를 지움
	// - 참조횟수를 카운팅해서 참조횟수가 달성되면 메모리 해제
	// - 연산자 오버로딩을 사용할때나 생성자 소멸자에 들어갈때 카운터하게끔 코딩해서 자기가 만들수도있음.
	// com(DirectX)에서 지원하며, shared_ptr도 참조 카운팅 지원

	// *단점
	// - 참조 횟수는 너무 자주 바뀜 (멀티 스레드에서 안전하려면 lock이나 원자적(automic)연산이 필요
	// - 순환 참조시 해제불가(a가 b를 참조, b가 a를 참조 <--- 무한참조가 일어남)
	
	

	// 강한 참조
	// - a가 b를 참조할때 b가 절대 소멸되지 않는것을 의미
	// - 강한 참조의 수를 저장하기 위해 강한 참조 카운트를 사용
	// - 일반적으로 새 인스턴스, 즉 개체에 대한 참조를 만들 때 강한 참조 횟수가 늘어남
	// - 강한 참조 횟수가 0이 될때 해당 개체는 소멸됨.


	// shared_ptr (공유 포인터라고도 읽음)
	// - 2개의 포인터를 가짐.(원시 포인터와 제어 블럭의 포인터)
	//   제어 블럭은 메모리 참조 횟수, 약한 참조 횟수, delete 등을 저장하는 포인터
	// - 여러개의 포인터가 공유가능.(대입, 복사)
	// - 참조 카운팅 자동으로 지원.
	// - 내부적으로 기능이 다를뿐 사용하는 방식은 unique_pointer랑 동일
	// - 함수인자로 사용될때 참조 카운팅 +1, 함수 종료시 참조 카운팅 -1
	// - 함수인자로 사용될 때 레퍼런스 변수로 사용시 참조 카운팅이 올라가지않음.
	
	// -ex)
	std::shared_ptr<int> sharedInt = std::make_shared<int>(10);
	std::shared_ptr<int> sharedInt2 = sharedInt;			// 대입 연산을 통해 공유

	// reset()			
	// - sharedInt =nullptr과 같음
	// - 참조 횟수가 1회 감소
	// - 소멸자를 호출하지 않음.
	sharedInt.reset();									

	// use_count()
	// - 현재 참조 횟수를 출력함.
	cout <<sharedInt2.use_count() << endl;



	// weak_ptr를 사용하면 무한 참조를 막을 수 있다.

}