#include <iostream>

using namespace std;

void main()
{
	/*
	1	2	3	4	5				0	1	2	3	4
	6	7	8	9	10				5	6	7	8	9
	11	12	13	14	15		->		10	11	12	13	14
	16	17	18	19	20				15	16	17	18	19
	21	22	23	24	25				20	21	22	23	24
	*/

	int iArray[25] = {};

	for (int i = 0; i < 25; ++i)
		iArray[i] = i + 1;

	// 5 x 5 행렬
	for (int i = 0; i < 5; ++i)	// 행
	{
		for (int j = 0; j < 5; ++j) // 열
		{
			// 인덱스 = 행 * 열의 너비 * 열
			cout << iArray[i * 5 + j] << '\t';	// '\t': 들여쓰기 (tab) 이스케이프 문자열
		}

		cout << '\n'; // '\n': 개행 (줄바꿈) 이스케이프 문자열
	}
}