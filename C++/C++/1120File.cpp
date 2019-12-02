#include <iostream>
using namespace std;

void main()
{
	// 파일 지시자 제어 함수
	// * 파일 지시자 : 어디서 부터 읽어야할지 가르키는 것.(첫번째는 0이다)
	// fseek(FILE*, 이동할 거리, 이동할 원점)
	// - 파일 지시자의 위치를 제어하는 함수.
	// - 이동할 원점에는 밑의 3가지를 사용할 수 있다.
	//   SEEK_SET : 처음지점에서 이동할 거리만큼 이동
	//   SEEK_CUR : 현재 파일 지시자 위치에서 이동할 거리만큼 이동
	//   SEEK_END : 파일 지시자를 eof 위치에서 이동할 거리만큼 이동
	// ex)
	FILE* fp = nullptr;	
	errno_t err = fopen_s(&fp, "../test.txt", "r");

	if (0 == err)
	{
		fseek(fp, 2, SEEK_SET);				// 처음에서 2번째 뒤에있는 것을 파일 지시자가 가르키게 함.
		int ch = fgetc(fp);					// 읽었으니 처음에서 3번째를 가르킴.
		fputc(ch, stdout);

		fseek(fp, -2, SEEK_END);			// 파일 지시자를 마지막에서 앞으로 2칸으로 가게함.
		ch = fgetc(fp);						// 읽었으니 다음칸을 가르킴.
		fclose(fp);							
	}
	// ftell(FILE*)
	// - 현재 파일 지시자가 어디를 가르키는지 리턴한다.
	// - 1바이트 단위 계산.


	// feof
	// - 현재 지시자가 eof를 넘으면 true 리턴.
	// ex
	if (feof(fp))			// FILE* fp가 eof를 넘엇으면 true
		return;
}