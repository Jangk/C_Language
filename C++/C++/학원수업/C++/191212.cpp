#include <iostream>
#include <list>
#include <functional>

using namespace std;

//					vector			|			list
//--------------------------------------------------------
//	메모리 방식	|	(동적)배열 기반	|		노드 기반	
//--------------------------------------------------------
//	반복자 형태	|	임의접근 반복자	|		양방향 반복자
//--------------------------------------------------------
//	  탐색		|		유리			|			불리
//--------------------------------------------------------
// 빈번한 추가,삭제|		불리			|			유리
//--------------------------------------------------------
//	sort함수		|	<algorithm> 제공	|		멤버 함수
//--------------------------------------------------------
//	공통점		|			표준 시퀀스 컨테이너
//--------------------------------------------------------

void main()
{
	//// ##6. list의 sort
	//list<int>	Mylist;

	//Mylist.push_back(5);
	//Mylist.push_back(3);
	//Mylist.push_back(1);
	//Mylist.push_back(4);
	//Mylist.push_back(2);

	//// list는 sort 함수를 멤버로 갖고 있다.
	////Mylist.sort(); // 기본 오름차순

	//greater<int> functor;
	//Mylist.sort(functor);

	//list<int>::iterator iter_begin = Mylist.begin();
	//list<int>::iterator iter_end = Mylist.end();

	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << (*iter_begin) << endl;




	//// ##5. list의 중간 삽입과 삭제 (insert, erase)
	//list<int>	Mylist;

	//Mylist.push_back(10);
	//Mylist.push_back(20);
	//Mylist.push_back(30);
	//Mylist.push_back(40);

	//list<int>::iterator iter_begin = Mylist.begin();
	//list<int>::iterator iter_end = Mylist.end();

	//++iter_begin;
	//Mylist.insert(iter_begin, 50);

	//++iter_begin;
	//Mylist.erase(iter_begin); // 삭제한 다음 위치를 반환.
	////cout << *iter_begin << endl; // 삭제된 반복자는 무효화가 일어남! Error!!

	//// list는 vector와 달리 중간 삽입 이후에도 end의 무효화가 일어나지 않음.
	//// list는 vector와 달리 중간 삭제 이후에도 end의 무효화가 일어나지 않음.
	//for (iter_begin = Mylist.begin(); iter_begin != iter_end; ++iter_begin)
	//	cout << (*iter_begin) << endl;



	//// ##4. list의 반복자: 양방향 반복자.
	//// 원소 접근에 있어서 ++, -- 연산자를 제공.
	//list<int>	Mylist;

	//Mylist.push_back(10);
	//Mylist.push_back(20);
	//Mylist.push_back(30);

	//Mylist.reverse(); // 모든 원소의 위치를 뒤바꿔놓는다.

	//list<int>::iterator iter_begin = Mylist.begin();
	//list<int>::iterator iter_end = Mylist.end();

	////iter_begin + 3; // Error
	////iter_begin[3]; // Error

	//for (; iter_begin != iter_end; ++iter_begin)
	//	cout << (*iter_begin) << endl;






	// ##3. list의 멤버함수
	// swap, empty, clear, insert, erase 함수가 제공됨.


	//// ##2. list 원소 삽입
	//// push_front, push_back 둘 다 제공.

	//list<int>	Mylist;
	//Mylist.push_back(30); // 30
	//Mylist.push_back(40); // 30 - 40

	//cout << "size: " << Mylist.size() << endl;
	//cout << "front: " << Mylist.front() << endl;
	//cout << "back: " << Mylist.back() << endl;

	//cout << "----------------------------" << endl;

	//Mylist.push_front(20); // 20 - 30 - 40
	//Mylist.push_front(10); // 10 - 20 - 30 - 40

	//cout << "size: " << Mylist.size() << endl;
	//cout << "front: " << Mylist.front() << endl;
	//cout << "back: " << Mylist.back() << endl;
	



	// ##1. list 선언
	//list<int>	list1;
	//list<float> list2;
	//list<사용자정의> list3;
}