#include <iostream>
#include <mutex>
#include <queue>
using namespace std;



void main()
{
	// std::condition_variable (���� ����)
	// - �̺�Ʈ ��ü
	// - ��ȣ�� ���������� ���� �������� ������ ����

	// std::condition_variable::notifiy_one()    �Ǵ�	std::condition_variable notifiy_all()
	// - ������� ������ �ϳ� �Ǵ� ���θ� �۵���Ŵ
	// - �Լ����ڴ� ������ unique_lock


	// std::condition_variable::wait()  �Ǵ� wait_for()  �Ǵ� wait_until()
	// - �����带 ���ؽ� ���� Ǯ�� notify_XXx�� ��ٸ�.
	// - ����� ���ؽ��� �ٽ� ���.
	// - �Լ����ڴ� ������ unique_lock


	// std::condition_variable::unique_Lock
	// - ���� ����� std::unique_Lock�� ����Ѵ�.
	// - ������ lock �������� �� �ִ�.( �ι�° �Ű������� std::defer_lock�� �־�ߵ�)
	// - recursive_lock���� ��������� ��ۼ����ִ�.
	// - ���� ������ ���� ������ lock


	// ******* notify_xxx���� wait�� ���� ȣ��Ǹ� ������ ��ٸ���.
	// �ذ������� 
	// wait(���ؽ�, []{return �����Ͱ� ��������ʴٴ� ����}
	// - �Լ��� �߸��� ������ ����
	// - �ι�° ���� �Լ��� ��� ������ ��ο��� ������ �� �ִ� bool  ���� ����
	
	
}

