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
			int ch = 0;
			int iCount = 0;

			while (true)
			{
				ch = fgetc(fp_Src);

				if (EOF == ch)
					break;

				fputc(ch, fp_Dst);

				++iCount;
			}

			fclose(fp_Src);
			fclose(fp_Dst);
			cout << "복사 성공!!!" << endl;
			cout << "루프 횟수: " << iCount << endl;
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