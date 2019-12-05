#include <iostream>
#include <vector>
using namespace std;

class MyStack
{
private :
	vector<int> A;
	vector<int> B;
	vector<int> C;
	int m_iMax;


	void Init(int iVal)
	{
		m_iMax = iVal;
		A.clear();
		B.clear();
		C.clear();
		for (int i = m_iMax; i !=0; --i)
			A.push_back(i);
	}
	void PushBack(char from, char to)
	{
		int iTemp = 0;
		switch (from)
		{
		case 'A':
			iTemp = A[A.size() - 1];
			A.pop_back();
			break;

		case 'B':
			iTemp = B[B.size() - 1];
			B.pop_back();
			break;

		case 'C':
			iTemp = C[C.size() - 1];
			C.pop_back();
			break;
		}

		switch (to)
		{
		case 'A':
			A.push_back(iTemp);
			break;

		case 'B':
			B.push_back(iTemp);
			break;

		case 'C':
			C.push_back(iTemp);
			break;
		}
		Render();
	}
	void Render()
	{
		system("cls");
		for (int i = m_iMax -1 ; i >= 0; --i)
		{
			if (A.size() > i)
				cout << A[i];
			cout << "\t";
			if (B.size() > i)
				cout << B[i];
			cout << "\t";
			if (C.size() > i)
				cout << C[i];
			cout << "\t" << endl;
		}
		cout << "----------------------"<<endl;
		system("pause");
	}
	void RecursiveHanoiTowel(int iVal, char A, char B, char C)
	{
		if (1 == iVal)
		{
			PushBack(A, C);
			return;
		}
		RecursiveHanoiTowel(iVal - 1, A, C, B);
		PushBack(A, C);
		RecursiveHanoiTowel(iVal - 1, B, A, C);
	}
public:
	void HanoiTowel(int iVal)
	{
		Init(iVal);
		Render();
		RecursiveHanoiTowel(iVal, 'A', 'B', 'C');
	}
};


void main()
{	// 원반을 A에서 B를 통해 C로 옴김
	// 한번에 하나만 옴길수 있고  큰 원반이 작은 원반 위로 오면안됨.
	MyStack myStack;
	myStack.HanoiTowel(3);
}
