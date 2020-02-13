#pragma once
#include <iostream>
typedef int Data;

class Node
{
public:
	Data data;
	Node* next;
	Node() : data(NULL), next(nullptr) {}
};

class ListBaseQueue
{
public:
	ListBaseQueue();
	bool QisEmpty();
	void Enqueue(Data data);
	Data Dequeue();
	Data QPeek();
protected:
	Node* front;
	Node* rear;
};

