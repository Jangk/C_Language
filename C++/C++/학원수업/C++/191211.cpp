#include <iostream>
#include <vector>

using namespace std;

void main()
{
	// ##4. vector�� �޸� ���� 2

	// �����ڸ� ���� �̸� ������ �޸� ������ ������ �� �ִ�.
	// �� �� ������ ������ŭ ���ҵ� �߰��ȴ�. �� �� ��� ���Ҵ� 0 �ʱ�ȭ �ȴ�.
	//vector<int> vec(10); 

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//// ������ �޸𸮸� �ø��ų� ���� ���� �ִ�.
	//// ��, ���� ���� size ���� ������ capacity�� �״�� �����ִ�.
	//vec.resize(20);

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;




	//// ##3. vector�� �޸� ���� 1
	//vector<int> vec;

	//// ����ڰ� ���ϴ¸�ŭ �޸𸮸� �̸� ��� ���� ���Ҵ�� ���縦 �����Ѵ�.
	//vec.reserve(10);

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//for (int i = 0; i < 10; ++i)
	//{
	//	vec.push_back(i);
	//	cout << &vec[0] << endl;
	//}

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;









	//// ##2. swap �Լ�

	//vector<int>	vec1;
	//vector<int> vec2;

	//cout << "------ before swap -------" << endl;

	//vec1.push_back(10);
	//vec1.push_back(20);	

	//cout << "vec1" << endl;

	//for (size_t i = 0; i < vec1.size(); ++i)
	//	cout << vec1[i] << endl;

	//cout << "size: " << vec1.size() << endl;
	//cout << "capacity: " << vec1.capacity() << endl;

	//cout << "-----------------------------" << endl;

	//vec2.push_back(30);
	//vec2.push_back(40);
	//vec2.push_back(50);
	//vec2.push_back(60);
	//vec2.push_back(70);
	//vec2.push_back(80);

	//cout << "vec2" << endl;

	//for (size_t i = 0; i < vec2.size(); ++i)
	//	cout << vec2[i] << endl;

	//cout << "size: " << vec2.size() << endl;
	//cout << "capacity: " << vec2.capacity() << endl;

	//vec1.swap(vec2);	// ���ΰ� ���� ���� ��� ��ȯ.

	//cout << "------ after swap -------" << endl;

	//cout << "vec1" << endl;

	//for (size_t i = 0; i < vec1.size(); ++i)
	//	cout << vec1[i] << endl;

	//cout << "size: " << vec1.size() << endl;
	//cout << "capacity: " << vec1.capacity() << endl;

	//cout << "-----------------------------" << endl;	

	//cout << "vec2" << endl;

	//for (size_t i = 0; i < vec2.size(); ++i)
	//	cout << vec2[i] << endl;

	//cout << "size: " << vec2.size() << endl;
	//cout << "capacity: " << vec2.capacity() << endl;






	//// ##1. front�� back �Լ�
	//vector<int>	vec;

	//vec.push_back(10); // |10|
	//vec.push_back(20); // |10|20|	 

	//cout << vec.front() << endl;	// �� ���� ������ ���۷��� ��ȯ
	//cout << vec.back() << endl;		// �� ���� ������ ���۷��� ��ȯ

	//cout << "-----------------------------" << endl;

	//vec.front() = 100;
	//cout << vec[0] << endl;

	//cout << "-----------------------------" << endl;

	//vec.push_back(30); // |100|20|30|

	//cout << vec.back() << endl;		// �� ���� ������ ���۷��� ��ȯ

}