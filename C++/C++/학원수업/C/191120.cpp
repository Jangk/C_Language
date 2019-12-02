#include <iostream>

using namespace std;

void main()
{
	// ##4. feof 함수.
	// 현재 지시자의 위치가 EOF를 넘어서면 true를 반환.

	FILE* fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	if (0 == err)
	{
		while (true)
		{
			int ch = fgetc(fp);

			if (feof(fp))
				break;

			fputc(ch, stdout);
		}

		fclose(fp);
	}
	else
		cout << "파일 개방 실패" << endl;




	// ##3. ftell 함수.
	// 현재 파일 지시자의 위치를 알려준다.
	// 첫번째 위치는 항상 0이고 지시자의 위치는 1바이트 단위로 계산된다.

	/*FILE* fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	if (0 == err)
	{
		fseek(fp, 2, SEEK_SET);
		cout << "현재 파일 지시자의 위치: " << ftell(fp) << endl;

		int ch = fgetc(fp);
		cout << "현재 파일 지시자의 위치: " << ftell(fp) << endl;

		fseek(fp, -2, SEEK_END);
		cout << "현재 파일 지시자의 위치: " << ftell(fp) << endl;

		ch = fgetc(fp);
		cout << "현재 파일 지시자의 위치: " << ftell(fp) << endl;


		fclose(fp);
	}
	else
		cout << "파일 개방 실패" << endl;*/


	// ##2. fseek 함수.
	// 파일 지시자의 위치를 제어하는 함수.

	// 파일지시자를 처음 위치에서 offset만큼 이동.
	//fseek(stream, offset, SEEK_SET);

	// 현재 파일 지시자의 위치에서 offset만큼 이동.
	//fseek(stream, offset, SEEK_CUR);

	// 파일지시자를 EOF 위치에서 offset만큼 이동.
	//fseek(stream, offset, SEEK_END);

	//FILE* fp = nullptr;

	//errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	//if (0 == err)
	//{
	//	fseek(fp, 2, SEEK_SET);

	//	int ch = fgetc(fp);
	//	fputc(ch, stdout);

	//	ch = fgetc(fp);
	//	fputc(ch, stdout);

	//	fseek(fp, 3, SEEK_CUR);

	//	ch = fgetc(fp);
	//	fputc(ch, stdout);

	//	fseek(fp, -5, SEEK_END);

	//	ch = fgetc(fp);
	//	fputc(ch, stdout);

	//	// 파일 지시자가 fseek함수를 통해서 음의 방향으로 이동한다해도
	//	// 다음 위치의 갱신은 항상 "양의 방향"이다.
	//	ch = fgetc(fp);
	//	fputc(ch, stdout);

	//	fclose(fp);
	//}
	//else
	//	cout << "파일 개방 실패" << endl;







	// ##1. 파일 지시자 제어 함수
	// fseek, ftell, feof 함수 등..
}