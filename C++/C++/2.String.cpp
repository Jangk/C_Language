#include <iostream>
#include <stdio.h>
#define CHARACTER_MAX 512
using namespace std;

void main()
{	//입력받은 문자열 뒤집어서 출력
	char ch[CHARACTER_MAX];
	char ch2[CHARACTER_MAX];
	int count   = 0;


	cout << "문자열을" << CHARACTER_MAX <<"개 이하로 입력하시오" << endl;
	cin.getline(ch, CHARACTER_MAX);											// getline을 써야 공백(스페이스바)를 입력받을수 있기때문에.
	if (cin.fail())															// 마지막으로 입력된 값이 읽을 수없는 문자일때(쓰레기 값일때)
	{
		cin.clear();														// 안에 든 버퍼값(쓰레기값 또는 읽을수 없는 문자일떄) 초기화
		return;
	}

	// 풀이에서 사용
	char* start = ch;						// 입력받은 문자열의 첫주소
	char* last  = start + strlen(ch) -1;	// 입력받은 문자열의 끝주소
	while (start < last )					// 끝주소가 시작주소보다 작아질때 까지
	{
		char temp = *start;
		*start = *last;
		*last = temp;
		++start;
		--last;
	}
	cout << ch << endl;

	// 내가 한 방식
	//for (int i = 0; i < CHARACTER_MAX; i++)
	//{
	//	if (ch[i] == '\0')
	//	{
	//		for (int j = i - 1; j > -1; j--)
	//		{
	//			ch2[count] = ch[j];
	//			count++;
	//		}
	//		ch2[i] = '\0';
	//		break;
	//	}
	//}
	//cout << ch2 << endl;
}