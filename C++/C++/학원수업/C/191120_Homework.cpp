#include <iostream>

using namespace std;

void main()
{
	char szFileName[256] = "";
	char szCopyName[256] = "";

	cout << "���� ���� �̸�: ";
	cin >> szFileName;

	cout << "���� ���� �̸�: ";
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
			cout << "���� ����!!!" << endl;
			cout << "���� Ƚ��: " << iCount << endl;
		}
		else
		{
			fclose(fp_Src);
			cout << "���� ����!" << endl;
		}

	}
	else
		cout << "���� ����!" << endl;
}