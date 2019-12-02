#include <iostream>
#include <array>
using namespace std;

void main()
{
	// std::unordered_map (정렬안된 맵)
	// - map은 키값 기준으로 정렬을 해주지만 unordered map은 정렬 X (해쉬맵이기 때문)
	// - 해쉬 함수가 생성하는 색인(index) 기반의 버킷들로 구성


	// std::unordered_set
	// - 위와 동일하지만 set임.
	// - reserve(용량)   사용가능
	// - 키가 중복허용하는 dictionary


	// std::array
	// - 요소 수를 기억하지 않음 ---- c스타일 배열을 추상화한 것
	// - #include <algorithm> 말곤 사용용도를 잘 모름 ?
	// ex)
	std::array<int, 3> members;
	
}