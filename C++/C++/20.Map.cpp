#include <iostream>
#include <map>
#include <string>
using namespace std;


class testClass
{
public:
	testClass(int id, string name) : m_Id(id), m_Name(name) {}	// 생성자
	bool operator<(const testClass& other)const;				// 연산자 오버로딩
private:
	int m_Id;
	string m_Name;
};
void main()
{
	// Map    ------ key와 value로 저장된 사전형 데이터
	// - key값은 중복될 수 없다.
	// - 2진 탐색트리 기반, c++은 hash맵이 아님
	// - c++ 맵은 key 기준으로 오름차순으로 자동 정렬됨 
	//ex) 사용예
	//std::map < key 자료형, value 자료형> map변수명;
	//std::map<std::string, int> testMap;




	// std::pair<key, value>								// 2개를 항상으로 사용
	// std::pair<iterator, bool> insert(const value_type& value);
	// - 키값이 중복될 수 없기 때문에 bool 검사 값이 정상적으로 들어가면 true 반환,
	//testMap.insert(std::pair<std::string, int>("data1", 1));
	//testMap.insert(std::pair<std::string, int>("data2", 2));
	//testMap["data1"] = 100;									// key값을 배열 인덱스처럼 사용가능.
	
	
	// map.size()											// 
	//cout << testMap.size() << ", " << testMap["data1"] << endl;


	// map[] 형식
	// - 데이터를 읽을때 없는 키값을 쓰면 그 키값이 0으로 초기화됨.(의도치않게 데이터 생성될 수 잇음)
	//std::map<std::string, int> testMap;
	//testMap["First"] = 10;									// 키 값이 중복 안되니 새로운 데이터 삽입
	//testMap["First"] = 100;									// 값을 덮어씀


	// vector와 동일하게 iterator 사용가능.
	// 자동으로 정렬해 줘서 abc, bbc, cbc 순으로 나옴.
	//std::map<std::string, int> testMap;
	//testMap.insert(pair<string, int>("cbc", 3));
	//testMap.insert(pair<string, int>("bbc", 2));
	//testMap.insert(pair<string, int>("abc", 1));
	//for (map<string, int>::iterator iter = testMap.begin(); iter != testMap.end(); ++iter)
	//	// map->first  == key , map->second  == value
	//	cout << iter->first << ", " << iter->second << endl;


	// map.find("찾을값")
	// - 찾을값을 가진 iterator를 참조로 반환(값 수정시 원본이 바낌), 없으면 map.end()값 리턴.
	// ex)
	//map<string, int> testMap;
	////testMap.insert(pair<string, int>("abc", 10));
	//map<string, int>::iterator it = testMap.find("abc");
	//if (it != testMap.end())
	//	it->second = 80;
	//cout << it->first << ", " << it->second;


	// map.swap(map변수)
	// - 말그래도 스왑한다.
	// map.clear()
	// - map의 데이터를 비운다.
	// map.erase(벡터처럼 iter 또는 key)
	// - vector와 동일하지만 key값을 사용해 바로 지울수 있음.





	// object를 key로 사용하기
	// - 그냥 object를 key로 사용하면 에러가 발생한다.
	// - map은 자동 정렬되는데 class object는 < 대소 비교가 적용이 안되기때문.
	//ex)
	map<testClass, int> testMap;
	// testclass가 누가 크거나 작은지를 판단불가, 정렬이 안되서 에러.
	// 제대로 작동하게 하려면 연산자 오버로딩울 해야됨.
	testMap.insert(pair<testClass, int>(testClass(1234, "이름임"), 30));
	testMap.insert(pair<testClass, int>(testClass(6789, "다른이름임"), 30));

}


// 누가 더큰지 판단할 수 있게 연산자 오버로딩.
bool testClass::operator<(const testClass & other) const
{	// 이름이 같으면 아이디로 구분
	if (m_Name == other.m_Name)
		return m_Id < other.m_Id;
	return m_Name < other.m_Name;
}
