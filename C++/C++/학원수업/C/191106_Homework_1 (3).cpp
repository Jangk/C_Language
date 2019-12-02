#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	// 로또
	srand(unsigned(time(nullptr)));

	int iArray[45] = {};
	int iLotto[6] = {};

	for (int i = 0; i < 45; ++i)
		iArray[i] = i + 1;

	// 숫자를 섞는다
	int iSourceIndex = 0;
	int iDestIndex = 0;
	int iTemp = 0;

	for (int iCount = 0; iCount < 6; ++iCount)
	{
		for (int i = 0; i < 5000; ++i)
		{
			iSourceIndex = rand() % 45;
			iDestIndex = rand() % 45;

			iTemp = iArray[iSourceIndex];
			iArray[iSourceIndex] = iArray[iDestIndex];
			iArray[iDestIndex] = iTemp;
		}

		for (int i = 0; i < 6; ++i)
			iLotto[i] = iArray[i];


		// 버블 정렬
		for (int i = 0; i < 6; ++i)
		{
			for (int j = 0; j < 5; ++j)
			{
				// 오름차순 정렬
				if (iLotto[j] > iLotto[j + 1])
				{
					int iTemp = iLotto[j];
					iLotto[j] = iLotto[j + 1];
					iLotto[j + 1] = iTemp;
				}
			}
		}

		for (int i = 0; i < 6; ++i)
			cout << iLotto[i] << ' ';

		cout << endl;
	}	
}