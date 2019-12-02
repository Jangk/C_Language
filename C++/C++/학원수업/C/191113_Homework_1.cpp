#include <iostream>

using namespace std;

int MyStringLength(char* pString);
void MyReverseString(char* pString);

void main()
{
	//char* pName = "";
	char szName[32] = ""; // == {};

	cout << "입력하세요: ";

	// cin과 char*가 만나면 그 공간에 문자열을 입력받게된다.
	// 단, char*가 들고 있는 주소가 문자열 상수 공간의 주소여선 안된다.
	//cin >> pName;	// Error
	cin >> szName;	// Ok

	cout << "길이: " << MyStringLength(szName) << endl;

	MyReverseString(szName);

	cout << "뒤집은 문자열: " << szName << endl;
}

int MyStringLength(char* pString)
{
	int iLength = 0;

	for (; '\0' != pString[iLength]; ++iLength);

	return iLength;
}

void MyReverseString(char* pString)
{
	// Tie		-> 위치교환: 1번
	// Lion		-> 위치교환: 2번
	// Hello	-> 위치교환: 2번
	// Tomato	-> 위치교환: 3번

	int iLength = MyStringLength(pString);

	int iEndIndex = iLength - 1;

	for (int i = 0; i < iLength / 2; ++i)
	{
		char ch = pString[i];
		pString[i] = pString[iEndIndex];
		pString[iEndIndex--] = ch;
	}
}