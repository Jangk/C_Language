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
		cout << "1. 입력" << endl;
		cout << "2. 출력" << endl;
		cout << "3. 병합정렬" << endl;
		cin >> iVal;

		switch (iVal)
		{
		case 1:
			system("cls");
			cout << "값 입력 : ";
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


	// ------------------------------------------------ 분할 과정
	// 벡터 크기가 2개보다 작거나 같을때
	if (iVecSize <= 2)
	{	// 벡터 크기가 0또는 1이면 
		if (0 == iVecSize || 1 == iVecSize)
			return vecList;

		// 2개의 값 스왑
		if (*it < *(it+1))
			*it ^= *(it + 1) ^= *it ^= *(it + 1);
	}
	// copy 사용시 왜 xutil 에러가 뜨는지 모르겠음.
	//else if (iHalf & 1)
	//{	// 홀수
	//	//   begin()에서						(iHalf + 1)만큼					left로 복사
	//	copy(vecList->begin()				, vecList->begin() + (iHalf + 1), &left );
	//	copy(vecList->begin() + (iHalf + 2)	, vecList->end() - 1			, &right);
	//}
	//else
	//{	// 짝수
	//	copy(vecList->begin()				, vecList->begin() + iHalf		, &left );
	//	copy(vecList->begin() + (iHalf+1)	, vecList->end() - 1			, &right);
	//}


	// 현재 push_back으로 첫값은 들어오는데 두번째 값부터 안들어옴.
	else if (iHalf & 1)
	{	// 홀수
		for (auto it2 = it				; it2 != (it + iHalf + 1)	; ++it2)
			left.push_back(*it2);
	
		for (auto it2 = it + (iHalf + 2); it2 != vecList->end()		; ++it2)
			right.push_back(*it2);
	}
	else
	{	// 짝수
		for (auto it2 = it				; it2 != it + iHalf			; ++it2)
			left.push_back((*it2));
		system("pause");

		for (auto it2 = it + iHalf		; it2 != vecList->end()		; ++it2)
			right.push_back((*it2));
	}


	// ------------------------------------------------- 합병 과정
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


