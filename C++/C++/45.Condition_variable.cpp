#include <iostream>
#include <mutex>
#include <queue>
using namespace std;



void main()
{
	// std::condition_variable (조건 변수)
	// - 이벤트 개체
	// - 신호를 받을때까지 현재 쓰레드의 실행을 멈춤

	// std::condition_variable::notifiy_one()    또는	std::condition_variable notifiy_all()
	// - 멈춰놓은 쓰레드 하나 또는 전부를 작동시킴
	// - 함수인자는 무조건 unique_lock


	// std::condition_variable::wait()  또는 wait_for()  또는 wait_until()
	// - 쓰레드를 뮤텍스 락을 풀고 notify_XXx를 기다림.
	// - 깨어나면 뮤텍스를 다시 잠금.
	// - 함수인자는 무조건 unique_lock


	// std::condition_variable::unique_Lock
	// - 위의 기능은 std::unique_Lock을 써야한다.
	// - 생성시 lock 되지않을 수 있다.( 두번째 매개변수로 std::defer_lock을 넣어야됨)
	// - recursive_lock으로 재귀적으로 잠글수도있다.
	// - 조건 변수에 들어가는 유일한 lock


	// ******* notify_xxx보다 wait가 먼저 호출되면 영원히 기다린다.
	// 해결방안으로 
	// wait(뮤텍스, []{return 데이터가 비어있지않다는 조건}
	// - 함수가 잘못깰 위험을 줄임
	// - 두번째 인자 함수는 잠긴 쓰레드 모두에게 접근할 수 있는 bool  변수 역할
	
	
}

