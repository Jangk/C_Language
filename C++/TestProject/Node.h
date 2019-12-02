#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Node
{
private:
	static Node* instance;
	vector<int> *vecTree;


public:
	static Node* GetInstance();
	void InsertNode(int val);
	Node();
	~Node();
};

