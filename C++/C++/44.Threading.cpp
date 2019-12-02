#include <iostream>
#include <string>
#include <vector>
#include <thread>
#include <mutex>
using namespace std;


void TestFunc(const string& message);
void TestMutex();


void main()
{
	// Threading (std::thread)
	// - c++ 11버전 전에는 표준 멀티스레딩이 없었고 os마다 멀티쓰레딩 구현이 달랐음
	// - 쓰레드 이동은 가능하나 복사는 불가능.
	// - 이동 생성자는 되지만 복사 생성자는 안됨.
	// - #include <thread>
	// - std::thread 쓰레드명(함수명, 함수인자, 반복횟수(생략시 1회));
	// ex)
	std::thread thread(TestFunc, "쓰레드다아아아");
	TestFunc("쓰레드다아아아");						// 두문장이 순서대로 출력되지 않을 수도 잇음.
	// 에러 뜨면서 종료됨. 자식 쓰레드가 끝나기전에 메인 쓰레드가 끝나서.(race condition)


	// join()
	// - 쓰레드 개체가 끝날때까지 현재 쓰레드 멈춤.(쓰레드 개체 안전하게 종료)
	// - 자식 쓰레드가 끝나기전까지 기다리기.
	// thread.join();								// join이 있으면 위의 코드 에러 안뜸.


	// thread.get_id()
	// - 쓰레드의 아이디를 가르켜줌
	// ex)
	// std::thread::id id = thread.get_id();
	// cout << id << endl;




	// thread.detach();
	// - 쓰레드 떼어내기 (알아서 실행 후 종료)		
	// - 메인이 종료되면 그냥 전부 실행안되도 종료 (안정성 보장 X)
	// - 뗴어진 쓰레드는 join 불가
	thread.detach();


	// thread.joinable()
	// - thread가 join 가능하면 true 불가능하면 false 리턴.
	if (!thread.joinable())
		cout << "불가능" << endl;


	

	// std::ref(변수)
	// - 쓰레드에 함수인자로 레퍼런스로 인자를 받을떄 std::ref(변수)를 사용해서 넘겨줘야한다.
	vector<int> testVec(100, 1);
	int result = 0;
	std::thread thread2([](vector<int>v, int& ref)						// 쓰레드에 람다함수가 쓰기좋다.
	{
		for (auto item : v)
			cout << item << endl;
	}, testVec, std::ref(result));
	thread2.join();



	

	// std::this_thread
	// - 쓰레드 유틸리티 함수들이 들어있음.
	//
	// std::this_thread::get_id();
	// - 현재 쓰레드의 아이디를 리턴.
	//
	// std::this_thread::sleep_for(std::chrono::second(멈출 시간));
	// - 현재 쓰레드 멈출시간만큼 일시 정지
	//
	// std::this_thread::sleep_until(특정 시간);
	// - 현재 쓰레드가 특정 시간이 될때까지 일시 정지
	// ex) 
	//																현재시간+3초까지
	// std::chrono::seconds sec = std::chrono::system_clock::now() + std::chrono::seconds(3);
	// std::this_thread::sleep_until(sec);
	//
	// std::this_thread::yield();
	// - 현재 쓰레드가 다른 쓰레드가 우선하게 양보함(실행대기 상태라서 일시정지와 다름)
	// - 스케쥴러 우선 순위만 바꿈





	// ##############################################################
	// std::mutex
	// - 공유되는 데이터를 쓰레드에서 독점함
	// - #include <mutex>
	std::thread mutexThread(TestMutex);		// 함수 정의 참조.
	TestMutex();

	// mutex.lock()
	// - 현재 쓰레드에서 현재 mutex를 독점.
	// - 2번 lock하면 deadlock 발생(프로그램 진행 불가)


	// mutex.unlock()
	// - 독점한 mutex 해제
	// - lock을 하지않고 unlock을 해도 에러는 뜨지않을 수도 있음(문제는 있음 쓰면ㄷ안됨)


	// std::recursive_mutex
	// - 같은 쓰레드에서 lock을 여러번 할수 있는 mutex;


	// std::scoped_lock<std::mutex> lock(mutex 변수명)					// c++ 17버전부터 지원
	// - shared_ptr처럼 unlock안한 mutex를 알아서 unlock 시켜줌
	// - 매개변수로 전달된  mutex "들"을 전부 lock 시킴
	// - 함수 끝까지 락걸림
	// ex)
	std::mutex sMutex;
	//std::scoped_lo


	// c++ 14버전 이하는 위의 scoped_lock 대신 std::Lock_guard 를 사용하나 매개변수 하나만 lock 가능
}


void TestFunc(const string& message)
{
	cout << message << endl;
}

void TestMutex()
{
	static std::mutex g_Mutex;				// 뮤텍스 기능을 보여주려 static 선언(실제로는 이렇게 쓰지않음)
	g_Mutex.lock();							// 현재 쓰레드가 이 함수를 독점함. (다른 쓰레드가 이부분에 오면 정지함)
	cout << "뮤텍스 작동" << endl;			// mutex.lock한 쓰레드만 기능 수행
	g_Mutex.unlock();						// lock한 쓰레드의 독점해제 (정지했던 쓰레드 정상 작동)
											// static mutex라서 다른 쓰레드가 정지함.
											// (각자 mutex가 있으면 mutex 끼리 따로 동작함)
}

