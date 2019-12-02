#include <iostream>
#include <vector>
using namespace std;


void main()
{
	// vector			-- #include <vector>
	// - 어떤 자료형이라도 넣을수있는(템플릿)  동적 배열		-- 내부구조도 배열도 되있음
	// - 배열이라 연속된 공간에 할당 (일반 배열처럼 인덱스번호로 random access가능)
	// - 메모리를 용량을 자동으로 관리해줌. ( 처음 할당된 용량을 넘어가면 더 크게 할당된 영역으로 데이터 복사
	//   즉, 메모리 사용량 크지만 바껴도 연속된 공간에 할당댐)
	// - 효율적으로 사용하기 위해선 벡터의 크기를 reserve(); 설정해줘야 메모리 사용을 아낄수있다.
	// ex)
	std::vector<int> scores;
	vector<int> test(10);											// 0~9번까지 인덱스 0으로 초기화 (reserve처럼 공간할당이 아님)
	scores.reserve(2);												// 2개의 공간을 확보한다.(벡터가 지정한 공간보다 큰 공간을 가지고 있다고 공간을 줄이진 않음)
	//scores.resize(10);											// 10개의 크기를 확보하며 값들은 0으로 초기화댐 (용량이 크기보다 작다면 늘려줌)
																	// 용량보다 크기가 크면  용량이 크기값으로 줄고, 용량에 벗어난 값들은 버림. 

	scores.push_back(30);
	scores.push_back(50);											// 데이터 2개   

	scores.pop_back();												// 마지막 데이터(50) 추출 

	cout << "Current capacity : " << scores.capacity() << endl;		// capacity 공간할당된 크기
	cout << "Current size : " << scores.size() << endl;				// size		현재 들어있는 크기


	// 벡터도 배열처럼 인덱스로 접근가능
	// 내부적으로 operator[]() 연산자 오버로딩 되있고, '참조' 로 연산하기 때문에 값이 제대로 불러와짐.
	cout << scores[1] << endl;

	
	// map의 경우 operator[]를 쓸수 없음. 그래서 iterator를 사용한다.
	

	// 모든 요소를 출력하기
	// iterator (반복자) : 특정 데이터 요소를 순회하는데 사용한다. 
	// socres.end(), begin()도 iter를 반환한다.
	for (std::vector<int>::iterator iter = scores.begin(); iter != scores.end(); ++iter)
	{	// iterator는 개념상 사실상 포인터 
		cout << *iter << endl;
	}


	// vector.begin()은 벡터의 첫번째 데이터를 반환.
	// vector.end()는   벡터의 마지막 데이터가 아니라 마지막 데이터의 다음 영역을 반환.
	// vector<자료형>::const_iterator = iterator가 가르키는 곳을 바꿀 수 있지만, 안의 값은 바꿀 수 없다.


	// 역방향 반복자
	// 끝부터 처음까지 반복하는것은 begin end로 어려움(end는 끝의 다음이고, begin은 시작부분이기때문에)
	// 그 상황을 위해 rbeign()과 rend를 지원함.
	// vector.rbegin() 마지막 부분 데이터를 가르킴.
	// vector.rend()   첫 요소의 데이터의 앞의 영역을 반환.
	// 역방향 반복자도 존재함. 
	// ex)
	// vector<자료형>::reverse_iterator
	// std::vector<자료형>::const_reverse_iterator


	// 특정 위치에 요소 삽입하기
	// vector.insert(iterator 원하는 위치, 넣을 데이터) 
	// 원하는 위치에 있던 값을 덮어쓰는게 아니라 값을 넣고 뒤로 밀어냄. 그리고 들어간 위치의 iterator로 반환함.
	// ex)
	vector<int> testVec;
	testVec.reserve(5);									// 5개의 용량
	testVec.push_back(1);								// 1번째 데이터
	testVec.push_back(2);								// 2번째
	testVec.push_back(3);								// 3번째
	testVec.push_back(4);								// 4번째
	std::vector<int>::iterator it = testVec.begin();	// 데이터를 넣을 구간을 iter로 
	it = testVec.insert(it, 0);							// it는 testVec.begin()이기때문에 0 , 1, 2, 3,4 를 가짐.


	// 특정 위치에 요소 삭제하기.
	std::vector<int>::iterator it = testVec.begin();
	testVec.erase(it);									// it위치의 값이 삭제되고 it 삭제되고 댕겨온 값을 리턴  
														// ex )0번익데스의 값을 지우고, 1번 인덱스를 0번으로 바꾸고 0번을 리턴

	// vector.assgin(갯 수, 값)							// 처음부터 7개의 요소에 값을 넣음.
	// ex) testVec.assign(7, 100);						// 인덱스 0번부터 6까지 7개에 100을 넣음.
	// vector.swap(vector변수)							// 두 벡터의 값을 바꿈.
	// vector.clear()									// 벡터의 모든 데이터를 지움. 용량은 그대로, 크기는 0

}