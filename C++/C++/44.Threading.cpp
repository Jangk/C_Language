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
	// - c++ 11���� ������ ǥ�� ��Ƽ�������� ������ os���� ��Ƽ������ ������ �޶���
	// - ������ �̵��� �����ϳ� ����� �Ұ���.
	// - �̵� �����ڴ� ������ ���� �����ڴ� �ȵ�.
	// - #include <thread>
	// - std::thread �������(�Լ���, �Լ�����, �ݺ�Ƚ��(������ 1ȸ));
	// ex)
	std::thread thread(TestFunc, "������پƾƾ�");
	TestFunc("������پƾƾ�");						// �ι����� ������� ��µ��� ���� ���� ����.
	// ���� �߸鼭 �����. �ڽ� �����尡 ���������� ���� �����尡 ������.(race condition)


	// join()
	// - ������ ��ü�� ���������� ���� ������ ����.(������ ��ü �����ϰ� ����)
	// - �ڽ� �����尡 ������������ ��ٸ���.
	// thread.join();								// join�� ������ ���� �ڵ� ���� �ȶ�.


	// thread.get_id()
	// - �������� ���̵� ��������
	// ex)
	// std::thread::id id = thread.get_id();
	// cout << id << endl;




	// thread.detach();
	// - ������ ����� (�˾Ƽ� ���� �� ����)		
	// - ������ ����Ǹ� �׳� ���� ����ȵǵ� ���� (������ ���� X)
	// - ����� ������� join �Ұ�
	thread.detach();


	// thread.joinable()
	// - thread�� join �����ϸ� true �Ұ����ϸ� false ����.
	if (!thread.joinable())
		cout << "�Ұ���" << endl;


	

	// std::ref(����)
	// - �����忡 �Լ����ڷ� ���۷����� ���ڸ� ������ std::ref(����)�� ����ؼ� �Ѱ�����Ѵ�.
	vector<int> testVec(100, 1);
	int result = 0;
	std::thread thread2([](vector<int>v, int& ref)						// �����忡 �����Լ��� ��������.
	{
		for (auto item : v)
			cout << item << endl;
	}, testVec, std::ref(result));
	thread2.join();



	

	// std::this_thread
	// - ������ ��ƿ��Ƽ �Լ����� �������.
	//
	// std::this_thread::get_id();
	// - ���� �������� ���̵� ����.
	//
	// std::this_thread::sleep_for(std::chrono::second(���� �ð�));
	// - ���� ������ ����ð���ŭ �Ͻ� ����
	//
	// std::this_thread::sleep_until(Ư�� �ð�);
	// - ���� �����尡 Ư�� �ð��� �ɶ����� �Ͻ� ����
	// ex) 
	//																����ð�+3�ʱ���
	// std::chrono::seconds sec = std::chrono::system_clock::now() + std::chrono::seconds(3);
	// std::this_thread::sleep_until(sec);
	//
	// std::this_thread::yield();
	// - ���� �����尡 �ٸ� �����尡 �켱�ϰ� �纸��(������ ���¶� �Ͻ������� �ٸ�)
	// - �����췯 �켱 ������ �ٲ�





	// ##############################################################
	// std::mutex
	// - �����Ǵ� �����͸� �����忡�� ������
	// - #include <mutex>
	std::thread mutexThread(TestMutex);		// �Լ� ���� ����.
	TestMutex();

	// mutex.lock()
	// - ���� �����忡�� ���� mutex�� ����.
	// - 2�� lock�ϸ� deadlock �߻�(���α׷� ���� �Ұ�)


	// mutex.unlock()
	// - ������ mutex ����
	// - lock�� �����ʰ� unlock�� �ص� ������ �������� ���� ����(������ ���� ���餧�ȵ�)


	// std::recursive_mutex
	// - ���� �����忡�� lock�� ������ �Ҽ� �ִ� mutex;


	// std::scoped_lock<std::mutex> lock(mutex ������)					// c++ 17�������� ����
	// - shared_ptró�� unlock���� mutex�� �˾Ƽ� unlock ������
	// - �Ű������� ���޵�  mutex "��"�� ���� lock ��Ŵ
	// - �Լ� ������ ���ɸ�
	// ex)
	std::mutex sMutex;
	//std::scoped_lo


	// c++ 14���� ���ϴ� ���� scoped_lock ��� std::Lock_guard �� ����ϳ� �Ű����� �ϳ��� lock ����
}


void TestFunc(const string& message)
{
	cout << message << endl;
}

void TestMutex()
{
	static std::mutex g_Mutex;				// ���ؽ� ����� �����ַ� static ����(�����δ� �̷��� ��������)
	g_Mutex.lock();							// ���� �����尡 �� �Լ��� ������. (�ٸ� �����尡 �̺κп� ���� ������)
	cout << "���ؽ� �۵�" << endl;			// mutex.lock�� �����常 ��� ����
	g_Mutex.unlock();						// lock�� �������� �������� (�����ߴ� ������ ���� �۵�)
											// static mutex�� �ٸ� �����尡 ������.
											// (���� mutex�� ������ mutex ���� ���� ������)
}

