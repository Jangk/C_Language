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
	// ���̳ʸ� ��� ������� ���� �迭�� ����ü�� ���� ���ӵ� �޸� �����
	// �� ���� ����, �ҷ����� �� �� �ִ�.



	//// ����ü ���� �Է�
	//INFO t = {};
	//FILE* fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/test3.txt", "rb");

	//if (0 == err)
	//{
	//	fread(&t, sizeof(INFO), 1, fp);

	//	cout << "�ҷ����� ����!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "�ҷ����� ����!" << endl;

	//cout << t.a << endl;
	//cout << t.b << endl;
	//cout << t.c << endl;



	//// ����ü ���� ���
	//INFO t = { 10, 20, 30 };
	//FILE* fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/test3.txt", "wb");

	//if (0 == err)
	//{
	//	fwrite(&t, sizeof(INFO), 1, fp);

	//	cout << "���� ����!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "���� ����!" << endl;







	// ##6. ���̳ʸ� ��� ���� �����
	//FILE* fp = nullptr;

	//int iArr[5] = {};
	//errno_t err = fopen_s(&fp, "../Data/test2.txt", "rb");

	//if (0 == err)
	//{
	//	// ���̳ʸ� ��� ���� �Է� �Լ�.
	//	//fread(iArr, sizeof(int), 5, fp);
	//	fread(iArr, sizeof(iArr), 1, fp);

	//	cout << "�ҷ����� ����!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "�ҷ����� ����!" << endl;

	//for (int i = 0; i < 5; ++i)
	//	cout << iArr[i] << endl;



	//// 1.���̳ʸ� ��� ���
	//int iArr[5] = { 10, 20, 30, 40, 50 };
	//errno_t err = fopen_s(&fp, "../Data/test2.txt", "wb");

	//if (0 == err)
	//{
	//	// ���̳ʸ� ��� ���� ��� �Լ�.
	//	//fwrite(iArr, sizeof(int), 5, fp);
	//	fwrite(iArr, sizeof(iArr), 1, fp);

	//	cout << "���� ����!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "���� ����" << endl;









	//// ����1. ������ ���� ���������� Ű����� �Է¹ް� �޸��忡 �����غ��ƶ�.
	//// �̸�: ȫ�浿
	//// ����: 32
	//// ����ó: 010-1234-5678

	//FILE* fp = nullptr;

	//errno_t err = fopen_s(&fp, "../Data/Info.txt", "a");

	//if (0 == err)
	//{
	//	char sz[32] = "";

	//	cout << "�̸�: ";
	//	fgets(sz, 32, stdin);
	//	fputs(sz, fp);

	//	cout << "����: ";
	//	fgets(sz, 32, stdin);
	//	fputs(sz, fp);

	//	cout << "����ó: ";
	//	fgets(sz, 32, stdin);
	//	fputs(sz, fp);

	//	cout << "���� ����!" << endl;
	//	fclose(fp);
	//}
	//else
	//	cout << "���� ����!" << endl;
	





	//// ##5. stdin�� stdout
	//// stdin: ǥ�� �Է� ��Ʈ��
	//// stdout: ǥ�� ��� ��Ʈ��

	//char szName[32] = "";

	//fgets(szName, 32, stdin); // Ű����κ���(ǥ�� �Է½�Ʈ��) �Է� �޴´�.
	//fputs(szName, stdout); // ����ͷ�(ǥ�� ��½�Ʈ��) ����Ѵ�.







	//// ##4. EOF
	//FILE* fp = nullptr;
	//int ch = 0;

	//errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	//if (0 == err)
	//{
	//	while (true)
	//	{
	//		// ���� ���� �Է� �Լ�. �Է¹��ۿ� �ִ� ���ڸ� ���ٰ� ��ȯ�ϴ� �Լ�.
	//		ch = fgetc(fp);

	//		// ���� ���� �˾Ƴ� �� EOF�� Ȱ��.
	//		// ���� ������ EOF�� ��ϵǾ��ִ�.
	//		// End Of File�� ����. �� ���� ��� -1�̴�.
	//		if (EOF == ch)
	//			break;

	//		//// ���Ͽ��� �ڵ����� null���ڰ� ������� �ʴ´�.
	//		//// ����, ���� ���� �˾Ƴ� �� null���ڸ� �̿����� �ʴ´�.
	//		//if ('\0' == ch)
	//		//	break;

	//		// ���� ���� ��� �Լ�. ǥ�� ��� ��Ʈ���� ���� ����ͷ� ���.
	//		putchar(ch);
	//	}
	//	
	//	fclose(fp);
	//}
	//else
	//	cout << "���� ���� ����" << endl;







	// ##3. ���� �Է� (������ �ҷ�����)
	//FILE* fp = nullptr;
	//char szName[32] = "";

	//errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	//if (0 == err)
	//{
	//	// ���ڿ� ���� �Է� �Լ� (���๮�ڱ��� �о���δ�)
	//	fgets(szName, 32, fp);
	//	fclose(fp);
	//}
	//else
	//	cout << "���� ���� ����" << endl;

	//cout << szName << endl;


	// ##2. ���� ��� (������ ����)
	//// ���
	//// r(read, �Է�):	�о����		�Է��� ��� ������ ������ ����.
	//// w(write, ���):	�����		����� ��� ������ ������ ���� ����.
	//// a(append, ���):	�̾��		����� ��� ������ ������ ���� ����.

	//// t(text mode):	����� �˾ƺ��� ���� ������ ���·� �����.
	//// b(binary mode)	�������·� ǥ���� �� ���� �����͵��� �����. ex) �̹���, ������, ���� ��.
	//

	//FILE* fp = nullptr;
	//errno_t err = fopen_s(&fp, "../Data/test.txt", "w");

	//if (0 == err)
	//{
	//	// ���ڿ� ���� ����Լ�.
	//	fputs("hello", fp);

	//	fclose(fp); // ���� ��Ʈ�� �Ҹ�
	//}
	//else
	//	cout << "���� ���� ����" << endl;



	//##1. ���� �����
	//fopen_s: ���� ���� �Լ�. ���� ����¿� �ʿ��� ����� ��Ʈ���� �����Ѵ�.

	// ���� ������ �����ϸ� 0�� ��ȯ. �����ϸ� 0�� �ƴ� ���� ��ȯ.
	//errno_t fopen_s(FILE** _stream, const char* fileName, const char* mode)
}