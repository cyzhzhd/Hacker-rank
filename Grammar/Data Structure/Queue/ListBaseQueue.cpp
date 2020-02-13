#include "ListBaseQueue.h"
#include <iostream>

ListBaseQueue::ListBaseQueue() :front(nullptr), rear(nullptr)  {}

bool ListBaseQueue::QisEmpty()
{
	if (front == nullptr)
		return true;
	else
		return false;
}

void ListBaseQueue::Enqueue(Data data)
{
	Node* newNode = new Node;
	newNode->data = data;

	if (front == nullptr)
	{
		front = newNode;
		rear = newNode;
	}

	rear->next = newNode;
	rear = newNode;
}

Data ListBaseQueue::Dequeue()
{
	if (!this->QisEmpty())
	{
		Node* rNode = front;
		Data rData = rNode->data;

		front = front->next;
		delete rNode;
		return rData;
	}
	else
	{
		std::cout << "Queue is empty" << std::endl;
		exit(-1);
	}
}

Data ListBaseQueue::QPeek()
{
	if(this->QisEmpty())
	{
		std::cout << "Queue is empty" << std::endl;
		exit(-1);
	}
	return front->data;
}
