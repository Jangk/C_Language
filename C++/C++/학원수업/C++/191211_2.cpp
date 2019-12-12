#include <iostream>
#include <vector>

using namespace std;

// ##1. 반복자 (iterator)
// 컨테이너(자료구조) 종류마다 보관되어있는 원소에 접근하는 방식이 모두 다르다.
// STL에서 제공하는 컨테이너마다 내부에 해당 컨테이너의 접근 방식에 
// 맞게 "반복자"가 정의되어 있고 각 반복자는 원소 접근에 대한 통일된 인터페이스를 제공한다.
// 반복자는 원소의 위치를 갖고 있는 형태이다. 포인터를 모방했다.

void main()
{

	/*vector<int>	vec1;
	vec1.push_back(10);
	vec1.push_back(50);

	vector<int>	vec2;
	vec2.push_back(20);
	vec2.push_back(30);
	vec2.push_back(40);	

	vec1.insert(vec1.begin() + 1, vec2.begin(), vec2.end());

	for (size_t i = 0; i < vec1.size(); ++i)
	{
		cout << vec1[i] << endl;
	}*/

	

	

	




	// ##3. 반복자의 무효화 
	//vector<int>	vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);

	//vector<int>::iterator iter = vec.begin();

	//iter += 1;
	//iter = vec.erase(iter); // 삭제한 다음 위치를 반환.
	//cout << *iter << endl;

	//// vector는 중간 삭제 시 반복자의 무효화가 일어남.
	//iter += 1;
	//vec.erase(iter); // 삭제할 위치를 인자로 전달함.		
	//cout << *iter << endl; // Error! 무효화.

	//// vector는 중간 삽입 이후에도 반복자의 무효화가 일어남.
	//iter += 1;
	//vec.insert(iter, 50);
	//cout << *iter << endl; // Error! 무효화.




	//// ##2. vector의 반복자: 임의접근 반복자
	//vector<int>	vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);

	//vector<int>::iterator iter = vec.begin();

	//// 임의접근 반복자
	////cout << iter[1] << endl;
	////cout << *(iter + 1) << endl;

	//// vector의 중간 삭제: 이 때도 capacity는 그대로 보존.
	////vec.erase(iter + 1); // 삭제할 위치를 인자로 전달함.	
	//

	//// vector의 중간 삽입: 이 때 이미 포화상태라면 재할당 및 복사가 일어남.
	////vec.insert(iter + 1, 50);


	///////////////////////////////////////////////////////////////////////

	//vector<int>::iterator iter_begin = vec.begin(); // begin: 첫번째 원소 위치
	//vector<int>::iterator iter_end = vec.end(); // end: 마지막 원소 다음 위치

	//// 반복자에게는 비교 연산 및 증감 연산자가 오버로딩되어 있다.
	//for (; iter_begin != iter_end; ++iter_begin)
	//{
	//	// 역참조 연산자 또한 오버로딩되어 있다.
	//	cout << *iter_begin << endl;
	//}
}