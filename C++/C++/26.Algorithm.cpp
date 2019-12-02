#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void main()
{
	// STL Algorithm
	//						   | 변경 불가 순차(Suquence) 연산 : find(), for_each() 등
	// #include <algorithm>----| 변경 가능 순차 연산			: copy(), swap() 등
	//						   | 정렬과련 연산				: sort(), merge() 등
	//
	// #include <numeric> -----| 범용 수치 연산				: accumulate() 등
	// 
	// ==========================================================================
	// ex) stl algorithm copy를 사용하여 벡터 복사하기
	vector<int> scores;
	scores.push_back(100);
	scores.push_back(200);
	scores.push_back(300);

	vector<int> copyScores;
	copyScores.resize(scores.size());
	//		   scores 시작부터, socres 마지막 까지, copyScores벡터로 복사.
	std::copy(scores.begin(), scores.end(), copyScores);
	//		  복사시작부분,     복사될부분의 마지막 다음주소



	// ============================================================================
	// ex) find()
}