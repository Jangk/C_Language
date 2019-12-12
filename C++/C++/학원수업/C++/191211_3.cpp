#include <iostream>
#include <vector>

// STL���� �����ϴ� �˰��� ���
#include <algorithm>

// STL���� �����ϴ� �Լ���ü ���
#include <functional>

using namespace std;

// ���� ������
bool Greater(int a, int b)
{
	// ���� �������� �� ����.
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
	// ���� ������
	bool operator()(int* element)
	{
		if (*element == m_iFind)
			return true;

		return false;
	}

private:
	int m_iFind;
};

// ���� ������
bool IsEven(int n)
{
	if (0 == n % 2)
		return true;

	return false;
}

// ���� ������
bool IsOdd(int n)
{
	if (0 != n % 2)
		return true;

	return false;
}

void main()
{
	//// ##5. count_if �˰���
	//vector<int> vec;

	//vec.push_back(1);
	//vec.push_back(2);
	//vec.push_back(3);
	//vec.push_back(4);
	//vec.push_back(5);

	//int iCount = count_if(vec.begin(), vec.end(), IsEven);
	//cout << "¦���� ����:" << iCount << endl;

	//iCount = count_if(vec.begin(), vec.end(), IsOdd);
	//cout << "Ȧ���� ����:" << iCount << endl;


	////// ##4. Ž�� �˰���: find_if
	//vector<int*> vec;

	//vec.push_back(new int(10));
	//vec.push_back(new int(20));
	//vec.push_back(new int(30));
	//vec.push_back(new int(40));
	//vec.push_back(new int(50));

	//CFindNum functor(30);
	//vector<int*>::iterator iter = find_if(vec.begin(), vec.end(), functor);

	//if (vec.end() == iter)
	//	cout << "����" << endl;
	//else
	//	cout << "�ִ�" << endl;

	//for_each(vec.begin(), vec.end(), SafeDelete);


	//// ##3. Ž�� �˰���: find
	//vector<int> vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);
	//vec.push_back(40);
	//vec.push_back(50);

	//// find�� ã�� ������ ��ġ�� ��ȯ.
	//vector<int>::iterator iter = find(vec.begin(), vec.end(), 30);

	//// ã�� ���ϸ� find�Լ��� end�� ��ȯ�Ѵ�.
	//if (vec.end() == iter)
	//	cout << "����" << endl;
	//else
	//{
	//	cout << "�ִ�" << endl;
	//	cout << *iter << endl;
	//}






	//// ##2. for_each �Լ�
	//vector<int*> vec;

	//vec.push_back(new int(10));
	//vec.push_back(new int(20));
	//vec.push_back(new int(30));
	//vec.push_back(new int(40));
	//vec.push_back(new int(50));

	//// �����̳ʸ� ��ȸ�ϸ鼭 �ݺ����� ������ ������ �� �ִ�.
	//for_each(vec.begin(), vec.end(), SafeDelete);
	//vec.clear();





	//vector<int> vec;

	//vec.push_back(10);
	//vec.push_back(20);
	//vec.push_back(30);
	//vec.push_back(40);
	//vec.push_back(50);

	//// �����̳ʸ� ��ȸ�ϸ鼭 �ݺ����� ������ ������ �� �ִ�.
	//for_each(vec.begin(), vec.end(), Print);


	//// ##1. ���� �˰���: sort
	//vector<int> vec;

	//vec.push_back(5);
	//vec.push_back(1);
	//vec.push_back(4);
	//vec.push_back(3);
	//vec.push_back(2);

	//// <algorithm>���� �����ϴ� ���� �˰���.
	////sort(vec.begin(), vec.end()); // �⺻ ��������
	////sort(vec.begin(), vec.end(), Greater); // ��������

	//// STL���� �������ִ� �Լ���ü.
	//less<int>	functor1;
	//greater<int> functor2;

	//sort(vec.begin(), vec.end(), functor2);

	//for (size_t i = 0; i < vec.size(); ++i)
	//	cout << vec[i] << endl;
}