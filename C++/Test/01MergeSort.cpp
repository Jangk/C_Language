#include <iostream>
#include <vector>
using namespace std;


vector<int>* MergeSortFunc(vector<int>* vecList);


void main()
{
	int iVal = 0;
	int iInsert = 0;
	vector<int>* vecList = new vector<int>;
	vector<int>* test = new vector<int>;
	vecList->push_back(10);
	vecList->push_back(15);
	vecList->push_back(9);
	vecList->push_back(25);


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
	int temp		= 0;

	left.reserve(iHalf + 1);
	right.reserve(iHalf);


	// ------------------------------------------------ ���� ����
	// ���� ũ�Ⱑ 2������ �۰ų� ������
	if (iVecSize <= 2)
	{	// ���� ũ�Ⱑ 0�Ǵ� 1�̸� 
		if (0 == iVecSize || 1 == iVecSize)
			return vecList;

		// 2���� �� ����
		if (*it < *(it+1))
			*it ^= *(it + 1) ^= *it ^= *(it + 1);
	}
	// copy ���� �� xutil ������ �ߴ��� �𸣰���.
	//else if (iHalf & 1)
	//{	// Ȧ��
	//	//   begin()����						(iHalf + 1)��ŭ					left�� ����
	//	copy(vecList->begin()				, vecList->begin() + (iHalf + 1), &left );
	//	copy(vecList->begin() + (iHalf + 2)	, vecList->end() - 1			, &right);
	//}
	//else
	//{	// ¦��
	//	copy(vecList->begin()				, vecList->begin() + iHalf		, &left );
	//	copy(vecList->begin() + (iHalf+1)	, vecList->end() - 1			, &right);
	//}


	// ���� push_back���� ù���� �����µ� �ι�° ������ �ȵ���.
	else if (iHalf & 1)
	{	// Ȧ��
		for (auto it2 = it				; it2 != (it + iHalf + 1)	; ++it2)
			left.push_back(*it2);
	
		for (auto it2 = it + (iHalf + 2); it2 != vecList->end()		; ++it2)
			right.push_back(*it2);
	}
	else
	{	// ¦��
		for (auto it2 = it				; it2 != it + iHalf			; ++it2)
			left.push_back((*it2));
		system("pause");

		for (auto it2 = it + iHalf		; it2 != vecList->end()		; ++it2)
			right.push_back((*it2));
	}


	// ------------------------------------------------- �պ� ����
	left  = *(MergeSortFunc(&left ));
	right = *(MergeSortFunc(&right));
	vecList->clear();
	for (auto iter = left.begin(); iter != left.begin(); ++iter)
	{
		for (auto iter2 = right.begin(); iter2 != right.begin(); ++iter2)
		{
			if ((*iter) < (*iter2))
			{
				vecList->push_back((*iter));
				break;
			}
			else
				vecList->push_back((*iter2));
		}
	}
	return vecList;
}


