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
{	// ����� ���Ḯ��Ʈ.
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
		cout << "1.�Է�\t2.���\t3.�˻�����\t4.����" << endl;
		cin >> iSelector;
		system("cls");
		switch (iSelector)
		{
		case 1:
			system("cls");
			cout << "���� ���� �Է��ϼ��� " << endl;
			cin >> iInsert;
			list.InsertVal(iInsert);
			break;


		case 2:
			system("cls");
			list.PrintVal();
			break;


		case 3:
			system("cls");
			cout << "���� ���� �Է��ϼ��� " << endl;
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
		{	// ���������� �����ϸ�
			iter->next	   = newNode;
			newNode->front = iter;
			newNode->next  = m_Head;
			break;
		}
		else if(iter->iVal < data && data <= iter->next->iVal)
		{	// �̺κ� ���� �߸��� �����Ұ�
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
	cout << iCount << "��° ����" << m_Head->iVal << " �Դϴ�." << endl;

	while (true)
	{
		if (iter == m_Head)
			break;
		++iCount;
		cout <<iCount << "��° ����" <<iter->iVal <<" �Դϴ�." <<endl;
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
			cout << ++iCount << "��°�� ����(���)" << endl;
			return;
		}
	}


	while (true)
	{
		++iCount;
		if (iter->iVal == data)
		{
			cout << iCount << "��°�� ����" << endl;
			iter->front->next = iter->next;
			iter->next->front = iter->front;
			delete(iter);
			break;
		}
		if (iter->next == m_Head)
		{
			cout << "ã�� ����" << endl;
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
