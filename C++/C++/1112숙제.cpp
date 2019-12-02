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

	cout << "1. 단어 뒤집기" << endl;
	cout << "2. 단어 길이 측정" << endl;
	cout << "3. 단어 2개 붙이기" << endl;
	cin >> iSelect;
	cin.ignore(20, '\n');					// 입력받을 최대크기 20, \n에 닿으면 입력 버퍼 초기화


	switch (iSelect)
	{
	case 1:
	// 과제1 문자열 뒤집기
	// - tomato 입력시 otamot가 출력되게
	// - hello  입력시 olleh 가 출력되게
	cout << "영어 단어 입력" << endl;
	cin.getline(szWord1, 20);
	ReverseWord(szWord1);
	break;


	case 2:
	// 과제2. 문자열 길이 구하는 함수 구현
	cout << "영어 단어 입력" << endl;
	cin.getline(szWord1, 20);
	cout << "입력단어의 길이는 " << StringLength(szWord1) << endl;
	break;


	case 3:
	// 과제3. 문자열 이어붙이는 함수 구현.
	cout << "문자열 2개 입력" << endl;
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
	

	// 문자열 뒤집기
	for (int i = 0; i < iStringLength / 2; ++i)
		word[i] ^= word[iStringLength - i - 1] ^= word[i] ^= word[iStringLength - i - 1];


	// 문자열 뒤집은 값 대입 및 출력
	for (int i = 0; i < iStringLength; i++)
		cout << word[i];
	cout << endl;
}


int StringLength(char * word)
{
	int iCount = 0;
	while (true)
	{	// 문자열 끝 찾기
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
