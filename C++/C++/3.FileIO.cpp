#include <iostream>
#include <fstream>						// file input output을 하기 위해 사용하는 헤더
using namespace std;

void main()
{
	// 파일 스트림
	ifstream fileInput;					// 읽기전용
	fileInput.open("file.txt");

	//ofstream fileOutput;				// 쓰기전용 ( 만약 이름과 동일한 파일이 없으면 만듬)
	//fileOutput.open("file.txt");

	//fstream fileInOutput;				// 둘다 가능
	//fileInOutput.open("file.txt");	


	// 파일 스트림 모드 ( ios_base == 모든 모드가 충돌이 안나는게 아님)
	// fileInput.open("input.txt", ios_base::in | ios_base::binary);// 사용 예시
	// ios_base::in													// 읽기 가능
	// ios_base::in | ios_base::binary								// 이진 파일모드로 연다
	// ios_base::out												// 쓰기 가능
	// ios_base::out | ios_base::trunc								// 쓰기 가능 | 파일 열때마다 초기화됨
	// ios_base::out | ios_base::app								// 쓰기 가능 | 파일 끝에 데이터를 덧붙인다. 데이터를 추가하는 것만 가능하다.
	// ios_base::int | ios_base::out								// 쓰기 가능 | 읽기 가능
	// ios_base::int | ios_base::out	| ios_base::trunc			// 쓰기 가능 | 읽기 가능 | 읽거나 쓰면 초기화됨

	

	// 스트림 함수	--- input, output, inoutput 다 가능
	//fileOutput.close();				// 파일을 닫음
	//fileOutput.is_open();				// 파일이 열려있는지 확인


	// 인강 34번에서 나온 문제.
	// 파일에서 한글자씩 불러오기 ( 스페이스바를 발견시 건너뜀)
	char ch = '\0';
	while (!fileInput.eof())			// 파일이 end of file에 도달하면 종료
	{
		fileInput >> ch;				// 파일에 있는 내용 한글자를 ch에 대입
		if (fileInput.fail())			// 읽기 실패시
		{
			fileInput.clear();
			fileInput.ignore(512, ' ');	// 최대 읽기 수 , ' '을 읽으면 ignore 종료
		}
		else
			cout << ch << endl;
	}
	
	

	fileInput.close();
	// get(), getline(), >> 모두 동일하게 사용가능
}