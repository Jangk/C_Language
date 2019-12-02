#include <iostream>

using namespace std;

int MyStringLength(char* pString);
void MyReverseString(char* pString);

void main()
{
	//char* pName = "";
	char szName[32] = ""; // == {};

	cout << "�Է��ϼ���: ";

	// cin�� char*�� ������ �� ������ ���ڿ��� �Է¹ްԵȴ�.
	// ��, char*�� ��� �ִ� �ּҰ� ���ڿ� ��� ������ �ּҿ��� �ȵȴ�.
	//cin >> pName;	// Error
	cin >> szName;	// Ok

	cout << "����: " << MyStringLength(szName) << endl;

	MyReverseString(szName);

	cout << "������ ���ڿ�: " << szName << endl;
}

int MyStringLength(char* pString)
{
	int iLength = 0;

	for (; '\0' != pString[iLength]; ++iLength);

	return iLength;
}

void MyReverseString(char* pString)
{
	// Tie		-> ��ġ��ȯ: 1��
	// Lion		-> ��ġ��ȯ: 2��
	// Hello	-> ��ġ��ȯ: 2��
	// Tomato	-> ��ġ��ȯ: 3��

	int iLength = MyStringLength(pString);

	int iEndIndex = iLength - 1;

	for (int i = 0; i < iLength / 2; ++i)
	{
		char ch = pString[i];
		pString[i] = pString[iEndIndex];
		pString[iEndIndex--] = ch;
	}
}