#include <iostream>
#include <vector>

using namespace std;

//1. 컨테이너(자료구조)
//< 원소 배치에 따른 분류 >
//표준 시퀀스 컨테이너(선형적) : vector, list, deque, array 등.
//표준 연관 컨테이너(비선형적) : map, multi map, set, multi set 등
//
//<메모리 사용방식에 따른 분류>
//배열기반(연속된 메모리) : vector, deque, array
//노드기반(비연속 메모리) : list, map, multi map, set, multi set

// vector
// 표준 시퀀스 컨테이너, 동적 배열 기반.
// 포화상태에서 추가 삽입 시 재할당 및 복사가 진행된다. -> 빈번한 삽입 불리
// 원소에 대해 인덱스 접근이 가능함. -> 탐색 유리

void main()
{
	//// ##9. vector가 갖고 있는 원소가 동적할당 된 원소라면
	//// 원소를 제거하기 전에 항상 delete해라!
	//vector<int*>	vec;
	//vec.push_back(new int);

	//delete vec[0];
	////vec.pop_back();
	////vec.clear();


	//// ##8. clear 함수
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//cout << "---------------------------------" << endl;

	//// clear: 모든 원소를 제거. 그래도 capacity는 그대로다.
	//vec.clear();

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;


	//// ##7. empty 함수
	//vector<int>	vec;

	//// 벡터가 비어있으면 true 반환.
	//if (vec.empty())
	//	cout << "비어있습니다" << endl;






	//// ##6. 벡터의 인덱스 연산
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//for (size_t i = 0; i < vec.size(); ++i)
	//	cout << vec[i] << endl; // 인덱스 연산자가 오버로딩 되어있다!






	//// ##5. 원소 제거 후 capacity 줄이기.
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;
	//cout << "배열의 주소: " << &vec[0] << endl;

	//cout << "-------------------------" << endl;

	//vec.pop_back();	// |10|20|

	//// shrink_to_fit: 현재 capacity를 size에 맞게 설정하는 함수.
	//// 이 때 다시 재할당 및 복사가 진행됨.
	//vec.shrink_to_fit();

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;
	//cout << "배열의 주소: " << &vec[0] << endl;





	//// ##4. 벡터의 기본 원소 제거 (pop)
	//// pop_back은 제공하지만 pop_front는 제공하지 않는다.
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;

	//cout << "-------------------------" << endl;

	//// 벡터의 원소를 제거하여도 capacity는 줄어들지 않는다.
	//vec.pop_back();	// |10|20|

	//cout << "size: " << vec.size() << endl;
	//cout << "capacity: " << vec.capacity() << endl;




	//// ##3. 벡터가 이미 포화상태일 때 추가 삽입되면 재할당 및 복사가 진행된다.
	//// 이 때 capacity는 기존보다 1.5배 늘어난다. -> 재할당 및 복사 최소화.
	//vector<int>	vec;

	//for (int i = 0; i < 10; ++i)
	//{
	//	vec.push_back(i);

	//	cout << "size: " << vec.size() << endl;		
	//	cout << "capacity: " << vec.capacity() << endl; 
	//	cout << "배열의 주소: " << &vec[0] << endl; // 벡터는 인덱스 연산 가능!
	//	cout << "---------------------------------" << endl;
	//}




	//// ##2. 벡터의 기본 원소 삽입 (push)
	//// push_back함수를 제공한다. push_front는 제공되지 않는다.
	//// 벡터가 이미 포화상태일 때 추가 삽입되면 재할당 및 복사가 진행된다.
	//vector<int>	vec;

	//vec.push_back(10);	// |10|
	//vec.push_back(20);	// |10|20|
	//vec.push_back(30);	// |10|20|30|

	//// size: 현재 벡터에 보관된 원소의 개수
	//cout << "size: " << vec.size() << endl;		

	//// capacity: 벡터가 보관할 수 있는 원소의 최대 개수
	//cout << "capacity: " << vec.capacity() << endl; 







	//// ##1. 벡터의 선언: 템플릿 클래스.
	//vector<int>		vec1;
	//vector<float>	vec2;
	////vector<사용자정의타입>	vec3;
}