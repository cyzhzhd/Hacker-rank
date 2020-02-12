#pragma once

typedef int Data;

class Node
{
public:
	Data data;
	Node* next;
};

class ListBaseStack
{
public:
	ListBaseStack();
	void Push(Data data);
	Data Pop();
	Data Peek();
	int IsEmpty();
protected:
	Node* head;
};

