#include <iostream>
#include <vector>

using namespace std;

void main()
{
	// ##4. vector의 메모리 예약 2

	// 생성자를 통해 미리 예약할 메모리 개수를 전달할 수 있다.
	// 이 때 전달한 개수만큼 원소도 추가된다. 이 때 모든 원소는 0 초기화 된다.
	//vector<int> vec(10); 

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//// 예약한 메모리를 늘리거나 줄일 수도 있다.
	//// 단, 줄일 때는 size 수는 줄지만 capacity는 그대로 남아있다.
	//vec.resize(20);

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;




	//// ##3. vector의 메모리 예약 1
	//vector<int> vec;

	//// 사용자가 원하는만큼 메모리를 미리 잡아 놓고 재할당과 복사를 방지한다.
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









	//// ##2. swap 함수

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

	//vec1.swap(vec2);	// 서로가 가진 것을 모두 교환.

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






	//// ##1. front와 back 함수
	//vector<int>	vec;

	//vec.push_back(10); // |10|
	//vec.push_back(20); // |10|20|	 

	//cout << vec.front() << endl;	// 맨 앞의 원소의 레퍼런스 반환
	//cout << vec.back() << endl;		// 맨 뒤의 원소의 레퍼런스 반환

	//cout << "-----------------------------" << endl;

	//vec.front() = 100;
	//cout << vec[0] << endl;

	//cout << "-----------------------------" << endl;

	//vec.push_back(30); // |100|20|30|

	//cout << vec.back() << endl;		// 맨 뒤의 원소의 레퍼런스 반환

}