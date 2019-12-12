#include <iostream>
#include <vector>

// STL에서 제공하는 알고리즘 헤더
#include <algorithm>

// STL에서 제공하는 함수객체 헤더
#include <functional>

using namespace std;

// 이항 조건자
bool Greater(int a, int b)
{
	// 정렬 방향으로 비교 연산.
	return a > b;
}

void Print(int n)
{
	cout << n << endl;
}

void SafeDelete(int* p)
{
	if(p)
		delete p;
}

class CFindNum
{
public:
	CFindNum(int n)
		: m_iFind(n) {}

public:
	// 단항 조건자
	bool operator()(int* element)
	{
		if (*element == m_iFind)
			return true;

		return false;
	}

private:
	int m_iFind;
};

// 단항 조건자
bool IsEven(int n)
{
	if (0 == n % 2)
		return true;

	return false;
}

// 단항 조건자
bool IsOdd(int n)
{
	if (0 != n % 2)
		return true;

	return false;
}

void main()
{
	//// ##5. count_if 알고리즘
	//vector<int> vec;

	//vec.push_back(1);
	//vec.push_back(2);
	//vec.push_back(3);
	//vec.push_back(4);
	//vec.push_back(5);

	//int iCount = count_if(vec.begin(), vec.end(), IsEven);
	//cout << "짝수의 개수:" << iCount << endl;

	//iCount = count_if(vec.begin(), vec.end(), IsOdd);
	//cout << "홀수의 개수:" << iCount << endl;


	////// ##4. 탐색 알고리즘: find_if
	//vector<int*> vec;

	//vec.push_back(new int(10));
	//vec.push_back(new int(20));
	//vec.push_back(new int(30));
	//vec.push_back(new int(40));
	//vec.push_back(new int(50));

	//CFindNum functor(30);
	//vector<int*>::iterator iter = find_if(vec.begin(), vec.end(), functor);

	//if (vec.end() == iter)
	//	cout << "없다" << endl;
	//else
	//	cout << "있다" << endl;

	//for_each(vec.begin(), vec.end(), SafeDelete);


	//// ##3. 탐색 알고리즘: find
	//vector<int> vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);
	//vec.push_back(40);
	//vec.push_back(50);

	//// find는 찾은 원소의 위치를 반환.
	//vector<int>::iterator iter = find(vec.begin(), vec.end(), 30);

	//// 찾지 못하면 find함수는 end를 반환한다.
	//if (vec.end() == iter)
	//	cout << "없다" << endl;
	//else
	//{
	//	cout << "있다" << endl;
	//	cout << *iter << endl;
	//}






	//// ##2. for_each 함수
	//vector<int*> vec;

	//vec.push_back(new int(10));
	//vec.push_back(new int(20));
	//vec.push_back(new int(30));
	//vec.push_back(new int(40));
	//vec.push_back(new int(50));

	//// 컨테이너를 순회하면서 반복적인 행위를 구현할 수 있다.
	//for_each(vec.begin(), vec.end(), SafeDelete);
	//vec.clear();





	//vector<int> vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);
	//vec.push_back(40);
	//vec.push_back(50);

	//// 컨테이너를 순회하면서 반복적인 행위를 구현할 수 있다.
	//for_each(vec.begin(), vec.end(), Print);


	//// ##1. 정렬 알고리즘: sort
	//vector<int> vec;

	//vec.push_back(5);
	//vec.push_back(1);
	//vec.push_back(4);
	//vec.push_back(3);
	//vec.push_back(2);

	//// <algorithm>에서 제공하는 정렬 알고리즘.
	////sort(vec.begin(), vec.end()); // 기본 오름차순
	////sort(vec.begin(), vec.end(), Greater); // 내림차순

	//// STL에서 제공해주는 함수객체.
	//less<int>	functor1;
	//greater<int> functor2;

	//sort(vec.begin(), vec.end(), functor2);

	//for (size_t i = 0; i < vec.size(); ++i)
	//	cout << vec[i] << endl;
}