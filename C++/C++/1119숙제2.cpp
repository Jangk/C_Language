#include <iostream>
using namespace std;

void main()
{
	// ����2 �̹��� �����
	FILE* fp1 = nullptr;
	FILE* fp2 = nullptr;
	char szName[32];
	char szFolder[32] = "../";
	char chCopy = 0;
	int iSelect = 0;


	cout << "�̹��� �̸�" << endl;
	cin >> szName;
	
	// ������ ����
	strcat_s(szFolder, szName);
	cout << "������ ��� : "<< szFolder << endl;
	fopen_s(&fp1, szFolder, "rb");

	
	// ���� ���͸� �ʱ�ȭ
	szFolder[0] = '.';
	szFolder[1] = '.';
	szFolder[2] = '/';
	szFolder[3] = '\0';
	
	
	cout << " ����� �̸�" << endl;
	cin >> szName;


	// ����� ����
	strcat_s(szFolder, szName);
	cout << "����� ��� : " << szFolder << endl;
	fopen_s(&fp2, szFolder, "wb");

	
	while (!feof(fp1))
	{
		// �ѹ��� ����.
		fseek(fp1, 0, SEEK_END);				// ���� �����ڸ� end�� ����Ŵ ( ���� ������ ����Ʈ ũ��� ����)
		int iCount = ftell(fp1);
		char* pData = new char[iCount];
		fseek(fp1, 0, SEEK_SET);
		fwrite(pData, sizeof(char), iCount, fp1);
		fwrite(pData, sizeof(char), iCount, fp2);
		
		
		
		delete[](pData);
		pData = nullptr;
		fclose(fp1);
		fclose(fp2);
		
		// �ϳ��� ����.
		// chCopy = fgetc(fp1);
		// cout << chCopy;
		// fputc(chCopy, fp2);
	}
}