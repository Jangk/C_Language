#include <iostream>

using namespace std;

int MyStringLength(const char* pString);
void MyStringCombined(char* pDest, const char* pSource);

void main()
{
	char szName1[32] = "";
	char szName2[32] = "";

	cout << "첫번째 문자열 입력: ";
	cin >> szName1;

	cout << "두번째 문자열 입력: ";
	cin >> szName2;

	MyStringCombined(szName1, szName2);

	cout << "이어 붙인 결과: " << szName1 << endl;
}

int MyStringLength(const char* pString)
{
	int iLength = 0;

	for (; '\0' != pString[iLength]; ++iLength);

	return iLength;
}


void MyStringCombined(char* pDest, const char* pSource)
{
	int iCombineStartIndex = MyStringLength(pDest);

	for (int i = 0; true ; ++i)
	{
		pDest[iCombineStartIndex + i] = pSource[i];

		if ('\0' == pSource[i])
			break;
	}
}