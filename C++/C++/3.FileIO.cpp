#include <iostream>
#include <fstream>						// file input output�� �ϱ� ���� ����ϴ� ���
using namespace std;

void main()
{
	// ���� ��Ʈ��
	ifstream fileInput;					// �б�����
	fileInput.open("file.txt");

	//ofstream fileOutput;				// �������� ( ���� �̸��� ������ ������ ������ ����)
	//fileOutput.open("file.txt");

	//fstream fileInOutput;				// �Ѵ� ����
	//fileInOutput.open("file.txt");	


	// ���� ��Ʈ�� ��� ( ios_base == ��� ��尡 �浹�� �ȳ��°� �ƴ�)
	// fileInput.open("input.txt", ios_base::in | ios_base::binary);// ��� ����
	// ios_base::in													// �б� ����
	// ios_base::in | ios_base::binary								// ���� ���ϸ��� ����
	// ios_base::out												// ���� ����
	// ios_base::out | ios_base::trunc								// ���� ���� | ���� �������� �ʱ�ȭ��
	// ios_base::out | ios_base::app								// ���� ���� | ���� ���� �����͸� �����δ�. �����͸� �߰��ϴ� �͸� �����ϴ�.
	// ios_base::int | ios_base::out								// ���� ���� | �б� ����
	// ios_base::int | ios_base::out	| ios_base::trunc			// ���� ���� | �б� ���� | �аų� ���� �ʱ�ȭ��

	

	// ��Ʈ�� �Լ�	--- input, output, inoutput �� ����
	//fileOutput.close();				// ������ ����
	//fileOutput.is_open();				// ������ �����ִ��� Ȯ��


	// �ΰ� 34������ ���� ����.
	// ���Ͽ��� �ѱ��ھ� �ҷ����� ( �����̽��ٸ� �߽߰� �ǳʶ�)
	char ch = '\0';
	while (!fileInput.eof())			// ������ end of file�� �����ϸ� ����
	{
		fileInput >> ch;				// ���Ͽ� �ִ� ���� �ѱ��ڸ� ch�� ����
		if (fileInput.fail())			// �б� ���н�
		{
			fileInput.clear();
			fileInput.ignore(512, ' ');	// �ִ� �б� �� , ' '�� ������ ignore ����
		}
		else
			cout << ch << endl;
	}
	
	

	fileInput.close();
	// get(), getline(), >> ��� �����ϰ� ��밡��
}