#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


class Calculator
{
private:
	vector<int> m_iVec;

	int IsOper(char ch);
	int PowerN(int iNum);
	int ChangeCharForInt(char ch);
	char ChangeIntForChar(int i);
	bool CheckFirst(char ch1, char ch2);

public:
	void Division(char ptr[]);
	void Calculation();
};


void main()
{
	Calculator cal;
	char szInput[64];
	cout << "수식 입력(수식마지막에는 =를 꼭입력할것) : " << endl;
	fgets(szInput, 64, stdin);
	cal.Division(szInput);
	cal.Calculation();
}


int Calculator::IsOper(char ch)
{
	switch (ch)
	{
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	case '(':
		return 3;
	case ')':
		return 4;
	case '=':
		return 5;
	}
	return 0;
}


int Calculator::PowerN(int iNum)
{
	int iTotal = 1;
	for (int i = 0; i < iNum - 1; ++i)
		iTotal *= 10;
	return iTotal;
}


int Calculator::ChangeCharForInt(char ch)
{
	return static_cast<int>(ch - 48);
}


char Calculator::ChangeIntForChar(int i)
{
	switch (static_cast<char>(i))
	{
	case '+':
		return '+';
	case '-':
		return '-';
	case '*':
		return '*';
	case '/':
		return '/';
	case '(':
		return '(';
	case ')':
		return ')';
	}
	return 0;
}


bool Calculator::CheckFirst(char ch1, char ch2)
{
	return IsOper(ch1) < IsOper(ch2);
}


void Calculator::Division(char ptr[])
{
	int iMax = strlen(ptr);
	int iTotal = 0;
	vector<char> iOper;
	vector<int> iTemp;
	for (int i = 0; i < iMax; ++i)
	{
		if ('0' <= ptr[i] && ptr[i] <= '9')
			iTemp.push_back(ChangeCharForInt(ptr[i]));
		else if (IsOper(ptr[i]))
		{	// 숫자 임시로 담아둔값이 차있으면.
			if (!iTemp.empty())
			{
				for (int j = 0; j < iTemp.size(); ++j)
					iTotal += iTemp[j] * PowerN(iTemp.size() - j);
				//수정
				m_iVec.push_back(iTotal);
				iTemp.clear();
				iTotal = 0;
			}

			// 연산자
			if ('=' == ptr[i])
				break;

			if (' ' == ptr[i])
				continue;

			if (iOper.empty())
				iOper.push_back(ptr[i]);
			else
			{
				if (ptr[i] == ')')
				{
					int iTarget = 0;
					for (int j = iOper.size() - 1; j >= 0; --j)
					{
						if (iOper[j] == '(')
							iTarget = j;
					}

					for (int j = iOper.size() - 1; j > iTarget; --j)
					{
						m_iVec.push_back(iOper[j]);
						iOper.pop_back();
					}
					iOper.pop_back();


				}
				// 전 기호가 괄호면 다음은 무조건 푸쉬
				else if ('(' == iOper[iOper.size() - 1])
					iOper.push_back(ptr[i]);

				// 연산자 우선순위 계산.
				else if (IsOper(iOper[iOper.size() - 1]) >= IsOper(ptr[i]))
				{
					m_iVec.push_back(iOper[iOper.size() - 1]);
					iOper.pop_back();
					iOper.push_back(ptr[i]);
				}
				else
					iOper.push_back(ptr[i]);
			}
		}
	}


	// 남은 연산자 출력
	for (int i = iOper.size() - 1; i >= 0; --i)
		m_iVec.push_back(iOper[i]);
}


void Calculator::Calculation()
{
	for (int i = 0; i < m_iVec.size(); ++i)
	{
		if (ChangeIntForChar(m_iVec[i]))
			cout << ChangeIntForChar(m_iVec[i]);
		else
			cout << m_iVec[i];
	}
	// 연산
	int operand1 = 0, operand2 = 0, iCount = 2;


	operand1 = m_iVec[iCount - 2];
	operand2 = m_iVec[iCount - 1];
	while (iCount != (m_iVec.size() - 1))
	{
		if (IsOper(m_iVec[iCount]))
		{
			switch (ChangeIntForChar(m_iVec[iCount]))
			{
			case '+':
				operand1 += operand2;
				break;

			case '-':
				operand1 -= operand2;
				break;

			case '*':
				operand1 *= operand2;
				break;

			case '/':
				operand1 /= operand2;
				break;
			}
		}
		else
			operand2 = m_iVec[iCount];
		++iCount;
	}
	cout << " = "<< operand1  << endl;
}


