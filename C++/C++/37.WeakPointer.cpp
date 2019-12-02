#include <iostream>
#include <memory>
using namespace std;

void main()
{
	// 약한 참조
	// - 원시 포인터의 해제에 영향을 받지 않음
	// - 약한 참조의 카운트는 약한 참조의 수를 저장하는데 사용됨 
	// - 약한 참조 객체는 강한 참조 카운트가 0이되면 소멸됨
	// - 순환 참조(무한 참조)의 해결책

	// weak_pointer(약한 참조)
	// - 약한 참조는 혼자서 생성 불가능 (new, make_~~~ptr로 만들수 없음)
	// - shared_ptr을 대입해서 생성.
	// ex)
	std::shared_ptr<int>sharedPtr1 = make_shared<int>(10);
	std::weak_ptr<int> weakPtr = sharedPtr1;


	// .Lock()				// 공유 포인터.
	// - 가리키는 객체가 아직 메모리에서 살아 있다면 (즉 참조 개수가 0 이 아니라면) 
	//	 해당 객체를 가리키는 shared_ptr 을 반환하고, 
	//   이미 해제가 되었다면 아무것도 가리키지(nullptr) 않는 shared_ptr 을 반환
	// - 원시 포인터가 존재하면 공유 포인터를 만듬.
	// - 약한 참조는 강한 참조의 카운터를 올리지 않음.
	// - shared_ptr이 여전히 살아 있는지 체크.


	// expired()
	// - 안의 데이터가 들어있으면 (포인터가 살아있으면) false, 없으면 true
}