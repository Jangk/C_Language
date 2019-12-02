#include <iostream>
using namespace std;


void ReverseWord(char* word);
int StringLength(char* word);
void AddWord(char* word1, char* word2);

void main()
{
	int iSelect = 0;
	char szWord1[20] = {};
	char szWord2[10] = {};

	cout << "1. �ܾ� ������" << endl;
	cout << "2. �ܾ� ���� ����" << endl;
	cout << "3. �ܾ� 2�� ���̱�" << endl;
	cin >> iSelect;
	cin.ignore(20, '\n');					// �Է¹��� �ִ�ũ�� 20, \n�� ������ �Է� ���� �ʱ�ȭ


	switch (iSelect)
	{
	case 1:
	// ����1 ���ڿ� ������
	// - tomato �Է½� otamot�� ��µǰ�
	// - hello  �Է½� olleh �� ��µǰ�
	cout << "���� �ܾ� �Է�" << endl;
	cin.getline(szWord1, 20);
	ReverseWord(szWord1);
	break;


	case 2:
	// ����2. ���ڿ� ���� ���ϴ� �Լ� ����
	cout << "���� �ܾ� �Է�" << endl;
	cin.getline(szWord1, 20);
	cout << "�Է´ܾ��� ���̴� " << StringLength(szWord1) << endl;
	break;


	case 3:
	// ����3. ���ڿ� �̾���̴� �Լ� ����.
	cout << "���ڿ� 2�� �Է�" << endl;
	cin.getline(szWord1, 20);
	cin.getline(szWord2, 10);
	AddWord(szWord1, szWord2);
	break;
	}
}


void ReverseWord(char * word)
{
	int iStringLength = StringLength(word);
	char temp[20] = {};
	

	// ���ڿ� ������
	for (int i = 0; i < iStringLength / 2; ++i)
		word[i] ^= word[iStringLength - i - 1] ^= word[i] ^= word[iStringLength - i - 1];


	// ���ڿ� ������ �� ���� �� ���
	for (int i = 0; i < iStringLength; i++)
		cout << word[i];
	cout << endl;
}


int StringLength(char * word)
{
	int iCount = 0;
	while (true)
	{	// ���ڿ� �� ã��
		if (word[iCount] == '\0')
			break;
		++iCount;
	}
	return iCount;
}


void AddWord(char * word1, char * word2)
{
	int word1Size = StringLength(word1);
	int word2Size = StringLength(word2);
	int wordMax = word1Size + word2Size;
	for (int i = word1Size; i < wordMax; ++i)
		word1[i] = word2[i - word1Size];

	word1[wordMax] = '\0';
	for (int i = 0; i < wordMax; ++i)
		cout << word1[i];
}
