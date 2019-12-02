#include <iostream>
#include <ctime>

using namespace std;

void main()
{
	srand(unsigned(time(nullptr)));

	int iArray[25] = {};
	int iBingoCount = 0, iHorizonCount = 0, iVerticalCount = 0, iDiagonalCount = 0;
	int iSelect = 0;

	for (int i = 0; i < 25; ++i)
		iArray[i] = i + 1;

	// ����
	int iSrcIndex = 0, iDestIndex = 0, iTemp = 0;

	for (int i = 0; i < 500; ++i)
	{
		iSrcIndex = rand() % 25;
		iDestIndex = rand() % 25;

		iTemp = iArray[iSrcIndex];
		iArray[iSrcIndex] = iArray[iDestIndex];
		iArray[iDestIndex] = iTemp;
	}

	while (true)
	{
		system("cls");

		// ������ ���
		for (int i = 0; i < 5; ++i) // ��
		{
			for (int j = 0; j < 5; ++j) // ��
			{
				cout << iArray[i * 5 + j] << '\t';
			}

			cout << endl;
		}

		cout << "����: ";
		cin >> iSelect;

		for (int i = 0; i < 25; ++i)
		{
			if (iArray[i] == iSelect)
			{
				iArray[i] = 0;
				break;
			}
		}

		// ���� ���� ����
		iHorizonCount = 0;

		for (int i = 0; i < 5; ++i) // ��
		{
			int iCount = 0;

			for (int j = 0; j < 5; ++j) // ��
			{
				if (0 == iArray[i * 5 + j])
					++iCount;
			}

			iHorizonCount += iCount / 5;
		}

		// ���� ���� ����
		iVerticalCount = 0;		

		for (int i = 0; i < 5; ++i) // ��
		{
			int iCount = 0;

			for (int j = 0; j < 5; ++j) // ��
			{
				// �� * ���ǳʺ� + ��
				if (0 == iArray[j * 5 + i])
					++iCount;
			}

			iVerticalCount += iCount / 5;
		}


		// �밢�� ���� ����
		iDiagonalCount = 0;

		int iCount1 = 0;
		int iCount2 = 0;

		for (int i = 0; i < 5; ++i) // ��
		{
			for (int j = 0; j < 5; ++j) // ��
			{
				if ((0 == i - j) && (0 == iArray[i * 5 + j]))
					++iCount1;

				if ((4 == i + j) && (0 == iArray[i * 5 + j]))
					++iCount2;
			}					
		}

		iDiagonalCount += iCount1 / 5;
		iDiagonalCount += iCount2 / 5;


		iBingoCount = iHorizonCount + iVerticalCount + iDiagonalCount;

		cout << "���� ����: " << iBingoCount << endl;
		system("pause");

		if (5 <= iBingoCount)
		{
			cout << "���� �ϼ��߽��ϴ�." << endl;
			break;
		}
	}
}