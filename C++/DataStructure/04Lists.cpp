#include <iostream>
using namespace std;


struct Node
{
	int iVal;
	Node* front;
	Node* next;
};


class LinkedList
{
private:
	Node* m_Head;
	bool isFirst = true;


public:
	void InsertVal(int data);
	void PrintVal();
	void SearchVal(int data);
	void Release();
public:
	LinkedList();
	~LinkedList();
};


void main()
{	// 양방향 연결리스트.
	LinkedList list;
	int iSelector = 0;
	int iInsert = 0;
	list.InsertVal(1);
	list.InsertVal(2);
	list.InsertVal(3);
	list.InsertVal(10);
	list.InsertVal(7);
	while (true)
	{
		system("cls");
		cout << "1.입력\t2.출력\t3.검색삭제\t4.종료" << endl;
		cin >> iSelector;
		system("cls");
		switch (iSelector)
		{
		case 1:
			system("cls");
			cout << "넣을 값을 입력하세요 " << endl;
			cin >> iInsert;
			list.InsertVal(iInsert);
			break;


		case 2:
			system("cls");
			list.PrintVal();
			break;


		case 3:
			system("cls");
			cout << "지울 값을 입력하세요 " << endl;
			cin >> iInsert;
			list.SearchVal(iInsert);
			break;


		case 4:
			return;
		}
	}
}



void LinkedList::InsertVal(int data)
{
	if (isFirst)
	{
		isFirst		  = false;
		m_Head->iVal  = data;
		m_Head->front = m_Head;
		m_Head->next  = m_Head;
		return;
	}
	auto iter = m_Head;
	Node* newNode = new Node;
	Node* temp;
	newNode->iVal  = data;


	while (true)
	{
		if (iter->next == m_Head)
		{	// 마지막까지 도달하면
			iter->next	   = newNode;
			newNode->front = iter;
			newNode->next  = m_Head;
			break;
		}
		else if(iter->iVal < data && data <= iter->next->iVal)
		{	// 이부분 연결 잘못됨 수정할것
			iter->front->next = newNode;
			newNode->front    = iter;
			newNode->next	  = iter->next;
			break;
		}
		iter = iter->next;
	}
}


void LinkedList::PrintVal()
{
	auto iter = m_Head->next;
	int iCount = 0;


	++iCount;
	cout << iCount << "번째 값은" << m_Head->iVal << " 입니다." << endl;

	while (true)
	{
		if (iter == m_Head)
			break;
		++iCount;
		cout <<iCount << "번째 값은" <<iter->iVal <<" 입니다." <<endl;
		iter = iter->next;
	}
	system("pause");
}


void LinkedList::SearchVal(int data)
{
	Node* temp = nullptr;
	auto iter = m_Head->next;
	int iCount = 0;
	if (m_Head->iVal == data)
	{
		if (m_Head->next == m_Head->front)
		{
			isFirst = true;
			m_Head->iVal = 0;
			cout << ++iCount << "번째값 삭제(헤드)" << endl;
			return;
		}
	}


	while (true)
	{
		++iCount;
		if (iter->iVal == data)
		{
			cout << iCount << "번째값 삭제" << endl;
			iter->front->next = iter->next;
			iter->next->front = iter->front;
			delete(iter);
			break;
		}
		if (iter->next == m_Head)
		{
			cout << "찾지 못함" << endl;
			break;
		}
		iter = iter->next;
	}
	system("pause");
}


void LinkedList::Release()
{
	auto iter = m_Head->next;
	Node* temp;
	while (true)
	{
		if (iter == m_Head)
		{
			delete(m_Head);
			return;
		}
		temp = iter;
		iter = iter->next;
		delete(temp);
	}
}


LinkedList::LinkedList()
{
	m_Head = new Node; 
	m_Head->front = nullptr;
	m_Head->next = nullptr; 
}


LinkedList::~LinkedList()
{
	Release();
}
