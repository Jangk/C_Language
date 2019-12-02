#include <iostream>
using namespace std;

void main()
{
	// 범위 기반 반복문 
	// range base for
	// - 기존 for문 보다 간결하고 가독성도 더 좋음
	// - stl 컨테이너, c 배열에서 모두 작동
	// - auto 키워드를 사용하여 할수있음.
	// - 단점으로 뒤에서 앞으로는 불가능.
	int scores[3] = { 10, 20, 30 };

	for (int score : scores)			// 0부터 scores까지 score에 대입(조건이 정수일때.)
	{
		score -= 10;					// 10점 깍고 실행 
		cout << score << endl;			// 10점씩 깍인채로 출력이되나 원본은 안바낌
	}


	for (int& score : scores)			// 초기식에서 레퍼런스 변수로 선언하면 원본도 바낌
	{
		score -= 10;
		cout << score << endl;
	}
	
	
	
	// for each(시작점, 도착점, 실행할것)
	// - 람다를통한 함수포인터도 실행가능.
	// - 특정 지점에서 특정 지점까지 연산가능
	// - 좋은 기능은 아님.

}