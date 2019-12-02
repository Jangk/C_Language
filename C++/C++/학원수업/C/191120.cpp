#include <iostream>

using namespace std;

void main()
{
	// ##4. feof �Լ�.
	// ���� �������� ��ġ�� EOF�� �Ѿ�� true�� ��ȯ.

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
		cout << "���� ���� ����" << endl;




	// ##3. ftell �Լ�.
	// ���� ���� �������� ��ġ�� �˷��ش�.
	// ù��° ��ġ�� �׻� 0�̰� �������� ��ġ�� 1����Ʈ ������ ���ȴ�.

	/*FILE* fp = nullptr;

	errno_t err = fopen_s(&fp, "../Data/test.txt", "r");

	if (0 == err)
	{
		fseek(fp, 2, SEEK_SET);
		cout << "���� ���� �������� ��ġ: " << ftell(fp) << endl;

		int ch = fgetc(fp);
		cout << "���� ���� �������� ��ġ: " << ftell(fp) << endl;

		fseek(fp, -2, SEEK_END);
		cout << "���� ���� �������� ��ġ: " << ftell(fp) << endl;

		ch = fgetc(fp);
		cout << "���� ���� �������� ��ġ: " << ftell(fp) << endl;


		fclose(fp);
	}
	else
		cout << "���� ���� ����" << endl;*/


	// ##2. fseek �Լ�.
	// ���� �������� ��ġ�� �����ϴ� �Լ�.

	// ���������ڸ� ó�� ��ġ���� offset��ŭ �̵�.
	//fseek(stream, offset, SEEK_SET);

	// ���� ���� �������� ��ġ���� offset��ŭ �̵�.
	//fseek(stream, offset, SEEK_CUR);

	// ���������ڸ� EOF ��ġ���� offset��ŭ �̵�.
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

	//	// ���� �����ڰ� fseek�Լ��� ���ؼ� ���� �������� �̵��Ѵ��ص�
	//	// ���� ��ġ�� ������ �׻� "���� ����"�̴�.
	//	ch = fgetc(fp);
	//	fputc(ch, stdout);

	//	fclose(fp);
	//}
	//else
	//	cout << "���� ���� ����" << endl;







	// ##1. ���� ������ ���� �Լ�
	// fseek, ftell, feof �Լ� ��..
}