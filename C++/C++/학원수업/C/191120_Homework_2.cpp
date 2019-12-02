#include <iostream>

using namespace std;

void main()
{
	char szFileName[256] = "";
	char szCopyName[256] = "";

	cout << "원본 파일 이름: ";
	cin >> szFileName;

	cout << "복사 파일 이름: ";
	cin >> szCopyName;

	FILE* fp_Src = nullptr;

	errno_t err = fopen_s(&fp_Src, szFileName, "rb");

	if (0 == err)
	{
		FILE* fp_Dst = nullptr;

		err = fopen_s(&fp_Dst, szCopyName, "wb");

		if (0 == err)
		{	
			fseek(fp_Src, 0, SEEK_END);
			int iCount = ftell(fp_Src);

			char* pData = new char[iCount];

			fseek(fp_Src, 0, SEEK_SET);

			fread(pData, sizeof(char), iCount, fp_Src);
			fwrite(pData, sizeof(char), iCount, fp_Dst);

			delete[] pData;
			pData = nullptr;

			fclose(fp_Src);
			fclose(fp_Dst);
			cout << "복사 성공!!!" << endl;
			
		}
		else
		{
			fclose(fp_Src);
			cout << "복사 실패!" << endl;
		}

	}
	else
		cout << "복사 실패!" << endl;
}