#include <iostream>

using namespace std;

typedef struct tagInfo
{
	int a;
	int b;
	int c;
}INFO;

void main()
{
	// 바이너리 모드 입출력을 통해 배열과 구조체와 같은 연속된 메모리 블록을
	// 손 쉽게 저장, 불러오기 할 수 있다.



	//// 구조체 파일 입력
	//INFO t = {};
	//FILE* fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/test3.txt", "rb");

	//if (0 == err)
	//{
	//	fread(&t, sizeof(INFO), 1, fp);

	//	cout << "불러오기 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "불러오기 실패!" << endl;

	//cout << t.a << endl;
	//cout << t.b << endl;
	//cout << t.c << endl;



	//// 구조체 파일 출력
	//INFO t = { 10, 20, 30 };
	//FILE* fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/test3.txt", "wb");

	//if (0 == err)
	//{
	//	fwrite(&t, sizeof(INFO), 1, fp);

	//	cout << "저장 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "저장 실패!" << endl;







	// ##6. 바이너리 모드 파일 입출력
	//FILE* fp = nullptr;

	//int iArr[5] = {};
	//errno_t err = fopen_s(&fp, "../Data/test2.txt", "rb");

	//if (0 == err)
	//{
	//	// 바이너리 모드 파일 입력 함수.
	//	//fread(iArr, sizeof(int), 5, fp);
	//	fread(iArr, sizeof(iArr), 1, fp);

	//	cout << "불러오기 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "불러오기 실패!" << endl;

	//for (int i = 0; i < 5; ++i)
	//	cout << iArr[i] << endl;



	//// 1.바이너리 모드 출력
	//int iArr[5] = { 10, 20, 30, 40, 50 };
	//errno_t err = fopen_s(&fp, "../Data/test2.txt", "wb");

	//if (0 == err)
	//{
	//	// 바이너리 모드 파일 출력 함수.
	//	//fwrite(iArr, sizeof(int), 5, fp);
	//	fwrite(iArr, sizeof(iArr), 1, fp);

	//	cout << "저장 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "저장 실패" << endl;









	//// 문제1. 다음과 같이 인적사항을 키보드로 입력받고 메모장에 저장해보아라.
	//// 이름: 홍길동
	//// 나이: 32
	//// 연락처: 010-1234-5678

	//FILE* fp = nullptr;

	//errno_t err = fopen_s(&fp, "../Data/Info.txt", "a");

	//if (0 == err)
	//{
	//	char sz[32] = "";

	//	cout << "이름: ";
	//	fgets(sz, 32, stdin);
	//	fputs(sz, fp);

	//	cout << "나이: ";
	//	fgets(sz, 32, stdin);
	//	fputs(sz, fp);

	//	cout << "연락처: ";
	//	fgets(sz, 32, stdin);
	//	fputs(sz, fp);

	//	cout << "저장 성공!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "저장 실패!" << endl;
	





	//// ##5. stdin과 stdout
	//// stdin: 표준 입력 스트림
	//// stdout: 표준 출력 스트림

	//char szName[32] = "";

	//fgets(szName, 32, stdin); // 키보드로부터(표준 입력스트림) 입력 받는다.
	//fputs(szName, stdout); // 모니터로(표준 출력스트림) 출력한다.







	//// ##4. EOF
	//FILE* fp = nullptr;
	//int ch = 0;

	//errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	//if (0 == err)
	//{
	//	while (true)
	//	{
	//		// 단일 문자 입력 함수. 입력버퍼에 있는 문자를 얻어다가 반환하는 함수.
	//		ch = fgetc(fp);

	//		// 파일 끝을 알아낼 때 EOF를 활용.
	//		// 파일 끝에는 EOF가 기록되어있다.
	//		// End Of File의 약자. 이 값은 상수 -1이다.
	//		if (EOF == ch)
	//			break;

	//		//// 파일에는 자동으로 null문자가 저장되지 않는다.
	//		//// 따라서, 파일 끝을 알아낼 때 null문자를 이용하지 않는다.
	//		//if ('\0' == ch)
	//		//	break;

	//		// 단일 문자 출력 함수. 표준 출력 스트림을 통해 모니터로 출력.
	//		putchar(ch);
	//	}
	//	
	//	fclose(fp);
	//}
	//else
	//	cout << "파일 개방 실패" << endl;







	// ##3. 파일 입력 (데이터 불러오기)
	//FILE* fp = nullptr;
	//char szName[32] = "";

	//errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	//if (0 == err)
	//{
	//	// 문자열 파일 입력 함수 (개행문자까지 읽어들인다)
	//	fgets(szName, 32, fp);
	//	fclose(fp);
	//}
	//else
	//	cout << "파일 개방 실패" << endl;

	//cout << szName << endl;


	// ##2. 파일 출력 (데이터 저장)
	//// 모드
	//// r(read, 입력):	읽어오기		입력할 대상 파일이 없으면 에러.
	//// w(write, 출력):	덮어쓰기		출력할 대상 파일이 없으면 새로 생성.
	//// a(append, 출력):	이어쓰기		출력할 대상 파일이 없으면 새로 생성.

	//// t(text mode):	사람이 알아보기 쉬운 문자의 형태로 입출력.
	//// b(binary mode)	문자형태로 표현할 수 없는 데이터들을 입출력. ex) 이미지, 동영상, 음원 등.
	//

	//FILE* fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/test.txt", "w");

	//if (0 == err)
	//{
	//	// 문자열 파일 출력함수.
	//	fputs("hello", fp);

	//	fclose(fp); // 파일 스트림 소멸
	//}
	//else
	//	cout << "파일 개방 실패" << endl;



	//##1. 파일 입출력
	//fopen_s: 파일 개방 함수. 파일 입출력에 필요한 입출력 스트림을 생성한다.

	// 파일 개방을 성공하면 0을 반환. 실패하면 0이 아닌 값을 반환.
	//errno_t fopen_s(FILE** _stream, const char* fileName, const char* mode)
}