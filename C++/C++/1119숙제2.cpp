#include <iostream>
using namespace std;

void main()
{
	// 과제2 이미지 복사기
	FILE* fp1 = nullptr;
	FILE* fp2 = nullptr;
	char szName[32];
	char szFolder[32] = "../";
	char chCopy = 0;
	int iSelect = 0;


	cout << "이미지 이름" << endl;
	cin >> szName;
	
	// 복사할 파일
	strcat_s(szFolder, szName);
	cout << "복사할 경로 : "<< szFolder << endl;
	fopen_s(&fp1, szFolder, "rb");

	
	// 폴더 디렉터리 초기화
	szFolder[0] = '.';
	szFolder[1] = '.';
	szFolder[2] = '/';
	szFolder[3] = '\0';
	
	
	cout << " 복사될 이름" << endl;
	cin >> szName;


	// 복사될 파일
	strcat_s(szFolder, szName);
	cout << "복사될 경로 : " << szFolder << endl;
	fopen_s(&fp2, szFolder, "wb");

	
	while (!feof(fp1))
	{
		// 한번에 변경.
		fseek(fp1, 0, SEEK_END);				// 파일 지시자를 end에 가르킴 ( 현재 파일의 바이트 크기와 동일)
		int iCount = ftell(fp1);
		char* pData = new char[iCount];
		fseek(fp1, 0, SEEK_SET);
		fwrite(pData, sizeof(char), iCount, fp1);
		fwrite(pData, sizeof(char), iCount, fp2);
		
		
		
		delete[](pData);
		pData = nullptr;
		fclose(fp1);
		fclose(fp2);
		
		// 하나씩 변경.
		// chCopy = fgetc(fp1);
		// cout << chCopy;
		// fputc(chCopy, fp2);
	}
}