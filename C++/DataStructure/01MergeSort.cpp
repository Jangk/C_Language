#include <iostream>
#include <vector>
using namespace std;


vector<int>* MergeSortFunc(vector<int>* vecList);
void TestPrint(vector<int>* vec);


void main()
{
	int iVal = 0;
	int iInsert = 0;
	vector<int>* vecList = new vector<int>;
	vecList->push_back(4);
	vecList->push_back(3);
	vecList->push_back(2);
	vecList->push_back(1);
	vecList->push_back(30);


	while (true)
	{
		system("cls");
		cout << "1. �Է�" << endl;
		cout << "2. ���" << endl;
		cout << "3. ��������" << endl;
		cin >> iVal;
	
		switch (iVal)
		{
		case 1:
			system("cls");
			cout << "�� �Է� : ";
			cin >> iInsert;
			vecList->push_back(iInsert);
			break;
	
	
		case 2:
			for (auto it = vecList->begin(); it != vecList->end(); ++it)
				cout << (*it) << ", ";
			cout << endl;
			break;
		
		
		case 3:
			MergeSortFunc(vecList);
			break;
		}
	}
}


vector<int>* MergeSortFunc(vector<int>* vecList)
{
	vector<int> left ;
	vector<int> right;
	auto it	= vecList->begin();
	int iVecSize	= vecList->size();
	int iHalf		= iVecSize / 2;
	left.reserve(iHalf + 1);
	right.reserve(iHalf);


	// ------------------------------------------------ ���� ����
	// �ּҴ��� ���� ������ ������.
	if (iVecSize <= 2)
	{	 
		if (0 == iVecSize || 1 == iVecSize)
			return vecList;

		if (*it > *(it + 1))
		{
			*it ^= *(it + 1) ^= *it ^= *(it + 1);
			return vecList;
		}
		return vecList;
	}
	else if (iVecSize & 1)
	{	// Ȧ��
		for (auto it2 = it				; it2 != (it + iHalf + 1)	; ++it2)
			left.push_back(*it2);

		for (auto it2 = it + (iHalf + 1); it2 != vecList->end()		; ++it2)
			right.push_back(*it2);
	}
	else
	{	// ¦��
		for (auto it2 = it				; it2 != it + iHalf			; ++it2)
			left.push_back((*it2));

		for (auto it2 = it + iHalf		; it2 != vecList->end()		; ++it2)
			right.push_back((*it2));
	}
	left  = *(MergeSortFunc(&left ));
	right = *(MergeSortFunc(&right));


	// ------------------------------------------------- �պ� ����
	int iLeftCount = 0;
	int iRightCount = 0;
	
	
	vecList->clear();
	while (left.size() != iLeftCount)
	{
		if (left[iLeftCount] < right[iRightCount])
		{
			vecList->push_back(left[iLeftCount]);
			++iLeftCount;
			continue;
		}
		else
		{
			vecList->push_back(right[iRightCount]);
			++iRightCount;
		}
		if (iRightCount >= right.size())
			break;
	}

	
	if (left.size() != iLeftCount)
	{
		for (int i = iLeftCount; i < left.size(); ++i)
			vecList->push_back(left[i]);
	}
	else if (right.size() != iRightCount)
	{	// ���� ���� �� �ȳ����� else if�� if�� �ٲ� �� ( ���� �� ���Ϸ��� else if ��)
		for (int i = iRightCount; i < right.size(); ++i)
			vecList->push_back(right[i]);
	}
	return vecList;
}


void TestPrint(vector<int>* vec)
{
	for (auto it = vec->begin(); it != vec->end(); ++it)
		cout << *it << " ";
	cout << endl;
}