#include "Node.h"


Node* Node::instance = nullptr;


void Node::InsertNode(int val)
{
	
}


Node * Node::GetInstance()
{
	if (instance == nullptr)
		instance = new Node;
	return instance;
}


Node::Node()
{
	vecTree = new vector<int>;
}


Node::~Node()
{
}
