#include <iostream>
using namespace std;


#define QUEUE_MAX 5
class MyQueue
{
public:
	void EnQueue(int i);
	bool IsEmpty();
	int DeQueue();
	int Peek();
	void Render(int i);
public:
	MyQueue();
	~MyQueue();
private:
	int m_Queue[QUEUE_MAX];
	int m_FirstIndex;
	int m_LastIndex;

};



void main()
{
	int iInsert = 0;
	MyQueue myQueue;
	while (true)
	{
		system("cls");
		cout << "1. 입력" << endl;
		cout << "2. 값 배출" << endl;
		cout << "3. 출력" << endl;
		cout << "4. 종료" << endl;
		cin >> iInsert;

		switch (iInsert)
		{
		case 1:
			cout << "값입력" << endl;
			cin >> iInsert;
			myQueue.EnQueue(iInsert);
			break;

		case 2:
			myQueue.DeQueue();
			break;

		case 3:
			cout << "값입력" << endl;
			cin >> iInsert;
			myQueue.Render(iInsert);
			system("pause");
			break;

		case 4:
			return;

		default:
			break;
		}
	}
}




// 함수
void MyQueue::EnQueue(int i)
{
	if (IsEmpty())
		m_Queue[m_LastIndex] = i;
	else
	{
		m_LastIndex++;
		m_Queue[m_LastIndex % 100] = i;
	}
}


bool MyQueue::IsEmpty()
{
	if (m_FirstIndex == m_LastIndex && m_Queue[m_FirstIndex] == 0)
		return true;
	return false;
}


int MyQueue::DeQueue()
{
	int temp = m_Queue[m_FirstIndex];
	m_Queue[m_FirstIndex] = 0;
	m_FirstIndex++;
	m_FirstIndex %= 100;
	return temp;
}


int MyQueue::Peek()
{
	return m_Queue[m_FirstIndex];
}


void MyQueue::Render(int i)
{
	cout << "입력 값 : " << i << endl;
	cout << "m_FirstIndex : " << m_FirstIndex << endl;
	cout << "m_LastIndex : " << m_LastIndex << endl;
	cout << "m_Queque[i] : " << m_Queue[i] << endl;
}


MyQueue::MyQueue()
{
	for (int i = 0; i < QUEUE_MAX; ++i)
		m_Queue[i] = 0;
	m_FirstIndex = 0;
	m_LastIndex = 0;
}


MyQueue::~MyQueue()
{
}
