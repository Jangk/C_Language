#include <iostream>
using namespace std;

struct Node
{
	int m_iVal = 0;
	Node* m_SLeft  = nullptr;
	Node* m_SRight = nullptr;
};


Node* InsertNode(Node* head, int iVal);
void PrintNode(Node* head);

void main()
{
	Node* CHead = new Node;
	bool bIsFirst = true;
	int iSelect = 0;
	int iInsert = 0;

	while (true)
	{
		system("cls");
		cout << "1. »ðÀÔ" << endl;
		cout << "2. Ãâ·Â" << endl;
		cin >> iSelect;
		switch (iSelect)
		{
		case 1:
			cin >> iInsert;
			if (bIsFirst)
			{
				bIsFirst = false;
				CHead->m_iVal = iInsert;
			}

			else
				InsertNode(CHead, iInsert);
			break;

		case 2:
			PrintNode(CHead);
			system("pause");
			break;
		}
	}
}


Node* InsertNode(Node* head, int iVal)
{
	Node* newNode;
	auto it = head;
	if (!head)
	{
		newNode = new Node;
		newNode->m_iVal = iVal;
		return newNode;
	}


	if (it->m_iVal < iVal)
		head->m_SRight = InsertNode(it->m_SRight, iVal);
	else
		head->m_SLeft = InsertNode(it->m_SLeft, iVal);
	return head;
}


void PrintNode(Node* head)
{
	auto it = head;
	if (it->m_SRight)
		PrintNode(it->m_SRight);
	
	if (it->m_SLeft)
		PrintNode(it->m_SLeft);
	

	cout << it->m_iVal << ", ";
}